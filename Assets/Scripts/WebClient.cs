using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.IO.Compression;
using System.Threading.Tasks;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;

// Based on https://www.owasp.org/index.php/Certificate_and_Public_Key_Pinning#.Net
class AcceptAllCertificatesSignedWithASpecificPublicKey : CertificateHandler
{
    // Encoded RSAPublicKey
    private static string PUB_KEY = "somepublickey";

    protected override bool ValidateCertificate(byte[] certificateData)
    {
        //X509Certificate2 certificate = new X509Certificate2(certificateData);

        //string pk = certificate.GetPublicKeyString();
        //Debug.Log(pk.ToLower());
        //return pk.Equals(PUB_KEY);
        return true; // pk.Equals(PUB_KEY);
    }
}
public class ModelName
{
    public string Name { get; set; }
    public string Plane { get; set; }

    public ModelName(string name, string plane)
    {
        Name = name;
        Plane = plane;
    }
}

public class JsonArray
{
    public string json;
    public List<ModelName> names;

    public JsonArray(string json)
    {
        this.json = json;
        names = new List<ModelName>();
    }

    public List<ModelName> Deserialize()
    {
        json = RemoveFirstAndLast(json);
        var jsonArray = json.Split(','); 
        foreach(var name in jsonArray)
        {
            var models = RemoveFirstAndLast(name).Split(':');
            names.Add(new ModelName(RemoveFirstAndLast(models[0]), RemoveFirstAndLast(models[1])));
        }
        return names;
    }

    private string RemoveFirstAndLast(string value)
    {
        value = value.Remove(0, 1);
        value = value.Remove(value.Length - 1, 1);
        return value;
    }
}

public class WebClient : MonoBehaviour
{
    public string url;

    private Dictionary<string, Sprite> sprites;
    private Dictionary<string, GameObject> models;

    private List<ModelName> names;
    public ModelsContainer horizontal;
    public ModelsContainer wall;
    public ModelsContainer ceiling;
    public Text text;
    //private const string PATH = @"Assets\ZipModels\";

    //Когда-нибудь мы сделаем этот клиент. Но это не точно.
    
    
    public async Task<bool> ServerStart(string url)
    {
        sprites = new Dictionary<string, Sprite>();
        models = new Dictionary<string, GameObject>();
        print(horizontal);
        print(wall);
        print(ceiling);
        this.url = url + "/api/todoitems";
        print(1);
        await GetNamesCoroutine();
        foreach(var name in names)
        {
            await GetSpritesCoroutine(name.Name);
            await GetModelsCoroutine(name.Name);
        }
        foreach(var name in names)
        {
            GameObject a = new GameObject();
            Model m = a.AddComponent<Model>();
            m.name = name.Name;
            m.image = sprites[name.Name];
            m.model = models[name.Name];
            print(m);
            print(ceiling);

            if (name.Plane == "Floor")
                horizontal.Add(m);
            else if (name.Plane == "Wall")
                wall.Add(m);
            else if (name.Plane == "Ceiling")
                ceiling.Add(m);
        }
        return true;
    }

    //void GetNames() => StartCoroutine(GetNamesCoroutine());
    //void GetSprite(string name) => StartCoroutine(GetSpritesCoroutine(name));
    //void GetModel(string name) => StartCoroutine(GetModelsCoroutine(name));

    public async Task<bool> GetNamesCoroutine()
    {
        print(2);
        names = new List<ModelName>();
        using var request = UnityWebRequest.Get(url + "/start");
        request.certificateHandler = new AcceptAllCertificatesSignedWithASpecificPublicKey();
        var operation = request.SendWebRequest();
        while (!operation.isDone)
            await Task.Yield();
        if (request.result == UnityWebRequest.Result.Success)
        {
            var jsonArray = new JsonArray(request.downloadHandler.text);
            jsonArray.Deserialize();
            names = jsonArray.names;
            //print(names.Count);
            return true;
        }
        else
            print(request.error);
        return false;
        
    }

    public async Task<bool> GetSpritesCoroutine(string name)
    {
        
        using var request = UnityWebRequestTexture.GetTexture(url + "/catalog/" + name);
        request.certificateHandler = new AcceptAllCertificatesSignedWithASpecificPublicKey();
        var operation = request.SendWebRequest();
        while (!operation.isDone)
            await Task.Yield();
        print(url + "/catalog/" + name);
        var texture = DownloadHandlerTexture.GetContent(request);
        sprites.Add(name, Sprite.Create(texture, new Rect(0.0f, 0.0f, texture.width, texture.height), new Vector2(0.5f, 0.5f), 100.0f));
        return true;
    }

    public async Task<bool> GetModelsCoroutine(string name)
    {
       
        var request = UnityWebRequestAssetBundle.GetAssetBundle(url + "/asset/" + name);
        request.certificateHandler = new AcceptAllCertificatesSignedWithASpecificPublicKey();
        print(4);
        var operation = request.SendWebRequest();
        print(3);
        while (!operation.isDone)
            await Task.Yield();
        var model = DownloadHandlerAssetBundle.GetContent(request).LoadAsset(name) as GameObject;
        print(model);
        //model.transform.tag = "ARMultiModel";
        models.Add(name, model);
        return true;
    }

}
