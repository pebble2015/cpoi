// Generated from /POI/java/org/apache/poi/hssf/record/RecordFactory.java

#pragma once

#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct poi::hssf::record::RecordFactory_I_RecordCreator
    : public virtual ::java::lang::Object
{
    virtual Record* create(RecordInputStream* in) = 0;
    virtual ::java::lang::Class* getRecordClass() = 0;

    // Generated
    static ::java::lang::Class *class_();
};
