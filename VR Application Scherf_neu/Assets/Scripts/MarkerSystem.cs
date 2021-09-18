using System;
using UnityEngine;
using Valve.VR.InteractionSystem;

/// <summary>
/// This component is used to allow the VR user to place, remove, resize and move markers
/// </summary>
public class MarkerSystem : MonoBehaviour
{
    /// <summary>
    /// The MarkerSyncronizer that contains the marker data
    /// </summary>
    public MarkerSyncronizer syncronizer;
    /// <summary>
    /// The controller that manages the Progress of the maintenance task.
    /// </summary>
    public SenderController senderController;
    
    // a reference to the hands
    public Hand leftHand, rightHand;

    /// <summary>
    /// The GameObject attatched to a hand that is used as a preview when placing new markers and serves as the center for the selection menu.
    /// </summary>
    public GameObject previewMarker;

    /// <summary>
    /// The Material used for markers that aren't highlighted
    /// </summary>
    public Material defaultMaterial;

    /// <summary>
    /// The Material used for the marker that is highlighted
    /// </summary>
    public Material highlightedMaterial;

    // the index of the selected model
    private int selectedModel = 0;

    // stores the gameobjects used for the marker selection
    private GameObject[] menuObjects;

    // is the choose button currently pressed
    private bool isChooseActive = false;

    /// <summary>
    /// Update the review marker to the current mesh and size
    /// This method is called after the Start and when a new marker is choosen
    /// </summary>
    private void UpdatePreviewMarker()
    {
        //var newMesh = this.syncronizer.prefab[selectedModel].GetComponent<MeshFilter>().sharedMesh;
        //previewMarker.GetComponent<MeshFilter>().mesh = newMesh;

        this.previewMarker = Instantiate(this.syncronizer.prefab[selectedModel], this.rightHand.transform.position, this.rightHand.transform.localRotation);
        this.previewMarker.GetComponent<MeshRenderer>().enabled = false;
        this.previewMarker.transform.parent = this.rightHand.transform;
        this.previewMarker.SetActive(false);

    }

    /// <summary>
    /// Checks if the user holds a marker, the user placed before.
    /// </summary>
    /// <returns>Bool value if the user holds something at the moment</returns>
    private bool IsHoldingMarker() 
    {
         return leftHand.currentAttachedObject != null || rightHand.currentAttachedObject != null; 
    }

    /// <summary>
    /// This method checks if something is in the right or left hand.
    /// </summary>
    /// <returns>The marker that is the player holding in the users hand. Null if the hands are empty.</returns>
    private GameObject GetHeldMarker()
    {
        return leftHand.currentAttachedObject != null ? leftHand.currentAttachedObject : rightHand.currentAttachedObject;
    }
    
    /// <summary>
    /// This method iterates threw all markers in the marker collection to calculate their distance to the right controler.
    /// </summary>
    /// <returns>The marker out of the marker collection that is closest to the right controler.</returns>
    private int GetClosestToController()
    {
        var closest = -1;
        var shortestDist = float.MaxValue;

        for (int i = 0; i < menuObjects.Length; i++)
        {
            var menuItem = menuObjects[i];
            var dist = Vector3.Distance(menuItem.transform.position, rightHand.transform.position);
            if (dist < shortestDist) { 
                closest = i;
                shortestDist = dist;
            }
        }
        return closest;
    }
    
    /// <summary>
    /// On change event that is fired if the choose marker button is pressed.
    /// </summary>
    /// <param name="newState">State of the button: pressed -> true; released -> false</param>
    public void ButtonChooseMarkerChanged(bool isChooseActive)
    {
        this.isChooseActive = isChooseActive;
        foreach (GameObject menuItem in menuObjects)
        {
            menuItem.SetActive(this.isChooseActive);
        }
        
        if (this.isChooseActive)
        {
            this.transform.localPosition = this.rightHand.transform.position;
            this.transform.rotation = this.rightHand.transform.rotation;
        }
        else
        {
            //Selection ended, select closest to controller
            this.selectedModel = this.GetClosestToController();

            //update Mesh of preview
            this.UpdatePreviewMarker();
        }
    }

