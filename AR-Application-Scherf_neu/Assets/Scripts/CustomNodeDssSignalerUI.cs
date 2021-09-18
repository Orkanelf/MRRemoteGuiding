// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.

using UnityEngine;
using Microsoft.MixedReality.WebRTC.Unity;
using System.Threading;


public class CustomNodeDssSignalerUI : MonoBehaviour
{
    public NodeDssSignaler NodeDssSignaler;

    private bool createOfferCalled = false;
    private bool connected = false;


    void Update()
    {
        if (!createOfferCalled)
        {
            //Thread.Sleep(2000);
            CreateOffer();
            //if (!Controller.Instance.ReadyToSendMesh())
                StartCoroutine(ExecuteAfterTime());
        }

        if (!connected)
            connected = NodeDssSignaler.PeerConnection.isActiveAndEnabled;
    }

    public void CreateOffer()
    {
        NodeDssSignaler?.PeerConnection?.StartConnection();
        createOfferCalled = true;
    }

    System.Collections.IEnumerator ExecuteAfterTime()
    {
        float time = 10.0f;
        while (!connected)
            yield return new WaitForSeconds(time);

        CreateOffer();

        createOfferCalled = true;
    }



}
