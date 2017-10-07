// Generated from /POI/java/org/apache/poi/ss/usermodel/ObjectData.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/poifs/filesystem/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/SimpleShape.hpp>

struct org::apache::poi::ss::usermodel::ObjectData
    : public virtual SimpleShape
{
    virtual ::int8_tArray* getObjectData() /* throws(IOException) */ = 0;
    virtual bool hasDirectoryEntry() = 0;
    virtual ::org::apache::poi::poifs::filesystem::DirectoryEntry* getDirectory() /* throws(IOException) */ = 0;
    virtual ::java::lang::String* getOLE2ClassName() = 0;
    virtual ::java::lang::String* getFileName() = 0;
    virtual PictureData* getPictureData() = 0;

    // Generated
    static ::java::lang::Class *class_();
};
