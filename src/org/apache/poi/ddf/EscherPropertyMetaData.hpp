// Generated from /POI/java/org/apache/poi/ddf/EscherPropertyMetaData.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ddf/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::ddf::EscherPropertyMetaData
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
    static constexpr int8_t TYPE_UNKNOWN { int8_t(0) };
    static constexpr int8_t TYPE_BOOLEAN { int8_t(1) };
    static constexpr int8_t TYPE_RGB { int8_t(2) };
    static constexpr int8_t TYPE_SHAPEPATH { int8_t(3) };
    static constexpr int8_t TYPE_SIMPLE { int8_t(4) };
    static constexpr int8_t TYPE_ARRAY { int8_t(5) };

private:
    ::java::lang::String* description {  };
    int8_t type {  };
protected:
    void ctor(::java::lang::String* description);
    void ctor(::java::lang::String* description, int8_t type);

public:
    virtual ::java::lang::String* getDescription();
    virtual int8_t getType();

    // Generated
    EscherPropertyMetaData(::java::lang::String* description);
    EscherPropertyMetaData(::java::lang::String* description, int8_t type);
protected:
    EscherPropertyMetaData(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
