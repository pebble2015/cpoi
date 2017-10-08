// Generated from /POI/java/org/apache/poi/ss/formula/ConditionalFormattingEvaluator.java
#include <org/apache/poi/ss/formula/ConditionalFormattingEvaluator.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/Collections.hpp>
#include <java/util/HashMap.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/List.hpp>
#include <java/util/Map.hpp>
#include <org/apache/poi/ss/formula/EvaluationConditionalFormatRule.hpp>
#include <org/apache/poi/ss/formula/WorkbookEvaluator.hpp>
#include <org/apache/poi/ss/formula/WorkbookEvaluatorProvider.hpp>
#include <org/apache/poi/ss/usermodel/Cell.hpp>
#include <org/apache/poi/ss/usermodel/ConditionalFormatting.hpp>
#include <org/apache/poi/ss/usermodel/ConditionalFormattingRule.hpp>
#include <org/apache/poi/ss/usermodel/Row.hpp>
#include <org/apache/poi/ss/usermodel/Sheet.hpp>
#include <org/apache/poi/ss/usermodel/SheetConditionalFormatting.hpp>
#include <org/apache/poi/ss/usermodel/Workbook.hpp>
#include <org/apache/poi/ss/util/CellRangeAddress.hpp>
#include <org/apache/poi/ss/util/CellRangeAddressBase.hpp>
#include <org/apache/poi/ss/util/CellReference.hpp>
#include <ObjectArray.hpp>
#include <SubArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace poi
{
    namespace ss
    {
        namespace util
        {
typedef ::SubArray< ::poi::ss::util::CellRangeAddressBase, ::java::lang::ObjectArray > CellRangeAddressBaseArray;
typedef ::SubArray< ::poi::ss::util::CellRangeAddress, CellRangeAddressBaseArray > CellRangeAddressArray;
        } // util
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

poi::ss::formula::ConditionalFormattingEvaluator::ConditionalFormattingEvaluator(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::ConditionalFormattingEvaluator::ConditionalFormattingEvaluator(::poi::ss::usermodel::Workbook* wb, WorkbookEvaluatorProvider* provider) 
    : ConditionalFormattingEvaluator(*static_cast< ::default_init_tag* >(0))
{
    ctor(wb,provider);
}

void poi::ss::formula::ConditionalFormattingEvaluator::init()
{
    formats = new ::java::util::HashMap();
    values = new ::java::util::HashMap();
}

void poi::ss::formula::ConditionalFormattingEvaluator::ctor(::poi::ss::usermodel::Workbook* wb, WorkbookEvaluatorProvider* provider)
{
    super::ctor();
    init();
    this->workbook = wb;
    this->workbookEvaluator = npc(provider)->_getWorkbookEvaluator();
}

poi::ss::formula::WorkbookEvaluator* poi::ss::formula::ConditionalFormattingEvaluator::getWorkbookEvaluator()
{
    return workbookEvaluator;
}

void poi::ss::formula::ConditionalFormattingEvaluator::clearAllCachedFormats()
{
    npc(formats)->clear();
}

void poi::ss::formula::ConditionalFormattingEvaluator::clearAllCachedValues()
{
    npc(values)->clear();
}

java::util::List* poi::ss::formula::ConditionalFormattingEvaluator::getRules(::poi::ss::usermodel::Sheet* sheet)
{
    auto const sheetName = npc(sheet)->getSheetName();
    auto rules = java_cast< ::java::util::List* >(npc(formats)->get(sheetName));
    if(rules == nullptr) {
        if(npc(formats)->containsKey(sheetName)) {
            return ::java::util::Collections::emptyList();
        }
        auto const scf = npc(sheet)->getSheetConditionalFormatting();
        auto const count = npc(scf)->getNumConditionalFormattings();
        rules = new ::java::util::ArrayList(count);
        npc(formats)->put(sheetName, rules);
        for (auto i = int32_t(0); i < count; i++) {
            auto f = npc(scf)->getConditionalFormattingAt(i);
            auto const regions = npc(f)->getFormattingRanges();
            for (auto r = int32_t(0); r < npc(f)->getNumberOfRules(); r++) {
                auto rule = npc(f)->getRule(r);
                npc(rules)->add(static_cast< ::java::lang::Object* >(new EvaluationConditionalFormatRule(workbookEvaluator, sheet, f, i, rule, r, regions)));
            }
        }
        ::java::util::Collections::sort(rules);
    }
    return ::java::util::Collections::unmodifiableList(rules);
}

java::util::List* poi::ss::formula::ConditionalFormattingEvaluator::getConditionalFormattingForCell(::poi::ss::util::CellReference* cellRef)
{
    auto rules = java_cast< ::java::util::List* >(npc(values)->get(cellRef));
    if(rules == nullptr) {
        rules = new ::java::util::ArrayList();
        ::poi::ss::usermodel::Sheet* sheet = nullptr;
        if(npc(cellRef)->getSheetName() != nullptr)
            sheet = npc(workbook)->getSheet(npc(cellRef)->getSheetName());
        else
            sheet = npc(workbook)->getSheetAt(npc(workbook)->getActiveSheetIndex());
        auto stopIfTrue = false;
        for (auto _i = npc(getRules(sheet))->iterator(); _i->hasNext(); ) {
            EvaluationConditionalFormatRule* rule = java_cast< EvaluationConditionalFormatRule* >(_i->next());
            {
                if(stopIfTrue) {
                    continue;
                }
                if(npc(rule)->matches(cellRef)) {
                    npc(rules)->add(static_cast< ::java::lang::Object* >(rule));
                    stopIfTrue = npc(npc(rule)->getRule())->getStopIfTrue();
                }
            }
        }
        ::java::util::Collections::sort(rules);
        npc(values)->put(cellRef, rules);
    }
    return ::java::util::Collections::unmodifiableList(rules);
}

java::util::List* poi::ss::formula::ConditionalFormattingEvaluator::getConditionalFormattingForCell(::poi::ss::usermodel::Cell* cell)
{
    return getConditionalFormattingForCell(getRef(cell));
}

poi::ss::util::CellReference* poi::ss::formula::ConditionalFormattingEvaluator::getRef(::poi::ss::usermodel::Cell* cell)
{
    clinit();
    return new ::poi::ss::util::CellReference(npc(npc(cell)->getSheet())->getSheetName(), npc(cell)->getRowIndex(), npc(cell)->getColumnIndex(), false, false);
}

java::util::List* poi::ss::formula::ConditionalFormattingEvaluator::getFormatRulesForSheet(::java::lang::String* sheetName)
{
    return getFormatRulesForSheet(npc(workbook)->getSheet(sheetName));
}

java::util::List* poi::ss::formula::ConditionalFormattingEvaluator::getFormatRulesForSheet(::poi::ss::usermodel::Sheet* sheet)
{
    return getRules(sheet);
}

java::util::List* poi::ss::formula::ConditionalFormattingEvaluator::getMatchingCells(::poi::ss::usermodel::Sheet* sheet, int32_t conditionalFormattingIndex, int32_t ruleIndex)
{
    for (auto _i = npc(getRules(sheet))->iterator(); _i->hasNext(); ) {
        EvaluationConditionalFormatRule* rule = java_cast< EvaluationConditionalFormatRule* >(_i->next());
        {
            if(npc(npc(rule)->getSheet())->equals(sheet) && npc(rule)->getFormattingIndex() == conditionalFormattingIndex && npc(rule)->getRuleIndex() == ruleIndex) {
                return getMatchingCells(rule);
            }
        }
    }
    return ::java::util::Collections::emptyList();
}

java::util::List* poi::ss::formula::ConditionalFormattingEvaluator::getMatchingCells(EvaluationConditionalFormatRule* rule)
{
    ::java::util::List* const cells = new ::java::util::ArrayList();
    auto const sheet = npc(rule)->getSheet();
    for(auto region : *npc(npc(rule)->getRegions())) {
        for (auto r = npc(region)->getFirstRow(); r <= npc(region)->getLastRow(); r++) {
            auto const row = npc(sheet)->getRow(r);
            if(row == nullptr) {
                continue;
            }
            for (auto c = npc(region)->getFirstColumn(); c <= npc(region)->getLastColumn(); c++) {
                auto const cell = npc(row)->getCell(c);
                if(cell == nullptr) {
                    continue;
                }
                auto cellRules = getConditionalFormattingForCell(cell);
                if(npc(cellRules)->contains(static_cast< ::java::lang::Object* >(rule))) {
                    npc(cells)->add(static_cast< ::java::lang::Object* >(cell));
                }
            }
        }
    }
    return ::java::util::Collections::unmodifiableList(cells);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::ConditionalFormattingEvaluator::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.ConditionalFormattingEvaluator", 56);
    return c;
}

java::lang::Class* poi::ss::formula::ConditionalFormattingEvaluator::getClass0()
{
    return class_();
}

