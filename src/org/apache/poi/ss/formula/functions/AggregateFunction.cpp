// Generated from /POI/java/org/apache/poi/ss/formula/functions/AggregateFunction.java
#include <org/apache/poi/ss/formula/functions/AggregateFunction.hpp>

#include <java/lang/ClassCastException.hpp>
#include <org/apache/poi/ss/formula/functions/AggregateFunction_subtotalInstance_13.hpp>
#include <org/apache/poi/ss/formula/functions/AggregateFunction_1.hpp>
#include <org/apache/poi/ss/formula/functions/AggregateFunction_2.hpp>
#include <org/apache/poi/ss/formula/functions/AggregateFunction_3.hpp>
#include <org/apache/poi/ss/formula/functions/AggregateFunction_4.hpp>
#include <org/apache/poi/ss/formula/functions/AggregateFunction_5.hpp>
#include <org/apache/poi/ss/formula/functions/AggregateFunction_6.hpp>
#include <org/apache/poi/ss/formula/functions/AggregateFunction_7.hpp>
#include <org/apache/poi/ss/formula/functions/AggregateFunction_8.hpp>
#include <org/apache/poi/ss/formula/functions/AggregateFunction_9.hpp>
#include <org/apache/poi/ss/formula/functions/AggregateFunction_10.hpp>
#include <org/apache/poi/ss/formula/functions/AggregateFunction_11.hpp>
#include <org/apache/poi/ss/formula/functions/AggregateFunction_12.hpp>
#include <org/apache/poi/ss/formula/functions/AggregateFunction_LargeSmall.hpp>
#include <org/apache/poi/ss/formula/functions/AggregateFunction_Percentile.hpp>
#include <org/apache/poi/ss/formula/functions/Function.hpp>

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(nullptr);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

