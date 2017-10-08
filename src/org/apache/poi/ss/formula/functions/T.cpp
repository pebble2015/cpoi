// Generated from /POI/java/org/apache/poi/ss/formula/functions/T.java
#include <org/apache/poi/ss/formula/functions/T.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/ss/formula/eval/AreaEval.hpp>
#include <org/apache/poi/ss/formula/eval/ErrorEval.hpp>
#include <org/apache/poi/ss/formula/eval/RefEval.hpp>
#include <org/apache/poi/ss/formula/eval/StringEval.hpp>
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

poi::ss::formula::functions::T::T(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::functions::T::T()
    : T(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::T::evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::poi::ss::formula::eval::ValueEval* arg0)
{
    auto arg = arg0;
    if(dynamic_cast< ::poi::ss::formula::eval::RefEval* >(arg) != nullptr) {
        auto re = java_cast< ::poi::ss::formula::eval::RefEval* >(arg);
        arg = npc(re)->getInnerValueEval(npc(re)->getFirstSheetIndex());
    } else if(dynamic_cast< ::poi::ss::formula::eval::AreaEval* >(arg) != nullptr) {
        arg = npc((java_cast< ::poi::ss::formula::eval::AreaEval* >(arg)))->getRelativeValue(0, 0);
    }
    if(dynamic_cast< ::poi::ss::formula::eval::StringEval* >(arg) != nullptr) {
        return arg;
    }
    if(dynamic_cast< ::poi::ss::formula::eval::ErrorEval* >(arg) != nullptr) {
        return arg;
    }
    return ::poi::ss::formula::eval::StringEval::EMPTY_INSTANCE();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::functions::T::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.T", 37);
    return c;
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::T::evaluate(::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex)
{
    return super::evaluate(args, srcRowIndex, srcColumnIndex);
}

java::lang::Class* poi::ss::formula::functions::T::getClass0()
{
    return class_();
}

