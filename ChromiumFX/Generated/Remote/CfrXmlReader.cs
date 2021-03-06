// Copyright (c) 2014-2017 Wolfgang Borgsmüller
// All rights reserved.
// 
// This software may be modified and distributed under the terms
// of the BSD license. See the License.txt file for details.

// Generated file. Do not edit.


using System;

namespace Chromium.Remote {

    /// <summary>
    /// Structure that supports the reading of XML data via the libxml streaming API.
    /// The functions of this structure should only be called on the thread that
    /// creates the object.
    /// </summary>
    /// <remarks>
    /// See also the original CEF documentation in
    /// <see href="https://bitbucket.org/chromiumfx/chromiumfx/src/tip/cef/include/capi/cef_xml_reader_capi.h">cef/include/capi/cef_xml_reader_capi.h</see>.
    /// </remarks>
    public class CfrXmlReader : CfrLibraryBase {

        internal static CfrXmlReader Wrap(RemotePtr remotePtr) {
            if(remotePtr == RemotePtr.Zero) return null;
            var weakCache = CfxRemoteCallContext.CurrentContext.connection.weakCache;
            lock(weakCache) {
                var cfrObj = (CfrXmlReader)weakCache.Get(remotePtr.ptr);
                if(cfrObj == null) {
                    cfrObj = new CfrXmlReader(remotePtr);
                    weakCache.Add(remotePtr.ptr, cfrObj);
                }
                return cfrObj;
            }
        }


        /// <summary>
        /// Create a new CfrXmlReader object. The returned object's functions can
        /// only be called from the thread that created the object.
        /// </summary>
        /// <remarks>
        /// See also the original CEF documentation in
        /// <see href="https://bitbucket.org/chromiumfx/chromiumfx/src/tip/cef/include/capi/cef_xml_reader_capi.h">cef/include/capi/cef_xml_reader_capi.h</see>.
        /// </remarks>
        public static CfrXmlReader Create(CfrStreamReader stream, CfxXmlEncodingType encodingType, string uri) {
            var call = new CfxXmlReaderCreateRemoteCall();
            call.stream = CfrObject.Unwrap(stream).ptr;
            call.encodingType = (int)encodingType;
            call.uri = uri;
            call.RequestExecution();
            return CfrXmlReader.Wrap(new RemotePtr(call.__retval));
        }


        private CfrXmlReader(RemotePtr remotePtr) : base(remotePtr) {}

        /// <summary>
        /// Returns true (1) if an error has been reported by the XML parser.
        /// </summary>
        /// <remarks>
        /// See also the original CEF documentation in
        /// <see href="https://bitbucket.org/chromiumfx/chromiumfx/src/tip/cef/include/capi/cef_xml_reader_capi.h">cef/include/capi/cef_xml_reader_capi.h</see>.
        /// </remarks>
        public bool HasError {
            get {
                var call = new CfxXmlReaderHasErrorRemoteCall();
                call.@this = RemotePtr.ptr;
                call.RequestExecution(RemotePtr.connection);
                return call.__retval;
            }
        }

        /// <summary>
        /// The below functions retrieve data for the node at the current cursor
        /// position.
        /// Returns the node type.
        /// </summary>
        /// <remarks>
        /// See also the original CEF documentation in
        /// <see href="https://bitbucket.org/chromiumfx/chromiumfx/src/tip/cef/include/capi/cef_xml_reader_capi.h">cef/include/capi/cef_xml_reader_capi.h</see>.
        /// </remarks>
        public CfxXmlNodeType Type {
            get {
                var call = new CfxXmlReaderGetTypeRemoteCall();
                call.@this = RemotePtr.ptr;
                call.RequestExecution(RemotePtr.connection);
                return (CfxXmlNodeType)call.__retval;
            }
        }

        /// <summary>
        /// Returns the node depth. Depth starts at 0 for the root node.
        /// </summary>
        /// <remarks>
        /// See also the original CEF documentation in
        /// <see href="https://bitbucket.org/chromiumfx/chromiumfx/src/tip/cef/include/capi/cef_xml_reader_capi.h">cef/include/capi/cef_xml_reader_capi.h</see>.
        /// </remarks>
        public int Depth {
            get {
                var call = new CfxXmlReaderGetDepthRemoteCall();
                call.@this = RemotePtr.ptr;
                call.RequestExecution(RemotePtr.connection);
                return call.__retval;
            }
        }

