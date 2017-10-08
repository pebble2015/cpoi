// Generated from /POI/java/org/apache/poi/hssf/record/OldFormulaRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/OldCellRecord.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace poi
{
    namespace ss
    {
        namespace formula
        {
            namespace ptg
            {
typedef ::SubArray< ::poi::ss::formula::ptg::Ptg, ::java::lang::ObjectArray > PtgArray;
            } // ptg
        } // formula
    } // ss
} // poi

struct default_init_tag;

class poi::hssf::record::OldFormulaRecord final
    : public OldCellRecord
{

public:
    typedef OldCellRecord super;
    static constexpr int16_t biff2_sid { int16_t(6) };
    static constexpr int16_t biff3_sid { int16_t(518) };
    static constexpr int16_t biff4_sid { int16_t(1030) };
    static constexpr int16_t biff5_sid { int16_t(6) };

private:
    FormulaRecord_SpecialCachedValue* specialCachedValue {  };
    double field_4_value {  };
    int16_t field_5_options {  };
    ::poi::ss::formula::Formula* field_6_parsed_expr {  };
protected:
    void ctor(RecordInputStream* ris);

public:
    int32_t getCachedResultType();
    bool getCachedBooleanValue();
    int32_t getCachedErrorValue();
    double getValue();
    int16_t getOptions();
    ::poi::ss::formula::ptg::PtgArray* getParsedExpression();
    ::poi::ss::formula::Formula* getFormula();

public: /* protected */
    void appendValueText(::java::lang::StringBuilder* sb) override;
    ::java::lang::String* getRecordName() override;

    // Generated

public:
    OldFormulaRecord(RecordInputStream* ris);
protected:
    OldFormulaRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
