// Generated from /POI/java/org/apache/poi/ss/formula/DataValidationEvaluator.java
#include <org/apache/poi/ss/formula/DataValidationEvaluator.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/Collections.hpp>
#include <java/util/HashMap.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/List.hpp>
#include <java/util/Map.hpp>
#include <org/apache/poi/ss/formula/DataValidationEvaluator_DataValidationContext.hpp>
#include <org/apache/poi/ss/formula/DataValidationEvaluator_ValidationEnum.hpp>
#include <org/apache/poi/ss/formula/TwoDEval.hpp>
#include <org/apache/poi/ss/formula/WorkbookEvaluator.hpp>
#include <org/apache/poi/ss/formula/WorkbookEvaluatorProvider.hpp>
#include <org/apache/poi/ss/formula/eval/StringEval.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>
#include <org/apache/poi/ss/usermodel/Cell.hpp>
#include <org/apache/poi/ss/usermodel/CellType.hpp>
#include <org/apache/poi/ss/usermodel/DataValidation.hpp>
#include <org/apache/poi/ss/usermodel/DataValidationConstraint_ValidationType.hpp>
#include <org/apache/poi/ss/usermodel/DataValidationConstraint.hpp>
#include <org/apache/poi/ss/usermodel/Sheet.hpp>
#include <org/apache/poi/ss/usermodel/Workbook.hpp>
#include <org/apache/poi/ss/util/CellRangeAddress.hpp>
#include <org/apache/poi/ss/util/CellRangeAddressBase.hpp>
#include <org/apache/poi/ss/util/CellRangeAddressList.hpp>
#include <org/apache/poi/ss/util/CellReference.hpp>
#include <org/apache/poi/ss/util/SheetUtil.hpp>
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

