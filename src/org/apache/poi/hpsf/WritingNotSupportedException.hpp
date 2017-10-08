// Generated from /POI/java/org/apache/poi/hpsf/WritingNotSupportedException.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hpsf/fwd-POI.hpp>
#include <org/apache/poi/hpsf/UnsupportedVariantTypeException.hpp>

struct default_init_tag;

class poi::hpsf::WritingNotSupportedException
    : public UnsupportedVariantTypeException
{

public:
    typedef UnsupportedVariantTypeException super;
protected:
    void ctor(int64_t variantType, ::java::lang::Object* value);

    // Generated

public:
    WritingNotSupportedException(int64_t variantType, ::java::lang::Object* value);
protected:
    WritingNotSupportedException(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
