using System;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using Utils;

namespace InitializationSequence
{
    ///<summary>
    /// An anchor point between the real world and the virtual world, a portal between two parallel worlds,
    /// one just created and the other on the verge of collapse 
    /// </summary>
    /// <remarks>
    /// Used in <see cref="InitializationSequenceHandler"/>
    /// </remarks>
    public class ReferencePoint : MonoBehaviour
    {
        private Transform cachedTransform;
        public Vector3 Position => cachedTransform.position;

        ///<summary>True if the particles have already been player</summary>
        private bool particleEffectPlayed;

        /// <summary>
        /// The color of the point
        /// <list type="bullet">
        ///     <item>White if the mesh hasn't been created</item>
        ///     <item>Red if the point doesn't contribute to the mesh's shape</item>
        ///     <item>Green if the point is on the edge of the mesh</item>
        /// </list>
        /// </summary>
        private Color color;

        ///<summary>True if the point part of the convex hull of the mesh</summary>
        private bool _isInHull;

        public bool isInHull
        {
            get => _isInHull;
            set
            {
                _isInHull = value;
                color = _isInHull
                    ? inHullColor
                    : outOfHullColor;
                renderers.ToList()
                    .SelectMany(_ => _.materials)
                    .ToList()
                    .ForEach(_ => _.color = color);
            }
        }

        private bool _isForkliftSource;
        public bool isForkliftSource
        {
            get => _isForkliftSource;
            set
            {
                _isForkliftSource = value;
                if (!_isForkliftSource) { return; }
                
                color = forkliftSourceColor;
                renderers.ToList()
                    .SelectMany(_ => _.materials)
                    .ToList()
                    .ForEach(_ => _.color = color);
            }
        }

        ///<summary>The color to use when the point is part of the convex hull</summary>
        [SerializeField] private Color inHullColor;

        ///<summary>The color to use when the point is not part of the convex hull</summary>
        [SerializeField] private Color outOfHullColor;
        
        ///<summary>The color to use when the point is part of the convex hull</summary>
        [SerializeField] private Color forkliftSourceColor;

        private MeshRenderer[] renderers;
        private ParticleSystem particleFX;

        public bool _isVisible = true;
        public bool Visible
        {
            get => _isVisible;
            set
            {
                _isVisible = value;
                foreach (MeshRenderer meshRenderer in renderers) { meshRenderer.enabled = value; }
            }
        }

        public int Index { get; set; }

// //======================================================================================\\
// ||                                                                                      ||
// ||                                       LIFECYCLE                                      ||
// ||                                                                                      ||
// \\======================================================================================//

        private void Awake()
        {
            cachedTransform = transform;
            renderers = GetComponentsInChildren<MeshRenderer>();
            particleFX = GetComponentInChildren<ParticleSystem>();
        }

        public float x => Position.x;
        public float y => Position.y;
        public float z => Position.z;
        
// //======================================================================================\\
// ||                                                                                      ||
// ||                                       CONTROLS                                       ||
// ||                                                                                      ||
// \\======================================================================================//

        /// <summary>
        /// Confirm the placement of the point
        /// </summary>
        public void Confirm()
        {
            if (!ReferenceEquals(null, particleFX))
            {
                /* TODO NOT WORKING
                    ParticleSystem.ColorOverLifetimeModule co = particleFX.colorOverLifetime;
                    ParticleSystem.MainModule ma = particleFX.main;
                    co.color = color;
                    ma.startColor = color;
                    particleFX.Play();
                */
            }
        }

// //======================================================================================\\
// ||                                                                                      ||
// ||                                       OVERRIDES                                      ||
// ||                                                                                      ||
// \\======================================================================================//

        protected bool Equals(ReferencePoint other)
        {
            return base.Equals(other) && Index == other.Index;
        }

        public override bool Equals(object obj)
        {
            if (ReferenceEquals(null, obj)) return false;
            if (ReferenceEquals(this, obj)) return true;
            if (obj.GetType() != GetType()) return false;
            return Equals((ReferencePoint)obj);
        }

        public override int GetHashCode()
        {
            return HashCode.Combine(base.GetHashCode(), Index);
        }

        public override string ToString() => $"{Index} : {Position}";
    }
}