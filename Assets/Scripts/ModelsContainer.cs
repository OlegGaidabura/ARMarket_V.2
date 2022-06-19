using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;



public class ModelsContainer : MonoBehaviour
{
    public List<Model> models;

    public Model this[int index]
    {
        get => models[index];
    }

    public int Count => models.Count;

    public void Add(Model model) => models.Add(model);
}
