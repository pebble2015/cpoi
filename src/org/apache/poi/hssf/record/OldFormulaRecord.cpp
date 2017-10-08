// Generated from /POI/java/org/apache/poi/hssf/record/OldFormulaRecord.java
#include <org/apache/poi/hssf/record/OldFormulaRecord.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Double.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/hssf/record/FormulaRecord_SpecialCachedValue.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream.hpp>
#include <org/apache/poi/ss/formula/Formula.hpp>
#include <org/apache/poi/ss/formula/ptg/Ptg.hpp>
#include <org/apache/poi/ss/usermodel/CellType.hpp>
#include <ObjectArray.hpp>
#include <SubArray.hpp>

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

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::hssf::record::OldFormulaRecord::OldFormulaRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::OldFormulaRecord::OldFormulaRecord(RecordInputStream* ris) 
    : OldFormulaRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(ris);
}

constexpr int16_t poi::hssf::record::OldFormulaRecord::biff2_sid;

constexpr int16_t poi::hssf::record::OldFormulaRecord::biff3_sid;

constexpr int16_t poi::hssf::record::OldFormulaRecord::biff4_sid;

constexpr int16_t poi::hssf::record::OldFormulaRecord::biff5_sid;

void poi::hssf::record::OldFormulaRecord::ctor(RecordInputStream* ris)
{
    super::ctor(ris, npc(ris)->getSid() == biff2_sid);
    if(isBiff2()) {
        field_4_value = npc(ris)->readDouble();
    } else {
        auto valueLongBits = npc(ris)->readLong();
        specialCachedValue = FormulaRecord_SpecialCachedValue::create(valueLongBits);
        if(specialCachedValue == nullptr) {
            field_4_value = ::java::lang::Double::longBitsToDouble(valueLongBits);
        }
    }
    if(isBiff2()) {
        field_5_options = static_cast< int16_t >(npc(ris)->readUByte());
    } else {
        field_5_options = npc(ris)->readShort();
    }
    int32_t expression_len = npc(ris)->readShort();
    auto nBytesAvailable = npc(ris)->available();
    field_6_parsed_expr = ::poi::ss::formula::Formula::read(expression_len, ris, nBytesAvailable);
}

int32_t poi::hssf::record::OldFormulaRecord::getCachedResultType()
{
    if(specialCachedValue == nullptr) {
        return npc(::poi::ss::usermodel::CellType::NUMERIC)->getCode();
    }
    return npc(specialCachedValue)->getValueType();
}

bool poi::hssf::record::OldFormulaRecord::getCachedBooleanValue()
{
    return npc(specialCachedValue)->getBooleanValue();
}

int32_t poi::hssf::record::OldFormulaRecord::getCachedErrorValue()
{
    return npc(specialCachedValue)->getErrorValue();
}

double poi::hssf::record::OldFormulaRecord::getValue()
{
    return field_4_value;
}

int16_t poi::hssf::record::OldFormulaRecord::getOptions()
{
    return field_5_options;
}

poi::ss::formula::ptg::PtgArray* poi::hssf::record::OldFormulaRecord::getParsedExpression()
{
    return npc(field_6_parsed_expr)->getTokens();
}

poi::ss::formula::Formula* poi::hssf::record::OldFormulaRecord::getFormula()
{
    return field_6_parsed_expr;
}

void poi::hssf::record::OldFormulaRecord::appendValueText(::java::lang::StringBuilder* sb)
{
    npc(npc(npc(sb)->append(u"    .value       = "_j))->append(getValue()))->append(u"\n"_j);
}

java::lang::String* poi::hssf::record::OldFormulaRecord::getRecordName()
{
    return u"Old Formula"_j;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::OldFormulaRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.OldFormulaRecord", 43);
    return c;
}

java::lang::Class* poi::hssf::record::OldFormulaRecord::getClass0()
{
    return class_();
}

