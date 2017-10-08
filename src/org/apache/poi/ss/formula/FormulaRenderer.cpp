// Generated from /POI/java/org/apache/poi/ss/formula/FormulaRenderer.java
#include <org/apache/poi/ss/formula/FormulaRenderer.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/IllegalStateException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/util/Stack.hpp>
#include <org/apache/poi/ss/formula/WorkbookDependentFormula.hpp>
#include <org/apache/poi/ss/formula/ptg/AttrPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/MemAreaPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/MemErrPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/MemFuncPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/OperationPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/ParenthesisPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/Ptg.hpp>
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
            namespace ptg
            {
typedef ::SubArray< ::poi::ss::formula::ptg::Ptg, ::java::lang::ObjectArray > PtgArray;
            } // ptg
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

poi::ss::formula::FormulaRenderer::FormulaRenderer(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::FormulaRenderer::FormulaRenderer()
    : FormulaRenderer(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::lang::String* poi::ss::formula::FormulaRenderer::toFormulaString(FormulaRenderingWorkbook* book, ::poi::ss::formula::ptg::PtgArray* ptgs)
{
    clinit();
    if(ptgs == nullptr || npc(ptgs)->length == 0) {
        throw new ::java::lang::IllegalArgumentException(u"ptgs must not be null"_j);
    }
    auto stack = new ::java::util::Stack();
    for(auto ptg : *npc(ptgs)) {
        if(dynamic_cast< ::poi::ss::formula::ptg::MemAreaPtg* >(ptg) != nullptr || dynamic_cast< ::poi::ss::formula::ptg::MemFuncPtg* >(ptg) != nullptr || dynamic_cast< ::poi::ss::formula::ptg::MemErrPtg* >(ptg) != nullptr) {
            continue;
        }
        if(dynamic_cast< ::poi::ss::formula::ptg::ParenthesisPtg* >(ptg) != nullptr) {
            auto contents = java_cast< ::java::lang::String* >(npc(stack)->pop());
            npc(stack)->push(::java::lang::StringBuilder().append(u"("_j)->append(contents)
                ->append(u")"_j)->toString());
            continue;
        }
        if(dynamic_cast< ::poi::ss::formula::ptg::AttrPtg* >(ptg) != nullptr) {
            auto attrPtg = (java_cast< ::poi::ss::formula::ptg::AttrPtg* >(ptg));
            if(npc(attrPtg)->isOptimizedIf() || npc(attrPtg)->isOptimizedChoose() || npc(attrPtg)->isSkip()) {
                continue;
            }
            if(npc(attrPtg)->isSpace()) {
                continue;
            }
            if(npc(attrPtg)->isSemiVolatile()) {
                continue;
            }
            if(npc(attrPtg)->isSum()) {
                auto operands = getOperands(stack, npc(attrPtg)->getNumberOfOperands());
                npc(stack)->push(npc(attrPtg)->toFormulaString(operands));
                continue;
            }
            throw new ::java::lang::RuntimeException(::java::lang::StringBuilder().append(u"Unexpected tAttr: "_j)->append(static_cast< ::java::lang::Object* >(attrPtg))->toString());
        }
        if(dynamic_cast< WorkbookDependentFormula* >(ptg) != nullptr) {
            auto optg = java_cast< WorkbookDependentFormula* >(ptg);
            npc(stack)->push(npc(optg)->toFormulaString(book));
            continue;
        }
        if(!(dynamic_cast< ::poi::ss::formula::ptg::OperationPtg* >(ptg) != nullptr)) {
            npc(stack)->push(npc(ptg)->toFormulaString());
            continue;
        }
        auto o = java_cast< ::poi::ss::formula::ptg::OperationPtg* >(ptg);
        auto operands = getOperands(stack, npc(o)->getNumberOfOperands());
        npc(stack)->push(npc(o)->toFormulaString(operands));
    }
    if(npc(stack)->isEmpty()) {
        throw new ::java::lang::IllegalStateException(u"Stack underflow"_j);
    }
    auto result = java_cast< ::java::lang::String* >(npc(stack)->pop());
    if(!npc(stack)->isEmpty()) {
        throw new ::java::lang::IllegalStateException(u"too much stuff left on the stack"_j);
    }
    return result;
}

java::lang::StringArray* poi::ss::formula::FormulaRenderer::getOperands(::java::util::Stack* stack, int32_t nOperands)
{
    clinit();
    auto operands = new ::java::lang::StringArray(nOperands);
    for (auto j = nOperands - int32_t(1); j >= 0; j--) {
        if(npc(stack)->isEmpty()) {
            auto msg = ::java::lang::StringBuilder().append(u"Too few arguments supplied to operation. Expected ("_j)->append(nOperands)
                ->append(u") operands but got ("_j)
                ->append((nOperands - j - int32_t(1)))
                ->append(u")"_j)->toString();
            throw new ::java::lang::IllegalStateException(msg);
        }
        operands->set(j, java_cast< ::java::lang::String* >(npc(stack)->pop()));
    }
    return operands;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::FormulaRenderer::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.FormulaRenderer", 41);
    return c;
}

java::lang::Class* poi::ss::formula::FormulaRenderer::getClass0()
{
    return class_();
}

