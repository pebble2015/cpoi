// Generated from /POI/java/org/apache/poi/ss/formula/ptg/ValueOperatorPtg.java
#include <org/apache/poi/ss/formula/ptg/ValueOperatorPtg.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <org/apache/poi/ss/formula/ptg/Ptg.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::ss::formula::ptg::ValueOperatorPtg::ValueOperatorPtg(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::ptg::ValueOperatorPtg::ValueOperatorPtg()
    : ValueOperatorPtg(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

bool poi::ss::formula::ptg::ValueOperatorPtg::isBaseToken()
{
    return true;
}

int8_t poi::ss::formula::ptg::ValueOperatorPtg::getDefaultOperandClass()
{
    return Ptg::CLASS_VALUE;
}

void poi::ss::formula::ptg::ValueOperatorPtg::write(::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeByte(getSid());
}

int32_t poi::ss::formula::ptg::ValueOperatorPtg::getSize()
{
    return 1;
}

java::lang::String* poi::ss::formula::ptg::ValueOperatorPtg::toFormulaString()
{
    throw new ::java::lang::RuntimeException(u"toFormulaString(String[] operands) should be used for subclasses of OperationPtgs"_j);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::ptg::ValueOperatorPtg::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.ptg.ValueOperatorPtg", 46);
    return c;
}

java::lang::Class* poi::ss::formula::ptg::ValueOperatorPtg::getClass0()
{
    return class_();
}

