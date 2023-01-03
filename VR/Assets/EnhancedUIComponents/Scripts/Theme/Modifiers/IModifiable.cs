using VRAppBase.EnhancedUIComponents.Scripts.Modifiers;

namespace vet_metaverse_base.EnhancedUIComponents.Scripts.Theme.Modifiers
{
    public interface IModifiable
    {
        public abstract void AddModifier(ThemeModifier themeModifier);
        public abstract void RemoveModifier(ThemeModifier themeModifier);
    }
}