// Generated from /POI/java/org/apache/poi/ss/formula/functions/Countblank.java
#include <org/apache/poi/ss/formula/functions/Countblank.hpp>

#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/ss/formula/ThreeDEval.hpp>
#include <org/apache/poi/ss/formula/eval/NumberEval.hpp>
#include <org/apache/poi/ss/formula/eval/RefEval.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>
#include <org/apache/poi/ss/formula/functions/CountUtils.hpp>
#include <org/apache/poi/ss/formula/functions/Countblank_1.hpp>

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
                    namespace eval
                    {
typedef ::SubArray< ::org::apache::poi::ss::formula::eval::ValueEval, ::java::lang::ObjectArray > ValueEvalArray;
                    } // eval
                } // formula
            } // ss
        } // poi
    } // apache
} // org

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(nullptr);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::ss::formula::functions::Countblank::Countblank(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::functions::Countblank::Countblank()
    : Countblank(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::functions::Countblank::evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::org::apache::poi::ss::formula::eval::ValueEval* arg0)
{
    double result;
    if(dynamic_cast< ::org::apache::poi::ss::formula::eval::RefEval* >(arg0) != nullptr) {
        result = CountUtils::countMatchingCellsInRef(java_cast< ::org::apache::poi::ss::formula::eval::RefEval* >(arg0), predicate_);
    } else if(dynamic_cast< ::org::apache::poi::ss::formula::ThreeDEval* >(arg0) != nullptr) {
        result = CountUtils::countMatchingCellsInArea(java_cast< ::org::apache::poi::ss::formula::ThreeDEval* >(arg0), predicate_);
    } else {
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Bad range arg type ("_j)->append(npc(npc(arg0)->getClass())->getName())
            ->append(u")"_j)->toString());
    }
    return new ::org::apache::poi::ss::formula::eval::NumberEval(result);
}

org::apache::poi::ss::formula::functions::CountUtils_I_MatchPredicate*& org::apache::poi::ss::formula::functions::Countblank::predicate()
{
    clinit();
    return predicate_;
}
org::apache::poi::ss::formula::functions::CountUtils_I_MatchPredicate* org::apache::poi::ss::formula::functions::Countblank::predicate_;

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::functions::Countblank::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.Countblank", 46);
    return c;
}

void org::apache::poi::ss::formula::functions::Countblank::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        predicate_ = new Countblank_1();
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::functions::Countblank::evaluate(::org::apache::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex)
{
    return super::evaluate(args, srcRowIndex, srcColumnIndex);
}

java::lang::Class* org::apache::poi::ss::formula::functions::Countblank::getClass0()
{
    return class_();
}

