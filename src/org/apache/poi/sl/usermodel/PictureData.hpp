// Generated from /POI/java/org/apache/poi/sl/usermodel/PictureData.java

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/sl/usermodel/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct org::apache::poi::sl::usermodel::PictureData
    : public virtual ::java::lang::Object
{
    virtual ::java::lang::String* getContentType() = 0;
    virtual PictureData_PictureType* getType() = 0;
    virtual ::int8_tArray* getData() = 0;
    virtual void setData(::int8_tArray* data) /* throws(IOException) */ = 0;
    virtual ::int8_tArray* getChecksum() = 0;
    virtual ::java::awt::Dimension* getImageDimension() = 0;
    virtual ::java::awt::Dimension* getImageDimensionInPixels() = 0;

    // Generated
    static ::java::lang::Class *class_();
};
