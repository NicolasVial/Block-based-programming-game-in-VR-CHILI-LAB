namespace VRAppBase.EnhancedUIComponents.Scripts
{
    public interface IThemedObject
    {
        public abstract ThemeCategory Category { set; get; }
        public abstract ThemeShade Shade { set; get; }
        public abstract ThemeState State { set; get; }
    }
}