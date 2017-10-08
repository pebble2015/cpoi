// Generated from /POI/java/org/apache/poi/ss/formula/SheetRefEvaluator.java
#include <org/apache/poi/ss/formula/SheetRefEvaluator.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/ss/formula/EvaluationCell.hpp>
#include <org/apache/poi/ss/formula/EvaluationSheet.hpp>
#include <org/apache/poi/ss/formula/EvaluationTracker.hpp>
#include <org/apache/poi/ss/formula/EvaluationWorkbook.hpp>
#include <org/apache/poi/ss/formula/WorkbookEvaluator.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>
#include <org/apache/poi/ss/formula/ptg/FuncVarPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/Ptg.hpp>
#include <org/apache/poi/ss/usermodel/CellType.hpp>
#include <ObjectArray.hpp>
#include <SubArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
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

poi::ss::formula::SheetRefEvaluator::SheetRefEvaluator(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::SheetRefEvaluator::SheetRefEvaluator(WorkbookEvaluator* bookEvaluator, EvaluationTracker* tracker, int32_t sheetIndex) 
    : SheetRefEvaluator(*static_cast< ::default_init_tag* >(0))
{
    ctor(bookEvaluator,tracker,sheetIndex);
}

void poi::ss::formula::SheetRefEvaluator::ctor(WorkbookEvaluator* bookEvaluator, EvaluationTracker* tracker, int32_t sheetIndex)
{
    super::ctor();
    if(sheetIndex < 0) {
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Invalid sheetIndex: "_j)->append(sheetIndex)
            ->append(u"."_j)->toString());
    }
    _bookEvaluator = bookEvaluator;
    _tracker = tracker;
    _sheetIndex = sheetIndex;
}

java::lang::String* poi::ss::formula::SheetRefEvaluator::getSheetName()
{
    return npc(_bookEvaluator)->getSheetName(_sheetIndex);
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::SheetRefEvaluator::getEvalForCell(int32_t rowIndex, int32_t columnIndex)
{
    return npc(_bookEvaluator)->evaluateReference(getSheet(), _sheetIndex, rowIndex, columnIndex, _tracker);
}

poi::ss::formula::EvaluationSheet* poi::ss::formula::SheetRefEvaluator::getSheet()
{
    if(_sheet == nullptr) {
        _sheet = npc(_bookEvaluator)->getSheet(_sheetIndex);
    }
    return _sheet;
}

bool poi::ss::formula::SheetRefEvaluator::isSubTotal(int32_t rowIndex, int32_t columnIndex)
{
    auto subtotal = false;
    auto cell = npc(getSheet())->getCell(rowIndex, columnIndex);
    if(cell != nullptr && npc(cell)->getCellTypeEnum() == ::poi::ss::usermodel::CellType::FORMULA) {
        auto wb = npc(_bookEvaluator)->getWorkbook();
        for(auto ptg : *npc(npc(wb)->getFormulaTokens(cell))) {
            if(dynamic_cast< ::poi::ss::formula::ptg::FuncVarPtg* >(ptg) != nullptr) {
                auto f = java_cast< ::poi::ss::formula::ptg::FuncVarPtg* >(ptg);
                if(npc(u"SUBTOTAL"_j)->equals(static_cast< ::java::lang::Object* >(npc(f)->getName()))) {
                    subtotal = true;
                    break;
                }
            }
        }
    }
    return subtotal;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::SheetRefEvaluator::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.SheetRefEvaluator", 43);
    return c;
}

java::lang::Class* poi::ss::formula::SheetRefEvaluator::getClass0()
{
    return class_();
}

