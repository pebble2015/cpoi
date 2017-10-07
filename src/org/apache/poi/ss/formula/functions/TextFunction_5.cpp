// Generated from /POI/java/org/apache/poi/ss/formula/functions/TextFunction.java
#include <org/apache/poi/ss/formula/functions/TextFunction_5.hpp>

#include <java/lang/Character.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/util/Locale.hpp>
#include <org/apache/poi/ss/formula/eval/StringEval.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>
#include <Array.hpp>

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

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::ss::formula::functions::TextFunction_5::TextFunction_5()
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
    ctor();
}

org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::functions::TextFunction_5::evaluate(::java::lang::String* text)
{
    auto sb = new ::java::lang::StringBuilder();
    auto shouldMakeUppercase = true;
    for(auto ch : *npc(npc(text)->toCharArray_())) {
        if(shouldMakeUppercase) {
            npc(sb)->append(npc(::java::lang::String::valueOf(ch))->toUpperCase(::java::util::Locale::ROOT()));
        } else {
            npc(sb)->append(npc(::java::lang::String::valueOf(ch))->toLowerCase(::java::util::Locale::ROOT()));
        }
        shouldMakeUppercase = !::java::lang::Character::isLetter(ch);
    }
    return new ::org::apache::poi::ss::formula::eval::StringEval(npc(sb)->toString());
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::functions::TextFunction_5::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::functions::TextFunction_5::evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::org::apache::poi::ss::formula::eval::ValueEval* arg0)
{
    return super::evaluate(srcRowIndex, srcColumnIndex, arg0);
}

org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::functions::TextFunction_5::evaluate(::org::apache::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex)
{
    return super::evaluate(args, srcRowIndex, srcColumnIndex);
}

java::lang::Class* org::apache::poi::ss::formula::functions::TextFunction_5::getClass0()
{
    return class_();
}

