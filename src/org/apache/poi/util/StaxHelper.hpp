// Generated from /POI/java/org/apache/poi/util/StaxHelper.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <javax/xml/stream/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::util::StaxHelper final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static POILogger* logger_;
protected:
    void ctor();

public:
    static ::javax::xml::stream::XMLInputFactory* newXMLInputFactory();
    static ::javax::xml::stream::XMLOutputFactory* newXMLOutputFactory();
    static ::javax::xml::stream::XMLEventFactory* newXMLEventFactory();

private:
    static void trySetProperty(::javax::xml::stream::XMLInputFactory* factory, ::java::lang::String* feature, bool flag);
    static void trySetProperty(::javax::xml::stream::XMLOutputFactory* factory, ::java::lang::String* feature, bool flag);

    // Generated
    StaxHelper();
protected:
    StaxHelper(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static POILogger*& logger();
    virtual ::java::lang::Class* getClass0();
};
