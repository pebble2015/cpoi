// Generated from /POI/java/org/apache/poi/ss/formula/functions/Roman.java
#include <org/apache/poi/ss/formula/functions/Roman.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/ss/formula/eval/ErrorEval.hpp>
#include <org/apache/poi/ss/formula/eval/EvaluationException.hpp>
#include <org/apache/poi/ss/formula/eval/OperandResolver.hpp>
#include <org/apache/poi/ss/formula/eval/StringEval.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>
#include <Array.hpp>
#include <SubArray.hpp>
#include <ObjectArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace io
    {
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
    } // io

    namespace lang
    {
typedef ::SubArray< ::java::lang::CharSequence, ObjectArray > CharSequenceArray;
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::String, ObjectArray, ::java::io::SerializableArray, ComparableArray, CharSequenceArray > StringArray;
    } // lang
} // java

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

poi::ss::formula::functions::Roman::Roman(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::functions::Roman::Roman()
    : Roman(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

int32_tArray*& poi::ss::formula::functions::Roman::VALUES()
{
    clinit();
    return VALUES_;
}
int32_tArray* poi::ss::formula::functions::Roman::VALUES_;

java::lang::StringArray*& poi::ss::formula::functions::Roman::ROMAN()
{
    clinit();
    return ROMAN_;
}
java::lang::StringArray* poi::ss::formula::functions::Roman::ROMAN_;

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::Roman::evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::poi::ss::formula::eval::ValueEval* numberVE, ::poi::ss::formula::eval::ValueEval* formVE)
{
    auto number = int32_t(0);
    try {
        auto ve = ::poi::ss::formula::eval::OperandResolver::getSingleValue(numberVE, srcRowIndex, srcColumnIndex);
        number = ::poi::ss::formula::eval::OperandResolver::coerceValueToInt(ve);
    } catch (::poi::ss::formula::eval::EvaluationException* e) {
        return ::poi::ss::formula::eval::ErrorEval::VALUE_INVALID();
    }
    if(number < 0) {
        return ::poi::ss::formula::eval::ErrorEval::VALUE_INVALID();
    }
    if(number > 3999) {
        return ::poi::ss::formula::eval::ErrorEval::VALUE_INVALID();
    }
    if(number == 0) {
        return new ::poi::ss::formula::eval::StringEval(u""_j);
    }
    auto form = int32_t(0);
    try {
        auto ve = ::poi::ss::formula::eval::OperandResolver::getSingleValue(formVE, srcRowIndex, srcColumnIndex);
        form = ::poi::ss::formula::eval::OperandResolver::coerceValueToInt(ve);
    } catch (::poi::ss::formula::eval::EvaluationException* e) {
        return ::poi::ss::formula::eval::ErrorEval::NUM_ERROR();
    }
    if(form > 4 || form < 0) {
        return ::poi::ss::formula::eval::ErrorEval::VALUE_INVALID();
    }
    auto result = this->integerToRoman(number);
    if(form == 0) {
        return new ::poi::ss::formula::eval::StringEval(result);
    }
    return new ::poi::ss::formula::eval::StringEval(makeConcise(result, form));
}

java::lang::String* poi::ss::formula::functions::Roman::integerToRoman(int32_t number)
{
    auto result = new ::java::lang::StringBuilder();
    for (auto i = int32_t(0); i < 13; i++) {
        while (number >= (*VALUES_)[i]) {
            number -= (*VALUES_)[i];
            npc(result)->append((*ROMAN_)[i]);
        }
    }
    return npc(result)->toString();
}

java::lang::String* poi::ss::formula::functions::Roman::makeConcise(::java::lang::String* result, int32_t form)
{
    if(form > 0) {
        result = npc(result)->replaceAll(u"XLV"_j, u"VL"_j);
        result = npc(result)->replaceAll(u"XCV"_j, u"VC"_j);
        result = npc(result)->replaceAll(u"CDL"_j, u"LD"_j);
        result = npc(result)->replaceAll(u"CML"_j, u"LM"_j);
        result = npc(result)->replaceAll(u"CMVC"_j, u"LMVL"_j);
    }
    if(form == 1) {
        result = npc(result)->replaceAll(u"CDXC"_j, u"LDXL"_j);
        result = npc(result)->replaceAll(u"CDVC"_j, u"LDVL"_j);
        result = npc(result)->replaceAll(u"CMXC"_j, u"LMXL"_j);
        result = npc(result)->replaceAll(u"XCIX"_j, u"VCIV"_j);
        result = npc(result)->replaceAll(u"XLIX"_j, u"VLIV"_j);
    }
    if(form > 1) {
        result = npc(result)->replaceAll(u"XLIX"_j, u"IL"_j);
        result = npc(result)->replaceAll(u"XCIX"_j, u"IC"_j);
        result = npc(result)->replaceAll(u"CDXC"_j, u"XD"_j);
        result = npc(result)->replaceAll(u"CDVC"_j, u"XDV"_j);
        result = npc(result)->replaceAll(u"CDIC"_j, u"XDIX"_j);
        result = npc(result)->replaceAll(u"LMVL"_j, u"XMV"_j);
        result = npc(result)->replaceAll(u"CMIC"_j, u"XMIX"_j);
        result = npc(result)->replaceAll(u"CMXC"_j, u"XM"_j);
    }
    if(form > 2) {
        result = npc(result)->replaceAll(u"XDV"_j, u"VD"_j);
        result = npc(result)->replaceAll(u"XDIX"_j, u"VDIV"_j);
        result = npc(result)->replaceAll(u"XMV"_j, u"VM"_j);
        result = npc(result)->replaceAll(u"XMIX"_j, u"VMIV"_j);
    }
    if(form == 4) {
        result = npc(result)->replaceAll(u"VDIV"_j, u"ID"_j);
        result = npc(result)->replaceAll(u"VMIV"_j, u"IM"_j);
    }
    return result;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::functions::Roman::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.Roman", 41);
    return c;
}

void poi::ss::formula::functions::Roman::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        VALUES_ = new ::int32_tArray({
            int32_t(1000)
            , int32_t(900)
            , int32_t(500)
            , int32_t(400)
            , int32_t(100)
            , int32_t(90)
            , int32_t(50)
            , int32_t(40)
            , int32_t(10)
            , int32_t(9)
            , int32_t(5)
            , int32_t(4)
            , int32_t(1)
        });
        ROMAN_ = new ::java::lang::StringArray({
            u"M"_j
            , u"CM"_j
            , u"D"_j
            , u"CD"_j
            , u"C"_j
            , u"XC"_j
            , u"L"_j
            , u"XL"_j
            , u"X"_j
            , u"IX"_j
            , u"V"_j
            , u"IV"_j
            , u"I"_j
        });
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::Roman::evaluate(::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex)
{
    return super::evaluate(args, srcRowIndex, srcColumnIndex);
}

java::lang::Class* poi::ss::formula::functions::Roman::getClass0()
{
    return class_();
}

