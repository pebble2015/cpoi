// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <java/lang/fwd-POI.hpp>
#include <javax/xml/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class javax::xml::XMLConstants final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static ::java::lang::String* ACCESS_EXTERNAL_DTD_;
    static ::java::lang::String* ACCESS_EXTERNAL_SCHEMA_;
    static ::java::lang::String* ACCESS_EXTERNAL_STYLESHEET_;
    static ::java::lang::String* DEFAULT_NS_PREFIX_;
    static ::java::lang::String* FEATURE_SECURE_PROCESSING_;
    static ::java::lang::String* NULL_NS_URI_;
    static ::java::lang::String* RELAXNG_NS_URI_;
    static ::java::lang::String* W3C_XML_SCHEMA_INSTANCE_NS_URI_;
    static ::java::lang::String* W3C_XML_SCHEMA_NS_URI_;
    static ::java::lang::String* W3C_XPATH_DATATYPE_NS_URI_;
    static ::java::lang::String* XMLNS_ATTRIBUTE_;
    static ::java::lang::String* XMLNS_ATTRIBUTE_NS_URI_;
    static ::java::lang::String* XML_DTD_NS_URI_;
    static ::java::lang::String* XML_NS_PREFIX_;
    static ::java::lang::String* XML_NS_URI_;

    /*void ctor(); (private) */

    // Generated

public:
    XMLConstants();
protected:
    XMLConstants(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static ::java::lang::String*& ACCESS_EXTERNAL_DTD();
    static ::java::lang::String*& ACCESS_EXTERNAL_SCHEMA();
    static ::java::lang::String*& ACCESS_EXTERNAL_STYLESHEET();
    static ::java::lang::String*& DEFAULT_NS_PREFIX();
    static ::java::lang::String*& FEATURE_SECURE_PROCESSING();
    static ::java::lang::String*& NULL_NS_URI();
    static ::java::lang::String*& RELAXNG_NS_URI();
    static ::java::lang::String*& W3C_XML_SCHEMA_INSTANCE_NS_URI();
    static ::java::lang::String*& W3C_XML_SCHEMA_NS_URI();
    static ::java::lang::String*& W3C_XPATH_DATATYPE_NS_URI();
    static ::java::lang::String*& XMLNS_ATTRIBUTE();
    static ::java::lang::String*& XMLNS_ATTRIBUTE_NS_URI();
    static ::java::lang::String*& XML_DTD_NS_URI();
    static ::java::lang::String*& XML_NS_PREFIX();
    static ::java::lang::String*& XML_NS_URI();

private:
    virtual ::java::lang::Class* getClass0();
};
