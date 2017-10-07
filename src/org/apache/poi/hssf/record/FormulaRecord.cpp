// Generated from /POI/java/org/apache/poi/hssf/record/FormulaRecord.java
#include <org/apache/poi/hssf/record/FormulaRecord.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Double.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/hssf/record/FormulaRecord_SpecialCachedValue.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream.hpp>
#include <org/apache/poi/ss/formula/Formula.hpp>
#include <org/apache/poi/ss/formula/ptg/Ptg.hpp>
#include <org/apache/poi/ss/usermodel/CellType.hpp>
#include <org/apache/poi/util/BitField.hpp>
#include <org/apache/poi/util/BitFieldFactory.hpp>
#include <org/apache/poi/util/HexDump.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>
#include <ObjectArray.hpp>
#include <SubArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace org
{
    namespace apache
    {
        namespace poi
        {
            namespace ss
            {
                namespace formula
                {
                    namespace ptg
                    {
typedef ::SubArray< ::org::apache::poi::ss::formula::ptg::Ptg, ::java::lang::ObjectArray > PtgArray;
                    } // ptg
                } // formula
            } // ss
        } // poi
    } // apache
} // org

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::hssf::record::FormulaRecord::FormulaRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::FormulaRecord::FormulaRecord() 
    : FormulaRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::hssf::record::FormulaRecord::FormulaRecord(RecordInputStream* ris) 
    : FormulaRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(ris);
}

constexpr int16_t org::apache::poi::hssf::record::FormulaRecord::sid;