    /// <summary>
    /// Activatet if Place Marker (Button B Right Hand) changes state.
    /// If an old marker was grabed it is deleted, if not, a new one is created.
    /// </summary>
    /// <param name="newState">State of the button: pressed -> true; released -> false</param>
    public void ButtonPlaceMarkerChanged(bool placeButtonBPressed)
    {
        if (!placeButtonBPressed)
        {
            /// Create Marker
            if (!IsHoldingMarker())
            {
                GameObject marker = Instantiate(this.syncronizer.prefab[selectedModel], this.rightHand.transform.position, this.rightHand.transform.rotation);
                marker.SetActive(true);

                marker.GetComponent<MeshRenderer>().enabled = false;
                marker.name = "Marker " + this.selectedModel;
                this.syncronizer.AddNewMarker(marker, this.selectedModel);
                Throwable t = marker.AddComponent<Throwable>();
                t.scaleReleaseVelocity = 0;
                var r = marker.GetComponent<Rigidbody>();
                r.useGravity = false; r.isKinematic = true;
                marker.AddComponent<MeshCollider>();

                Debug.Log("Create " + marker.name);
            }
            else // Delete Marker
            {
                GameObject marker = GetHeldMarker();
                Debug.Log("Destroy " + marker.name);
                syncronizer.RemoveMarker(marker);
                Hand h = marker.transform.parent.GetComponent<Hand>();
                h.DetachObject(marker);
                Destroy(marker);
            }
        }

        if (!this.IsHoldingMarker())
        {
            this.previewMarker.SetActive(placeButtonBPressed);
        }
    }

    /// <summary>
    /// On change event that is triggerd, if a object is resized.
    /// </summary>
    /// <param name="axis">Vector 2 value of the trackpad from the controler.</param>
    public void OnChangeResize(Vector2 axis)
    {
            //lastScale = axis.y;
    }

    /// <summary>
    /// Start method is called before the first frame. The objects are added to the markercollection here.
    /// </summary>
    void Start()
    {
        var prefab = this.syncronizer.prefab;
        this.menuObjects = new GameObject[prefab.Length - 5]; // - 2 because Head and Hand Game Objects, Printer, Coffee machine and PC should not be counted.
        //Create Menu
        for (int i = 0; i < prefab.Length; i++)
        {
            if (!prefab[i].ToString().StartsWith("LowPolyHead2") && !prefab[i].ToString().StartsWith("HandModel") && !prefab[i].ToString().StartsWith("computer") && !prefab[i].ToString().StartsWith("printer") && !prefab[i].ToString().StartsWith("coffee"))
            {
                Vector3 bounds = prefab[i].GetComponent<MeshFilter>().sharedMesh.bounds.size;

                //place items in a circle
                float angle = i * Mathf.PI * 2 / this.menuObjects.Length;
                float radius = 0.25f;
                Vector3 pos = new Vector3(Mathf.Cos(angle) * radius, 0.00f, Mathf.Sin(angle) * radius);
                Quaternion rot = Quaternion.Euler(0, -angle * Mathf.Rad2Deg, 0);

                GameObject menuItem = Instantiate(prefab[i], pos, rot, transform);
                menuItem.SetActive(false);
                menuItem.GetComponent<MeshRenderer>().enabled = true;
                menuItem.GetComponent<MeshRenderer>().material = defaultMaterial;

                this.menuObjects[i] = menuItem;
            }
        }

        this.UpdatePreviewMarker();
    }

    /// <summary>
    /// Update is called once per frame. Colors the currently selected marker in the marker selection.
    /// </summary>
    void Update()
    {
        // Marker collection is displayed
        if (this.isChooseActive)
        {
            //highlight selected Material
            var c = GetClosestToController();
            for (int i = 0; i < menuObjects.Length; i++) { 
                menuObjects[i].GetComponent<Renderer>().material = i == c ? highlightedMaterial : defaultMaterial;
            }
        }
    }
}
