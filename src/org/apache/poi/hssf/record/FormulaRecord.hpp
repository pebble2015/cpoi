// Generated from /POI/java/org/apache/poi/hssf/record/FormulaRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/CellRecord.hpp>
#include <java/lang/Cloneable.hpp>

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

class poi::hssf::record::FormulaRecord final
    : public CellRecord
    , public ::java::lang::Cloneable
{

public:
    typedef CellRecord super;
    static constexpr int16_t sid { int16_t(6) };

private:
    static int32_t FIXED_SIZE_;
    static ::poi::util::BitField* alwaysCalc_;
    static ::poi::util::BitField* calcOnLoad_;
    static ::poi::util::BitField* sharedFormula_;
    double field_4_value {  };
    int16_t field_5_options {  };
    int32_t field_6_zero {  };
    ::poi::ss::formula::Formula* field_8_parsed_expr {  };
    FormulaRecord_SpecialCachedValue* specialCachedValue {  };
protected:
    void ctor();
    void ctor(RecordInputStream* ris);

public:
    void setValue(double value);
    void setCachedResultTypeEmptyString();
    void setCachedResultTypeString();
    void setCachedResultErrorCode(int32_t errorCode);
    void setCachedResultBoolean(bool value);
    bool hasCachedResultString();
    int32_t getCachedResultType();
    bool getCachedBooleanValue();
    int32_t getCachedErrorValue();
    void setOptions(int16_t options);
    double getValue();
    int16_t getOptions();
    bool isSharedFormula();
    void setSharedFormula(bool flag);
    bool isAlwaysCalc();
    void setAlwaysCalc(bool flag);
    bool isCalcOnLoad();
    void setCalcOnLoad(bool flag);
    ::poi::ss::formula::ptg::PtgArray* getParsedExpression();
    ::poi::ss::formula::Formula* getFormula();
    void setParsedExpression(::poi::ss::formula::ptg::PtgArray* ptgs);
    int16_t getSid() override;

public: /* protected */
    int32_t getValueDataSize() override;
    void serializeValue(::poi::util::LittleEndianOutput* out) override;
    ::java::lang::String* getRecordName() override;
    void appendValueText(::java::lang::StringBuilder* sb) override;

public:
    FormulaRecord* clone() override;

    // Generated
    FormulaRecord();
    FormulaRecord(RecordInputStream* ris);
protected:
    FormulaRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static int32_t& FIXED_SIZE();
    static ::poi::util::BitField*& alwaysCalc();
    static ::poi::util::BitField*& calcOnLoad();
    static ::poi::util::BitField*& sharedFormula();
    virtual ::java::lang::Class* getClass0();
    friend class FormulaRecord_SpecialCachedValue;
};
