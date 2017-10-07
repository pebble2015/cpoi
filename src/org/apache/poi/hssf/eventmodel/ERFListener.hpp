// Generated from /POI/java/org/apache/poi/hssf/eventmodel/ERFListener.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/hssf/eventmodel/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct org::apache::poi::hssf::eventmodel::ERFListener
    : public virtual ::java::lang::Object
{
    virtual bool processRecord(::org::apache::poi::hssf::record::Record* rec) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
