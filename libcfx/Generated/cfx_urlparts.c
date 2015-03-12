// Copyright (c) 2014-2015 Wolfgang Borgsmüller
// All rights reserved.
// 
// Redistribution and use in source and binary forms, with or without 
// modification, are permitted provided that the following conditions 
// are met:
// 
// 1. Redistributions of source code must retain the above copyright 
//    notice, this list of conditions and the following disclaimer.
// 
// 2. Redistributions in binary form must reproduce the above copyright 
//    notice, this list of conditions and the following disclaimer in the 
//    documentation and/or other materials provided with the distribution.
// 
// 3. Neither the name of the copyright holder nor the names of its 
//    contributors may be used to endorse or promote products derived 
//    from this software without specific prior written permission.
// 
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS 
// "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT 
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS 
// FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE 
// COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, 
// INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, 
// BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS 
// OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND 
// ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR 
// TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE 
// USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

// Generated file. Do not edit.


// cef_urlparts

#ifdef __cplusplus
extern "C" {
#endif

CFX_EXPORT cef_urlparts_t* cfx_urlparts_ctor() {
    return (cef_urlparts_t*)calloc(1, sizeof(cef_urlparts_t));
}

CFX_EXPORT void cfx_urlparts_dtor(cef_urlparts_t* ptr) {
    if(ptr->spec.dtor) ptr->spec.dtor(ptr->spec.str);
    if(ptr->scheme.dtor) ptr->scheme.dtor(ptr->scheme.str);
    if(ptr->username.dtor) ptr->username.dtor(ptr->username.str);
    if(ptr->password.dtor) ptr->password.dtor(ptr->password.str);
    if(ptr->host.dtor) ptr->host.dtor(ptr->host.str);
    if(ptr->port.dtor) ptr->port.dtor(ptr->port.str);
    if(ptr->origin.dtor) ptr->origin.dtor(ptr->origin.str);
    if(ptr->path.dtor) ptr->path.dtor(ptr->path.str);
    if(ptr->query.dtor) ptr->query.dtor(ptr->query.str);
    free(ptr);
}

// cef_urlparts_t->spec
CFX_EXPORT void cfx_urlparts_set_spec(cef_urlparts_t *self, char16 *spec_str, int spec_length) {
    cef_string_utf16_set(spec_str, spec_length, &(self->spec), 1);
}
CFX_EXPORT void cfx_urlparts_get_spec(cef_urlparts_t *self, char16 **spec_str, int *spec_length) {
    *spec_str = self->spec.str;
    *spec_length = self->spec.length;
}

// cef_urlparts_t->scheme
CFX_EXPORT void cfx_urlparts_set_scheme(cef_urlparts_t *self, char16 *scheme_str, int scheme_length) {
    cef_string_utf16_set(scheme_str, scheme_length, &(self->scheme), 1);
}
CFX_EXPORT void cfx_urlparts_get_scheme(cef_urlparts_t *self, char16 **scheme_str, int *scheme_length) {
    *scheme_str = self->scheme.str;
    *scheme_length = self->scheme.length;
}

// cef_urlparts_t->username
CFX_EXPORT void cfx_urlparts_set_username(cef_urlparts_t *self, char16 *username_str, int username_length) {
    cef_string_utf16_set(username_str, username_length, &(self->username), 1);
}
CFX_EXPORT void cfx_urlparts_get_username(cef_urlparts_t *self, char16 **username_str, int *username_length) {
    *username_str = self->username.str;
    *username_length = self->username.length;
}

// cef_urlparts_t->password
CFX_EXPORT void cfx_urlparts_set_password(cef_urlparts_t *self, char16 *password_str, int password_length) {
    cef_string_utf16_set(password_str, password_length, &(self->password), 1);
}
CFX_EXPORT void cfx_urlparts_get_password(cef_urlparts_t *self, char16 **password_str, int *password_length) {
    *password_str = self->password.str;
    *password_length = self->password.length;
}

// cef_urlparts_t->host
CFX_EXPORT void cfx_urlparts_set_host(cef_urlparts_t *self, char16 *host_str, int host_length) {
    cef_string_utf16_set(host_str, host_length, &(self->host), 1);
}
CFX_EXPORT void cfx_urlparts_get_host(cef_urlparts_t *self, char16 **host_str, int *host_length) {
    *host_str = self->host.str;
    *host_length = self->host.length;
}

// cef_urlparts_t->port
CFX_EXPORT void cfx_urlparts_set_port(cef_urlparts_t *self, char16 *port_str, int port_length) {
    cef_string_utf16_set(port_str, port_length, &(self->port), 1);
}
CFX_EXPORT void cfx_urlparts_get_port(cef_urlparts_t *self, char16 **port_str, int *port_length) {
    *port_str = self->port.str;
    *port_length = self->port.length;
}

// cef_urlparts_t->origin
CFX_EXPORT void cfx_urlparts_set_origin(cef_urlparts_t *self, char16 *origin_str, int origin_length) {
    cef_string_utf16_set(origin_str, origin_length, &(self->origin), 1);
}
CFX_EXPORT void cfx_urlparts_get_origin(cef_urlparts_t *self, char16 **origin_str, int *origin_length) {
    *origin_str = self->origin.str;
    *origin_length = self->origin.length;
}

// cef_urlparts_t->path
CFX_EXPORT void cfx_urlparts_set_path(cef_urlparts_t *self, char16 *path_str, int path_length) {
    cef_string_utf16_set(path_str, path_length, &(self->path), 1);
}
CFX_EXPORT void cfx_urlparts_get_path(cef_urlparts_t *self, char16 **path_str, int *path_length) {
    *path_str = self->path.str;
    *path_length = self->path.length;
}

// cef_urlparts_t->query
CFX_EXPORT void cfx_urlparts_set_query(cef_urlparts_t *self, char16 *query_str, int query_length) {
    cef_string_utf16_set(query_str, query_length, &(self->query), 1);
}
CFX_EXPORT void cfx_urlparts_get_query(cef_urlparts_t *self, char16 **query_str, int *query_length) {
    *query_str = self->query.str;
    *query_length = self->query.length;
}


#ifdef __cplusplus
} // extern "C"
#endif

