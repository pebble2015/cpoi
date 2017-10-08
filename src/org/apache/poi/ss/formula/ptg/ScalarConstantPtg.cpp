// Generated from /POI/java/org/apache/poi/ss/formula/ptg/ScalarConstantPtg.java
#include <org/apache/poi/ss/formula/ptg/ScalarConstantPtg.hpp>

#include <java/lang/Class.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <org/apache/poi/ss/formula/ptg/Ptg.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::ss::formula::ptg::ScalarConstantPtg::ScalarConstantPtg(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::ptg::ScalarConstantPtg::ScalarConstantPtg()
    : ScalarConstantPtg(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

bool poi::ss::formula::ptg::ScalarConstantPtg::isBaseToken()
{
    return true;
}

int8_t poi::ss::formula::ptg::ScalarConstantPtg::getDefaultOperandClass()
{
    return Ptg::CLASS_VALUE;
}

java::lang::String* poi::ss::formula::ptg::ScalarConstantPtg::toString()
{
    auto sb = new ::java::lang::StringBuffer(int32_t(64));
    npc(npc(sb)->append(npc(getClass())->getName()))->append(u" ["_j);
    npc(sb)->append(toFormulaString());
    npc(sb)->append(u"]"_j);
    return npc(sb)->toString();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::ptg::ScalarConstantPtg::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.ptg.ScalarConstantPtg", 47);
    return c;
}

java::lang::Class* poi::ss::formula::ptg::ScalarConstantPtg::getClass0()
{
    return class_();
}

