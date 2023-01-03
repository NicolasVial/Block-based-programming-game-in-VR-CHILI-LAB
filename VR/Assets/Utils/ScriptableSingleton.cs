using System;
using UnityEngine;

namespace VRAppBase.Utils
{
    [Serializable]
    public class ScriptableSingleton<T> : ScriptableObject where T : ScriptableSingleton<T>
    {

        private static T instance;

        public static T Instance
        {
            get
            {
                if (instance == null)
                {
                    T[] assets = Resources.LoadAll<T>("Singleton");
                    if (assets == null || assets.Length < 1)
                    {
                        throw new SystemException(
                            $"Could not find any singleton scriptable object instances in the resources" +
                            $" of type {typeof(T).Name}");
                    }
                    if (assets.Length > 1)
                    {
                        Debug.LogWarning("Multiple instances of the singleton scriptable object found in the resources.");
                    }
                    instance = assets[0];
                }
                return instance;
            }
        }
    }
}