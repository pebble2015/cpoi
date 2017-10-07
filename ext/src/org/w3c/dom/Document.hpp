// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/w3c/dom/fwd-POI.hpp>
#include <org/w3c/dom/Node.hpp>

struct org::w3c::dom::Document
    : public virtual Node
{

    virtual Node* adoptNode(Node* source) = 0;
    virtual Attr* createAttribute(::java::lang::String* name) = 0;
    virtual Attr* createAttributeNS(::java::lang::String* namespaceURI, ::java::lang::String* qualifiedName) = 0;
    virtual CDATASection* createCDATASection(::java::lang::String* data) = 0;
    virtual Comment* createComment(::java::lang::String* data) = 0;
    virtual DocumentFragment* createDocumentFragment() = 0;
    virtual Element* createElement(::java::lang::String* tagName) = 0;
    virtual Element* createElementNS(::java::lang::String* namespaceURI, ::java::lang::String* qualifiedName) = 0;
    virtual EntityReference* createEntityReference(::java::lang::String* name) = 0;
    virtual ProcessingInstruction* createProcessingInstruction(::java::lang::String* target, ::java::lang::String* data) = 0;
    virtual Text* createTextNode(::java::lang::String* data) = 0;
    virtual DocumentType* getDoctype() = 0;
    virtual Element* getDocumentElement() = 0;
    virtual ::java::lang::String* getDocumentURI() = 0;
    virtual DOMConfiguration* getDomConfig() = 0;
    virtual Element* getElementById(::java::lang::String* elementId) = 0;
    virtual NodeList* getElementsByTagName(::java::lang::String* tagname) = 0;
    virtual NodeList* getElementsByTagNameNS(::java::lang::String* namespaceURI, ::java::lang::String* localName) = 0;
    virtual DOMImplementation* getImplementation() = 0;
    virtual ::java::lang::String* getInputEncoding() = 0;
    virtual bool getStrictErrorChecking() = 0;
    virtual ::java::lang::String* getXmlEncoding() = 0;
    virtual bool getXmlStandalone() = 0;
    virtual ::java::lang::String* getXmlVersion() = 0;
    virtual Node* importNode(Node* importedNode, bool deep) = 0;
    virtual void normalizeDocument() = 0;
    virtual Node* renameNode(Node* n, ::java::lang::String* namespaceURI, ::java::lang::String* qualifiedName) = 0;
    virtual void setDocumentURI(::java::lang::String* documentURI) = 0;
    virtual void setStrictErrorChecking(bool strictErrorChecking) = 0;
    virtual void setXmlStandalone(bool xmlStandalone) = 0;
    virtual void setXmlVersion(::java::lang::String* xmlVersion) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
