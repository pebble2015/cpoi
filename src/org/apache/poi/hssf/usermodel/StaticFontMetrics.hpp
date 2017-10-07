// Generated from /POI/java/org/apache/poi/hssf/usermodel/StaticFontMetrics.java

#pragma once

#include <java/awt/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/usermodel/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::poi::hssf::usermodel::StaticFontMetrics final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static ::org::apache::poi::util::POILogger* LOGGER_;
    static ::java::util::Properties* fontMetricsProps_;
    static ::java::util::Map* fontDetailsMap_;
protected:
    void ctor();

public:
    static FontDetails* getFontDetails(::java::awt::Font* font);

private:
    static ::java::util::Properties* loadMetrics() /* throws(IOException) */;

    // Generated
    StaticFontMetrics();
protected:
    StaticFontMetrics(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static ::org::apache::poi::util::POILogger*& LOGGER();
    static ::java::util::Properties*& fontMetricsProps();
    static ::java::util::Map*& fontDetailsMap();
    virtual ::java::lang::Class* getClass0();
};
