// Generated from /POI/java/org/apache/poi/ss/formula/functions/Now.java
#include <org/apache/poi/ss/formula/functions/Now.hpp>

#include <java/lang/System.hpp>
#include <java/util/Date.hpp>
#include <org/apache/poi/ss/formula/eval/NumberEval.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>
#include <org/apache/poi/ss/usermodel/DateUtil.hpp>

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

poi::ss::formula::functions::Now::Now(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::functions::Now::Now()
    : Now(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::Now::evaluate(int32_t srcRowIndex, int32_t srcColumnIndex)
{
    auto now = new ::java::util::Date(::java::lang::System::currentTimeMillis());
    return new ::poi::ss::formula::eval::NumberEval(::poi::ss::usermodel::DateUtil::getExcelDate(now));
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::functions::Now::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.Now", 39);
    return c;
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::Now::evaluate(::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex)
{
    return super::evaluate(args, srcRowIndex, srcColumnIndex);
}

java::lang::Class* poi::ss::formula::functions::Now::getClass0()
{
    return class_();
}

