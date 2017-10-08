// Generated from /POI/java/org/apache/poi/hssf/record/cf/Threshold.java
#include <org/apache/poi/hssf/record/cf/Threshold.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Double.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <java/util/Arrays.hpp>
#include <org/apache/poi/ss/formula/Formula.hpp>
#include <org/apache/poi/ss/formula/ptg/Ptg.hpp>
#include <org/apache/poi/ss/usermodel/ConditionalFormattingThreshold_RangeType.hpp>
#include <org/apache/poi/util/LittleEndianInput.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>
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

poi::hssf::record::cf::Threshold::Threshold(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::cf::Threshold::Threshold() 
    : Threshold(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::hssf::record::cf::Threshold::Threshold(::poi::util::LittleEndianInput* in) 
    : Threshold(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

void poi::hssf::record::cf::Threshold::ctor()
{
    super::ctor();
    type = static_cast< int8_t >(npc(::poi::ss::usermodel::ConditionalFormattingThreshold_RangeType::NUMBER)->id);
    formula = ::poi::ss::formula::Formula::create(nullptr);
    value = ::java::lang::Double::valueOf(0.0);
}

void poi::hssf::record::cf::Threshold::ctor(::poi::util::LittleEndianInput* in)
{
    super::ctor();
    type = npc(in)->readByte();
    auto formulaLen = npc(in)->readShort();
    if(formulaLen > 0) {
        formula = ::poi::ss::formula::Formula::read(formulaLen, in);
    } else {
        formula = ::poi::ss::formula::Formula::create(nullptr);
    }
    if(formulaLen == 0 && type != npc(::poi::ss::usermodel::ConditionalFormattingThreshold_RangeType::MIN)->id && type != npc(::poi::ss::usermodel::ConditionalFormattingThreshold_RangeType::MAX)->id) {
        value = ::java::lang::Double::valueOf(npc(in)->readDouble());
    }
}

int8_t poi::hssf::record::cf::Threshold::getType()
{
    return type;
}

void poi::hssf::record::cf::Threshold::setType(int8_t type)
{
    this->type = type;
    if(type == npc(::poi::ss::usermodel::ConditionalFormattingThreshold_RangeType::MIN)->id || type == npc(::poi::ss::usermodel::ConditionalFormattingThreshold_RangeType::MAX)->id || type == npc(::poi::ss::usermodel::ConditionalFormattingThreshold_RangeType::FORMULA)->id) {
        this->value = nullptr;
    } else if(value == nullptr) {
        this->value = ::java::lang::Double::valueOf(0.0);
    }
}

void poi::hssf::record::cf::Threshold::setType(int32_t type)
{
    this->type = static_cast< int8_t >(type);
}

poi::ss::formula::Formula* poi::hssf::record::cf::Threshold::getFormula()
{
    return formula;
}

poi::ss::formula::ptg::PtgArray* poi::hssf::record::cf::Threshold::getParsedExpression()
{
    return npc(formula)->getTokens();
}

void poi::hssf::record::cf::Threshold::setParsedExpression(::poi::ss::formula::ptg::PtgArray* ptgs)
{
    formula = ::poi::ss::formula::Formula::create(ptgs);
    if(npc(ptgs)->length > 0) {
        this->value = nullptr;
    }
}

java::lang::Double* poi::hssf::record::cf::Threshold::getValue()
{
    return value;
}

void poi::hssf::record::cf::Threshold::setValue(::java::lang::Double* value)
{
    this->value = value;
}

int32_t poi::hssf::record::cf::Threshold::getDataLength()
{
    auto len = int32_t(1) + npc(formula)->getEncodedSize();
    if(value != nullptr) {
        len += 8;
    }
    return len;
}

java::lang::String* poi::hssf::record::cf::Threshold::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"    [CF Threshold]\n"_j);
    npc(npc(npc(buffer)->append(u"          .type    = "_j))->append(::java::lang::Integer::toHexString(type)))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"          .formula = "_j))->append(::java::util::Arrays::toString(static_cast< ::java::lang::ObjectArray* >(npc(formula)->getTokens()))))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"          .value   = "_j))->append(static_cast< ::java::lang::Object* >(value)))->append(u"\n"_j);
    npc(buffer)->append(u"    [/CF Threshold]\n"_j);
    return npc(buffer)->toString();
}

void poi::hssf::record::cf::Threshold::copyTo(Threshold* rec)
{
    npc(rec)->type = type;
    npc(rec)->formula = formula;
    npc(rec)->value = value;
}

void poi::hssf::record::cf::Threshold::serialize(::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeByte(type);
    if(npc(npc(formula)->getTokens())->length == 0) {
        npc(out)->writeShort(0);
    } else {
        npc(formula)->serialize(out);
    }
    if(value != nullptr) {
        npc(out)->writeDouble((npc(value))->doubleValue());
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::cf::Threshold::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.cf.Threshold", 39);
    return c;
}

java::lang::Class* poi::hssf::record::cf::Threshold::getClass0()
{
    return class_();
}