        /// <summary>
        /// Returns the local name. See http://www.w3.org/TR/REC-xml-names/#NT-
        /// LocalPart for additional details.
        /// </summary>
        /// <remarks>
        /// See also the original CEF documentation in
        /// <see href="https://bitbucket.org/chromiumfx/chromiumfx/src/tip/cef/include/capi/cef_xml_reader_capi.h">cef/include/capi/cef_xml_reader_capi.h</see>.
        /// </remarks>
        public string LocalName {
            get {
                var call = new CfxXmlReaderGetLocalNameRemoteCall();
                call.@this = RemotePtr.ptr;
                call.RequestExecution(RemotePtr.connection);
                return call.__retval;
            }
        }

        /// <summary>
        /// Returns the namespace prefix. See http://www.w3.org/TR/REC-xml-names/ for
        /// additional details.
        /// </summary>
        /// <remarks>
        /// See also the original CEF documentation in
        /// <see href="https://bitbucket.org/chromiumfx/chromiumfx/src/tip/cef/include/capi/cef_xml_reader_capi.h">cef/include/capi/cef_xml_reader_capi.h</see>.
        /// </remarks>
        public string Prefix {
            get {
                var call = new CfxXmlReaderGetPrefixRemoteCall();
                call.@this = RemotePtr.ptr;
                call.RequestExecution(RemotePtr.connection);
                return call.__retval;
            }
        }

        /// <summary>
        /// Returns the qualified name, equal to (Prefix:)LocalName. See
        /// http://www.w3.org/TR/REC-xml-names/#ns-qualnames for additional details.
        /// </summary>
        /// <remarks>
        /// See also the original CEF documentation in
        /// <see href="https://bitbucket.org/chromiumfx/chromiumfx/src/tip/cef/include/capi/cef_xml_reader_capi.h">cef/include/capi/cef_xml_reader_capi.h</see>.
        /// </remarks>
        public string QualifiedName {
            get {
                var call = new CfxXmlReaderGetQualifiedNameRemoteCall();
                call.@this = RemotePtr.ptr;
                call.RequestExecution(RemotePtr.connection);
                return call.__retval;
            }
        }

        /// <summary>
        /// Returns the URI defining the namespace associated with the node. See
        /// http://www.w3.org/TR/REC-xml-names/ for additional details.
        /// </summary>
        /// <remarks>
        /// See also the original CEF documentation in
        /// <see href="https://bitbucket.org/chromiumfx/chromiumfx/src/tip/cef/include/capi/cef_xml_reader_capi.h">cef/include/capi/cef_xml_reader_capi.h</see>.
        /// </remarks>
        public string NamespaceUri {
            get {
                var call = new CfxXmlReaderGetNamespaceUriRemoteCall();
                call.@this = RemotePtr.ptr;
                call.RequestExecution(RemotePtr.connection);
                return call.__retval;
            }
        }

        /// <summary>
        /// Returns the base URI of the node. See http://www.w3.org/TR/xmlbase/ for
        /// additional details.
        /// </summary>
        /// <remarks>
        /// See also the original CEF documentation in
        /// <see href="https://bitbucket.org/chromiumfx/chromiumfx/src/tip/cef/include/capi/cef_xml_reader_capi.h">cef/include/capi/cef_xml_reader_capi.h</see>.
        /// </remarks>
        public string BaseUri {
            get {
                var call = new CfxXmlReaderGetBaseUriRemoteCall();
                call.@this = RemotePtr.ptr;
                call.RequestExecution(RemotePtr.connection);
                return call.__retval;
            }
        }

        /// <summary>
        /// Returns the xml:lang scope within which the node resides. See
        /// http://www.w3.org/TR/REC-xml/#sec-lang-tag for additional details.
        /// </summary>
        /// <remarks>
        /// See also the original CEF documentation in
        /// <see href="https://bitbucket.org/chromiumfx/chromiumfx/src/tip/cef/include/capi/cef_xml_reader_capi.h">cef/include/capi/cef_xml_reader_capi.h</see>.
        /// </remarks>
        public string XmlLang {
            get {
                var call = new CfxXmlReaderGetXmlLangRemoteCall();
                call.@this = RemotePtr.ptr;
                call.RequestExecution(RemotePtr.connection);
                return call.__retval;
            }
        }

