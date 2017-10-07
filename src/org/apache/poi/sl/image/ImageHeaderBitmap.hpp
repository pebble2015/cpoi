// Generated from /POI/java/org/apache/poi/sl/image/ImageHeaderBitmap.java

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <org/apache/poi/sl/image/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::poi::sl::image::ImageHeaderBitmap
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static ::org::apache::poi::util::POILogger* LOG_;
    ::java::awt::Dimension* size {  };
protected:
    void ctor(::int8_tArray* data, int32_t offset);

public:
    virtual ::java::awt::Dimension* getSize();

    // Generated
    ImageHeaderBitmap(::int8_tArray* data, int32_t offset);
protected:
    ImageHeaderBitmap(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static ::org::apache::poi::util::POILogger*& LOG();
    virtual ::java::lang::Class* getClass0();
};
