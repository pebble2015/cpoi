// Generated from /POI/java/org/apache/poi/ss/usermodel/PictureData.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct poi::ss::usermodel::PictureData
    : public virtual ::java::lang::Object
{
    virtual ::int8_tArray* getData() = 0;
    virtual ::java::lang::String* suggestFileExtension() = 0;
    virtual ::java::lang::String* getMimeType() = 0;
    virtual int32_t getPictureType() = 0;

    // Generated
    static ::java::lang::Class *class_();
};
