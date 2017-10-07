// Generated from /POI/java/org/apache/poi/ss/formula/ptg/OperandPtg.java
#include <org/apache/poi/ss/formula/ptg/OperandPtg.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/CloneNotSupportedException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/Throwable.hpp>

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(nullptr);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

org::apache::poi::ss::formula::ptg::OperandPtg::OperandPtg(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::ptg::OperandPtg::OperandPtg()
    : OperandPtg(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

bool org::apache::poi::ss::formula::ptg::OperandPtg::isBaseToken()
{
    return false;
}

org::apache::poi::ss::formula::ptg::OperandPtg* org::apache::poi::ss::formula::ptg::OperandPtg::copy()
{
    try {
        return java_cast< OperandPtg* >(clone());
    } catch (::java::lang::CloneNotSupportedException* e) {
        throw new ::java::lang::RuntimeException(static_cast< ::java::lang::Throwable* >(e));
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::ptg::OperandPtg::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.ptg.OperandPtg", 40);
    return c;
}

java::lang::Class* org::apache::poi::ss::formula::ptg::OperandPtg::getClass0()
{
    return class_();
}

