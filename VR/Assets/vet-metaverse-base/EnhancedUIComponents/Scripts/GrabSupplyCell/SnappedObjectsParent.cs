using System;
using UnityEngine;
using VRAppBase.Utils;

namespace VRAppBase.EnhancedUIComponents.Scripts
{
    public class SnappedObjectsParent : Singleton<SnappedObjectsParent>
    {
// //======================================================================================\\
// ||                                                                                      ||
// ||                                       FIELDS                                         ||
// ||                                                                                      ||
// \\======================================================================================//

        public Transform Transform { private set; get; }
        public static Transform GetTransform => Instance.Transform;
        
// //======================================================================================\\
// ||                                                                                      ||
// ||                                       LIFECYCLE                                      ||
// ||                                                                                      ||
// \\======================================================================================//

        private void Awake()
        {
            name = "=== SNAPPED OBJECTS ===";
            Transform = transform;
        }
    }
}