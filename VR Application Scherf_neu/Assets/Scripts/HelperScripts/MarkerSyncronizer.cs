using System;
using System.Collections.Generic;
using UnityEngine;
using Microsoft.MixedReality.WebRTC.Unity;

public class MarkerSyncronizer : LocalDataSource<Marker>
{
    public GameObject[] prefab = new GameObject[4];
    public static GameObject anchor;
    MarkerSyncronizer() : base(DataChannels.Marker, true, true) { }

    private Dictionary<int, Tuple<Marker, GameObject>> MarkerData = new Dictionary<int, Tuple<Marker, GameObject>>();
    private int nextID = 0;

    private GameObject GetGameObjectFromModel(int model)
    {
        if (model == -1)
            return null;
        return prefab[model];
    }

    public override void Recieve(Marker m)
    {

        if (MarkerData.ContainsKey(m.id))
        {
            var tf = m.transform;
            MarkerData[m.id].Item1.transform = tf;
            var g = MarkerData[m.id].Item2;
            if (tf == null)
            {
                Debug.Log("Deleted Object");
                Destroy(g);
                MarkerData[m.id] = new Tuple<Marker, GameObject>(m, null);
                return;
            }
            g.transform.SetPositionAndRotation(tf.pos, tf.rot);
            g.transform.localScale = m.transform.scale;
            Debug.Log("updated pos");
        }
        else if (GetGameObjectFromModel(m.model) != null)
        {
            GameObject g = Instantiate(GetGameObjectFromModel(m.model), m.transform.pos, m.transform.rot);
            g.transform.localScale = m.transform.scale;
            MarkerData.Add(m.id, new Tuple<Marker, GameObject>(m, g));
            nextID = Math.Max(nextID, m.id + 1);
        }
    }

    public override Marker Send()
    {
        foreach (var t in MarkerData.Values)
        {
            Marker m = t.Item1;
            GameObject g = t.Item2;
            if (m.transform == null && g == null || g != null && m.Equals(g.transform))
                continue;
            if (g != null)
                m.transform = new TransformS(g.transform);
            else
                m.transform = null;
            return m;
        }
        return null;
    }

    private int GetId(GameObject g)
    {
        foreach (var t in MarkerData.Values)
        {
            if (t.Item2 == g)
                return t.Item1.id;
        }
        return -1;
    }

    public void AddNewMarker(GameObject g, int model)
    {
        // Remove old task objects (Printer, Coffee Machine, Computer)
        if (model == 9 || model == 10 || model == 11)
        {
            this.RemoveMarker(9);
            this.RemoveMarker(10);
            this.RemoveMarker(11);
        }

        MarkerData.Add(nextID, new Tuple<Marker, GameObject>(new Marker(nextID, model), g));
        nextID++;
    }

    /// <summary>
    /// Removes a given marker
    /// </summary>
    /// <param name="g">marker to be removed</param>
    public void RemoveMarker(GameObject g)
    {
        int id = GetId(g);
        if (id == -1)
            return;
        this.MarkerData[id] = new Tuple<Marker, GameObject>(this.MarkerData[id].Item1, null);
        Destroy(this.MarkerData[id].Item2);
    }

    /// <summary>
    /// Removes all markers with the given model number
    /// </summary>
    /// <param name="model">Model ID that should be removed</param>
    public void RemoveMarker(int model)
    {
        for (int i = 0; i < this.MarkerData.Count; i++)
        {
            if(this.MarkerData[i].Item1.model == model)
            {
                this.MarkerData[i] = new Tuple<Marker, GameObject>(this.MarkerData[i].Item1, null);
                Destroy(this.MarkerData[i].Item2);
            }
        }
    }

}