        /// <summary>
        /// Returns true (1) if the node represents an NULL element. &lt;a/> is considered
        /// NULL but &lt;a>&lt;/a> is not.
        /// </summary>
        /// <remarks>
        /// See also the original CEF documentation in
        /// <see href="https://bitbucket.org/chromiumfx/chromiumfx/src/tip/cef/include/capi/cef_xml_reader_capi.h">cef/include/capi/cef_xml_reader_capi.h</see>.
        /// </remarks>
        public bool IsEmptyElement {
            get {
                var call = new CfxXmlReaderIsEmptyElementRemoteCall();
                call.@this = RemotePtr.ptr;
                call.RequestExecution(RemotePtr.connection);
                return call.__retval;
            }
        }

        /// <summary>
        /// Returns true (1) if the node has a text value.
        /// </summary>
        /// <remarks>
        /// See also the original CEF documentation in
        /// <see href="https://bitbucket.org/chromiumfx/chromiumfx/src/tip/cef/include/capi/cef_xml_reader_capi.h">cef/include/capi/cef_xml_reader_capi.h</see>.
        /// </remarks>
        public bool HasValue {
            get {
                var call = new CfxXmlReaderHasValueRemoteCall();
                call.@this = RemotePtr.ptr;
                call.RequestExecution(RemotePtr.connection);
                return call.__retval;
            }
        }

        /// <summary>
        /// Returns the text value.
        /// </summary>
        /// <remarks>
        /// See also the original CEF documentation in
        /// <see href="https://bitbucket.org/chromiumfx/chromiumfx/src/tip/cef/include/capi/cef_xml_reader_capi.h">cef/include/capi/cef_xml_reader_capi.h</see>.
        /// </remarks>
        public string Value {
            get {
                var call = new CfxXmlReaderGetValueRemoteCall();
                call.@this = RemotePtr.ptr;
                call.RequestExecution(RemotePtr.connection);
                return call.__retval;
            }
        }

        /// <summary>
        /// Returns true (1) if the node has attributes.
        /// </summary>
        /// <remarks>
        /// See also the original CEF documentation in
        /// <see href="https://bitbucket.org/chromiumfx/chromiumfx/src/tip/cef/include/capi/cef_xml_reader_capi.h">cef/include/capi/cef_xml_reader_capi.h</see>.
        /// </remarks>
        public bool HasAttributes {
            get {
                var call = new CfxXmlReaderHasAttributesRemoteCall();
                call.@this = RemotePtr.ptr;
                call.RequestExecution(RemotePtr.connection);
                return call.__retval;
            }
        }

        /// <summary>
        /// Returns the number of attributes.
        /// </summary>
        /// <remarks>
        /// See also the original CEF documentation in
        /// <see href="https://bitbucket.org/chromiumfx/chromiumfx/src/tip/cef/include/capi/cef_xml_reader_capi.h">cef/include/capi/cef_xml_reader_capi.h</see>.
        /// </remarks>
        public ulong AttributeCount {
            get {
                var call = new CfxXmlReaderGetAttributeCountRemoteCall();
                call.@this = RemotePtr.ptr;
                call.RequestExecution(RemotePtr.connection);
                return call.__retval;
            }
        }

        /// <summary>
        /// Returns an XML representation of the current node's children.
        /// </summary>
        /// <remarks>
        /// See also the original CEF documentation in
        /// <see href="https://bitbucket.org/chromiumfx/chromiumfx/src/tip/cef/include/capi/cef_xml_reader_capi.h">cef/include/capi/cef_xml_reader_capi.h</see>.
        /// </remarks>
        public string InnerXml {
            get {
                var call = new CfxXmlReaderGetInnerXmlRemoteCall();
                call.@this = RemotePtr.ptr;
                call.RequestExecution(RemotePtr.connection);
                return call.__retval;
            }
        }

        /// <summary>
        /// Returns an XML representation of the current node including its children.
        /// </summary>
        /// <remarks>
        /// See also the original CEF documentation in
        /// <see href="https://bitbucket.org/chromiumfx/chromiumfx/src/tip/cef/include/capi/cef_xml_reader_capi.h">cef/include/capi/cef_xml_reader_capi.h</see>.
        /// </remarks>
        public string OuterXml {
            get {
                var call = new CfxXmlReaderGetOuterXmlRemoteCall();
                call.@this = RemotePtr.ptr;
                call.RequestExecution(RemotePtr.connection);
                return call.__retval;
            }
        }

        /// <summary>
        /// Returns the line number for the current node.
        /// </summary>
        /// <remarks>
        /// See also the original CEF documentation in
        /// <see href="https://bitbucket.org/chromiumfx/chromiumfx/src/tip/cef/include/capi/cef_xml_reader_capi.h">cef/include/capi/cef_xml_reader_capi.h</see>.
        /// </remarks>
        public int LineNumber {
            get {
                var call = new CfxXmlReaderGetLineNumberRemoteCall();
                call.@this = RemotePtr.ptr;
                call.RequestExecution(RemotePtr.connection);
                return call.__retval;
            }
        }

