using System.Runtime.Serialization;
using UnityEngine;

namespace VRAppBase.EnhancedUIComponents.Scripts.Serialization
{
    public class ThemeManagerSerializationSurrogate : ISerializationSurrogate
    {
        public void GetObjectData(object obj, SerializationInfo info, StreamingContext context)
        {
            ThemeManager manager = (ThemeManager)obj;

            Debug.Log($"Surrogate serializing {manager.themePath} and {manager.materialPath}");
            info.AddValue("ThemePath", manager.themePath);
            info.AddValue("BaseMaterialPath", manager.materialPath);
        }

        public object SetObjectData(object obj, SerializationInfo info, StreamingContext context, ISurrogateSelector selector)
        {
            ThemeManager manager = (ThemeManager)obj;
            
            manager.themePath = info.GetString("ThemePath");
            manager.materialPath = info.GetString("BaseMaterialPath");
            
            Debug.Log($"Surrogate found {info.GetString("ThemePath")} and {info.GetString("BaseMaterialPath")}");
            Debug.Log($"Surrogate found {manager.themePath}, {manager.materialPath} in {manager}");
            
            return manager;
        }
    }
}