// Generated from /POI/java/org/apache/poi/sl/image/ImageHeaderWMF.java

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <org/apache/poi/sl/image/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::sl::image::ImageHeaderWMF
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
    static constexpr int32_t APMHEADER_KEY { int32_t(-1698247209) };

private:
    static ::poi::util::POILogger* LOG_;
    int32_t handle {  };
    int32_t left {  }, top {  }, right {  }, bottom {  };
    int32_t inch {  };
    int32_t reserved {  };
    int32_t checksum {  };
protected:
    void ctor(::java::awt::Rectangle* dim);
    void ctor(::int8_tArray* data, int32_t off);

public:
    virtual int32_t getChecksum();
    virtual void write(::java::io::OutputStream* out) /* throws(IOException) */;
    virtual ::java::awt::Dimension* getSize();
    virtual ::java::awt::Rectangle* getBounds();
    virtual int32_t getLength();

    // Generated
    ImageHeaderWMF(::java::awt::Rectangle* dim);
    ImageHeaderWMF(::int8_tArray* data, int32_t off);
protected:
    ImageHeaderWMF(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static ::poi::util::POILogger*& LOG();
    virtual ::java::lang::Class* getClass0();
};
