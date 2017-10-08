// Generated from /POI/java/org/apache/poi/hssf/eventusermodel/HSSFListener.java

#pragma once

#include <org/apache/poi/hssf/eventusermodel/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct poi::hssf::eventusermodel::HSSFListener
    : public virtual ::java::lang::Object
{
    virtual void processRecord(::poi::hssf::record::Record* record) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
