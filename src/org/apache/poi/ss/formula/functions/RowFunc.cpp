// Generated from /POI/java/org/apache/poi/ss/formula/functions/RowFunc.java
#include <org/apache/poi/ss/formula/functions/RowFunc.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/ss/formula/eval/AreaEval.hpp>
#include <org/apache/poi/ss/formula/eval/ErrorEval.hpp>
#include <org/apache/poi/ss/formula/eval/NumberEval.hpp>
#include <org/apache/poi/ss/formula/eval/RefEval.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>
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

poi::ss::formula::functions::RowFunc::RowFunc(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::functions::RowFunc::RowFunc()
    : RowFunc(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::RowFunc::evaluate(int32_t srcRowIndex, int32_t srcColumnIndex)
{
    return new ::poi::ss::formula::eval::NumberEval(static_cast< double >(srcRowIndex + int32_t(1)));
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::RowFunc::evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::poi::ss::formula::eval::ValueEval* arg0)
{
    int32_t rnum;
    if(dynamic_cast< ::poi::ss::formula::eval::AreaEval* >(arg0) != nullptr) {
        rnum = npc((java_cast< ::poi::ss::formula::eval::AreaEval* >(arg0)))->getFirstRow();
    } else if(dynamic_cast< ::poi::ss::formula::eval::RefEval* >(arg0) != nullptr) {
        rnum = npc((java_cast< ::poi::ss::formula::eval::RefEval* >(arg0)))->getRow();
    } else {
        return ::poi::ss::formula::eval::ErrorEval::VALUE_INVALID();
    }
    return new ::poi::ss::formula::eval::NumberEval(static_cast< double >(rnum + int32_t(1)));
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::RowFunc::evaluate(::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex)
{
    switch (npc(args)->length) {
    case int32_t(1):
        return evaluate(srcRowIndex, srcColumnIndex, (*args)[int32_t(0)]);
    case int32_t(0):
        return new ::poi::ss::formula::eval::NumberEval(static_cast< double >(srcRowIndex + int32_t(1)));
    }

    return ::poi::ss::formula::eval::ErrorEval::VALUE_INVALID();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::functions::RowFunc::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.RowFunc", 43);
    return c;
}

java::lang::Class* poi::ss::formula::functions::RowFunc::getClass0()
{
    return class_();
}

