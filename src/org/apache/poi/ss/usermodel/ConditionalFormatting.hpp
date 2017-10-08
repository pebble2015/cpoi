// Generated from /POI/java/org/apache/poi/ss/usermodel/ConditionalFormatting.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <org/apache/poi/ss/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace poi
{
    namespace ss
    {
        namespace util
        {
typedef ::SubArray< ::poi::ss::util::CellRangeAddressBase, ::java::lang::ObjectArray > CellRangeAddressBaseArray;
typedef ::SubArray< ::poi::ss::util::CellRangeAddress, CellRangeAddressBaseArray > CellRangeAddressArray;
        } // util
    } // ss
} // poi

struct poi::ss::usermodel::ConditionalFormatting
    : public virtual ::java::lang::Object
{
    virtual ::poi::ss::util::CellRangeAddressArray* getFormattingRanges() = 0;
    virtual void setFormattingRanges(::poi::ss::util::CellRangeAddressArray* ranges) = 0;
    virtual void setRule(int32_t idx, ConditionalFormattingRule* cfRule) = 0;
    virtual void addRule(ConditionalFormattingRule* cfRule) = 0;
    virtual ConditionalFormattingRule* getRule(int32_t idx) = 0;
    virtual int32_t getNumberOfRules() = 0;

    // Generated
    static ::java::lang::Class *class_();
};
