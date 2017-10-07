// Generated from /POI/java/org/apache/poi/ss/usermodel/ConditionFilterData.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct org::apache::poi::ss::usermodel::ConditionFilterData
    : public virtual ::java::lang::Object
{
    virtual bool getAboveAverage() = 0;
    virtual bool getBottom() = 0;
    virtual bool getEqualAverage() = 0;
    virtual bool getPercent() = 0;
    virtual int64_t getRank() = 0;
    virtual int32_t getStdDev() = 0;

    // Generated
    static ::java::lang::Class *class_();
};
