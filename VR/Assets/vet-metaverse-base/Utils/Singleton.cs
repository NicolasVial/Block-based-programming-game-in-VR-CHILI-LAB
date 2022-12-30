using UnityEngine;

namespace VRAppBase.Utils
{
    public class Singleton<T> : MonoBehaviour
        where T : Component
    {
        private static T _instance;
        public static T Instance
        {
            get
            {
                // If the instance is not null, return it
                if (!ReferenceEquals(_instance, null)) return _instance;
                
                // Find all objects of the given type
                var objs = FindObjectsOfType(typeof(T), false) as T[];
                // If there is already at least one object in scene, it is the instance
                if (objs.Length > 0)
                {
                    _instance = objs[0];
                }
                // If there is more than one object in scene, log an error
                if (objs.Length > 1)
                {
                    Debug.LogError("There is more than one " + typeof(T).Name + " in the scene.");
                    foreach (T component in objs)
                    {
                        if (component != null && component.name[0] == '_') { DestroyImmediate(component.gameObject); }
                    }
                }

                // If no object has been found, spawn it
                if (!ReferenceEquals(_instance, null)) return _instance;
                
                var obj = new GameObject
                {
                    name = $"_{typeof(T).Name}"
                };
                _instance = obj.AddComponent<T>();

                return _instance;
            }
        }

        protected virtual void OnDestroy()
        {
            _instance = null;
        }
    }
}