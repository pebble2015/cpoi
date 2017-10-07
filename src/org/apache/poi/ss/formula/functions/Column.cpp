// Generated from /POI/java/org/apache/poi/ss/formula/functions/Column.java
#include <org/apache/poi/ss/formula/functions/Column.hpp>

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

org::apache::poi::ss::formula::functions::Column::Column(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::functions::Column::Column()
    : Column(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::functions::Column::evaluate(int32_t srcRowIndex, int32_t srcColumnIndex)
{
    return new ::org::apache::poi::ss::formula::eval::NumberEval(static_cast< double >(srcColumnIndex + int32_t(1)));
}

org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::functions::Column::evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::org::apache::poi::ss::formula::eval::ValueEval* arg0)
{
    int32_t rnum;
    if(dynamic_cast< ::org::apache::poi::ss::formula::eval::AreaEval* >(arg0) != nullptr) {
        rnum = npc((java_cast< ::org::apache::poi::ss::formula::eval::AreaEval* >(arg0)))->getFirstColumn();
    } else if(dynamic_cast< ::org::apache::poi::ss::formula::eval::RefEval* >(arg0) != nullptr) {
        rnum = npc((java_cast< ::org::apache::poi::ss::formula::eval::RefEval* >(arg0)))->getColumn();
    } else {
        return ::org::apache::poi::ss::formula::eval::ErrorEval::VALUE_INVALID();
    }
    return new ::org::apache::poi::ss::formula::eval::NumberEval(static_cast< double >(rnum + int32_t(1)));
}

org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::functions::Column::evaluate(::org::apache::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex)
{
    switch (npc(args)->length) {
    case int32_t(1):
        return evaluate(srcRowIndex, srcColumnIndex, (*args)[int32_t(0)]);
    case int32_t(0):
        return new ::org::apache::poi::ss::formula::eval::NumberEval(static_cast< double >(srcColumnIndex + int32_t(1)));
    }

    return ::org::apache::poi::ss::formula::eval::ErrorEval::VALUE_INVALID();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::functions::Column::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.Column", 42);
    return c;
}

java::lang::Class* org::apache::poi::ss::formula::functions::Column::getClass0()
{
    return class_();
}