org::apache::poi::ss::formula::functions::AggregateFunction::AggregateFunction(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::functions::AggregateFunction::AggregateFunction() 
    : AggregateFunction(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void org::apache::poi::ss::formula::functions::AggregateFunction::ctor()
{
    super::ctor(false, false);
}

org::apache::poi::ss::formula::functions::Function* org::apache::poi::ss::formula::functions::AggregateFunction::subtotalInstance(Function* func)
{
    clinit();
    auto const arg = java_cast< AggregateFunction* >(func);
    return new AggregateFunction_subtotalInstance_13(arg);
}

org::apache::poi::ss::formula::functions::Function*& org::apache::poi::ss::formula::functions::AggregateFunction::AVEDEV()
{
    clinit();
    return AVEDEV_;
}
org::apache::poi::ss::formula::functions::Function* org::apache::poi::ss::formula::functions::AggregateFunction::AVEDEV_;

org::apache::poi::ss::formula::functions::Function*& org::apache::poi::ss::formula::functions::AggregateFunction::AVERAGE()
{
    clinit();
    return AVERAGE_;
}
org::apache::poi::ss::formula::functions::Function* org::apache::poi::ss::formula::functions::AggregateFunction::AVERAGE_;

org::apache::poi::ss::formula::functions::Function*& org::apache::poi::ss::formula::functions::AggregateFunction::DEVSQ()
{
    clinit();
    return DEVSQ_;
}
org::apache::poi::ss::formula::functions::Function* org::apache::poi::ss::formula::functions::AggregateFunction::DEVSQ_;

org::apache::poi::ss::formula::functions::Function*& org::apache::poi::ss::formula::functions::AggregateFunction::LARGE()
{
    clinit();
    return LARGE_;
}
org::apache::poi::ss::formula::functions::Function* org::apache::poi::ss::formula::functions::AggregateFunction::LARGE_;

org::apache::poi::ss::formula::functions::Function*& org::apache::poi::ss::formula::functions::AggregateFunction::MAX()
{
    clinit();
    return MAX_;
}
org::apache::poi::ss::formula::functions::Function* org::apache::poi::ss::formula::functions::AggregateFunction::MAX_;

org::apache::poi::ss::formula::functions::Function*& org::apache::poi::ss::formula::functions::AggregateFunction::MEDIAN()
{
    clinit();
    return MEDIAN_;
}
org::apache::poi::ss::formula::functions::Function* org::apache::poi::ss::formula::functions::AggregateFunction::MEDIAN_;

org::apache::poi::ss::formula::functions::Function*& org::apache::poi::ss::formula::functions::AggregateFunction::MIN()
{
    clinit();
    return MIN_;
}
org::apache::poi::ss::formula::functions::Function* org::apache::poi::ss::formula::functions::AggregateFunction::MIN_;

org::apache::poi::ss::formula::functions::Function*& org::apache::poi::ss::formula::functions::AggregateFunction::PERCENTILE()
{
    clinit();
    return PERCENTILE_;
}
org::apache::poi::ss::formula::functions::Function* org::apache::poi::ss::formula::functions::AggregateFunction::PERCENTILE_;

org::apache::poi::ss::formula::functions::Function*& org::apache::poi::ss::formula::functions::AggregateFunction::PRODUCT()
{
    clinit();
    return PRODUCT_;
}
org::apache::poi::ss::formula::functions::Function* org::apache::poi::ss::formula::functions::AggregateFunction::PRODUCT_;

org::apache::poi::ss::formula::functions::Function*& org::apache::poi::ss::formula::functions::AggregateFunction::SMALL()
{
    clinit();
    return SMALL_;
}
org::apache::poi::ss::formula::functions::Function* org::apache::poi::ss::formula::functions::AggregateFunction::SMALL_;

org::apache::poi::ss::formula::functions::Function*& org::apache::poi::ss::formula::functions::AggregateFunction::STDEV()
{
    clinit();
    return STDEV_;
}
org::apache::poi::ss::formula::functions::Function* org::apache::poi::ss::formula::functions::AggregateFunction::STDEV_;

org::apache::poi::ss::formula::functions::Function*& org::apache::poi::ss::formula::functions::AggregateFunction::SUM()
{
    clinit();
    return SUM_;
}
org::apache::poi::ss::formula::functions::Function* org::apache::poi::ss::formula::functions::AggregateFunction::SUM_;

org::apache::poi::ss::formula::functions::Function*& org::apache::poi::ss::formula::functions::AggregateFunction::SUMSQ()
{
    clinit();
    return SUMSQ_;
}
org::apache::poi::ss::formula::functions::Function* org::apache::poi::ss::formula::functions::AggregateFunction::SUMSQ_;

org::apache::poi::ss::formula::functions::Function*& org::apache::poi::ss::formula::functions::AggregateFunction::VAR()
{
    clinit();
    return VAR_;
}
org::apache::poi::ss::formula::functions::Function* org::apache::poi::ss::formula::functions::AggregateFunction::VAR_;

org::apache::poi::ss::formula::functions::Function*& org::apache::poi::ss::formula::functions::AggregateFunction::VARP()
{
    clinit();
    return VARP_;
}
org::apache::poi::ss::formula::functions::Function* org::apache::poi::ss::formula::functions::AggregateFunction::VARP_;

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::functions::AggregateFunction::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.AggregateFunction", 53);
    return c;
}

void org::apache::poi::ss::formula::functions::AggregateFunction::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        AVEDEV_ = new AggregateFunction_1();
        AVERAGE_ = new AggregateFunction_2();
        DEVSQ_ = new AggregateFunction_3();
        LARGE_ = new AggregateFunction_LargeSmall(true);
        MAX_ = new AggregateFunction_4();
        MEDIAN_ = new AggregateFunction_5();
        MIN_ = new AggregateFunction_6();
        PERCENTILE_ = new AggregateFunction_Percentile();
        PRODUCT_ = new AggregateFunction_7();
        SMALL_ = new AggregateFunction_LargeSmall(false);
        STDEV_ = new AggregateFunction_8();
        SUM_ = new AggregateFunction_9();
        SUMSQ_ = new AggregateFunction_10();
        VAR_ = new AggregateFunction_11();
        VARP_ = new AggregateFunction_12();
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* org::apache::poi::ss::formula::functions::AggregateFunction::getClass0()
{
    return class_();
}

