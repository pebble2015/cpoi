// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFConditionalFormatting.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/aggregates/fwd-POI.hpp>
#include <org/apache/poi/hssf/usermodel/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <org/apache/poi/ss/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/ss/usermodel/ConditionalFormatting.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFConditionalFormattingRule.hpp>

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

struct default_init_tag;

class poi::hssf::usermodel::HSSFConditionalFormatting final
    : public virtual ::java::lang::Object
    , public ::poi::ss::usermodel::ConditionalFormatting
{

public:
    typedef ::java::lang::Object super;

private:
    HSSFSheet* sheet {  };
    ::poi::hssf::record::aggregates::CFRecordsAggregate* cfAggregate {  };
protected:
    void ctor(HSSFSheet* sheet, ::poi::hssf::record::aggregates::CFRecordsAggregate* cfAggregate);

public: /* package */
    ::poi::hssf::record::aggregates::CFRecordsAggregate* getCFRecordsAggregate();

public:
    ::poi::ss::util::CellRangeAddressArray* getFormattingRanges() override;
    void setFormattingRanges(::poi::ss::util::CellRangeAddressArray* ranges) override;
    void setRule(int32_t idx, HSSFConditionalFormattingRule* cfRule);
    void setRule(int32_t idx, ::poi::ss::usermodel::ConditionalFormattingRule* cfRule) override;
    void addRule(HSSFConditionalFormattingRule* cfRule);
    void addRule(::poi::ss::usermodel::ConditionalFormattingRule* cfRule) override;
    HSSFConditionalFormattingRule* getRule(int32_t idx) override;
    int32_t getNumberOfRules() override;
    ::java::lang::String* toString() override;

    // Generated

public: /* package */
    HSSFConditionalFormatting(HSSFSheet* sheet, ::poi::hssf::record::aggregates::CFRecordsAggregate* cfAggregate);
protected:
    HSSFConditionalFormatting(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
