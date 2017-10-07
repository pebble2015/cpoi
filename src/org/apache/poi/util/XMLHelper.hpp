// Generated from /POI/java/org/apache/poi/util/XMLHelper.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <javax/xml/parsers/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::poi::util::XMLHelper final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static POILogger* logger_;

public:
    static ::javax::xml::parsers::DocumentBuilderFactory* getDocumentBuilderFactory();

private:
    static void trySetSAXFeature(::javax::xml::parsers::DocumentBuilderFactory* documentBuilderFactory, ::java::lang::String* feature, bool enabled);

    // Generated

public:
    XMLHelper();
protected:
    XMLHelper(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static POILogger*& logger();
    virtual ::java::lang::Class* getClass0();
};
