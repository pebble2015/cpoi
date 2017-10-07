// Generated from /POI/java/org/apache/poi/ss/formula/ptg/ArrayPtg.java
#include <org/apache/poi/ss/formula/ptg/ArrayPtg_Initial.hpp>

#include <java/lang/IllegalStateException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <org/apache/poi/ss/formula/constant/ConstantValueParser.hpp>
#include <org/apache/poi/ss/formula/ptg/ArrayPtg.hpp>
#include <org/apache/poi/util/LittleEndianInput.hpp>
#include <ObjectArray.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::ss::formula::ptg::ArrayPtg_Initial::ArrayPtg_Initial(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::ptg::ArrayPtg_Initial::ArrayPtg_Initial(::org::apache::poi::util::LittleEndianInput* in) 
    : ArrayPtg_Initial(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

void org::apache::poi::ss::formula::ptg::ArrayPtg_Initial::ctor(::org::apache::poi::util::LittleEndianInput* in)
{
    super::ctor();
    _reserved0 = npc(in)->readInt();
    _reserved1 = npc(in)->readUShort();
    _reserved2 = npc(in)->readUByte();
}

java::lang::RuntimeException* org::apache::poi::ss::formula::ptg::ArrayPtg_Initial::invalid()
{
    clinit();
    throw new ::java::lang::IllegalStateException(u"This object is a partially initialised tArray, and cannot be used as a Ptg"_j);
}

int8_t org::apache::poi::ss::formula::ptg::ArrayPtg_Initial::getDefaultOperandClass()
{
    throw invalid();
}

int32_t org::apache::poi::ss::formula::ptg::ArrayPtg_Initial::getSize()
{
    return ArrayPtg::PLAIN_TOKEN_SIZE;
}

bool org::apache::poi::ss::formula::ptg::ArrayPtg_Initial::isBaseToken()
{
    return false;
}

java::lang::String* org::apache::poi::ss::formula::ptg::ArrayPtg_Initial::toFormulaString()
{
    throw invalid();
}

void org::apache::poi::ss::formula::ptg::ArrayPtg_Initial::write(::org::apache::poi::util::LittleEndianOutput* out)
{
    throw invalid();
}

org::apache::poi::ss::formula::ptg::ArrayPtg* org::apache::poi::ss::formula::ptg::ArrayPtg_Initial::finishReading(::org::apache::poi::util::LittleEndianInput* in)
{
    auto nColumns = npc(in)->readUByte();
    auto nRows = npc(in)->readShort();
    nColumns++;
    nRows++;
    auto totalCount = nRows * nColumns;
    auto arrayValues = ::org::apache::poi::ss::formula::constant::ConstantValueParser::parse(in, totalCount);
    auto result = new ArrayPtg(_reserved0, _reserved1, _reserved2, nColumns, nRows, arrayValues);
    npc(result)->setClass(getPtgClass());
    return result;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::ptg::ArrayPtg_Initial::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.ptg.ArrayPtg.Initial", 46);
    return c;
}

java::lang::Class* org::apache::poi::ss::formula::ptg::ArrayPtg_Initial::getClass0()
{
    return class_();
}

