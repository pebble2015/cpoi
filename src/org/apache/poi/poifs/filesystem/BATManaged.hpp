// Generated from /POI/java/org/apache/poi/poifs/filesystem/BATManaged.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/poifs/filesystem/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct poi::poifs::filesystem::BATManaged
    : public virtual ::java::lang::Object
{
    virtual int32_t countBlocks() = 0;
    virtual void setStartBlock(int32_t index) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
