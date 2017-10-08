// Generated from /POI/java/org/apache/poi/poifs/eventfilesystem/POIFSReaderListener.java

#pragma once

#include <org/apache/poi/poifs/eventfilesystem/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct poi::poifs::eventfilesystem::POIFSReaderListener
    : public virtual ::java::lang::Object
{
    virtual void processPOIFSReaderEvent(POIFSReaderEvent* event) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
