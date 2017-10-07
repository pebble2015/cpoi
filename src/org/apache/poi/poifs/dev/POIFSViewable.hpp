// Generated from /POI/java/org/apache/poi/poifs/dev/POIFSViewable.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/poifs/dev/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct org::apache::poi::poifs::dev::POIFSViewable
    : public virtual ::java::lang::Object
{
    virtual ::java::lang::ObjectArray* getViewableArray_() = 0;
    virtual ::java::util::Iterator* getViewableIterator() = 0;
    virtual bool preferArray_() = 0;
    virtual ::java::lang::String* getShortDescription() = 0;

    // Generated
    static ::java::lang::Class *class_();
};
