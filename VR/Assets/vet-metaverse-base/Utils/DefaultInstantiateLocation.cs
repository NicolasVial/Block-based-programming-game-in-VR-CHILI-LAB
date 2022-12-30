using System;
using UnityEngine;

namespace VRAppBase.Utils
{
    public class DefaultInstantiateLocation : Singleton<DefaultInstantiateLocation>
    {
        public Transform Transform { private set; get; }
        
        private void Awake() { Transform = transform; }
    }
}