// Copyright (c) 2014-2017 Wolfgang Borgsmüller
// All rights reserved.
// 
// This software may be modified and distributed under the terms
// of the BSD license. See the License.txt file for details.

// Generated file. Do not edit.


// cef_set_cookie_callback

typedef struct _cfx_set_cookie_callback_t {
    cef_set_cookie_callback_t cef_set_cookie_callback;
    unsigned int ref_count;
    gc_handle_t gc_handle;
    int wrapper_kind;
    // managed callbacks
    void (CEF_CALLBACK *on_complete)(gc_handle_t self, int success);
} cfx_set_cookie_callback_t;

void CEF_CALLBACK _cfx_set_cookie_callback_add_ref(struct _cef_base_t* base) {
    InterlockedIncrement(&((cfx_set_cookie_callback_t*)base)->ref_count);
}
int CEF_CALLBACK _cfx_set_cookie_callback_release(struct _cef_base_t* base) {
    int count = InterlockedDecrement(&((cfx_set_cookie_callback_t*)base)->ref_count);
    if(count == 0) {
        if(((cfx_set_cookie_callback_t*)base)->wrapper_kind == 0) {
            cfx_gc_handle_free(((cfx_set_cookie_callback_t*)base)->gc_handle);
        } else {
            cfx_gc_handle_free_remote(((cfx_set_cookie_callback_t*)base)->gc_handle);
        }
        free(base);
        return 1;
    }
    return 0;
}
int CEF_CALLBACK _cfx_set_cookie_callback_has_one_ref(struct _cef_base_t* base) {
    return ((cfx_set_cookie_callback_t*)base)->ref_count == 1 ? 1 : 0;
}

static cfx_set_cookie_callback_t* cfx_set_cookie_callback_ctor(gc_handle_t gc_handle, int wrapper_kind) {
    cfx_set_cookie_callback_t* ptr = (cfx_set_cookie_callback_t*)calloc(1, sizeof(cfx_set_cookie_callback_t));
    if(!ptr) return 0;
    ptr->cef_set_cookie_callback.base.size = sizeof(cef_set_cookie_callback_t);
    ptr->cef_set_cookie_callback.base.add_ref = _cfx_set_cookie_callback_add_ref;
    ptr->cef_set_cookie_callback.base.release = _cfx_set_cookie_callback_release;
    ptr->cef_set_cookie_callback.base.has_one_ref = _cfx_set_cookie_callback_has_one_ref;
    ptr->ref_count = 1;
    ptr->gc_handle = gc_handle;
    ptr->wrapper_kind = wrapper_kind;
    return ptr;
}

static gc_handle_t cfx_set_cookie_callback_get_gc_handle(cfx_set_cookie_callback_t* self) {
    return self->gc_handle;
}

// on_complete

void CEF_CALLBACK cfx_set_cookie_callback_on_complete(cef_set_cookie_callback_t* self, int success) {
    ((cfx_set_cookie_callback_t*)self)->on_complete(((cfx_set_cookie_callback_t*)self)->gc_handle, success);
}

static void cfx_set_cookie_callback_set_callback(cef_set_cookie_callback_t* self, int index, void* callback) {
    switch(index) {
    case 0:
        ((cfx_set_cookie_callback_t*)self)->on_complete = (void (CEF_CALLBACK *)(gc_handle_t self, int success))callback;
        self->on_complete = callback ? cfx_set_cookie_callback_on_complete : 0;
        break;
    }
}

