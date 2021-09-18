using System;
using UnityEngine;
using Valve.VR;
using Valve.VR.InteractionSystem;

/// <summary>
/// This is component is used to subscribe to the SteamVR input Events
/// </summary>
public class SteamVRController : MonoBehaviour
{
    public MarkerSystem markerSystem;

    public SteamVR_Action_Vector2 RotatePlayer;
    public SteamVR_Action_Vector2 MovePlayer;
    public SteamVR_Action_Boolean PlaceMarker;
    public SteamVR_Action_Boolean ChooseMarker;
    public SteamVR_Action_Vector2 ResizeMarker;

    public SteamVR_Input_Sources handTypeMarker;
    public SteamVR_Input_Sources handTypeMove;
    public float speed = 2.0f;

    public float sensitifity = 20;
    public Transform head;
    public Transform vrCamera;

    Vector2 last_vector_rotate;
    Vector2 last_vector_move;

    // Tutorial Properties
    private bool tutorialPhase = true;
    public TMPro.TextMeshPro tutorialTextField;
    private int taskIndex = 0;
    private bool[] tutorialTasks;
    private string[] tutorialText;
    private bool tutorialChooseButtonPressed = false;
    public GameObject leftController;
    public GameObject rightController;
    public MeshRenderer leftButtonB;
    public MeshRenderer rightButtonB;
    public MeshRenderer leftJoystick;
    public MeshRenderer rightJoystick;
    public MeshRenderer rightTouchpad;
    public MeshRenderer leftControllerBody;
    public MeshRenderer rightControllerBody;
    public Material defaultMaterial;
    public Material highlightedMaterial;
    public GameObject videoPlayer;
    public Hand leftHand;
    public Hand rightHand;
    private bool rightBPressed = false;

    public void OnChangeMovePlayer(SteamVR_Action_Vector2 fromAction, SteamVR_Input_Sources fromSource, Vector2 axis, Vector2 delta)
    {
        last_vector_move = axis;

        #region Tutorial Move Player (Step 4)
        if (this.tutorialPhase && !this.tutorialTasks[4] && this.taskIndex == 4)
        {
            this.tutorialTasks[4] = true;
            this.leftJoystick.material = this.defaultMaterial;
            this.rightJoystick.material = this.highlightedMaterial;
        }
        #endregion
    }

    public void OnChangeRotatePlayer(SteamVR_Action_Vector2 fromAction, SteamVR_Input_Sources fromSource, Vector2 axis, Vector2 delta)
    {
        last_vector_rotate = axis;

        #region Tutorial Rotate Player (Step 5)
        if (this.tutorialPhase && !this.tutorialTasks[5] && this.taskIndex == 5)
        {
            this.tutorialTasks[5] = true;
            this.rightJoystick.material = this.defaultMaterial;
            this.rightTouchpad.material = this.highlightedMaterial;
        }
        #endregion
    }

    public void OnChangeChoose(SteamVR_Action_Boolean fromAction, SteamVR_Input_Sources fromSource, bool newState)
    {
        markerSystem.ButtonChooseMarkerChanged(newState);

        #region Tutorial Choose Marker (Step 0)
        if (this.tutorialPhase && !this.tutorialTasks[0])
        {
            if (this.tutorialChooseButtonPressed)
            {
                this.tutorialTasks[0] = true;
                this.leftButtonB.material = this.defaultMaterial;
                this.rightControllerBody.material = this.defaultMaterial;
                this.rightButtonB.material = this.highlightedMaterial;
            }
            else
            {
                this.tutorialChooseButtonPressed = true;
                this.rightControllerBody.material = this.highlightedMaterial;
            }
        }
        #endregion
    }

    public void OnChangeResize(SteamVR_Action_Vector2 fromAction, SteamVR_Input_Sources fromSource, Vector2 axis, Vector2 delta)
    {
        markerSystem.OnChangeResize(axis);

        #region Skip Tutorial
        if (this.tutorialPhase && !this.tutorialTasks[6] && this.taskIndex == 6)
        {
            this.tutorialPhase = false;
            this.tutorialTextField.gameObject.SetActive(this.tutorialPhase);
            this.leftController.SetActive(this.tutorialPhase);
            this.rightController.SetActive(this.tutorialPhase);
            this.videoPlayer.SetActive(!this.tutorialPhase);
            this.taskIndex = 0;
        }
        #endregion
    }