int32_t& org::apache::poi::hssf::record::FormulaRecord::FIXED_SIZE()
{
    clinit();
    return FIXED_SIZE_;
}
int32_t org::apache::poi::hssf::record::FormulaRecord::FIXED_SIZE_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::FormulaRecord::alwaysCalc()
{
    clinit();
    return alwaysCalc_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::FormulaRecord::alwaysCalc_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::FormulaRecord::calcOnLoad()
{
    clinit();
    return calcOnLoad_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::FormulaRecord::calcOnLoad_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::FormulaRecord::sharedFormula()
{
    clinit();
    return sharedFormula_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::FormulaRecord::sharedFormula_;

void org::apache::poi::hssf::record::FormulaRecord::ctor()
{
    super::ctor();
    field_8_parsed_expr = ::org::apache::poi::ss::formula::Formula::create(::org::apache::poi::ss::formula::ptg::Ptg::EMPTY_PTG_ARRAY());
}

void org::apache::poi::hssf::record::FormulaRecord::ctor(RecordInputStream* ris)
{
    super::ctor(ris);
    auto valueLongBits = npc(ris)->readLong();
    field_5_options = npc(ris)->readShort();
    specialCachedValue = FormulaRecord_SpecialCachedValue::create(valueLongBits);
    if(specialCachedValue == nullptr) {
        field_4_value = ::java::lang::Double::longBitsToDouble(valueLongBits);
    }
    field_6_zero = npc(ris)->readInt();
    int32_t field_7_expression_len = npc(ris)->readShort();
    auto nBytesAvailable = npc(ris)->available();
    field_8_parsed_expr = ::org::apache::poi::ss::formula::Formula::read(field_7_expression_len, ris, nBytesAvailable);
}

void org::apache::poi::hssf::record::FormulaRecord::setValue(double value)
{
    field_4_value = value;
    specialCachedValue = nullptr;
}

void org::apache::poi::hssf::record::FormulaRecord::setCachedResultTypeEmptyString()
{
    specialCachedValue = FormulaRecord_SpecialCachedValue::createCachedEmptyValue();
}

void org::apache::poi::hssf::record::FormulaRecord::setCachedResultTypeString()
{
    specialCachedValue = FormulaRecord_SpecialCachedValue::createForString();
}

void org::apache::poi::hssf::record::FormulaRecord::setCachedResultErrorCode(int32_t errorCode)
{
    specialCachedValue = FormulaRecord_SpecialCachedValue::createCachedErrorCode(errorCode);
}

void org::apache::poi::hssf::record::FormulaRecord::setCachedResultBoolean(bool value)
{
    specialCachedValue = FormulaRecord_SpecialCachedValue::createCachedBoolean(value);
}

bool org::apache::poi::hssf::record::FormulaRecord::hasCachedResultString()
{
    return specialCachedValue != nullptr && npc(specialCachedValue)->getTypeCode() == FormulaRecord_SpecialCachedValue::STRING;
}

int32_t org::apache::poi::hssf::record::FormulaRecord::getCachedResultType()
{
    if(specialCachedValue == nullptr) {
        return npc(::org::apache::poi::ss::usermodel::CellType::NUMERIC)->getCode();
    }
    return npc(specialCachedValue)->getValueType();
}

bool org::apache::poi::hssf::record::FormulaRecord::getCachedBooleanValue()
{
    return npc(specialCachedValue)->getBooleanValue();
}

int32_t org::apache::poi::hssf::record::FormulaRecord::getCachedErrorValue()
{
    return npc(specialCachedValue)->getErrorValue();
}

void org::apache::poi::hssf::record::FormulaRecord::setOptions(int16_t options)
{
    field_5_options = options;
}

double org::apache::poi::hssf::record::FormulaRecord::getValue()
{
    return field_4_value;
}

int16_t org::apache::poi::hssf::record::FormulaRecord::getOptions()
{
    return field_5_options;
}

bool org::apache::poi::hssf::record::FormulaRecord::isSharedFormula()
{
    return npc(sharedFormula_)->isSet(field_5_options);
}

void org::apache::poi::hssf::record::FormulaRecord::setSharedFormula(bool flag)
{
    field_5_options = npc(sharedFormula_)->setShortBoolean(field_5_options, flag);
}

bool org::apache::poi::hssf::record::FormulaRecord::isAlwaysCalc()
{
    return npc(alwaysCalc_)->isSet(field_5_options);
}

void org::apache::poi::hssf::record::FormulaRecord::setAlwaysCalc(bool flag)
{
    field_5_options = npc(alwaysCalc_)->setShortBoolean(field_5_options, flag);
}

bool org::apache::poi::hssf::record::FormulaRecord::isCalcOnLoad()
{
    return npc(calcOnLoad_)->isSet(field_5_options);
}

void org::apache::poi::hssf::record::FormulaRecord::setCalcOnLoad(bool flag)
{
    field_5_options = npc(calcOnLoad_)->setShortBoolean(field_5_options, flag);
}

org::apache::poi::ss::formula::ptg::PtgArray* org::apache::poi::hssf::record::FormulaRecord::getParsedExpression()
{
    return npc(field_8_parsed_expr)->getTokens();
}

org::apache::poi::ss::formula::Formula* org::apache::poi::hssf::record::FormulaRecord::getFormula()
{
    return field_8_parsed_expr;
}

void org::apache::poi::hssf::record::FormulaRecord::setParsedExpression(::org::apache::poi::ss::formula::ptg::PtgArray* ptgs)
{
    field_8_parsed_expr = ::org::apache::poi::ss::formula::Formula::create(ptgs);
}

int16_t org::apache::poi::hssf::record::FormulaRecord::getSid()
{
    return sid;
}

int32_t org::apache::poi::hssf::record::FormulaRecord::getValueDataSize()
{
    return FIXED_SIZE_ + npc(field_8_parsed_expr)->getEncodedSize();
}

void org::apache::poi::hssf::record::FormulaRecord::serializeValue(::org::apache::poi::util::LittleEndianOutput* out)
{
    if(specialCachedValue == nullptr) {
        npc(out)->writeDouble(field_4_value);
    } else {
        npc(specialCachedValue)->serialize(out);
    }
    npc(out)->writeShort(getOptions());
    npc(out)->writeInt(field_6_zero);
    npc(field_8_parsed_expr)->serialize(out);
}

java::lang::String* org::apache::poi::hssf::record::FormulaRecord::getRecordName()
{
    return u"FORMULA"_j;
}

void org::apache::poi::hssf::record::FormulaRecord::appendValueText(::java::lang::StringBuilder* sb)
{
    npc(sb)->append(u"  .value	 = "_j);
    if(specialCachedValue == nullptr) {
        npc(npc(sb)->append(field_4_value))->append(u"\n"_j);
    } else {
        npc(npc(sb)->append(npc(specialCachedValue)->formatDebugString()))->append(u"\n"_j);
    }
    npc(npc(npc(sb)->append(u"  .options   = "_j))->append(::org::apache::poi::util::HexDump::shortToHex(getOptions())))->append(u"\n"_j);
    npc(npc(npc(sb)->append(u"    .alwaysCalc= "_j))->append(isAlwaysCalc()))->append(u"\n"_j);
    npc(npc(npc(sb)->append(u"    .calcOnLoad= "_j))->append(isCalcOnLoad()))->append(u"\n"_j);
    npc(npc(npc(sb)->append(u"    .shared    = "_j))->append(isSharedFormula()))->append(u"\n"_j);
    npc(npc(npc(sb)->append(u"  .zero      = "_j))->append(::org::apache::poi::util::HexDump::intToHex(field_6_zero)))->append(u"\n"_j);
    auto ptgs = npc(field_8_parsed_expr)->getTokens();
    for (auto k = int32_t(0); k < npc(ptgs)->length; k++) {
        if(k > 0) {
            npc(sb)->append(u"\n"_j);
        }
        npc(npc(npc(sb)->append(u"    Ptg["_j))->append(k))->append(u"]="_j);
        auto ptg = (*ptgs)[k];
        npc(npc(sb)->append(static_cast< ::java::lang::Object* >(ptg)))->append(npc(ptg)->getRVAType());
    }
}

org::apache::poi::hssf::record::FormulaRecord* org::apache::poi::hssf::record::FormulaRecord::clone()
{
    auto rec = new FormulaRecord();
    copyBaseFields(rec);
    npc(rec)->field_4_value = field_4_value;
    npc(rec)->field_5_options = field_5_options;
    npc(rec)->field_6_zero = field_6_zero;
    npc(rec)->field_8_parsed_expr = field_8_parsed_expr;
    npc(rec)->specialCachedValue = specialCachedValue;
    return rec;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::FormulaRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.FormulaRecord", 40);
    return c;
}

void org::apache::poi::hssf::record::FormulaRecord::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        FIXED_SIZE_ = int32_t(14);
        alwaysCalc_ = ::org::apache::poi::util::BitFieldFactory::getInstance(1);
        calcOnLoad_ = ::org::apache::poi::util::BitFieldFactory::getInstance(2);
        sharedFormula_ = ::org::apache::poi::util::BitFieldFactory::getInstance(8);
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* org::apache::poi::hssf::record::FormulaRecord::getClass0()
{
    return class_();
}

