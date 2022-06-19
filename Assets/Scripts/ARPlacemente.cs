using System.Collections;
using System.Collections.Generic;
using System.Threading.Tasks;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;

public class ARPlacemente : MonoBehaviour
{
    private enum PlacementType
    {
        Horizontal,
        Vertical
    }

    public GameObject UICanvas;
    public GameObject CurrentCanvas;
    public GameObject placmentIndicator;

    private GameObject spawnedObject;
    private Pose PlacementPose;
    private ARRaycastManager aRRaycastManager;
    private ARPlaneManager planeManager;
    private bool placementPoseIsValid = false;
    private ARPlane plane;
    private PlaneAlignment applyAlignment;
    private GameObject[] hidableObjects;
    private Text modelName;

    public GameObject block;
    public ModelsContainer horizontal;
    public ModelsContainer wall;
    public ModelsContainer ceiling;

    private ModelsContainer currentModels;
    private static int modelIndex = 0;
    public GameObject catalog;
    public GameObject parent;
    public InputField url;
    public GameObject chooseCanvas;
    public WebClient client;
    public Text text;
    //private PlaneAlignment planE;

    // Start is called before the first frame update
    void Start()
    {
        modelName = GameObject.FindGameObjectWithTag("NameModel").GetComponent<Text>();
        hidableObjects = GameObject.FindGameObjectsWithTag("Hidable");
        ShowTagedObjects(false);
        planeManager = FindObjectOfType<ARPlaneManager>();
        aRRaycastManager = FindObjectOfType<ARRaycastManager>();
        var menu = GameObject.FindGameObjectsWithTag("Menu"); // Находит все доступные Canvas Menu
        foreach (var obj in menu)
            obj.SetActive(false); // Выключает отображение UI, чтобы не происходило наложение
        CurrentCanvas.gameObject.SetActive(true); // Включает главное меню
        UICanvas.gameObject.SetActive(false);
    }

    // Update is called once per frame
    void Update()
    {
            if( spawnedObject == null
            && placementPoseIsValid 
            && Input.touchCount > 0 
            && Input.GetTouch(0).phase == TouchPhase.Began
            && CurrentCanvas.Equals(UICanvas)){ // При нажатии ставит объект (если допустимо)
                ARPlaceObject();
                UICanvas.gameObject.SetActive(true); 
            }
        
            if (Camera.main == null) 
                throw new System.Exception();
            UpdatePlacementPose();
            UpdatePlacementIndicator();
            UpdateModelName();
        
    }

    // Обновляет положение индикатора (красный круг) на камере
    // Если проверка позиции проходит, то ставит индикатор
    private void UpdatePlacementIndicator(){
        if(placementPoseIsValid){
            placmentIndicator.SetActive(true);
            placmentIndicator.transform.SetPositionAndRotation(PlacementPose.position, PlacementPose.rotation);
        }
        else {
            placmentIndicator.SetActive(false);
        }
    }

    // Проверяет допустимость установки индикатора
    // Строит плоскости
    private void UpdatePlacementPose(){
        var screenCenter = Camera.main.ViewportToScreenPoint(new Vector3(0.5f, 0.5f));
        var hits = new List<ARRaycastHit>();
        aRRaycastManager.Raycast(screenCenter, hits, TrackableType.Planes);

        //planE = planeManager.GetPlane(hits[0].trackableId).alignment;
        if (spawnedObject == null && hits.Count > 0 && planeManager.GetPlane(hits[0].trackableId).alignment == applyAlignment)
        {
            PlacementPose = hits[0].pose;
            placementPoseIsValid = true;
        }
        else
            placementPoseIsValid = false;

    }

    // Устанавливает 3D объект на место индикатора
    private void ARPlaceObject(){
        ShowTagedObjects(true);
        var clearUp = GameObject.FindGameObjectWithTag("ARMultiModel");
        Destroy(clearUp);
        if (applyAlignment == PlaneAlignment.HorizontalDown)
        {
            spawnedObject = Instantiate(currentModels[modelIndex].model, PlacementPose.position, currentModels[modelIndex].model.transform.rotation);
            spawnedObject.transform.localEulerAngles = new Vector3(spawnedObject.transform.rotation.x,
                                                                   spawnedObject.transform.rotation.y,
                                                                   spawnedObject.transform.rotation.z);
        }
       
        else
            spawnedObject = Instantiate(currentModels[modelIndex].model, PlacementPose.position, PlacementPose.rotation);
    }

    // Сменить модель (следующая)
    public void ModelChangeRight(){
        modelIndex = modelIndex + 1 >= currentModels.Count ? 0 : modelIndex + 1;
        ARPlaceObject();
    }

    // Сменить модель (предыдущая)
    public void ModelChangeLeft(){
        modelIndex = modelIndex - 1 < 0 ? currentModels.Count - 1 : modelIndex - 1;
        ARPlaceObject();
    }

    // Удалить установленный объект
    public void DeleteObject()
    {
        ShowTagedObjects(false);
        var clearUp = GameObject.FindGameObjectWithTag("ARMultiModel");
        Destroy(clearUp);
        modelIndex = 0; 
    }

    // Перейти к следующему Canvas
    public void GoTo(GameObject nextCanvas)
    {
        CurrentCanvas.SetActive(false);
        nextCanvas.gameObject.SetActive(true);
        CurrentCanvas = nextCanvas;
    }

    // Перейти из Canvas(Choose Plane) в камеру
    public void GoToCamera(int alignment)
    {
        CurrentCanvas.SetActive(false);
        applyAlignment = alignment == 0 ? PlaneAlignment.HorizontalUp : alignment == 1 
                                        ? PlaneAlignment.Vertical : PlaneAlignment.HorizontalDown;
        planeManager.detectionMode = applyAlignment == PlaneAlignment.Vertical ? 
            PlaneDetectionMode.Vertical 
            : PlaneDetectionMode.Horizontal;
        currentModels = alignment == 0 ? horizontal : alignment == 1 ? wall : ceiling;
        UICanvas.SetActive(true);
        CurrentCanvas = UICanvas;
    }

    public void ChangeIndex(int index)
    {
        modelIndex = index;
        GoTo(UICanvas);
        ARPlaceObject();
    }
    

    public void ChangePlanePanel(GameObject canvas)
    {
        DeleteObject();
        GoTo(canvas);
    }

    private void ShowTagedObjects(bool hide)
    {
        foreach(var hidableObject in hidableObjects)
            hidableObject.SetActive(hide);
    }

    private void UpdateModelName()
    {
        modelName.text = currentModels[modelIndex].name;
    }

    public void OpenCatalog()
    {
        for(var i = 0; i < parent.transform.childCount; ++i)
            Destroy(parent.transform.GetChild(i).gameObject);
        for(var i = 0; i < currentModels.Count; i++)
        {
            var obj = gameObject.AddComponent<InstantiateBlock>();
            obj.CreateBlock(currentModels[i].image, currentModels[i].name, i, block, parent);
        }
        GoTo(catalog);
    }

    public async void EnterURL()
    {
        GoTo(chooseCanvas);
        text.text = "Loading Models";
        await client.ServerStart(url.text);
        text.text = "Models were loaded";
    }
}
