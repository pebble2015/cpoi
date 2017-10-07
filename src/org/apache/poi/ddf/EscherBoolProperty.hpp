// Generated from /POI/java/org/apache/poi/ddf/EscherBoolProperty.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ddf/fwd-POI.hpp>
#include <org/apache/poi/ddf/EscherSimpleProperty.hpp>

struct default_init_tag;

class org::apache::poi::ddf::EscherBoolProperty
    : public EscherSimpleProperty
{

public:
    typedef EscherSimpleProperty super;
protected:
    void ctor(int16_t propertyNumber, int32_t value);

public:
    virtual bool isTrue();
    virtual bool isFalse();
    ::java::lang::String* toXml(::java::lang::String* tab) override;

    // Generated
    EscherBoolProperty(int16_t propertyNumber, int32_t value);
protected:
    EscherBoolProperty(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
