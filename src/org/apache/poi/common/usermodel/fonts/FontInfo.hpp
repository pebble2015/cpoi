// Generated from /POI/java/org/apache/poi/common/usermodel/fonts/FontInfo.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/common/usermodel/fonts/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct org::apache::poi::common::usermodel::fonts::FontInfo
    : public virtual ::java::lang::Object
{
    virtual ::java::lang::Integer* getIndex() = 0;
    virtual void setIndex(int32_t index) = 0;
    virtual ::java::lang::String* getTypeface() = 0;
    virtual void setTypeface(::java::lang::String* typeface) = 0;
    virtual FontCharset* getCharset() = 0;
    virtual void setCharset(FontCharset* charset) = 0;
    virtual FontFamily* getFamily() = 0;
    virtual void setFamily(FontFamily* family) = 0;
    virtual FontPitch* getPitch() = 0;
    virtual void setPitch(FontPitch* pitch) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
