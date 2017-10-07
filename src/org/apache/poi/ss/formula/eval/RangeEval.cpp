// Generated from /POI/java/org/apache/poi/ss/formula/eval/RangeEval.java
#include <org/apache/poi/ss/formula/eval/RangeEval.hpp>

#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/Math.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/ss/formula/eval/AreaEval.hpp>
#include <org/apache/poi/ss/formula/eval/ErrorEval.hpp>
#include <org/apache/poi/ss/formula/eval/EvaluationException.hpp>
#include <org/apache/poi/ss/formula/eval/RefEval.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>

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

org::apache::poi::ss::formula::eval::RangeEval::RangeEval(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::eval::RangeEval::RangeEval() 
    : RangeEval(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::ss::formula::functions::Function*& org::apache::poi::ss::formula::eval::RangeEval::instance()
{
    clinit();
    return instance_;
}
org::apache::poi::ss::formula::functions::Function* org::apache::poi::ss::formula::eval::RangeEval::instance_;

void org::apache::poi::ss::formula::eval::RangeEval::ctor()
{
    super::ctor();
}

org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::eval::RangeEval::evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ValueEval* arg0, ValueEval* arg1)
{
    try {
        auto reA = evaluateRef(arg0);
        auto reB = evaluateRef(arg1);
        return resolveRange(reA, reB);
    } catch (EvaluationException* e) {
        return npc(e)->getErrorEval();
    }
}

org::apache::poi::ss::formula::eval::AreaEval* org::apache::poi::ss::formula::eval::RangeEval::resolveRange(AreaEval* aeA, AreaEval* aeB)
{
    clinit();
    auto aeAfr = npc(aeA)->getFirstRow();
    auto aeAfc = npc(aeA)->getFirstColumn();
    auto top = ::java::lang::Math::min(aeAfr, npc(aeB)->getFirstRow());
    auto bottom = ::java::lang::Math::max(npc(aeA)->getLastRow(), npc(aeB)->getLastRow());
    auto left = ::java::lang::Math::min(aeAfc, npc(aeB)->getFirstColumn());
    auto right = ::java::lang::Math::max(npc(aeA)->getLastColumn(), npc(aeB)->getLastColumn());
    return npc(aeA)->offset(top - aeAfr, bottom - aeAfr, left - aeAfc, right - aeAfc);
}

org::apache::poi::ss::formula::eval::AreaEval* org::apache::poi::ss::formula::eval::RangeEval::evaluateRef(ValueEval* arg) /* throws(EvaluationException) */
{
    clinit();
    if(dynamic_cast< AreaEval* >(arg) != nullptr) {
        return java_cast< AreaEval* >(arg);
    }
    if(dynamic_cast< RefEval* >(arg) != nullptr) {
        return npc((java_cast< RefEval* >(arg)))->offset(0, 0, 0, 0);
    }
    if(dynamic_cast< ErrorEval* >(arg) != nullptr) {
        throw new EvaluationException(java_cast< ErrorEval* >(arg));
    }
    throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Unexpected ref arg class ("_j)->append(npc(npc(arg)->getClass())->getName())
        ->append(u")"_j)->toString());
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::eval::RangeEval::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.eval.RangeEval", 40);
    return c;
}

void org::apache::poi::ss::formula::eval::RangeEval::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        instance_ = new RangeEval();
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::eval::RangeEval::evaluate(ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex)
{
    return super::evaluate(args, srcRowIndex, srcColumnIndex);
}

java::lang::Class* org::apache::poi::ss::formula::eval::RangeEval::getClass0()
{
    return class_();
}

