// Generated from /POI/java/org/apache/poi/ddf/EscherSimpleProperty.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ddf/fwd-POI.hpp>
#include <org/apache/poi/ddf/EscherProperty.hpp>

struct default_init_tag;

class org::apache::poi::ddf::EscherSimpleProperty
    : public EscherProperty
{

public:
    typedef EscherProperty super;

private:
    int32_t propertyValue {  };
protected:
    void ctor(int16_t id, int32_t propertyValue);
    void ctor(int16_t propertyNumber, bool isComplex, bool isBlipId, int32_t propertyValue);

public:
    int32_t serializeSimplePart(::int8_tArray* data, int32_t offset) override;
    int32_t serializeComplexPart(::int8_tArray* data, int32_t pos) override;
    virtual int32_t getPropertyValue();
    bool equals(::java::lang::Object* o) override;
    int32_t hashCode() override;
    ::java::lang::String* toString() override;
    ::java::lang::String* toXml(::java::lang::String* tab) override;

    // Generated
    EscherSimpleProperty(int16_t id, int32_t propertyValue);
    EscherSimpleProperty(int16_t propertyNumber, bool isComplex, bool isBlipId, int32_t propertyValue);
protected:
    EscherSimpleProperty(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
