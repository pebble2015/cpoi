// Generated from /POI/java/org/apache/poi/ss/formula/functions/Offset.java
#include <org/apache/poi/ss/formula/functions/Offset.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/ss/formula/eval/AreaEval.hpp>
#include <org/apache/poi/ss/formula/eval/ErrorEval.hpp>
#include <org/apache/poi/ss/formula/eval/EvaluationException.hpp>
#include <org/apache/poi/ss/formula/eval/MissingArgEval.hpp>
#include <org/apache/poi/ss/formula/eval/OperandResolver.hpp>
#include <org/apache/poi/ss/formula/eval/RefEval.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>
#include <org/apache/poi/ss/formula/functions/Offset_BaseRef.hpp>
#include <org/apache/poi/ss/formula/functions/Offset_LinearOffsetRange.hpp>
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

poi::ss::formula::functions::Offset::Offset(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::functions::Offset::Offset()
    : Offset(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

constexpr int32_t poi::ss::formula::functions::Offset::LAST_VALID_ROW_INDEX;

constexpr int32_t poi::ss::formula::functions::Offset::LAST_VALID_COLUMN_INDEX;

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::Offset::evaluate(::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcCellRow, int32_t srcCellCol)
{
    if(npc(args)->length < 3 || npc(args)->length > 5) {
        return ::poi::ss::formula::eval::ErrorEval::VALUE_INVALID();
    }
    try {
        auto baseRef = evaluateBaseRef((*args)[int32_t(0)]);
        auto rowOffset = evaluateIntArg((*args)[int32_t(1)], srcCellRow, srcCellCol);
        auto columnOffset = evaluateIntArg((*args)[int32_t(2)], srcCellRow, srcCellCol);
        auto height = npc(baseRef)->getHeight();
        auto width = npc(baseRef)->getWidth();
        switch (npc(args)->length) {
        case int32_t(5):
            if(!(dynamic_cast< ::poi::ss::formula::eval::MissingArgEval* >((*args)[int32_t(4)]) != nullptr)) {
                width = evaluateIntArg((*args)[int32_t(4)], srcCellRow, srcCellCol);
            }
        case int32_t(4):
            if(!(dynamic_cast< ::poi::ss::formula::eval::MissingArgEval* >((*args)[int32_t(3)]) != nullptr)) {
                height = evaluateIntArg((*args)[int32_t(3)], srcCellRow, srcCellCol);
            }
            break;
        default:
            break;
        }

        if(height == 0 || width == 0) {
            return ::poi::ss::formula::eval::ErrorEval::REF_INVALID();
        }
        auto rowOffsetRange = new Offset_LinearOffsetRange(rowOffset, height);
        auto colOffsetRange = new Offset_LinearOffsetRange(columnOffset, width);
        return createOffset(baseRef, rowOffsetRange, colOffsetRange);
    } catch (::poi::ss::formula::eval::EvaluationException* e) {
        return npc(e)->getErrorEval();
    }
}

poi::ss::formula::eval::AreaEval* poi::ss::formula::functions::Offset::createOffset(Offset_BaseRef* baseRef, Offset_LinearOffsetRange* orRow, Offset_LinearOffsetRange* orCol) /* throws(EvaluationException) */
{
    clinit();
    auto absRows = npc(orRow)->normaliseAndTranslate(npc(baseRef)->getFirstRowIndex());
    auto absCols = npc(orCol)->normaliseAndTranslate(npc(baseRef)->getFirstColumnIndex());
    if(npc(absRows)->isOutOfBounds(0, LAST_VALID_ROW_INDEX)) {
        throw new ::poi::ss::formula::eval::EvaluationException(::poi::ss::formula::eval::ErrorEval::REF_INVALID());
    }
    if(npc(absCols)->isOutOfBounds(0, LAST_VALID_COLUMN_INDEX)) {
        throw new ::poi::ss::formula::eval::EvaluationException(::poi::ss::formula::eval::ErrorEval::REF_INVALID());
    }
    return npc(baseRef)->offset(npc(orRow)->getFirstIndex(), npc(orRow)->getLastIndex(), npc(orCol)->getFirstIndex(), npc(orCol)->getLastIndex());
}

poi::ss::formula::functions::Offset_BaseRef* poi::ss::formula::functions::Offset::evaluateBaseRef(::poi::ss::formula::eval::ValueEval* eval) /* throws(EvaluationException) */
{
    clinit();
    if(dynamic_cast< ::poi::ss::formula::eval::RefEval* >(eval) != nullptr) {
        return new Offset_BaseRef(java_cast< ::poi::ss::formula::eval::RefEval* >(eval));
    }
    if(dynamic_cast< ::poi::ss::formula::eval::AreaEval* >(eval) != nullptr) {
        return new Offset_BaseRef(java_cast< ::poi::ss::formula::eval::AreaEval* >(eval));
    }
    if(dynamic_cast< ::poi::ss::formula::eval::ErrorEval* >(eval) != nullptr) {
        throw new ::poi::ss::formula::eval::EvaluationException(java_cast< ::poi::ss::formula::eval::ErrorEval* >(eval));
    }
    throw new ::poi::ss::formula::eval::EvaluationException(::poi::ss::formula::eval::ErrorEval::VALUE_INVALID());
}

int32_t poi::ss::formula::functions::Offset::evaluateIntArg(::poi::ss::formula::eval::ValueEval* eval, int32_t srcCellRow, int32_t srcCellCol) /* throws(EvaluationException) */
{
    clinit();
    auto ve = ::poi::ss::formula::eval::OperandResolver::getSingleValue(eval, srcCellRow, srcCellCol);
    return ::poi::ss::formula::eval::OperandResolver::coerceValueToInt(ve);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::functions::Offset::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.Offset", 42);
    return c;
}

java::lang::Class* poi::ss::formula::functions::Offset::getClass0()
{
    return class_();
}

