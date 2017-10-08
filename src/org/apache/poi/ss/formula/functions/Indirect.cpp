// Generated from /POI/java/org/apache/poi/ss/formula/functions/Indirect.java
#include <org/apache/poi/ss/formula/functions/Indirect.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Boolean.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Character.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/util/regex/Matcher.hpp>
#include <java/util/regex/Pattern.hpp>
#include <org/apache/poi/ss/formula/EvaluationWorkbook.hpp>
#include <org/apache/poi/ss/formula/FormulaParseException.hpp>
#include <org/apache/poi/ss/formula/FormulaParser.hpp>
#include <org/apache/poi/ss/formula/FormulaParsingWorkbook.hpp>
#include <org/apache/poi/ss/formula/OperationEvaluationContext.hpp>
#include <org/apache/poi/ss/formula/eval/BlankEval.hpp>
#include <org/apache/poi/ss/formula/eval/ErrorEval.hpp>
#include <org/apache/poi/ss/formula/eval/EvaluationException.hpp>
#include <org/apache/poi/ss/formula/eval/MissingArgEval.hpp>
#include <org/apache/poi/ss/formula/eval/OperandResolver.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>
#include <org/apache/poi/ss/formula/ptg/Area3DPxg.hpp>
#include <org/apache/poi/ss/usermodel/Table.hpp>
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