poi::ss::formula::DataValidationEvaluator::DataValidationEvaluator(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::DataValidationEvaluator::DataValidationEvaluator(::poi::ss::usermodel::Workbook* wb, WorkbookEvaluatorProvider* provider) 
    : DataValidationEvaluator(*static_cast< ::default_init_tag* >(0))
{
    ctor(wb,provider);
}

void poi::ss::formula::DataValidationEvaluator::init()
{
    validations = new ::java::util::HashMap();
}

void poi::ss::formula::DataValidationEvaluator::ctor(::poi::ss::usermodel::Workbook* wb, WorkbookEvaluatorProvider* provider)
{
    super::ctor();
    init();
    this->workbook = wb;
    this->workbookEvaluator = npc(provider)->_getWorkbookEvaluator();
}

poi::ss::formula::WorkbookEvaluator* poi::ss::formula::DataValidationEvaluator::getWorkbookEvaluator()
{
    return workbookEvaluator;
}

void poi::ss::formula::DataValidationEvaluator::clearAllCachedValues()
{
    npc(validations)->clear();
}

java::util::List* poi::ss::formula::DataValidationEvaluator::getValidations(::poi::ss::usermodel::Sheet* sheet)
{
    auto dvs = java_cast< ::java::util::List* >(npc(validations)->get(npc(sheet)->getSheetName()));
    if(dvs == nullptr && !npc(validations)->containsKey(npc(sheet)->getSheetName())) {
        dvs = npc(sheet)->getDataValidations();
        npc(validations)->put(npc(sheet)->getSheetName(), dvs);
    }
    return dvs;
}

poi::ss::usermodel::DataValidation* poi::ss::formula::DataValidationEvaluator::getValidationForCell(::poi::ss::util::CellReference* cell)
{
    auto const vc = getValidationContextForCell(cell);
    return vc == nullptr ? static_cast< ::poi::ss::usermodel::DataValidation* >(nullptr) : npc(vc)->getValidation();
}

poi::ss::formula::DataValidationEvaluator_DataValidationContext* poi::ss::formula::DataValidationEvaluator::getValidationContextForCell(::poi::ss::util::CellReference* cell)
{
    auto const sheet = npc(workbook)->getSheet(npc(cell)->getSheetName());
    if(sheet == nullptr)
        return nullptr;

    auto const dataValidations = getValidations(sheet);
    if(dataValidations == nullptr)
        return nullptr;

    for (auto _i = npc(dataValidations)->iterator(); _i->hasNext(); ) {
        ::poi::ss::usermodel::DataValidation* dv = java_cast< ::poi::ss::usermodel::DataValidation* >(_i->next());
        {
            auto const regions = npc(dv)->getRegions();
            if(regions == nullptr)
                return nullptr;

            for(auto range : *npc(npc(regions)->getCellRangeAddresses())) {
                if(npc(range)->isInRange(cell)) {
                    return new DataValidationEvaluator_DataValidationContext(dv, this, range, cell);
                }
            }
        }
    }
    return nullptr;
}

java::util::List* poi::ss::formula::DataValidationEvaluator::getValidationValuesForCell(::poi::ss::util::CellReference* cell)
{
    auto context = getValidationContextForCell(cell);
    if(context == nullptr)
        return nullptr;

    return getValidationValuesForConstraint(context);
}

java::util::List* poi::ss::formula::DataValidationEvaluator::getValidationValuesForConstraint(DataValidationEvaluator_DataValidationContext* context)
{
    clinit();
    auto const val = npc(npc(context)->getValidation())->getValidationConstraint();
    if(npc(val)->getValidationType() != ::poi::ss::usermodel::DataValidationConstraint_ValidationType::LIST)
        return nullptr;

    auto formula = npc(val)->getFormula1();
    ::java::util::List* const values = new ::java::util::ArrayList();
    if(npc(val)->getExplicitListValues() != nullptr && npc(npc(val)->getExplicitListValues())->length > 0) {
        for(auto s : *npc(npc(val)->getExplicitListValues())) {
            if(s != nullptr)
                npc(values)->add(static_cast< ::java::lang::Object* >(new ::poi::ss::formula::eval::StringEval(s)));

        }
    } else if(formula != nullptr) {
        auto eval = npc(npc(npc(context)->getEvaluator())->getWorkbookEvaluator())->evaluateList(formula, npc(context)->getTarget(), npc(context)->getRegion());
        if(dynamic_cast< TwoDEval* >(eval) != nullptr) {
            auto twod = java_cast< TwoDEval* >(eval);
            for (auto i = int32_t(0); i < npc(twod)->getHeight(); i++) {
                auto const cellValue = npc(twod)->getValue(i, 0);
                npc(values)->add(static_cast< ::java::lang::Object* >(cellValue));
            }
        }
    }
    return ::java::util::Collections::unmodifiableList(values);
}

bool poi::ss::formula::DataValidationEvaluator::isValidCell(::poi::ss::util::CellReference* cellRef)
{
    auto const context = getValidationContextForCell(cellRef);
    if(context == nullptr)
        return true;

    auto const cell = ::poi::ss::util::SheetUtil::getCell(npc(workbook)->getSheet(npc(cellRef)->getSheetName()), npc(cellRef)->getRow(), npc(cellRef)->getCol());
    if(cell == nullptr || isType(cell, ::poi::ss::usermodel::CellType::BLANK) || (isType(cell, ::poi::ss::usermodel::CellType::STRING) && (npc(cell)->getStringCellValue() == nullptr || npc(npc(cell)->getStringCellValue())->isEmpty()))) {
        return npc(npc(context)->getValidation())->getEmptyCellAllowed();
    }
    return DataValidationEvaluator_ValidationEnum::isValid(cell, context);
}

bool poi::ss::formula::DataValidationEvaluator::isType(::poi::ss::usermodel::Cell* cell, ::poi::ss::usermodel::CellType* type)
{
    clinit();
    auto const cellType = npc(cell)->getCellTypeEnum();
    return cellType == type || (cellType == ::poi::ss::usermodel::CellType::FORMULA && npc(cell)->getCachedFormulaResultTypeEnum() == type);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::DataValidationEvaluator::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.DataValidationEvaluator", 49);
    return c;
}

java::lang::Class* poi::ss::formula::DataValidationEvaluator::getClass0()
{
    return class_();
}

