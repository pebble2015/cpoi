// Generated from /POI/java/org/apache/poi/hpsf/VariantTypeException.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hpsf/fwd-POI.hpp>
#include <org/apache/poi/hpsf/HPSFException.hpp>

struct default_init_tag;

class poi::hpsf::VariantTypeException
    : public HPSFException
{

public:
    typedef HPSFException super;

private:
    ::java::lang::Object* value {  };
    int64_t variantType {  };
protected:
    void ctor(int64_t variantType, ::java::lang::Object* value, ::java::lang::String* msg);

public:
    virtual int64_t getVariantType();
    virtual ::java::lang::Object* getValue();

    // Generated
    VariantTypeException(int64_t variantType, ::java::lang::Object* value, ::java::lang::String* msg);
protected:
    VariantTypeException(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
