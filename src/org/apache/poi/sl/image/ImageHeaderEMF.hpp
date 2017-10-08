// Generated from /POI/java/org/apache/poi/sl/image/ImageHeaderEMF.java

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/sl/image/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::sl::image::ImageHeaderEMF
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static ::poi::util::POILogger* LOG_;
    static ::java::lang::String* EMF_SIGNATURE_;
    ::java::awt::Rectangle* deviceBounds {  };
protected:
    void ctor(::int8_tArray* data, int32_t off);

public:
    virtual ::java::awt::Dimension* getSize();
    virtual ::java::awt::Rectangle* getBounds();

    // Generated
    ImageHeaderEMF(::int8_tArray* data, int32_t off);
protected:
    ImageHeaderEMF(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static ::poi::util::POILogger*& LOG();
    static ::java::lang::String*& EMF_SIGNATURE();
    virtual ::java::lang::Class* getClass0();
};
