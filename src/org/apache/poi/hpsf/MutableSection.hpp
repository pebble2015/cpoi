// Generated from /POI/java/org/apache/poi/hpsf/MutableSection.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/hpsf/fwd-POI.hpp>
#include <org/apache/poi/hpsf/Section.hpp>

struct default_init_tag;

class poi::hpsf::MutableSection
    : public Section
{

public:
    typedef Section super;
protected:
    void ctor();
    void ctor(Section* s);
    void ctor(::int8_tArray* src, int32_t offset) /* throws(UnsupportedEncodingException) */;

    // Generated

public:
    MutableSection();
    MutableSection(Section* s);
    MutableSection(::int8_tArray* src, int32_t offset);
protected:
    MutableSection(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
