// Generated from /POI/java/org/apache/poi/ss/formula/ptg/UnknownPtg.java
#include <org/apache/poi/ss/formula/ptg/UnknownPtg.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <org/apache/poi/ss/formula/ptg/Ptg.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::ss::formula::ptg::UnknownPtg::UnknownPtg(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::ptg::UnknownPtg::UnknownPtg(int32_t sid) 
    : UnknownPtg(*static_cast< ::default_init_tag* >(0))
{
    ctor(sid);
}

void org::apache::poi::ss::formula::ptg::UnknownPtg::init()
{
    size = int32_t(1);
}

void org::apache::poi::ss::formula::ptg::UnknownPtg::ctor(int32_t sid)
{
    super::ctor();
    init();
    _sid = sid;
}

bool org::apache::poi::ss::formula::ptg::UnknownPtg::isBaseToken()
{
    return true;
}

void org::apache::poi::ss::formula::ptg::UnknownPtg::write(::org::apache::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeByte(_sid);
}

int32_t org::apache::poi::ss::formula::ptg::UnknownPtg::getSize()
{
    return size;
}

java::lang::String* org::apache::poi::ss::formula::ptg::UnknownPtg::toFormulaString()
{
    return u"UNKNOWN"_j;
}

int8_t org::apache::poi::ss::formula::ptg::UnknownPtg::getDefaultOperandClass()
{
    return Ptg::CLASS_VALUE;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::ptg::UnknownPtg::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.ptg.UnknownPtg", 40);
    return c;
}

java::lang::Class* org::apache::poi::ss::formula::ptg::UnknownPtg::getClass0()
{
    return class_();
}

