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

org::apache::poi::hssf::record::cf::Threshold::Threshold(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::cf::Threshold::Threshold() 
    : Threshold(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::hssf::record::cf::Threshold::Threshold(::org::apache::poi::util::LittleEndianInput* in) 
    : Threshold(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

void org::apache::poi::hssf::record::cf::Threshold::ctor()
{
    super::ctor();
    type = static_cast< int8_t >(npc(::org::apache::poi::ss::usermodel::ConditionalFormattingThreshold_RangeType::NUMBER)->id);
    formula = ::org::apache::poi::ss::formula::Formula::create(nullptr);
    value = ::java::lang::Double::valueOf(0.0);
}

void org::apache::poi::hssf::record::cf::Threshold::ctor(::org::apache::poi::util::LittleEndianInput* in)
{
    super::ctor();
    type = npc(in)->readByte();
    auto formulaLen = npc(in)->readShort();
    if(formulaLen > 0) {
        formula = ::org::apache::poi::ss::formula::Formula::read(formulaLen, in);
    } else {
        formula = ::org::apache::poi::ss::formula::Formula::create(nullptr);
    }
    if(formulaLen == 0 && type != npc(::org::apache::poi::ss::usermodel::ConditionalFormattingThreshold_RangeType::MIN)->id && type != npc(::org::apache::poi::ss::usermodel::ConditionalFormattingThreshold_RangeType::MAX)->id) {
        value = ::java::lang::Double::valueOf(npc(in)->readDouble());
    }
}

int8_t org::apache::poi::hssf::record::cf::Threshold::getType()
{
    return type;
}

void org::apache::poi::hssf::record::cf::Threshold::setType(int8_t type)
{
    this->type = type;
    if(type == npc(::org::apache::poi::ss::usermodel::ConditionalFormattingThreshold_RangeType::MIN)->id || type == npc(::org::apache::poi::ss::usermodel::ConditionalFormattingThreshold_RangeType::MAX)->id || type == npc(::org::apache::poi::ss::usermodel::ConditionalFormattingThreshold_RangeType::FORMULA)->id) {
        this->value = nullptr;
    } else if(value == nullptr) {
        this->value = ::java::lang::Double::valueOf(0.0);
    }
}

void org::apache::poi::hssf::record::cf::Threshold::setType(int32_t type)
{
    this->type = static_cast< int8_t >(type);
}

org::apache::poi::ss::formula::Formula* org::apache::poi::hssf::record::cf::Threshold::getFormula()
{
    return formula;
}

org::apache::poi::ss::formula::ptg::PtgArray* org::apache::poi::hssf::record::cf::Threshold::getParsedExpression()
{
    return npc(formula)->getTokens();
}

void org::apache::poi::hssf::record::cf::Threshold::setParsedExpression(::org::apache::poi::ss::formula::ptg::PtgArray* ptgs)
{
    formula = ::org::apache::poi::ss::formula::Formula::create(ptgs);
    if(npc(ptgs)->length > 0) {
        this->value = nullptr;
    }
}

java::lang::Double* org::apache::poi::hssf::record::cf::Threshold::getValue()
{
    return value;
}

void org::apache::poi::hssf::record::cf::Threshold::setValue(::java::lang::Double* value)
{
    this->value = value;
}

int32_t org::apache::poi::hssf::record::cf::Threshold::getDataLength()
{
    auto len = int32_t(1) + npc(formula)->getEncodedSize();
    if(value != nullptr) {
        len += 8;
    }
    return len;
}

java::lang::String* org::apache::poi::hssf::record::cf::Threshold::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"    [CF Threshold]\n"_j);
    npc(npc(npc(buffer)->append(u"          .type    = "_j))->append(::java::lang::Integer::toHexString(type)))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"          .formula = "_j))->append(::java::util::Arrays::toString(static_cast< ::java::lang::ObjectArray* >(npc(formula)->getTokens()))))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"          .value   = "_j))->append(static_cast< ::java::lang::Object* >(value)))->append(u"\n"_j);
    npc(buffer)->append(u"    [/CF Threshold]\n"_j);
    return npc(buffer)->toString();
}

void org::apache::poi::hssf::record::cf::Threshold::copyTo(Threshold* rec)
{
    npc(rec)->type = type;
    npc(rec)->formula = formula;
    npc(rec)->value = value;
}

void org::apache::poi::hssf::record::cf::Threshold::serialize(::org::apache::poi::util::LittleEndianOutput* out)
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

java::lang::Class* org::apache::poi::hssf::record::cf::Threshold::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.cf.Threshold", 39);
    return c;
}

java::lang::Class* org::apache::poi::hssf::record::cf::Threshold::getClass0()
{
    return class_();
}

