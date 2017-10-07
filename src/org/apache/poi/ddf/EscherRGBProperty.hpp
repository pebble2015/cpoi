// Generated from /POI/java/org/apache/poi/ddf/EscherRGBProperty.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ddf/fwd-POI.hpp>
#include <org/apache/poi/ddf/EscherSimpleProperty.hpp>

struct default_init_tag;

class org::apache::poi::ddf::EscherRGBProperty
    : public EscherSimpleProperty
{

public:
    typedef EscherSimpleProperty super;
protected:
    void ctor(int16_t propertyNumber, int32_t rgbColor);

public:
    virtual int32_t getRgbColor();
    virtual int8_t getRed();
    virtual int8_t getGreen();
    virtual int8_t getBlue();
    ::java::lang::String* toXml(::java::lang::String* tab) override;

    // Generated
    EscherRGBProperty(int16_t propertyNumber, int32_t rgbColor);
protected:
    EscherRGBProperty(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
