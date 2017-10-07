// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/w3c/dom/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct org::w3c::dom::Node
    : public virtual ::java::lang::Object
{
    static constexpr int16_t ATTRIBUTE_NODE { int16_t(2) };
    static constexpr int16_t CDATA_SECTION_NODE { int16_t(4) };
    static constexpr int16_t COMMENT_NODE { int16_t(8) };
    static constexpr int16_t DOCUMENT_FRAGMENT_NODE { int16_t(11) };
    static constexpr int16_t DOCUMENT_NODE { int16_t(9) };
    static constexpr int16_t DOCUMENT_POSITION_CONTAINED_BY { int16_t(16) };
    static constexpr int16_t DOCUMENT_POSITION_CONTAINS { int16_t(8) };
    static constexpr int16_t DOCUMENT_POSITION_DISCONNECTED { int16_t(1) };
    static constexpr int16_t DOCUMENT_POSITION_FOLLOWING { int16_t(4) };
    static constexpr int16_t DOCUMENT_POSITION_IMPLEMENTATION_SPECIFIC { int16_t(32) };
    static constexpr int16_t DOCUMENT_POSITION_PRECEDING { int16_t(2) };
    static constexpr int16_t DOCUMENT_TYPE_NODE { int16_t(10) };
    static constexpr int16_t ELEMENT_NODE { int16_t(1) };
    static constexpr int16_t ENTITY_NODE { int16_t(6) };
    static constexpr int16_t ENTITY_REFERENCE_NODE { int16_t(5) };
    static constexpr int16_t NOTATION_NODE { int16_t(12) };
    static constexpr int16_t PROCESSING_INSTRUCTION_NODE { int16_t(7) };
    static constexpr int16_t TEXT_NODE { int16_t(3) };

    virtual Node* appendChild(Node* newChild) = 0;
    virtual Node* cloneNode(bool deep) = 0;
    virtual int16_t compareDocumentPosition(Node* other) = 0;
    virtual NamedNodeMap* getAttributes() = 0;
    virtual ::java::lang::String* getBaseURI() = 0;
    virtual NodeList* getChildNodes() = 0;
    virtual ::java::lang::Object* getFeature(::java::lang::String* feature, ::java::lang::String* version) = 0;
    virtual Node* getFirstChild() = 0;
    virtual Node* getLastChild() = 0;
    virtual ::java::lang::String* getLocalName() = 0;
    virtual ::java::lang::String* getNamespaceURI() = 0;
    virtual Node* getNextSibling() = 0;
    virtual ::java::lang::String* getNodeName() = 0;
    virtual int16_t getNodeType() = 0;
    virtual ::java::lang::String* getNodeValue() = 0;
    virtual Document* getOwnerDocument() = 0;
    virtual Node* getParentNode() = 0;
    virtual ::java::lang::String* getPrefix() = 0;
    virtual Node* getPreviousSibling() = 0;
    virtual ::java::lang::String* getTextContent() = 0;
    virtual ::java::lang::Object* getUserData(::java::lang::String* key) = 0;
    virtual bool hasAttributes() = 0;
    virtual bool hasChildNodes() = 0;
    virtual Node* insertBefore(Node* newChild, Node* refChild) = 0;
    virtual bool isDefaultNamespace(::java::lang::String* namespaceURI) = 0;
    virtual bool isEqualNode(Node* arg) = 0;
    virtual bool isSameNode(Node* other) = 0;
    virtual bool isSupported(::java::lang::String* feature, ::java::lang::String* version) = 0;
    virtual ::java::lang::String* lookupNamespaceURI(::java::lang::String* prefix) = 0;
    virtual ::java::lang::String* lookupPrefix(::java::lang::String* namespaceURI) = 0;
    virtual void normalize() = 0;
    virtual Node* removeChild(Node* oldChild) = 0;
    virtual Node* replaceChild(Node* newChild, Node* oldChild) = 0;
    virtual void setNodeValue(::java::lang::String* nodeValue) = 0;
    virtual void setPrefix(::java::lang::String* prefix) = 0;
    virtual void setTextContent(::java::lang::String* textContent) = 0;
    virtual ::java::lang::Object* setUserData(::java::lang::String* key, ::java::lang::Object* data, UserDataHandler* handler) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
