// Generated from /POI/java/org/apache/poi/ss/usermodel/IconMultiStateFormatting.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <java/lang/Object.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace poi
{
    namespace ss
    {
        namespace usermodel
        {
typedef ::SubArray< ::poi::ss::usermodel::ConditionalFormattingThreshold, ::java::lang::ObjectArray > ConditionalFormattingThresholdArray;
        } // usermodel
    } // ss
} // poi

struct poi::ss::usermodel::IconMultiStateFormatting
    : public virtual ::java::lang::Object
{
    virtual IconMultiStateFormatting_IconSet* getIconSet() = 0;
    virtual void setIconSet(IconMultiStateFormatting_IconSet* set) = 0;
    virtual bool isIconOnly() = 0;
    virtual void setIconOnly(bool only) = 0;
    virtual bool isReversed() = 0;
    virtual void setReversed(bool reversed) = 0;
    virtual ConditionalFormattingThresholdArray* getThresholds() = 0;
    virtual void setThresholds(ConditionalFormattingThresholdArray* thresholds) = 0;
    virtual ConditionalFormattingThreshold* createThreshold() = 0;

    // Generated
    static ::java::lang::Class *class_();
};
