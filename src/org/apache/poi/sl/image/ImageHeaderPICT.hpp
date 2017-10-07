// Generated from /POI/java/org/apache/poi/sl/image/ImageHeaderPICT.java

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <org/apache/poi/sl/image/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::poi::sl::image::ImageHeaderPICT
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
    static constexpr int32_t PICT_HEADER_OFFSET { int32_t(512) };
    static constexpr double DEFAULT_RESOLUTION { 72.0 };

private:
    static ::int8_tArray* V2_HEADER_;
    ::java::awt::Rectangle* bounds {  };
    double hRes {  }, vRes {  };
protected:
    void ctor(::int8_tArray* data, int32_t off);

public:
    virtual ::java::awt::Dimension* getSize();
    virtual ::java::awt::Rectangle* getBounds();

private:
    static int32_t readUnsignedShort(::int8_tArray* data, int32_t offset);
    static double readFixedPoint(::int8_tArray* data, int32_t offset);

    // Generated

public:
    ImageHeaderPICT(::int8_tArray* data, int32_t off);
protected:
    ImageHeaderPICT(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static ::int8_tArray*& V2_HEADER();
    virtual ::java::lang::Class* getClass0();
};
