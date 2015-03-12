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


// cef_browser_settings

#ifdef __cplusplus
extern "C" {
#endif

CFX_EXPORT cef_browser_settings_t* cfx_browser_settings_ctor() {
    cef_browser_settings_t* ptr = (cef_browser_settings_t*)calloc(1, sizeof(cef_browser_settings_t));
    if(!ptr) return 0;
    ptr->size = sizeof(cef_browser_settings_t);
    return ptr;
}

CFX_EXPORT void cfx_browser_settings_dtor(cef_browser_settings_t* ptr) {
    if(ptr->standard_font_family.dtor) ptr->standard_font_family.dtor(ptr->standard_font_family.str);
    if(ptr->fixed_font_family.dtor) ptr->fixed_font_family.dtor(ptr->fixed_font_family.str);
    if(ptr->serif_font_family.dtor) ptr->serif_font_family.dtor(ptr->serif_font_family.str);
    if(ptr->sans_serif_font_family.dtor) ptr->sans_serif_font_family.dtor(ptr->sans_serif_font_family.str);
    if(ptr->cursive_font_family.dtor) ptr->cursive_font_family.dtor(ptr->cursive_font_family.str);
    if(ptr->fantasy_font_family.dtor) ptr->fantasy_font_family.dtor(ptr->fantasy_font_family.str);
    if(ptr->default_encoding.dtor) ptr->default_encoding.dtor(ptr->default_encoding.str);
    free(ptr);
}

// cef_browser_settings_t->windowless_frame_rate
CFX_EXPORT void cfx_browser_settings_set_windowless_frame_rate(cef_browser_settings_t *self, int windowless_frame_rate) {
    self->windowless_frame_rate = windowless_frame_rate;
}
CFX_EXPORT void cfx_browser_settings_get_windowless_frame_rate(cef_browser_settings_t *self, int* windowless_frame_rate) {
    *windowless_frame_rate = self->windowless_frame_rate;
}

// cef_browser_settings_t->standard_font_family
CFX_EXPORT void cfx_browser_settings_set_standard_font_family(cef_browser_settings_t *self, char16 *standard_font_family_str, int standard_font_family_length) {
    cef_string_utf16_set(standard_font_family_str, standard_font_family_length, &(self->standard_font_family), 1);
}
CFX_EXPORT void cfx_browser_settings_get_standard_font_family(cef_browser_settings_t *self, char16 **standard_font_family_str, int *standard_font_family_length) {
    *standard_font_family_str = self->standard_font_family.str;
    *standard_font_family_length = self->standard_font_family.length;
}

// cef_browser_settings_t->fixed_font_family
CFX_EXPORT void cfx_browser_settings_set_fixed_font_family(cef_browser_settings_t *self, char16 *fixed_font_family_str, int fixed_font_family_length) {
    cef_string_utf16_set(fixed_font_family_str, fixed_font_family_length, &(self->fixed_font_family), 1);
}
CFX_EXPORT void cfx_browser_settings_get_fixed_font_family(cef_browser_settings_t *self, char16 **fixed_font_family_str, int *fixed_font_family_length) {
    *fixed_font_family_str = self->fixed_font_family.str;
    *fixed_font_family_length = self->fixed_font_family.length;
}

// cef_browser_settings_t->serif_font_family
CFX_EXPORT void cfx_browser_settings_set_serif_font_family(cef_browser_settings_t *self, char16 *serif_font_family_str, int serif_font_family_length) {
    cef_string_utf16_set(serif_font_family_str, serif_font_family_length, &(self->serif_font_family), 1);
}
CFX_EXPORT void cfx_browser_settings_get_serif_font_family(cef_browser_settings_t *self, char16 **serif_font_family_str, int *serif_font_family_length) {
    *serif_font_family_str = self->serif_font_family.str;
    *serif_font_family_length = self->serif_font_family.length;
}

// cef_browser_settings_t->sans_serif_font_family
CFX_EXPORT void cfx_browser_settings_set_sans_serif_font_family(cef_browser_settings_t *self, char16 *sans_serif_font_family_str, int sans_serif_font_family_length) {
    cef_string_utf16_set(sans_serif_font_family_str, sans_serif_font_family_length, &(self->sans_serif_font_family), 1);
}
CFX_EXPORT void cfx_browser_settings_get_sans_serif_font_family(cef_browser_settings_t *self, char16 **sans_serif_font_family_str, int *sans_serif_font_family_length) {
    *sans_serif_font_family_str = self->sans_serif_font_family.str;
    *sans_serif_font_family_length = self->sans_serif_font_family.length;
}

// cef_browser_settings_t->cursive_font_family
CFX_EXPORT void cfx_browser_settings_set_cursive_font_family(cef_browser_settings_t *self, char16 *cursive_font_family_str, int cursive_font_family_length) {
    cef_string_utf16_set(cursive_font_family_str, cursive_font_family_length, &(self->cursive_font_family), 1);
}
CFX_EXPORT void cfx_browser_settings_get_cursive_font_family(cef_browser_settings_t *self, char16 **cursive_font_family_str, int *cursive_font_family_length) {
    *cursive_font_family_str = self->cursive_font_family.str;
    *cursive_font_family_length = self->cursive_font_family.length;
}

// cef_browser_settings_t->fantasy_font_family
CFX_EXPORT void cfx_browser_settings_set_fantasy_font_family(cef_browser_settings_t *self, char16 *fantasy_font_family_str, int fantasy_font_family_length) {
    cef_string_utf16_set(fantasy_font_family_str, fantasy_font_family_length, &(self->fantasy_font_family), 1);
}
CFX_EXPORT void cfx_browser_settings_get_fantasy_font_family(cef_browser_settings_t *self, char16 **fantasy_font_family_str, int *fantasy_font_family_length) {
    *fantasy_font_family_str = self->fantasy_font_family.str;
    *fantasy_font_family_length = self->fantasy_font_family.length;
}

// cef_browser_settings_t->default_font_size
CFX_EXPORT void cfx_browser_settings_set_default_font_size(cef_browser_settings_t *self, int default_font_size) {
    self->default_font_size = default_font_size;
}
CFX_EXPORT void cfx_browser_settings_get_default_font_size(cef_browser_settings_t *self, int* default_font_size) {
    *default_font_size = self->default_font_size;
}

// cef_browser_settings_t->default_fixed_font_size
CFX_EXPORT void cfx_browser_settings_set_default_fixed_font_size(cef_browser_settings_t *self, int default_fixed_font_size) {
    self->default_fixed_font_size = default_fixed_font_size;
}
CFX_EXPORT void cfx_browser_settings_get_default_fixed_font_size(cef_browser_settings_t *self, int* default_fixed_font_size) {
    *default_fixed_font_size = self->default_fixed_font_size;
}

// cef_browser_settings_t->minimum_font_size
CFX_EXPORT void cfx_browser_settings_set_minimum_font_size(cef_browser_settings_t *self, int minimum_font_size) {
    self->minimum_font_size = minimum_font_size;
}
CFX_EXPORT void cfx_browser_settings_get_minimum_font_size(cef_browser_settings_t *self, int* minimum_font_size) {
    *minimum_font_size = self->minimum_font_size;
}

// cef_browser_settings_t->minimum_logical_font_size
CFX_EXPORT void cfx_browser_settings_set_minimum_logical_font_size(cef_browser_settings_t *self, int minimum_logical_font_size) {
    self->minimum_logical_font_size = minimum_logical_font_size;
}
CFX_EXPORT void cfx_browser_settings_get_minimum_logical_font_size(cef_browser_settings_t *self, int* minimum_logical_font_size) {
    *minimum_logical_font_size = self->minimum_logical_font_size;
}

// cef_browser_settings_t->default_encoding
CFX_EXPORT void cfx_browser_settings_set_default_encoding(cef_browser_settings_t *self, char16 *default_encoding_str, int default_encoding_length) {
    cef_string_utf16_set(default_encoding_str, default_encoding_length, &(self->default_encoding), 1);
}
CFX_EXPORT void cfx_browser_settings_get_default_encoding(cef_browser_settings_t *self, char16 **default_encoding_str, int *default_encoding_length) {
    *default_encoding_str = self->default_encoding.str;
    *default_encoding_length = self->default_encoding.length;
}

// cef_browser_settings_t->remote_fonts
CFX_EXPORT void cfx_browser_settings_set_remote_fonts(cef_browser_settings_t *self, cef_state_t remote_fonts) {
    self->remote_fonts = remote_fonts;
}
CFX_EXPORT void cfx_browser_settings_get_remote_fonts(cef_browser_settings_t *self, cef_state_t* remote_fonts) {
    *remote_fonts = self->remote_fonts;
}

// cef_browser_settings_t->javascript
CFX_EXPORT void cfx_browser_settings_set_javascript(cef_browser_settings_t *self, cef_state_t javascript) {
    self->javascript = javascript;
}
CFX_EXPORT void cfx_browser_settings_get_javascript(cef_browser_settings_t *self, cef_state_t* javascript) {
    *javascript = self->javascript;
}

// cef_browser_settings_t->javascript_open_windows
CFX_EXPORT void cfx_browser_settings_set_javascript_open_windows(cef_browser_settings_t *self, cef_state_t javascript_open_windows) {
    self->javascript_open_windows = javascript_open_windows;
}
CFX_EXPORT void cfx_browser_settings_get_javascript_open_windows(cef_browser_settings_t *self, cef_state_t* javascript_open_windows) {
    *javascript_open_windows = self->javascript_open_windows;
}

// cef_browser_settings_t->javascript_close_windows
CFX_EXPORT void cfx_browser_settings_set_javascript_close_windows(cef_browser_settings_t *self, cef_state_t javascript_close_windows) {
    self->javascript_close_windows = javascript_close_windows;
}
CFX_EXPORT void cfx_browser_settings_get_javascript_close_windows(cef_browser_settings_t *self, cef_state_t* javascript_close_windows) {
    *javascript_close_windows = self->javascript_close_windows;
}

// cef_browser_settings_t->javascript_access_clipboard
CFX_EXPORT void cfx_browser_settings_set_javascript_access_clipboard(cef_browser_settings_t *self, cef_state_t javascript_access_clipboard) {
    self->javascript_access_clipboard = javascript_access_clipboard;
}
CFX_EXPORT void cfx_browser_settings_get_javascript_access_clipboard(cef_browser_settings_t *self, cef_state_t* javascript_access_clipboard) {
    *javascript_access_clipboard = self->javascript_access_clipboard;
}

// cef_browser_settings_t->javascript_dom_paste
CFX_EXPORT void cfx_browser_settings_set_javascript_dom_paste(cef_browser_settings_t *self, cef_state_t javascript_dom_paste) {
    self->javascript_dom_paste = javascript_dom_paste;
}
CFX_EXPORT void cfx_browser_settings_get_javascript_dom_paste(cef_browser_settings_t *self, cef_state_t* javascript_dom_paste) {
    *javascript_dom_paste = self->javascript_dom_paste;
}

// cef_browser_settings_t->caret_browsing
CFX_EXPORT void cfx_browser_settings_set_caret_browsing(cef_browser_settings_t *self, cef_state_t caret_browsing) {
    self->caret_browsing = caret_browsing;
}
CFX_EXPORT void cfx_browser_settings_get_caret_browsing(cef_browser_settings_t *self, cef_state_t* caret_browsing) {
    *caret_browsing = self->caret_browsing;
}

// cef_browser_settings_t->java
CFX_EXPORT void cfx_browser_settings_set_java(cef_browser_settings_t *self, cef_state_t java) {
    self->java = java;
}
CFX_EXPORT void cfx_browser_settings_get_java(cef_browser_settings_t *self, cef_state_t* java) {
    *java = self->java;
}

// cef_browser_settings_t->plugins
CFX_EXPORT void cfx_browser_settings_set_plugins(cef_browser_settings_t *self, cef_state_t plugins) {
    self->plugins = plugins;
}
CFX_EXPORT void cfx_browser_settings_get_plugins(cef_browser_settings_t *self, cef_state_t* plugins) {
    *plugins = self->plugins;
}

// cef_browser_settings_t->universal_access_from_file_urls
CFX_EXPORT void cfx_browser_settings_set_universal_access_from_file_urls(cef_browser_settings_t *self, cef_state_t universal_access_from_file_urls) {
    self->universal_access_from_file_urls = universal_access_from_file_urls;
}
CFX_EXPORT void cfx_browser_settings_get_universal_access_from_file_urls(cef_browser_settings_t *self, cef_state_t* universal_access_from_file_urls) {
    *universal_access_from_file_urls = self->universal_access_from_file_urls;
}

// cef_browser_settings_t->file_access_from_file_urls
CFX_EXPORT void cfx_browser_settings_set_file_access_from_file_urls(cef_browser_settings_t *self, cef_state_t file_access_from_file_urls) {
    self->file_access_from_file_urls = file_access_from_file_urls;
}
CFX_EXPORT void cfx_browser_settings_get_file_access_from_file_urls(cef_browser_settings_t *self, cef_state_t* file_access_from_file_urls) {
    *file_access_from_file_urls = self->file_access_from_file_urls;
}

// cef_browser_settings_t->web_security
CFX_EXPORT void cfx_browser_settings_set_web_security(cef_browser_settings_t *self, cef_state_t web_security) {
    self->web_security = web_security;
}
CFX_EXPORT void cfx_browser_settings_get_web_security(cef_browser_settings_t *self, cef_state_t* web_security) {
    *web_security = self->web_security;
}

// cef_browser_settings_t->image_loading
CFX_EXPORT void cfx_browser_settings_set_image_loading(cef_browser_settings_t *self, cef_state_t image_loading) {
    self->image_loading = image_loading;
}
CFX_EXPORT void cfx_browser_settings_get_image_loading(cef_browser_settings_t *self, cef_state_t* image_loading) {
    *image_loading = self->image_loading;
}

// cef_browser_settings_t->image_shrink_standalone_to_fit
CFX_EXPORT void cfx_browser_settings_set_image_shrink_standalone_to_fit(cef_browser_settings_t *self, cef_state_t image_shrink_standalone_to_fit) {
    self->image_shrink_standalone_to_fit = image_shrink_standalone_to_fit;
}
CFX_EXPORT void cfx_browser_settings_get_image_shrink_standalone_to_fit(cef_browser_settings_t *self, cef_state_t* image_shrink_standalone_to_fit) {
    *image_shrink_standalone_to_fit = self->image_shrink_standalone_to_fit;
}

// cef_browser_settings_t->text_area_resize
CFX_EXPORT void cfx_browser_settings_set_text_area_resize(cef_browser_settings_t *self, cef_state_t text_area_resize) {
    self->text_area_resize = text_area_resize;
}
CFX_EXPORT void cfx_browser_settings_get_text_area_resize(cef_browser_settings_t *self, cef_state_t* text_area_resize) {
    *text_area_resize = self->text_area_resize;
}

// cef_browser_settings_t->tab_to_links
CFX_EXPORT void cfx_browser_settings_set_tab_to_links(cef_browser_settings_t *self, cef_state_t tab_to_links) {
    self->tab_to_links = tab_to_links;
}
CFX_EXPORT void cfx_browser_settings_get_tab_to_links(cef_browser_settings_t *self, cef_state_t* tab_to_links) {
    *tab_to_links = self->tab_to_links;
}

// cef_browser_settings_t->local_storage
CFX_EXPORT void cfx_browser_settings_set_local_storage(cef_browser_settings_t *self, cef_state_t local_storage) {
    self->local_storage = local_storage;
}
CFX_EXPORT void cfx_browser_settings_get_local_storage(cef_browser_settings_t *self, cef_state_t* local_storage) {
    *local_storage = self->local_storage;
}

// cef_browser_settings_t->databases
CFX_EXPORT void cfx_browser_settings_set_databases(cef_browser_settings_t *self, cef_state_t databases) {
    self->databases = databases;
}
CFX_EXPORT void cfx_browser_settings_get_databases(cef_browser_settings_t *self, cef_state_t* databases) {
    *databases = self->databases;
}

// cef_browser_settings_t->application_cache
CFX_EXPORT void cfx_browser_settings_set_application_cache(cef_browser_settings_t *self, cef_state_t application_cache) {
    self->application_cache = application_cache;
}
CFX_EXPORT void cfx_browser_settings_get_application_cache(cef_browser_settings_t *self, cef_state_t* application_cache) {
    *application_cache = self->application_cache;
}

// cef_browser_settings_t->webgl
CFX_EXPORT void cfx_browser_settings_set_webgl(cef_browser_settings_t *self, cef_state_t webgl) {
    self->webgl = webgl;
}
CFX_EXPORT void cfx_browser_settings_get_webgl(cef_browser_settings_t *self, cef_state_t* webgl) {
    *webgl = self->webgl;
}

// cef_browser_settings_t->background_color
CFX_EXPORT void cfx_browser_settings_set_background_color(cef_browser_settings_t *self, uint32 background_color) {
    self->background_color = background_color;
}
CFX_EXPORT void cfx_browser_settings_get_background_color(cef_browser_settings_t *self, uint32* background_color) {
    *background_color = self->background_color;
}


#ifdef __cplusplus
} // extern "C"
#endif

