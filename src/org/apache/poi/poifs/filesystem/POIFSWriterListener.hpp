// Generated from /POI/java/org/apache/poi/poifs/filesystem/POIFSWriterListener.java

#pragma once

#include <org/apache/poi/poifs/filesystem/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct poi::poifs::filesystem::POIFSWriterListener
    : public virtual ::java::lang::Object
{
    virtual void processPOIFSWriterEvent(POIFSWriterEvent* event) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
