// Generated from /POI/java/org/apache/poi/ss/formula/eval/ConcatEval.java
#include <org/apache/poi/ss/formula/eval/ConcatEval.hpp>

#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/IllegalAccessError.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/ss/formula/eval/BlankEval.hpp>
#include <org/apache/poi/ss/formula/eval/ErrorEval.hpp>
#include <org/apache/poi/ss/formula/eval/EvaluationException.hpp>
#include <org/apache/poi/ss/formula/eval/OperandResolver.hpp>
#include <org/apache/poi/ss/formula/eval/StringEval.hpp>
#include <org/apache/poi/ss/formula/eval/StringValueEval.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>

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

poi::ss::formula::eval::ConcatEval::ConcatEval(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::eval::ConcatEval::ConcatEval() 
    : ConcatEval(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::ss::formula::functions::Function*& poi::ss::formula::eval::ConcatEval::instance()
{
    clinit();
    return instance_;
}
poi::ss::formula::functions::Function* poi::ss::formula::eval::ConcatEval::instance_;

void poi::ss::formula::eval::ConcatEval::ctor()
{
    super::ctor();
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::eval::ConcatEval::evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ValueEval* arg0, ValueEval* arg1)
{
    ValueEval* ve0;
    ValueEval* ve1;
    try {
        ve0 = OperandResolver::getSingleValue(arg0, srcRowIndex, srcColumnIndex);
        ve1 = OperandResolver::getSingleValue(arg1, srcRowIndex, srcColumnIndex);
    } catch (EvaluationException* e) {
        return npc(e)->getErrorEval();
    }
    auto sb = new ::java::lang::StringBuilder();
    npc(sb)->append(getText(ve0));
    npc(sb)->append(getText(ve1));
    return new StringEval(npc(sb)->toString());
}

java::lang::Object* poi::ss::formula::eval::ConcatEval::getText(ValueEval* ve)
{
    if(dynamic_cast< StringValueEval* >(ve) != nullptr) {
        auto sve = java_cast< StringValueEval* >(ve);
        return npc(sve)->getStringValue();
    }
    if(ve == static_cast< ValueEval* >(BlankEval::instance())) {
        return u""_j;
    }
    throw new ::java::lang::IllegalAccessError(::java::lang::StringBuilder().append(u"Unexpected value type ("_j)->append(npc(npc(ve)->getClass())->getName())
        ->append(u")"_j)->toString());
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::eval::ConcatEval::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.eval.ConcatEval", 41);
    return c;
}

void poi::ss::formula::eval::ConcatEval::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        instance_ = new ConcatEval();
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::eval::ConcatEval::evaluate(ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex)
{
    return super::evaluate(args, srcRowIndex, srcColumnIndex);
}

java::lang::Class* poi::ss::formula::eval::ConcatEval::getClass0()
{
    return class_();
}

