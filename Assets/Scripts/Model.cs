using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Model : MonoBehaviour
{
    public string name;
    public Sprite image;
    public GameObject model;

    public Model(string name, Sprite image, GameObject model)
    {
        this.name = name;
        this.image = image;
        this.model = model;
    }
}
