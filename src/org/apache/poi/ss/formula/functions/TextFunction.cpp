// Generated from /POI/java/org/apache/poi/ss/formula/functions/TextFunction.java
#include <org/apache/poi/ss/formula/functions/TextFunction.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <org/apache/poi/ss/formula/eval/ErrorEval.hpp>
#include <org/apache/poi/ss/formula/eval/EvaluationException.hpp>
#include <org/apache/poi/ss/formula/eval/OperandResolver.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>
#include <org/apache/poi/ss/formula/functions/TextFunction_11.hpp>
#include <org/apache/poi/ss/formula/functions/TextFunction_1.hpp>
#include <org/apache/poi/ss/formula/functions/TextFunction_2.hpp>
#include <org/apache/poi/ss/formula/functions/TextFunction_3.hpp>
#include <org/apache/poi/ss/formula/functions/TextFunction_4.hpp>
#include <org/apache/poi/ss/formula/functions/TextFunction_5.hpp>
#include <org/apache/poi/ss/formula/functions/TextFunction_6.hpp>
#include <org/apache/poi/ss/formula/functions/TextFunction_7.hpp>
#include <org/apache/poi/ss/formula/functions/TextFunction_8.hpp>
#include <org/apache/poi/ss/formula/functions/TextFunction_9.hpp>
#include <org/apache/poi/ss/formula/functions/TextFunction_10.hpp>
#include <org/apache/poi/ss/formula/functions/TextFunction_LeftRight.hpp>
#include <org/apache/poi/ss/formula/functions/TextFunction_SearchFind.hpp>
#include <org/apache/poi/ss/usermodel/DataFormatter.hpp>

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

