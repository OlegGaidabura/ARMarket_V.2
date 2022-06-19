using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class InstantiateBlock : MonoBehaviour
{
    private int index;

    public void CreateBlock(Sprite sprite, string name, int id, GameObject block, GameObject parent)
    {
        print(parent);
        var p = parent.transform;
        print(p);
        GameObject newBlock = Instantiate(block, p, false);
        index = id;
        var spriteRenderer = newBlock.transform.GetChild(2).GetComponent<Image>();
        spriteRenderer.sprite = sprite;
        var myText = newBlock.GetComponentInChildren<Text>();
        myText.text = name;
        var myButton = newBlock.GetComponentInChildren<Button>();
        var arPlacemente = GameObject.FindGameObjectWithTag("Player").GetComponent<ARPlacemente>();
        print(arPlacemente);
        myButton.onClick.AddListener(() => arPlacemente.ChangeIndex(index));
        print(newBlock);
    }
}
