// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <java/lang/fwd-POI.hpp>
#include <javax/xml/transform/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class javax::xml::transform::OutputKeys
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static ::java::lang::String* CDATA_SECTION_ELEMENTS_;
    static ::java::lang::String* DOCTYPE_PUBLIC_;
    static ::java::lang::String* DOCTYPE_SYSTEM_;
    static ::java::lang::String* ENCODING_;
    static ::java::lang::String* INDENT_;
    static ::java::lang::String* MEDIA_TYPE_;
    static ::java::lang::String* METHOD_;
    static ::java::lang::String* OMIT_XML_DECLARATION_;
    static ::java::lang::String* STANDALONE_;
    static ::java::lang::String* VERSION_;

    /*void ctor(); (private) */

    // Generated

public:
    OutputKeys();
protected:
    OutputKeys(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static ::java::lang::String*& CDATA_SECTION_ELEMENTS();
    static ::java::lang::String*& DOCTYPE_PUBLIC();
    static ::java::lang::String*& DOCTYPE_SYSTEM();
    static ::java::lang::String*& ENCODING();
    static ::java::lang::String*& INDENT();
    static ::java::lang::String*& MEDIA_TYPE();
    static ::java::lang::String*& METHOD();
    static ::java::lang::String*& OMIT_XML_DECLARATION();
    static ::java::lang::String*& STANDALONE();
    static ::java::lang::String*& VERSION();

private:
    virtual ::java::lang::Class* getClass0();
};
