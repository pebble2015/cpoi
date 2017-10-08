// Generated from /POI/java/org/apache/poi/hpsf/Array.java

#pragma once

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

class poi::hpsf::Array_
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    Array__ArrayHeader* _header {  };
    TypedPropertyValueArray* _values {  };
protected:
    void ctor();

public: /* package */
    virtual void read(::poi::util::LittleEndianByteArrayInputStream* lei);
    virtual TypedPropertyValueArray* getValues();

    // Generated
    Array_();
protected:
    Array_(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    void init();
    virtual ::java::lang::Class* getClass0();
    friend class Array__ArrayDimension;
    friend class Array__ArrayHeader;
};