        /// <summary>
        /// Moves the cursor to the next node in the document. This function must be
        /// called at least once to set the current cursor position. Returns true (1)
        /// if the cursor position was set successfully.
        /// </summary>
        /// <remarks>
        /// See also the original CEF documentation in
        /// <see href="https://bitbucket.org/chromiumfx/chromiumfx/src/tip/cef/include/capi/cef_xml_reader_capi.h">cef/include/capi/cef_xml_reader_capi.h</see>.
        /// </remarks>
        public bool MoveToNextNode() {
            var call = new CfxXmlReaderMoveToNextNodeRemoteCall();
            call.@this = RemotePtr.ptr;
            call.RequestExecution(RemotePtr.connection);
            return call.__retval;
        }

        /// <summary>
        /// Close the document. This should be called directly to ensure that cleanup
        /// occurs on the correct thread.
        /// </summary>
        /// <remarks>
        /// See also the original CEF documentation in
        /// <see href="https://bitbucket.org/chromiumfx/chromiumfx/src/tip/cef/include/capi/cef_xml_reader_capi.h">cef/include/capi/cef_xml_reader_capi.h</see>.
        /// </remarks>
        public bool Close() {
            var call = new CfxXmlReaderCloseRemoteCall();
            call.@this = RemotePtr.ptr;
            call.RequestExecution(RemotePtr.connection);
            return call.__retval;
        }

        /// <summary>
        /// Returns the error string.
        /// </summary>
        /// <remarks>
        /// See also the original CEF documentation in
        /// <see href="https://bitbucket.org/chromiumfx/chromiumfx/src/tip/cef/include/capi/cef_xml_reader_capi.h">cef/include/capi/cef_xml_reader_capi.h</see>.
        /// </remarks>
        public string GetError() {
            var call = new CfxXmlReaderGetErrorRemoteCall();
            call.@this = RemotePtr.ptr;
            call.RequestExecution(RemotePtr.connection);
            return call.__retval;
        }

        /// <summary>
        /// Returns the value of the attribute at the specified 0-based index.
        /// </summary>
        /// <remarks>
        /// See also the original CEF documentation in
        /// <see href="https://bitbucket.org/chromiumfx/chromiumfx/src/tip/cef/include/capi/cef_xml_reader_capi.h">cef/include/capi/cef_xml_reader_capi.h</see>.
        /// </remarks>
        public string GetAttribute(int index) {
            var call = new CfxXmlReaderGetAttributeByIndexRemoteCall();
            call.@this = RemotePtr.ptr;
            call.index = index;
            call.RequestExecution(RemotePtr.connection);
            return call.__retval;
        }

        /// <summary>
        /// Returns the value of the attribute with the specified qualified name.
        /// </summary>
        /// <remarks>
        /// See also the original CEF documentation in
        /// <see href="https://bitbucket.org/chromiumfx/chromiumfx/src/tip/cef/include/capi/cef_xml_reader_capi.h">cef/include/capi/cef_xml_reader_capi.h</see>.
        /// </remarks>
        public string GetAttribute(string qualifiedName) {
            var call = new CfxXmlReaderGetAttributeByQNameRemoteCall();
            call.@this = RemotePtr.ptr;
            call.qualifiedName = qualifiedName;
            call.RequestExecution(RemotePtr.connection);
            return call.__retval;
        }

        /// <summary>
        /// Returns the value of the attribute with the specified local name and
        /// namespace URI.
        /// </summary>
        /// <remarks>
        /// See also the original CEF documentation in
        /// <see href="https://bitbucket.org/chromiumfx/chromiumfx/src/tip/cef/include/capi/cef_xml_reader_capi.h">cef/include/capi/cef_xml_reader_capi.h</see>.
        /// </remarks>
        public string GetAttribute(string localName, string namespaceURI) {
            var call = new CfxXmlReaderGetAttributeByLNameRemoteCall();
            call.@this = RemotePtr.ptr;
            call.localName = localName;
            call.namespaceURI = namespaceURI;
            call.RequestExecution(RemotePtr.connection);
            return call.__retval;
        }

