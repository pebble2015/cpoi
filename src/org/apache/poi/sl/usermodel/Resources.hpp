// Generated from /POI/java/org/apache/poi/sl/usermodel/Resources.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/sl/usermodel/fwd-POI.hpp>
#include <java/lang/Object.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace poi
{
    namespace sl
    {
        namespace usermodel
        {
typedef ::SubArray< ::poi::sl::usermodel::PictureData, ::java::lang::ObjectArray > PictureDataArray;
        } // usermodel
    } // sl
} // poi

struct poi::sl::usermodel::Resources
    : public virtual ::java::lang::Object
{
    virtual FontCollection* getFontCollection() = 0;
    virtual PictureDataArray* getPictureData() = 0;
    virtual int32_t addPictureData(PictureData* pict) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
