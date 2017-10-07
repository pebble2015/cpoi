// Generated from /POI/java/org/apache/poi/ddf/EscherProperty.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ddf/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::poi::ddf::EscherProperty
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    int16_t _id {  };
protected:
    void ctor(int16_t id);
    void ctor(int16_t propertyNumber, bool isComplex, bool isBlipId);

public:
    virtual int16_t getId();
    virtual int16_t getPropertyNumber();
    virtual bool isComplex();
    virtual bool isBlipId();
    virtual ::java::lang::String* getName();
    virtual int32_t getPropertySize();
    virtual ::java::lang::String* toXml(::java::lang::String* tab);
    virtual int32_t serializeSimplePart(::int8_tArray* data, int32_t pos) = 0;
    virtual int32_t serializeComplexPart(::int8_tArray* data, int32_t pos) = 0;
    ::java::lang::String* toString() = 0;

    // Generated
    EscherProperty(int16_t id);
    EscherProperty(int16_t propertyNumber, bool isComplex, bool isBlipId);
protected:
    EscherProperty(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
