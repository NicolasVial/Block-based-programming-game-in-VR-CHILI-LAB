#region

using System;
using UnityEngine;

#endregion

namespace Utils
{
    [Serializable]
    public class Optional<T>
    {
        [SerializeField] private bool isPresent;
        [SerializeField] private T content;
        
        public bool IsPresent
        {
            get
            {
                _presenceChecked = true;
                return isPresent;
            }
        }

        public bool IsEmpty => !IsPresent;

        private bool _presenceChecked = false;

        public T Get {
            get {
                if (!_presenceChecked) { Debug.LogWarning($"Get called on {this} without presence checked first !"); }
                return content;
        } }

        public T OrElse(T fallback) => IsPresent ? content : fallback;
        public T OrElseThrow(Exception e) => IsPresent ? content : throw e;
        
        public Optional<TResult> Map<TResult>(Func<T, TResult> map) => 
            IsPresent ? new(map(content)) : new();

        public static Optional<T> Of(T t) => new (t);
        public static Optional<T> Empty() => new ();
        public static Optional<T> OfNullable(T t) => ReferenceEquals(t, null) ? Empty() : Of(t);

        public Optional() { isPresent = false; }

        public Optional(T content)
        {
            this.content = content;
            isPresent = true;
        }

        public Optional<T> EmptyIfNot(Predicate<T> predicate)
        {
            return IsPresent ? 
                predicate(content) ? this : Empty()
                : Empty();
        }

        public void IfPresentThen(Action<T> action)
        {
            if (IsPresent) { action.Invoke(content); }
        }

        public override string ToString()
        {
            return IsEmpty ? "Optional.Empty" : $"Optional.Of({content.ToString()})";
        }
    }
}