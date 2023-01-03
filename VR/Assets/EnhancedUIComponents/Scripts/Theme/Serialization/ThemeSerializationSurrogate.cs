using System.Runtime.Serialization;
using UnityEngine;

namespace VRAppBase.EnhancedUIComponents.Scripts.Serialization
{
    public class ThemeSerializationSurrogate : ISerializationSurrogate
    {
        public void GetObjectData(object obj, SerializationInfo info, StreamingContext context)
        {
            var theme = (Theme) obj;
            Debug.Log($"Surrogate using {theme}");
            info.AddValue("PrimaryColor", theme.primaryColor);
            info.AddValue("SecondaryColor", theme.secondaryColor);
            info.AddValue("AccentColor", theme.accentColor);
            info.AddValue("BackgroundColor", theme.backgroundColor);
            info.AddValue("WhiteColor", theme.whiteColor);

            info.AddValue("DisabledComponentSaturationReduction", theme.disabledComponentSaturationReduction);
            
            info.AddValue("LightShadeRatio", theme.lightShadeRatio);
            info.AddValue("MidDarkShadeRatio", theme.midDarkShadeRatio);
            info.AddValue("LowDarkShadeRatio", theme.lowDarkShadeRatio);
        }

        public object SetObjectData(object obj, SerializationInfo info, StreamingContext context, ISurrogateSelector selector)
        {
            Theme theme = (Theme)obj;

            theme.primaryColor = (Color)info.GetValue("PrimaryColor", typeof(Color));
            theme.secondaryColor = (Color)info.GetValue("SecondaryColor", typeof(Color));
            theme.accentColor = (Color)info.GetValue("AccentColor", typeof(Color));
            theme.backgroundColor = (Color)info.GetValue("BackgroundColor", typeof(Color));
            theme.whiteColor = (Color)info.GetValue("WhiteColor", typeof(Color));

            theme.disabledComponentSaturationReduction = (float)info.GetDouble("DisabledComponentSaturationReduction");

            theme.lightShadeRatio = (float)info.GetDouble("LightShadeRatio");
            theme.midDarkShadeRatio = (float)info.GetDouble("MidDarkShadeRatio");
            theme.lowDarkShadeRatio = (float)info.GetDouble("LowDarkShadeRatio");
            
            Debug.Log($"Surrogate found {theme}");

            return theme;
        }
    }
}