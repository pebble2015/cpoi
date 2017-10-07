// Generated from /POI/java/org/apache/poi/ss/formula/functions/Imaginary.java
#include <org/apache/poi/ss/formula/functions/Imaginary.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/util/regex/Matcher.hpp>
#include <java/util/regex/Pattern.hpp>
#include <org/apache/poi/ss/formula/OperationEvaluationContext.hpp>
#include <org/apache/poi/ss/formula/eval/ErrorEval.hpp>
#include <org/apache/poi/ss/formula/eval/EvaluationException.hpp>
#include <org/apache/poi/ss/formula/eval/OperandResolver.hpp>
#include <org/apache/poi/ss/formula/eval/StringEval.hpp>
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

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::ss::formula::functions::Imaginary::Imaginary(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::functions::Imaginary::Imaginary()
    : Imaginary(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::ss::formula::functions::FreeRefFunction*& org::apache::poi::ss::formula::functions::Imaginary::instance()
{
    clinit();
    return instance_;
}
org::apache::poi::ss::formula::functions::FreeRefFunction* org::apache::poi::ss::formula::functions::Imaginary::instance_;

java::lang::String*& org::apache::poi::ss::formula::functions::Imaginary::GROUP1_REAL_SIGN_REGEX()
{
    clinit();
    return GROUP1_REAL_SIGN_REGEX_;
}
java::lang::String* org::apache::poi::ss::formula::functions::Imaginary::GROUP1_REAL_SIGN_REGEX_;

java::lang::String*& org::apache::poi::ss::formula::functions::Imaginary::GROUP2_REAL_INTEGER_OR_DOUBLE_REGEX()
{
    clinit();
    return GROUP2_REAL_INTEGER_OR_DOUBLE_REGEX_;
}
java::lang::String* org::apache::poi::ss::formula::functions::Imaginary::GROUP2_REAL_INTEGER_OR_DOUBLE_REGEX_;

java::lang::String*& org::apache::poi::ss::formula::functions::Imaginary::GROUP3_IMAGINARY_SIGN_REGEX()
{
    clinit();
    return GROUP3_IMAGINARY_SIGN_REGEX_;
}
java::lang::String* org::apache::poi::ss::formula::functions::Imaginary::GROUP3_IMAGINARY_SIGN_REGEX_;

java::lang::String*& org::apache::poi::ss::formula::functions::Imaginary::GROUP4_IMAGINARY_INTEGER_OR_DOUBLE_REGEX()
{
    clinit();
    return GROUP4_IMAGINARY_INTEGER_OR_DOUBLE_REGEX_;
}
java::lang::String* org::apache::poi::ss::formula::functions::Imaginary::GROUP4_IMAGINARY_INTEGER_OR_DOUBLE_REGEX_;

java::lang::String*& org::apache::poi::ss::formula::functions::Imaginary::GROUP5_IMAGINARY_GROUP_REGEX()
{
    clinit();
    return GROUP5_IMAGINARY_GROUP_REGEX_;
}
java::lang::String* org::apache::poi::ss::formula::functions::Imaginary::GROUP5_IMAGINARY_GROUP_REGEX_;

java::util::regex::Pattern*& org::apache::poi::ss::formula::functions::Imaginary::COMPLEX_NUMBER_PATTERN()
{
    clinit();
    return COMPLEX_NUMBER_PATTERN_;
}
java::util::regex::Pattern* org::apache::poi::ss::formula::functions::Imaginary::COMPLEX_NUMBER_PATTERN_;

constexpr int32_t org::apache::poi::ss::formula::functions::Imaginary::GROUP1_REAL_SIGN;

constexpr int32_t org::apache::poi::ss::formula::functions::Imaginary::GROUP2_IMAGINARY_INTEGER_OR_DOUBLE;

constexpr int32_t org::apache::poi::ss::formula::functions::Imaginary::GROUP3_IMAGINARY_SIGN;

constexpr int32_t org::apache::poi::ss::formula::functions::Imaginary::GROUP4_IMAGINARY_INTEGER_OR_DOUBLE;

org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::functions::Imaginary::evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::org::apache::poi::ss::formula::eval::ValueEval* inumberVE)
{
    ::org::apache::poi::ss::formula::eval::ValueEval* veText1;
    try {
        veText1 = ::org::apache::poi::ss::formula::eval::OperandResolver::getSingleValue(inumberVE, srcRowIndex, srcColumnIndex);
    } catch (::org::apache::poi::ss::formula::eval::EvaluationException* e) {
        return npc(e)->getErrorEval();
    }
    auto iNumber = ::org::apache::poi::ss::formula::eval::OperandResolver::coerceValueToString(veText1);
    auto m = npc(COMPLEX_NUMBER_PATTERN_)->matcher(iNumber);
    auto result = npc(m)->matches();
    auto imaginary = u""_j;
    if(result == true) {
        auto imaginaryGroup = npc(m)->group(int32_t(5));
        auto hasImaginaryPart = npc(imaginaryGroup)->equals(static_cast< ::java::lang::Object* >(u"i"_j)) || npc(imaginaryGroup)->equals(static_cast< ::java::lang::Object* >(u"j"_j));
        if(npc(imaginaryGroup)->length() == 0) {
            return new ::org::apache::poi::ss::formula::eval::StringEval(::java::lang::String::valueOf(int32_t(0)));
        }
        if(hasImaginaryPart) {
            auto sign = u""_j;
            auto imaginarySign = npc(m)->group(GROUP3_IMAGINARY_SIGN);
            if(npc(imaginarySign)->length() != 0 && !(npc(imaginarySign)->equals(static_cast< ::java::lang::Object* >(u"+"_j)))) {
                sign = imaginarySign;
            }
            auto groupImaginaryNumber = npc(m)->group(GROUP4_IMAGINARY_INTEGER_OR_DOUBLE);
            if(npc(groupImaginaryNumber)->length() != 0) {
                imaginary = ::java::lang::StringBuilder().append(sign)->append(groupImaginaryNumber)->toString();
            } else {
                imaginary = ::java::lang::StringBuilder().append(sign)->append(u"1"_j)->toString();
            }
        }
    } else {
        return ::org::apache::poi::ss::formula::eval::ErrorEval::NUM_ERROR();
    }
    return new ::org::apache::poi::ss::formula::eval::StringEval(imaginary);
}

org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::functions::Imaginary::evaluate(::org::apache::poi::ss::formula::eval::ValueEvalArray* args, ::org::apache::poi::ss::formula::OperationEvaluationContext* ec)
{
    if(npc(args)->length != 1) {
        return ::org::apache::poi::ss::formula::eval::ErrorEval::VALUE_INVALID();
    }
    return evaluate(npc(ec)->getRowIndex(), npc(ec)->getColumnIndex(), (*args)[int32_t(0)]);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::functions::Imaginary::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.Imaginary", 45);
    return c;
}

void org::apache::poi::ss::formula::functions::Imaginary::clinit()
{
struct string_init_ {
    string_init_() {
    GROUP1_REAL_SIGN_REGEX_ = u"([+-]?)"_j;
    GROUP2_REAL_INTEGER_OR_DOUBLE_REGEX_ = u"([0-9]+\\.[0-9]+|[0-9]*)"_j;
    GROUP3_IMAGINARY_SIGN_REGEX_ = u"([+-]?)"_j;
    GROUP4_IMAGINARY_INTEGER_OR_DOUBLE_REGEX_ = u"([0-9]+\\.[0-9]+|[0-9]*)"_j;
    GROUP5_IMAGINARY_GROUP_REGEX_ = u"([ij]?)"_j;
    }
};

    static string_init_ string_init_instance;

    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        instance_ = new Imaginary();
        COMPLEX_NUMBER_PATTERN_ = ::java::util::regex::Pattern::compile(::java::lang::StringBuilder().append(GROUP1_REAL_SIGN_REGEX_)->append(GROUP2_REAL_INTEGER_OR_DOUBLE_REGEX_)
            ->append(GROUP3_IMAGINARY_SIGN_REGEX_)
            ->append(GROUP4_IMAGINARY_INTEGER_OR_DOUBLE_REGEX_)
            ->append(GROUP5_IMAGINARY_GROUP_REGEX_)->toString());
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::functions::Imaginary::evaluate(::org::apache::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex)
{
    return super::evaluate(args, srcRowIndex, srcColumnIndex);
}

java::lang::Class* org::apache::poi::ss::formula::functions::Imaginary::getClass0()
{
    return class_();
}