poi::ss::formula::functions::TextFunction::TextFunction(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::functions::TextFunction::TextFunction()
    : TextFunction(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::ss::usermodel::DataFormatter*& poi::ss::formula::functions::TextFunction::formatter()
{
    clinit();
    return formatter_;
}
poi::ss::usermodel::DataFormatter* poi::ss::formula::functions::TextFunction::formatter_;

java::lang::String* poi::ss::formula::functions::TextFunction::evaluateStringArg(::poi::ss::formula::eval::ValueEval* eval, int32_t srcRow, int32_t srcCol) /* throws(EvaluationException) */
{
    clinit();
    auto ve = ::poi::ss::formula::eval::OperandResolver::getSingleValue(eval, srcRow, srcCol);
    return ::poi::ss::formula::eval::OperandResolver::coerceValueToString(ve);
}

int32_t poi::ss::formula::functions::TextFunction::evaluateIntArg(::poi::ss::formula::eval::ValueEval* arg, int32_t srcCellRow, int32_t srcCellCol) /* throws(EvaluationException) */
{
    clinit();
    auto ve = ::poi::ss::formula::eval::OperandResolver::getSingleValue(arg, srcCellRow, srcCellCol);
    return ::poi::ss::formula::eval::OperandResolver::coerceValueToInt(ve);
}

double poi::ss::formula::functions::TextFunction::evaluateDoubleArg(::poi::ss::formula::eval::ValueEval* arg, int32_t srcCellRow, int32_t srcCellCol) /* throws(EvaluationException) */
{
    clinit();
    auto ve = ::poi::ss::formula::eval::OperandResolver::getSingleValue(arg, srcCellRow, srcCellCol);
    return ::poi::ss::formula::eval::OperandResolver::coerceValueToDouble(ve);
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::TextFunction::evaluate(::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcCellRow, int32_t srcCellCol)
{
    try {
        return evaluateFunc(args, srcCellRow, srcCellCol);
    } catch (::poi::ss::formula::eval::EvaluationException* e) {
        return npc(e)->getErrorEval();
    }
}

poi::ss::formula::functions::Function*& poi::ss::formula::functions::TextFunction::CHAR()
{
    clinit();
    return CHAR_;
}
poi::ss::formula::functions::Function* poi::ss::formula::functions::TextFunction::CHAR_;

poi::ss::formula::functions::Function*& poi::ss::formula::functions::TextFunction::LEN()
{
    clinit();
    return LEN_;
}
poi::ss::formula::functions::Function* poi::ss::formula::functions::TextFunction::LEN_;

poi::ss::formula::functions::Function*& poi::ss::formula::functions::TextFunction::LOWER()
{
    clinit();
    return LOWER_;
}
poi::ss::formula::functions::Function* poi::ss::formula::functions::TextFunction::LOWER_;

poi::ss::formula::functions::Function*& poi::ss::formula::functions::TextFunction::UPPER()
{
    clinit();
    return UPPER_;
}
poi::ss::formula::functions::Function* poi::ss::formula::functions::TextFunction::UPPER_;

poi::ss::formula::functions::Function*& poi::ss::formula::functions::TextFunction::PROPER()
{
    clinit();
    return PROPER_;
}
poi::ss::formula::functions::Function* poi::ss::formula::functions::TextFunction::PROPER_;

poi::ss::formula::functions::Function*& poi::ss::formula::functions::TextFunction::TRIM()
{
    clinit();
    return TRIM_;
}
poi::ss::formula::functions::Function* poi::ss::formula::functions::TextFunction::TRIM_;

poi::ss::formula::functions::Function*& poi::ss::formula::functions::TextFunction::CLEAN()
{
    clinit();
    return CLEAN_;
}
poi::ss::formula::functions::Function* poi::ss::formula::functions::TextFunction::CLEAN_;

poi::ss::formula::functions::Function*& poi::ss::formula::functions::TextFunction::MID()
{
    clinit();
    return MID_;
}
poi::ss::formula::functions::Function* poi::ss::formula::functions::TextFunction::MID_;

poi::ss::formula::functions::Function*& poi::ss::formula::functions::TextFunction::LEFT()
{
    clinit();
    return LEFT_;
}
poi::ss::formula::functions::Function* poi::ss::formula::functions::TextFunction::LEFT_;

poi::ss::formula::functions::Function*& poi::ss::formula::functions::TextFunction::RIGHT()
{
    clinit();
    return RIGHT_;
}
poi::ss::formula::functions::Function* poi::ss::formula::functions::TextFunction::RIGHT_;

poi::ss::formula::functions::Function*& poi::ss::formula::functions::TextFunction::CONCATENATE()
{
    clinit();
    return CONCATENATE_;
}
poi::ss::formula::functions::Function* poi::ss::formula::functions::TextFunction::CONCATENATE_;

poi::ss::formula::functions::Function*& poi::ss::formula::functions::TextFunction::EXACT()
{
    clinit();
    return EXACT_;
}
poi::ss::formula::functions::Function* poi::ss::formula::functions::TextFunction::EXACT_;

poi::ss::formula::functions::Function*& poi::ss::formula::functions::TextFunction::TEXT()
{
    clinit();
    return TEXT_;
}
poi::ss::formula::functions::Function* poi::ss::formula::functions::TextFunction::TEXT_;

poi::ss::formula::functions::Function*& poi::ss::formula::functions::TextFunction::FIND()
{
    clinit();
    return FIND_;
}
poi::ss::formula::functions::Function* poi::ss::formula::functions::TextFunction::FIND_;

poi::ss::formula::functions::Function*& poi::ss::formula::functions::TextFunction::SEARCH()
{
    clinit();
    return SEARCH_;
}
poi::ss::formula::functions::Function* poi::ss::formula::functions::TextFunction::SEARCH_;

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::functions::TextFunction::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.TextFunction", 48);
    return c;
}

void poi::ss::formula::functions::TextFunction::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        formatter_ = new ::poi::ss::usermodel::DataFormatter();
        CHAR_ = new TextFunction_1();
        LEN_ = new TextFunction_2();
        LOWER_ = new TextFunction_3();
        UPPER_ = new TextFunction_4();
        PROPER_ = new TextFunction_5();
        TRIM_ = new TextFunction_6();
        CLEAN_ = new TextFunction_7();
        MID_ = new TextFunction_8();
        LEFT_ = new TextFunction_LeftRight(true);
        RIGHT_ = new TextFunction_LeftRight(false);
        CONCATENATE_ = new TextFunction_9();
        EXACT_ = new TextFunction_10();
        TEXT_ = new TextFunction_11();
        FIND_ = new TextFunction_SearchFind(true);
        SEARCH_ = new TextFunction_SearchFind(false);
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* poi::ss::formula::functions::TextFunction::getClass0()
{
    return class_();
}

