using UnityEngine;
using System.Threading;

namespace Microsoft.MixedReality.WebRTC.Unity
{
    /// <summary>
    /// This component is handling the MeshData send by the HoloLens and creates
    /// it also updates the position when the anchors position changes
    /// </summary>
    public class MeshReciever : LocalDataReciever<MeshData>
    {
        public bool firstRecive = false;

        /// <summary>
        /// The object that is used to represent the spatial mesh
        /// </summary>
        public GameObject myprefab;
        
        private Vector3 initial_position = Vector3.zero;
        MeshReciever() : base(DataChannels.SpatialMesh, true, false) { }

        public override void Recieve(MeshData t)
        {
            // fixes the timing issue that sometimes appears. The result is that the VR App is just closing. Maybe because the data package is to big.
            if (!this.firstRecive)
            {
                Thread.Sleep(5000);
                this.firstRecive = true;
            }
            if (t.data == null || t.data.Length < 5)
            {
                // the recieving of the mesh is finished
                GetFirstPosition();
                return;
            }
            //Initialize SpatialObject
            var n = Instantiate(myprefab, transform);
            n.GetComponent<MeshFilter>().mesh = t.GetMesh();
            n.transform.SetPositionAndRotation(t.transform.pos, t.transform.rot);
        }

        // Get the initial position of the machine that is anchored
        void GetFirstPosition()
        {
            // if the position of the machine hasn't been send yet wait try again later
            if (MarkerSyncronizer.anchor == null)
                Invoke("GetFirstPosition", 1);
            else
                initial_position = MarkerSyncronizer.anchor.transform.position;
        }

        new void Update()
        {
            base.Update();
            if (initial_position.Equals(Vector3.zero) || MarkerSyncronizer.anchor == null)
                return;
            if (initial_position.Equals(MarkerSyncronizer.anchor.transform.position))
                return;
            //Move the Spatial Mesh with the Anchor so that the relative positions stay the same
            transform.SetPositionAndRotation(MarkerSyncronizer.anchor.transform.position - initial_position, transform.rotation);
            // The spatial objects are children of this transform and therefore also move with it.
        }

    }
}