poi::ss::formula::functions::Indirect::Indirect(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::functions::Indirect::Indirect() 
    : Indirect(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::ss::formula::functions::FreeRefFunction*& poi::ss::formula::functions::Indirect::instance()
{
    clinit();
    return instance_;
}
poi::ss::formula::functions::FreeRefFunction* poi::ss::formula::functions::Indirect::instance_;

void poi::ss::formula::functions::Indirect::ctor()
{
    super::ctor();
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::Indirect::evaluate(::poi::ss::formula::eval::ValueEvalArray* args, ::poi::ss::formula::OperationEvaluationContext* ec)
{
    if(npc(args)->length < 1) {
        return ::poi::ss::formula::eval::ErrorEval::VALUE_INVALID();
    }
    bool isA1style;
    ::java::lang::String* text;
    try {
        auto ve = ::poi::ss::formula::eval::OperandResolver::getSingleValue((*args)[int32_t(0)], npc(ec)->getRowIndex(), npc(ec)->getColumnIndex());
        text = ::poi::ss::formula::eval::OperandResolver::coerceValueToString(ve);
        switch (npc(args)->length) {
        case int32_t(1):
            isA1style = true;
            break;
        case int32_t(2):
            isA1style = evaluateBooleanArg((*args)[int32_t(1)], ec);
            break;
        default:
            return ::poi::ss::formula::eval::ErrorEval::VALUE_INVALID();
        }

    } catch (::poi::ss::formula::eval::EvaluationException* e) {
        return npc(e)->getErrorEval();
    }
    return evaluateIndirect(ec, text, isA1style);
}

bool poi::ss::formula::functions::Indirect::evaluateBooleanArg(::poi::ss::formula::eval::ValueEval* arg, ::poi::ss::formula::OperationEvaluationContext* ec) /* throws(EvaluationException) */
{
    clinit();
    auto ve = ::poi::ss::formula::eval::OperandResolver::getSingleValue(arg, npc(ec)->getRowIndex(), npc(ec)->getColumnIndex());
    if(ve == static_cast< ::poi::ss::formula::eval::ValueEval* >(::poi::ss::formula::eval::BlankEval::instance()) || ve == static_cast< ::poi::ss::formula::eval::ValueEval* >(::poi::ss::formula::eval::MissingArgEval::instance())) {
        return false;
    }
    return npc(::poi::ss::formula::eval::OperandResolver::coerceValueToBoolean(ve, false))->booleanValue();
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::Indirect::evaluateIndirect(::poi::ss::formula::OperationEvaluationContext* ec, ::java::lang::String* text, bool isA1style)
{
    clinit();
    auto plingPos = npc(text)->lastIndexOf(static_cast< int32_t >(u'!'));
    ::java::lang::String* workbookName;
    ::java::lang::String* sheetName;
    ::java::lang::String* refText;
    if(plingPos < 0) {
        workbookName = nullptr;
        sheetName = nullptr;
        refText = text;
    } else {
        auto parts = parseWorkbookAndSheetName(npc(text)->subSequence(int32_t(0), plingPos));
        if(parts == nullptr) {
            return ::poi::ss::formula::eval::ErrorEval::REF_INVALID();
        }
        workbookName = (*parts)[int32_t(0)];
        sheetName = (*parts)[int32_t(1)];
        refText = npc(text)->substring(plingPos + int32_t(1));
    }
    if(npc(npc(::poi::ss::usermodel::Table::isStructuredReference())->matcher(refText))->matches()) {
        ::poi::ss::formula::ptg::Area3DPxg* areaPtg = nullptr;
        try {
            areaPtg = ::poi::ss::formula::FormulaParser::parseStructuredReference(refText, java_cast< ::poi::ss::formula::FormulaParsingWorkbook* >(npc(ec)->getWorkbook()), npc(ec)->getRowIndex());
        } catch (::poi::ss::formula::FormulaParseException* e) {
            return ::poi::ss::formula::eval::ErrorEval::REF_INVALID();
        }
        return npc(ec)->getArea3DEval(areaPtg);
    } else {
        ::java::lang::String* refStrPart1;
        ::java::lang::String* refStrPart2;
        auto colonPos = npc(refText)->indexOf(static_cast< int32_t >(u':'));
        if(colonPos < 0) {
            refStrPart1 = npc(refText)->trim();
            refStrPart2 = nullptr;
        } else {
            refStrPart1 = npc(npc(refText)->substring(0, colonPos))->trim();
            refStrPart2 = npc(npc(refText)->substring(colonPos + int32_t(1)))->trim();
        }
        return npc(ec)->getDynamicReference(workbookName, sheetName, refStrPart1, refStrPart2, isA1style);
    }
}

java::lang::StringArray* poi::ss::formula::functions::Indirect::parseWorkbookAndSheetName(::java::lang::CharSequence* text)
{
    clinit();
    auto lastIx = npc(text)->length() - int32_t(1);
    if(lastIx < 0) {
        return nullptr;
    }
    if(canTrim(text)) {
        return nullptr;
    }
    auto firstChar = npc(text)->charAt(0);
    if(::java::lang::Character::isWhitespace(firstChar)) {
        return nullptr;
    }
    if(firstChar == u'\'') {
        if(npc(text)->charAt(lastIx) != u'\'') {
            return nullptr;
        }
        firstChar = npc(text)->charAt(1);
        if(::java::lang::Character::isWhitespace(firstChar)) {
            return nullptr;
        }
        ::java::lang::String* wbName;
        int32_t sheetStartPos;
        if(firstChar == u'[') {
            auto rbPos = npc(npc(text)->toString())->lastIndexOf(static_cast< int32_t >(u']'));
            if(rbPos < 0) {
                return nullptr;
            }
            wbName = unescapeString(npc(text)->subSequence(2, rbPos));
            if(wbName == nullptr || canTrim(wbName)) {
                return nullptr;
            }
            sheetStartPos = rbPos + int32_t(1);
        } else {
            wbName = nullptr;
            sheetStartPos = 1;
        }
        auto sheetName = unescapeString(npc(text)->subSequence(sheetStartPos, lastIx));
        if(sheetName == nullptr) {
            return nullptr;
        }
        return new ::java::lang::StringArray({
            wbName
            , sheetName
        });
    }
    if(firstChar == u'[') {
        auto rbPos = npc(npc(text)->toString())->lastIndexOf(static_cast< int32_t >(u']'));
        if(rbPos < 0) {
            return nullptr;
        }
        auto wbName = npc(text)->subSequence(1, rbPos);
        if(canTrim(wbName)) {
            return nullptr;
        }
        auto sheetName = npc(text)->subSequence(rbPos + int32_t(1), npc(text)->length());
        if(canTrim(sheetName)) {
            return nullptr;
        }
        return new ::java::lang::StringArray({
            npc(wbName)->toString()
            , npc(sheetName)->toString()
        });
    }
    return new ::java::lang::StringArray({
        static_cast< ::java::lang::String* >(nullptr)
        , npc(text)->toString()
    });
}

java::lang::String* poi::ss::formula::functions::Indirect::unescapeString(::java::lang::CharSequence* text)
{
    clinit();
    auto len = npc(text)->length();
    auto sb = new ::java::lang::StringBuilder(len);
    auto i = int32_t(0);
    while (i < len) {
        auto ch = npc(text)->charAt(i);
        if(ch == u'\'') {
            i++;
            if(i >= len) {
                return nullptr;
            }
            ch = npc(text)->charAt(i);
            if(ch != u'\'') {
                return nullptr;
            }
        }
        npc(sb)->append(ch);
        i++;
    }
    return npc(sb)->toString();
}

bool poi::ss::formula::functions::Indirect::canTrim(::java::lang::CharSequence* text)
{
    clinit();
    auto lastIx = npc(text)->length() - int32_t(1);
    if(lastIx < 0) {
        return false;
    }
    if(::java::lang::Character::isWhitespace(npc(text)->charAt(0))) {
        return true;
    }
    if(::java::lang::Character::isWhitespace(npc(text)->charAt(lastIx))) {
        return true;
    }
    return false;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::functions::Indirect::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.Indirect", 44);
    return c;
}

void poi::ss::formula::functions::Indirect::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        instance_ = new Indirect();
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* poi::ss::formula::functions::Indirect::getClass0()
{
    return class_();
}

