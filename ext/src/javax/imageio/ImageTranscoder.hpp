// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <javax/imageio/fwd-POI.hpp>
#include <javax/imageio/metadata/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct javax::imageio::ImageTranscoder
    : public virtual ::java::lang::Object
{

    virtual ::javax::imageio::metadata::IIOMetadata* convertImageMetadata(::javax::imageio::metadata::IIOMetadata* inData, ImageTypeSpecifier* imageType, ImageWriteParam* param) = 0;
    virtual ::javax::imageio::metadata::IIOMetadata* convertStreamMetadata(::javax::imageio::metadata::IIOMetadata* inData, ImageWriteParam* param) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
