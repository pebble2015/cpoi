// Generated from /POI/java/org/apache/poi/util/Configurator.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::util::Configurator
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static POILogger* logger_;

public:
    static int32_t getIntValue(::java::lang::String* systemProperty, int32_t defaultValue);

    // Generated
    Configurator();
protected:
    Configurator(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static POILogger*& logger();
    virtual ::java::lang::Class* getClass0();
};
