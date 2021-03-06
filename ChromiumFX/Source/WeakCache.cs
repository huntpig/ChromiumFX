// Copyright (c) 2014-2017 Wolfgang Borgsmüller
// All rights reserved.
// 
// This software may be modified and distributed under the terms
// of the BSD license. See the License.txt file for details.

using System;
using System.Collections.Generic;

namespace Chromium {
    internal abstract class WeakCacheBase {

        protected readonly Dictionary<IntPtr, WeakReference> cache = new Dictionary<IntPtr, WeakReference>();

        internal object Get(IntPtr key) {
            // always locked by caller
            WeakReference r;
            if(cache.TryGetValue(key, out r)) {
                var retval = r.Target;
                if(retval == null) {
                    // Happens if the object was collected but not yet finalized.
                    // Remove the key so the subsequent call to Add won't fail.
                    cache.Remove(key);
                }
                return retval;
            } else {
                return null;
            }
        }

        internal void Remove(IntPtr key) {
            lock(this) {
                cache.Remove(key);
            }
        }
    }

    internal class WeakCache : WeakCacheBase {

        internal WeakCache() {
            CfxRuntime.OnCfxShutdown += this.OnShutdown;
        }

        internal void Add(CfxBase obj) {
            // always locked by caller
            cache.Add(obj.nativePtrUnchecked, new WeakReference(obj, false));
        }

        private void OnShutdown() {
            lock(this) {
                // cannot use foreach on cache because obj.Dispose() will cause Remove()
                // to be called modifying the collection
                WeakReference[] refs = new WeakReference[cache.Count];
                cache.Values.CopyTo(refs, 0);
                foreach(WeakReference r in refs) {
                    var obj = (CfxBase)r.Target;
                    if(obj != null) obj.Dispose();
                }
            }
        }
    }

    namespace Remote {
        internal class RemoteWeakCache : WeakCacheBase {
            internal void Add(IntPtr key, object obj) {
                // always locked by caller
                cache.Add(key, new WeakReference(obj, false));
            }
        }
    }
}
