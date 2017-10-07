// Generated from /POI/java/org/apache/poi/poifs/filesystem/DocumentEntry.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/poifs/filesystem/fwd-POI.hpp>
#include <org/apache/poi/poifs/filesystem/Entry.hpp>

struct org::apache::poi::poifs::filesystem::DocumentEntry
    : public virtual Entry
{
    virtual int32_t getSize() = 0;

    // Generated
    static ::java::lang::Class *class_();
};
