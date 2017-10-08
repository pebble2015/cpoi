// Generated from /POI/java/org/apache/poi/ss/formula/functions/Count.java
#include <org/apache/poi/ss/formula/functions/Count.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/ss/formula/eval/ErrorEval.hpp>
#include <org/apache/poi/ss/formula/eval/NumberEval.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>
#include <org/apache/poi/ss/formula/functions/Count_1.hpp>
#include <org/apache/poi/ss/formula/functions/Count_2.hpp>
#include <org/apache/poi/ss/formula/functions/CountUtils_I_MatchPredicate.hpp>
#include <org/apache/poi/ss/formula/functions/CountUtils.hpp>
#include <ObjectArray.hpp>
#include <SubArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace poi
{
    namespace ss
    {
        namespace formula
        {
            namespace eval
            {
typedef ::SubArray< ::poi::ss::formula::eval::ValueEval, ::java::lang::ObjectArray > ValueEvalArray;
            } // eval
        } // formula
    } // ss
} // poi

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::ss::formula::functions::Count::Count(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::functions::Count::Count() 
    : Count(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::ss::formula::functions::Count::Count(CountUtils_I_MatchPredicate* criteriaPredicate) 
    : Count(*static_cast< ::default_init_tag* >(0))
{
    ctor(criteriaPredicate);
}

void poi::ss::formula::functions::Count::ctor()
{
    super::ctor();
    _predicate = defaultPredicate_;
}

void poi::ss::formula::functions::Count::ctor(CountUtils_I_MatchPredicate* criteriaPredicate)
{
    super::ctor();
    _predicate = criteriaPredicate;
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::Count::evaluate(::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcCellRow, int32_t srcCellCol)
{
    auto nArgs = npc(args)->length;
    if(nArgs < 1) {
        return ::poi::ss::formula::eval::ErrorEval::VALUE_INVALID();
    }
    if(nArgs > 30) {
        return ::poi::ss::formula::eval::ErrorEval::VALUE_INVALID();
    }
    auto temp = int32_t(0);
    for (auto i = int32_t(0); i < nArgs; i++) {
        temp += CountUtils::countArg((*args)[i], _predicate);
    }
    return new ::poi::ss::formula::eval::NumberEval(static_cast< double >(temp));
}

poi::ss::formula::functions::CountUtils_I_MatchPredicate*& poi::ss::formula::functions::Count::defaultPredicate()
{
    clinit();
    return defaultPredicate_;
}
poi::ss::formula::functions::CountUtils_I_MatchPredicate* poi::ss::formula::functions::Count::defaultPredicate_;

poi::ss::formula::functions::CountUtils_I_MatchPredicate*& poi::ss::formula::functions::Count::subtotalPredicate()
{
    clinit();
    return subtotalPredicate_;
}
poi::ss::formula::functions::CountUtils_I_MatchPredicate* poi::ss::formula::functions::Count::subtotalPredicate_;

poi::ss::formula::functions::Count* poi::ss::formula::functions::Count::subtotalInstance()
{
    clinit();
    return new Count(subtotalPredicate_);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::functions::Count::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.Count", 41);
    return c;
}

void poi::ss::formula::functions::Count::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        defaultPredicate_ = new Count_1();
        subtotalPredicate_ = new Count_2();
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* poi::ss::formula::functions::Count::getClass0()
{
    return class_();
}

