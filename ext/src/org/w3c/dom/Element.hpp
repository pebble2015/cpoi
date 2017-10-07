// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/w3c/dom/fwd-POI.hpp>
#include <org/w3c/dom/Node.hpp>

struct org::w3c::dom::Element
    : public virtual Node
{

    virtual ::java::lang::String* getAttribute(::java::lang::String* name) = 0;
    virtual ::java::lang::String* getAttributeNS(::java::lang::String* namespaceURI, ::java::lang::String* localName) = 0;
    virtual Attr* getAttributeNode(::java::lang::String* name) = 0;
    virtual Attr* getAttributeNodeNS(::java::lang::String* namespaceURI, ::java::lang::String* localName) = 0;
    virtual NodeList* getElementsByTagName(::java::lang::String* name) = 0;
    virtual NodeList* getElementsByTagNameNS(::java::lang::String* namespaceURI, ::java::lang::String* localName) = 0;
    virtual TypeInfo* getSchemaTypeInfo() = 0;
    virtual ::java::lang::String* getTagName() = 0;
    virtual bool hasAttribute(::java::lang::String* name) = 0;
    virtual bool hasAttributeNS(::java::lang::String* namespaceURI, ::java::lang::String* localName) = 0;
    virtual void removeAttribute(::java::lang::String* name) = 0;
    virtual void removeAttributeNS(::java::lang::String* namespaceURI, ::java::lang::String* localName) = 0;
    virtual Attr* removeAttributeNode(Attr* oldAttr) = 0;
    virtual void setAttribute(::java::lang::String* name, ::java::lang::String* value) = 0;
    virtual void setAttributeNS(::java::lang::String* namespaceURI, ::java::lang::String* qualifiedName, ::java::lang::String* value) = 0;
    virtual Attr* setAttributeNode(Attr* newAttr) = 0;
    virtual Attr* setAttributeNodeNS(Attr* newAttr) = 0;
    virtual void setIdAttribute(::java::lang::String* name, bool isId) = 0;
    virtual void setIdAttributeNS(::java::lang::String* namespaceURI, ::java::lang::String* localName, bool isId) = 0;
    virtual void setIdAttributeNode(Attr* idAttr, bool isId) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
