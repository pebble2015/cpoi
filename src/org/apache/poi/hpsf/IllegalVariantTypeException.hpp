// Generated from /POI/java/org/apache/poi/hpsf/IllegalVariantTypeException.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hpsf/fwd-POI.hpp>
#include <org/apache/poi/hpsf/VariantTypeException.hpp>

struct default_init_tag;

class poi::hpsf::IllegalVariantTypeException
    : public VariantTypeException
{

public:
    typedef VariantTypeException super;
protected:
    void ctor(int64_t variantType, ::java::lang::Object* value, ::java::lang::String* msg);
    void ctor(int64_t variantType, ::java::lang::Object* value);

    // Generated

public:
    IllegalVariantTypeException(int64_t variantType, ::java::lang::Object* value, ::java::lang::String* msg);
    IllegalVariantTypeException(int64_t variantType, ::java::lang::Object* value);
protected:
    IllegalVariantTypeException(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
