// Generated from /POI/java/org/apache/poi/sl/usermodel/PaintStyle.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/sl/usermodel/fwd-POI.hpp>
#include <org/apache/poi/sl/usermodel/PaintStyle.hpp>

struct org::apache::poi::sl::usermodel::PaintStyle_TexturePaint
    : public virtual PaintStyle
{
    virtual ::java::io::InputStream* getImageData() = 0;
    virtual ::java::lang::String* getContentType() = 0;
    virtual int32_t getAlpha() = 0;

    // Generated
    static ::java::lang::Class *class_();
};