        /// <summary>
        /// Attribute nodes are not traversed by default. The below functions can be
        /// used to move the cursor to an attribute node. move_to_carrying_element()
        /// can be called afterwards to return the cursor to the carrying element. The
        /// depth of an attribute node will be 1 + the depth of the carrying element.
        /// Moves the cursor to the attribute at the specified 0-based index. Returns
        /// true (1) if the cursor position was set successfully.
        /// </summary>
        /// <remarks>
        /// See also the original CEF documentation in
        /// <see href="https://bitbucket.org/chromiumfx/chromiumfx/src/tip/cef/include/capi/cef_xml_reader_capi.h">cef/include/capi/cef_xml_reader_capi.h</see>.
        /// </remarks>
        public bool MoveToAttribute(int index) {
            var call = new CfxXmlReaderMoveToAttributeByIndexRemoteCall();
            call.@this = RemotePtr.ptr;
            call.index = index;
            call.RequestExecution(RemotePtr.connection);
            return call.__retval;
        }

        /// <summary>
        /// Moves the cursor to the attribute with the specified qualified name.
        /// Returns true (1) if the cursor position was set successfully.
        /// </summary>
        /// <remarks>
        /// See also the original CEF documentation in
        /// <see href="https://bitbucket.org/chromiumfx/chromiumfx/src/tip/cef/include/capi/cef_xml_reader_capi.h">cef/include/capi/cef_xml_reader_capi.h</see>.
        /// </remarks>
        public bool MoveToAttribute(string qualifiedName) {
            var call = new CfxXmlReaderMoveToAttributeByQNameRemoteCall();
            call.@this = RemotePtr.ptr;
            call.qualifiedName = qualifiedName;
            call.RequestExecution(RemotePtr.connection);
            return call.__retval;
        }

        /// <summary>
        /// Moves the cursor to the attribute with the specified local name and
        /// namespace URI. Returns true (1) if the cursor position was set
        /// successfully.
        /// </summary>
        /// <remarks>
        /// See also the original CEF documentation in
        /// <see href="https://bitbucket.org/chromiumfx/chromiumfx/src/tip/cef/include/capi/cef_xml_reader_capi.h">cef/include/capi/cef_xml_reader_capi.h</see>.
        /// </remarks>
        public bool MoveToAttribute(string localName, string namespaceURI) {
            var call = new CfxXmlReaderMoveToAttributeByLNameRemoteCall();
            call.@this = RemotePtr.ptr;
            call.localName = localName;
            call.namespaceURI = namespaceURI;
            call.RequestExecution(RemotePtr.connection);
            return call.__retval;
        }

        /// <summary>
        /// Moves the cursor to the first attribute in the current element. Returns
        /// true (1) if the cursor position was set successfully.
        /// </summary>
        /// <remarks>
        /// See also the original CEF documentation in
        /// <see href="https://bitbucket.org/chromiumfx/chromiumfx/src/tip/cef/include/capi/cef_xml_reader_capi.h">cef/include/capi/cef_xml_reader_capi.h</see>.
        /// </remarks>
        public bool MoveToFirstAttribute() {
            var call = new CfxXmlReaderMoveToFirstAttributeRemoteCall();
            call.@this = RemotePtr.ptr;
            call.RequestExecution(RemotePtr.connection);
            return call.__retval;
        }

        /// <summary>
        /// Moves the cursor to the next attribute in the current element. Returns true
        /// (1) if the cursor position was set successfully.
        /// </summary>
        /// <remarks>
        /// See also the original CEF documentation in
        /// <see href="https://bitbucket.org/chromiumfx/chromiumfx/src/tip/cef/include/capi/cef_xml_reader_capi.h">cef/include/capi/cef_xml_reader_capi.h</see>.
        /// </remarks>
        public bool MoveToNextAttribute() {
            var call = new CfxXmlReaderMoveToNextAttributeRemoteCall();
            call.@this = RemotePtr.ptr;
            call.RequestExecution(RemotePtr.connection);
            return call.__retval;
        }

        /// <summary>
        /// Moves the cursor back to the carrying element. Returns true (1) if the
        /// cursor position was set successfully.
        /// </summary>
        /// <remarks>
        /// See also the original CEF documentation in
        /// <see href="https://bitbucket.org/chromiumfx/chromiumfx/src/tip/cef/include/capi/cef_xml_reader_capi.h">cef/include/capi/cef_xml_reader_capi.h</see>.
        /// </remarks>
        public bool MoveToCarryingElement() {
            var call = new CfxXmlReaderMoveToCarryingElementRemoteCall();
            call.@this = RemotePtr.ptr;
            call.RequestExecution(RemotePtr.connection);
            return call.__retval;
        }
    }
}
