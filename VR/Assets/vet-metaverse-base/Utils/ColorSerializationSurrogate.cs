using System.Runtime.Serialization;
using UnityEngine;
using Object = System.Object;

namespace VRAppBase.Utils
{
    public class ColorSerializationSurrogate : ISerializationSurrogate
    {
        public void GetObjectData(Object obj,
            SerializationInfo info, StreamingContext context)
        {

            var color = (Color) obj;
            info.AddValue("r", color.r);
            info.AddValue("g", color.g);
            info.AddValue("b", color.b);
            info.AddValue("a", color.a);
        }

        // Deserialize the Employee object to set the object's name and address fields.
        public Object SetObjectData(Object obj,
            SerializationInfo info, StreamingContext context,
            ISurrogateSelector selector)
        {

            var color = (Color) obj;
            color.r = (float)info.GetDouble("r");
            color.g = (float)info.GetDouble("g");
            color.b = (float)info.GetDouble("b");
            color.a = (float)info.GetDouble("a");
            return color;
        }
    }
}