    public void OnChangePlace(SteamVR_Action_Boolean fromAction, SteamVR_Input_Sources fromSource, bool newState)
    {
        markerSystem.ButtonPlaceMarkerChanged(newState);

        #region Tutorial Place Marker (Step 1) & Remove Marker (Step 3)
        this.rightBPressed = !this.rightBPressed;
        if (this.tutorialPhase && !this.tutorialTasks[1] && this.taskIndex == 1 && !this.rightBPressed)
        {
            this.tutorialTasks[1] = true;
            this.rightButtonB.material = this.defaultMaterial;
            this.leftControllerBody.material = this.highlightedMaterial;
            this.rightControllerBody.material = this.highlightedMaterial;
        }
        else if(this.tutorialPhase && !this.tutorialTasks[3] && this.taskIndex == 3 && (this.leftHand.currentAttachedObject != null || this.rightHand.currentAttachedObject != null))
        {
            this.tutorialTasks[3] = true;
            this.rightButtonB.material = this.defaultMaterial;
            this.leftJoystick.material = this.highlightedMaterial;
        }
        #endregion
    }


    // Update is called once per frame
    void Update()
    {
        Player player = Player.instance;
        // Moves the Player
        if (player)
        {
            // rotate in horizontal direction using the right joystick.
            this.head.RotateAround(this.vrCamera.position, new Vector3(0, 1, 0), this.last_vector_rotate.x * this.sensitifity * Time.deltaTime);

            // allow the user to "fly" using the joystick
            Vector3 orientation = Camera.main.transform.forward;
            Vector3 moveDirection = orientation * last_vector_move.y + Camera.main.transform.rotation * Vector3.right * last_vector_move.x;
            Vector3 pos = player.transform.position;
            pos += moveDirection * speed * Time.deltaTime;
            player.transform.position = pos;
        }

        // Update Tutorial
        if (this.tutorialPhase)
        {
            if (this.tutorialTasks[this.taskIndex])
            {
                this.taskIndex++;
                this.tutorialTextField.SetText(this.tutorialText[this.taskIndex]);
            }
            #region Tutorial Grab Marker (Step 2)
            if (!this.tutorialTasks[2] && this.taskIndex == 2 && (this.leftHand.currentAttachedObject != null || this.rightHand.currentAttachedObject != null))
            {
                this.tutorialTasks[2] = true;
                this.leftControllerBody.material = this.defaultMaterial;
                this.rightControllerBody.material = this.defaultMaterial;
                this.rightButtonB.material = this.highlightedMaterial;
            }
            #endregion
        }
    }

    // Start is called before the first frame update
    void Start()
    {
        // Eventlistener for the controller
        MovePlayer.AddOnChangeListener(OnChangeMovePlayer, handTypeMove);
        RotatePlayer.AddOnChangeListener(OnChangeRotatePlayer, handTypeMarker);
        PlaceMarker.AddOnChangeListener(OnChangePlace, handTypeMarker);
        ChooseMarker.AddOnChangeListener(OnChangeChoose, handTypeMove);
        ResizeMarker.AddOnChangeListener(OnChangeResize, handTypeMarker);

        // Tutorial Setup
        this.tutorialText = new string[]{
            "Tutorial (1/6)\n" +
            "Hold 'b'\n" +
            "Move your right hand to highlight a marker\n" +
            "Release 'b' to choose the marker",

            "Tutorial (2/6)\n" +
            "Place a marker by pressing 'b' on your right controler",

            "Tutorial (3/6)\n" +
            "Grab the marker with one of your hands",

            "Tutorial (4/6)\n" +
            "Delete the marker by pressing 'b'",

            "Tutorial (5/6)\n" +
            "Move by using the left joystick",

            "Tutorial (6/6)\n" +
            "Rotate your view by using the right joystick",

            "Tutorial end\n\n" +
            "Congratulations! You solved the tutorial!\n\n" +
            "(End by scrolling on the touchpad)" };

        this.tutorialTextField.text = this.tutorialText[this.taskIndex];

        this.tutorialTasks = new bool[this.tutorialText.Length];

        for (int i = 0; i < this.tutorialTasks.Length; i++)
        {
            this.tutorialTasks[i] = false;
        }

        this.leftButtonB.material = this.highlightedMaterial;
    }

}
