// Generated from /POI/java/org/apache/poi/ss/formula/functions/Address.java
#include <org/apache/poi/ss/formula/functions/Address.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <org/apache/poi/ss/formula/SheetNameFormatter.hpp>
#include <org/apache/poi/ss/formula/eval/ErrorEval.hpp>
#include <org/apache/poi/ss/formula/eval/EvaluationException.hpp>
#include <org/apache/poi/ss/formula/eval/MissingArgEval.hpp>
#include <org/apache/poi/ss/formula/eval/OperandResolver.hpp>
#include <org/apache/poi/ss/formula/eval/StringEval.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>
#include <org/apache/poi/ss/formula/functions/NumericFunction.hpp>
#include <org/apache/poi/ss/util/CellReference.hpp>
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

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::ss::formula::functions::Address::Address(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::functions::Address::Address()
    : Address(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

constexpr int32_t poi::ss::formula::functions::Address::REF_ABSOLUTE;

constexpr int32_t poi::ss::formula::functions::Address::REF_ROW_ABSOLUTE_COLUMN_RELATIVE;

constexpr int32_t poi::ss::formula::functions::Address::REF_ROW_RELATIVE_RELATIVE_ABSOLUTE;

constexpr int32_t poi::ss::formula::functions::Address::REF_RELATIVE;

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::Address::evaluate(::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex)
{
    if(npc(args)->length < 2 || npc(args)->length > 5) {
        return ::poi::ss::formula::eval::ErrorEval::VALUE_INVALID();
    }
    try {
        bool pAbsRow, pAbsCol;
        auto row = static_cast< int32_t >(NumericFunction::singleOperandEvaluate((*args)[int32_t(0)], srcRowIndex, srcColumnIndex));
        auto col = static_cast< int32_t >(NumericFunction::singleOperandEvaluate((*args)[int32_t(1)], srcRowIndex, srcColumnIndex));
        int32_t refType;
        if(npc(args)->length > 2 && (*args)[int32_t(2)] != static_cast< ::poi::ss::formula::eval::ValueEval* >(::poi::ss::formula::eval::MissingArgEval::instance())) {
            refType = static_cast< int32_t >(NumericFunction::singleOperandEvaluate((*args)[int32_t(2)], srcRowIndex, srcColumnIndex));
        } else {
            refType = REF_ABSOLUTE;
        }
        switch (refType) {
        case REF_ABSOLUTE:
            pAbsRow = true;
            pAbsCol = true;
            break;
        case REF_ROW_ABSOLUTE_COLUMN_RELATIVE:
            pAbsRow = true;
            pAbsCol = false;
            break;
        case REF_ROW_RELATIVE_RELATIVE_ABSOLUTE:
            pAbsRow = false;
            pAbsCol = true;
            break;
        case REF_RELATIVE:
            pAbsRow = false;
            pAbsCol = false;
            break;
        default:
            throw new ::poi::ss::formula::eval::EvaluationException(::poi::ss::formula::eval::ErrorEval::VALUE_INVALID());
        }

        ::java::lang::String* sheetName;
        if(npc(args)->length == 5) {
            auto ve = ::poi::ss::formula::eval::OperandResolver::getSingleValue((*args)[int32_t(4)], srcRowIndex, srcColumnIndex);
            sheetName = ve == static_cast< ::poi::ss::formula::eval::ValueEval* >(::poi::ss::formula::eval::MissingArgEval::instance()) ? static_cast< ::java::lang::String* >(nullptr) : ::poi::ss::formula::eval::OperandResolver::coerceValueToString(ve);
        } else {
            sheetName = nullptr;
        }
        auto ref = new ::poi::ss::util::CellReference(row - int32_t(1), col - int32_t(1), pAbsRow, pAbsCol);
        auto sb = new ::java::lang::StringBuffer(int32_t(32));
        if(sheetName != nullptr) {
            ::poi::ss::formula::SheetNameFormatter::appendFormat(sb, sheetName);
            npc(sb)->append(u'!');
        }
        npc(sb)->append(npc(ref)->formatAsString());
        return new ::poi::ss::formula::eval::StringEval(npc(sb)->toString());
    } catch (::poi::ss::formula::eval::EvaluationException* e) {
        return npc(e)->getErrorEval();
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::functions::Address::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.Address", 43);
    return c;
}

java::lang::Class* poi::ss::formula::functions::Address::getClass0()
{
    return class_();
}

