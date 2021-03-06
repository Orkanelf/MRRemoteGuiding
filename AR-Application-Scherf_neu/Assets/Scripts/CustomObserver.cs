using Microsoft.MixedReality.Toolkit;
using Microsoft.MixedReality.Toolkit.SpatialAwareness;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;


public class CustomObserver : LocalDataSender<MeshData>
{
    IEnumerator<SpatialAwarenessMeshObject> myMeshes = null;
    private int meshIndex = 0;
    private int meshCount = 1;
    CustomObserver() : base(DataChannels.SpatialMesh, true, false) { }

    public override MeshData Send()
    {
        if (myMeshes == null)
            return null;
        meshIndex += 1;

        //the initial position is before the first element.
        if (myMeshes.MoveNext())
        {
            return new MeshData(myMeshes.Current);
        }

        //signal that all MeshData were sent
        myMeshes = null;
        return new MeshData(null);

    }

    public void GetMesh()
    {
        var dataProviderAccess = CoreServices.SpatialAwarenessSystem as IMixedRealityDataProviderAccess;
        var observers = dataProviderAccess.GetDataProviders<IMixedRealitySpatialAwarenessMeshObserver>();
        Debug.Log(observers + " has found " + observers.Count + " meshes.");
        foreach (var observer in observers)
        {
            //observer.Suspend();
            Debug.Log(observer.Name + " Meshes: " + observer.Meshes.Count);
            if (observer.Meshes.Count > 0)
            {
                Debug.Log("calculated meshinfo");
                myMeshes = observer.Meshes.Values.GetEnumerator();
                meshCount = observer.Meshes.Count;
                return;
            }
        }
        if (myMeshes == null)
        {
            Invoke("GetMesh", 5);
            throw new System.Exception("No Spatial Mesh found");
        }
    }


    public void Start()
    {
        Invoke("GetMesh", 2);
    }
}
