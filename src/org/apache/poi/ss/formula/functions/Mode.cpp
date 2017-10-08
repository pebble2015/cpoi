// Generated from /POI/java/org/apache/poi/ss/formula/functions/Mode.java
#include <org/apache/poi/ss/formula/functions/Mode.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Double.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/Arrays.hpp>
#include <java/util/List.hpp>
#include <org/apache/poi/ss/formula/TwoDEval.hpp>
#include <org/apache/poi/ss/formula/eval/BlankEval.hpp>
#include <org/apache/poi/ss/formula/eval/BoolEval.hpp>
#include <org/apache/poi/ss/formula/eval/ErrorEval.hpp>
#include <org/apache/poi/ss/formula/eval/EvaluationException.hpp>
#include <org/apache/poi/ss/formula/eval/NumberEval.hpp>
#include <org/apache/poi/ss/formula/eval/RefEval.hpp>
#include <org/apache/poi/ss/formula/eval/StringEval.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>
#include <Array.hpp>
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

poi::ss::formula::functions::Mode::Mode(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::functions::Mode::Mode()
    : Mode(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

double poi::ss::formula::functions::Mode::evaluate(::doubleArray* v) /* throws(EvaluationException) */
{
    clinit();
    if(npc(v)->length < 2) {
        throw new ::poi::ss::formula::eval::EvaluationException(::poi::ss::formula::eval::ErrorEval::NA());
    }
    auto counts = new ::int32_tArray(npc(v)->length);
    ::java::util::Arrays::fill(counts, int32_t(1));
    for (int32_t i = int32_t(0), iSize = npc(v)->length; i < iSize; i++) {
        for (int32_t j = i + int32_t(1), jSize = npc(v)->length; j < jSize; j++) {
            if((*v)[i] == (*v)[j])
                (*counts)[i]++;

        }
    }
    double maxv = int32_t(0);
    auto maxc = int32_t(0);
    for (int32_t i = int32_t(0), iSize = npc(counts)->length; i < iSize; i++) {
        if((*counts)[i] > maxc) {
            maxv = (*v)[i];
            maxc = (*counts)[i];
        }
    }
    if(maxc > 1) {
        return maxv;
    }
    throw new ::poi::ss::formula::eval::EvaluationException(::poi::ss::formula::eval::ErrorEval::NA());
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::Mode::evaluate(::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcCellRow, int32_t srcCellCol)
{
    double result;
    try {
        ::java::util::List* temp = new ::java::util::ArrayList();
        for (auto i = int32_t(0); i < npc(args)->length; i++) {
            collectValues((*args)[i], temp);
        }
        auto values = new ::doubleArray(npc(temp)->size());
        for (auto i = int32_t(0); i < npc(values)->length; i++) {
            (*values)[i] = npc(java_cast< ::java::lang::Double* >(npc(temp)->get(i)))->doubleValue();
        }
        result = evaluate(values);
    } catch (::poi::ss::formula::eval::EvaluationException* e) {
        return npc(e)->getErrorEval();
    }
    return new ::poi::ss::formula::eval::NumberEval(result);
}

void poi::ss::formula::functions::Mode::collectValues(::poi::ss::formula::eval::ValueEval* arg, ::java::util::List* temp) /* throws(EvaluationException) */
{
    clinit();
    if(dynamic_cast< ::poi::ss::formula::TwoDEval* >(arg) != nullptr) {
        auto ae = java_cast< ::poi::ss::formula::TwoDEval* >(arg);
        auto width = npc(ae)->getWidth();
        auto height = npc(ae)->getHeight();
        for (auto rrIx = int32_t(0); rrIx < height; rrIx++) {
            for (auto rcIx = int32_t(0); rcIx < width; rcIx++) {
                auto ve1 = npc(ae)->getValue(rrIx, rcIx);
                collectValue(ve1, temp, false);
            }
        }
        return;
    }
    if(dynamic_cast< ::poi::ss::formula::eval::RefEval* >(arg) != nullptr) {
        auto re = java_cast< ::poi::ss::formula::eval::RefEval* >(arg);
        auto const firstSheetIndex = npc(re)->getFirstSheetIndex();
        auto const lastSheetIndex = npc(re)->getLastSheetIndex();
        for (auto sIx = firstSheetIndex; sIx <= lastSheetIndex; sIx++) {
            collectValue(npc(re)->getInnerValueEval(sIx), temp, true);
        }
        return;
    }
    collectValue(arg, temp, true);
}

void poi::ss::formula::functions::Mode::collectValue(::poi::ss::formula::eval::ValueEval* arg, ::java::util::List* temp, bool mustBeNumber) /* throws(EvaluationException) */
{
    clinit();
    if(dynamic_cast< ::poi::ss::formula::eval::ErrorEval* >(arg) != nullptr) {
        throw new ::poi::ss::formula::eval::EvaluationException(java_cast< ::poi::ss::formula::eval::ErrorEval* >(arg));
    }
    if(arg == static_cast< ::poi::ss::formula::eval::ValueEval* >(::poi::ss::formula::eval::BlankEval::instance()) || dynamic_cast< ::poi::ss::formula::eval::BoolEval* >(arg) != nullptr || dynamic_cast< ::poi::ss::formula::eval::StringEval* >(arg) != nullptr) {
        if(mustBeNumber) {
            throw ::poi::ss::formula::eval::EvaluationException::invalidValue();
        }
        return;
    }
    if(dynamic_cast< ::poi::ss::formula::eval::NumberEval* >(arg) != nullptr) {
        npc(temp)->add(static_cast< ::java::lang::Object* >(new ::java::lang::Double(npc((java_cast< ::poi::ss::formula::eval::NumberEval* >(arg)))->getNumberValue())));
        return;
    }
    throw new ::java::lang::RuntimeException(::java::lang::StringBuilder().append(u"Unexpected value type ("_j)->append(npc(npc(arg)->getClass())->getName())
        ->append(u")"_j)->toString());
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::functions::Mode::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.Mode", 40);
    return c;
}

java::lang::Class* poi::ss::formula::functions::Mode::getClass0()
{
    return class_();
}

