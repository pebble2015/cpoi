// Generated from /POI/java/org/apache/poi/ss/usermodel/ConditionalFormattingThreshold.java

#pragma once

#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct org::apache::poi::ss::usermodel::ConditionalFormattingThreshold
    : public virtual ::java::lang::Object
{
    virtual ConditionalFormattingThreshold_RangeType* getRangeType() = 0;
    virtual void setRangeType(ConditionalFormattingThreshold_RangeType* type) = 0;
    virtual ::java::lang::String* getFormula() = 0;
    virtual void setFormula(::java::lang::String* formula) = 0;
    virtual ::java::lang::Double* getValue() = 0;
    virtual void setValue(::java::lang::Double* value) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
