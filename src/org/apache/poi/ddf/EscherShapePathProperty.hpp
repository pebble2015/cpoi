// Generated from /POI/java/org/apache/poi/ddf/EscherShapePathProperty.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/ddf/fwd-POI.hpp>
#include <org/apache/poi/ddf/EscherSimpleProperty.hpp>

struct default_init_tag;

class org::apache::poi::ddf::EscherShapePathProperty
    : public EscherSimpleProperty
{

public:
    typedef EscherSimpleProperty super;
    static constexpr int32_t LINE_OF_STRAIGHT_SEGMENTS { int32_t(0) };
    static constexpr int32_t CLOSED_POLYGON { int32_t(1) };
    static constexpr int32_t CURVES { int32_t(2) };
    static constexpr int32_t CLOSED_CURVES { int32_t(3) };
    static constexpr int32_t COMPLEX { int32_t(4) };
protected:
    void ctor(int16_t propertyNumber, int32_t shapePath);

    // Generated

public:
    EscherShapePathProperty(int16_t propertyNumber, int32_t shapePath);
protected:
    EscherShapePathProperty(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
