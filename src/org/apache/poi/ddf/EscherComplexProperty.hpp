// Generated from /POI/java/org/apache/poi/ddf/EscherComplexProperty.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ddf/fwd-POI.hpp>
#include <org/apache/poi/ddf/EscherProperty.hpp>

struct default_init_tag;

class poi::ddf::EscherComplexProperty
    : public EscherProperty
{

public:
    typedef EscherProperty super;

private:
    ::int8_tArray* _complexData {  };
protected:
    void ctor(int16_t id, ::int8_tArray* complexData);
    void ctor(int16_t propertyNumber, bool isBlipId, ::int8_tArray* complexData);

public:
    int32_t serializeSimplePart(::int8_tArray* data, int32_t pos) override;
    int32_t serializeComplexPart(::int8_tArray* data, int32_t pos) override;
    virtual ::int8_tArray* getComplexData();

public: /* protected */
    virtual void setComplexData(::int8_tArray* _complexData);

public:
    bool equals(::java::lang::Object* o) override;
    int32_t getPropertySize() override;
    int32_t hashCode() override;
    ::java::lang::String* toString() override;
    ::java::lang::String* toXml(::java::lang::String* tab) override;

    // Generated
    EscherComplexProperty(int16_t id, ::int8_tArray* complexData);
    EscherComplexProperty(int16_t propertyNumber, bool isBlipId, ::int8_tArray* complexData);
protected:
    EscherComplexProperty(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
