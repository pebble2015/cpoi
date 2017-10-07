// Generated from /POI/java/org/apache/poi/ss/formula/functions/Countif.java
#include <org/apache/poi/ss/formula/functions/Countif_MatcherBase.hpp>

#include <java/lang/Class.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <org/apache/poi/ss/formula/functions/Countif_CmpOp.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::ss::formula::functions::Countif_MatcherBase::Countif_MatcherBase(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::functions::Countif_MatcherBase::Countif_MatcherBase(Countif_CmpOp* operator_) 
    : Countif_MatcherBase(*static_cast< ::default_init_tag* >(0))
{
    ctor(operator_);
}

void org::apache::poi::ss::formula::functions::Countif_MatcherBase::ctor(Countif_CmpOp* operator_)
{
    super::ctor();
    _operator = operator_;
}

int32_t org::apache::poi::ss::formula::functions::Countif_MatcherBase::getCode()
{
    return npc(_operator)->getCode();
}

bool org::apache::poi::ss::formula::functions::Countif_MatcherBase::evaluate(int32_t cmpResult)
{
    return npc(_operator)->evaluate(cmpResult);
}

bool org::apache::poi::ss::formula::functions::Countif_MatcherBase::evaluate(bool cmpResult)
{
    return npc(_operator)->evaluate(cmpResult);
}

java::lang::String* org::apache::poi::ss::formula::functions::Countif_MatcherBase::toString()
{
    auto sb = new ::java::lang::StringBuffer(int32_t(64));
    npc(npc(sb)->append(npc(getClass())->getName()))->append(u" ["_j);
    npc(sb)->append(npc(_operator)->getRepresentation());
    npc(sb)->append(getValueText());
    npc(sb)->append(u"]"_j);
    return npc(sb)->toString();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::functions::Countif_MatcherBase::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.Countif.MatcherBase", 55);
    return c;
}

java::lang::Class* org::apache::poi::ss::formula::functions::Countif_MatcherBase::getClass0()
{
    return class_();
}

