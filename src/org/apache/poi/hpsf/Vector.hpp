// Generated from /POI/java/org/apache/poi/hpsf/Vector.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hpsf/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace poi
{
    namespace hpsf
    {
typedef ::SubArray< ::poi::hpsf::TypedPropertyValue, ::java::lang::ObjectArray > TypedPropertyValueArray;
    } // hpsf
} // poi

struct default_init_tag;

class poi::hpsf::Vector
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    int16_t _type {  };
    TypedPropertyValueArray* _values {  };
protected:
    void ctor(int16_t type);

public: /* package */
    virtual void read(::poi::util::LittleEndianByteArrayInputStream* lei);
    virtual TypedPropertyValueArray* getValues();

    // Generated
    Vector(int16_t type);
protected:
    Vector(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
