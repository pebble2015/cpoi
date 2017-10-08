// Generated from /POI/java/org/apache/poi/util/PngUtils.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::util::PngUtils final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static ::int8_tArray* PNG_FILE_HEADER_;
protected:
    void ctor();

public:
    static bool matchesPngHeader(::int8_tArray* data, int32_t offset);

    // Generated

private:
    PngUtils();
protected:
    PngUtils(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static ::int8_tArray*& PNG_FILE_HEADER();
    virtual ::java::lang::Class* getClass0();
};
