// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFSheet.java
#include <org/apache/poi/hssf/usermodel/HSSFSheet_getDataValidations_1.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/util/List.hpp>
#include <org/apache/poi/hssf/record/DVRecord.hpp>
#include <org/apache/poi/hssf/record/Record.hpp>
#include <org/apache/poi/hssf/usermodel/DVConstraint.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFDataValidation.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFEvaluationWorkbook.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFSheet.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFWorkbook.hpp>
#include <org/apache/poi/ss/usermodel/Workbook.hpp>
#include <org/apache/poi/ss/util/CellRangeAddressList.hpp>

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

org::apache::poi::hssf::usermodel::HSSFSheet_getDataValidations_1::HSSFSheet_getDataValidations_1(HSSFSheet *HSSFSheet_this, ::java::util::List* hssfValidations)
    : super(*static_cast< ::default_init_tag* >(0))
    , HSSFSheet_this(HSSFSheet_this)
    , hssfValidations(hssfValidations)
{
    clinit();
    init();
    ctor();
}

void org::apache::poi::hssf::usermodel::HSSFSheet_getDataValidations_1::init()
{
    book = HSSFEvaluationWorkbook::create(java_cast< HSSFWorkbook* >(HSSFSheet_this->getWorkbook()));
}

void org::apache::poi::hssf::usermodel::HSSFSheet_getDataValidations_1::visitRecord(::org::apache::poi::hssf::record::Record* r)
{
    if(!(dynamic_cast< ::org::apache::poi::hssf::record::DVRecord* >(r) != nullptr)) {
        return;
    }
    auto dvRecord = java_cast< ::org::apache::poi::hssf::record::DVRecord* >(r);
    auto regions = npc(npc(dvRecord)->getCellRangeAddress())->copy();
    auto constraint = DVConstraint::createDVConstraint(dvRecord, book);
    auto hssfDataValidation = new HSSFDataValidation(regions, constraint);
    npc(hssfDataValidation)->setErrorStyle(npc(dvRecord)->getErrorStyle());
    npc(hssfDataValidation)->setEmptyCellAllowed(npc(dvRecord)->getEmptyCellAllowed());
    npc(hssfDataValidation)->setSuppressDropDownArrow(npc(dvRecord)->getSuppressDropdownArrow());
    npc(hssfDataValidation)->createPromptBox(npc(dvRecord)->getPromptTitle(), npc(dvRecord)->getPromptText());
    npc(hssfDataValidation)->setShowPromptBox(npc(dvRecord)->getShowPromptOnCellSelected());
    npc(hssfDataValidation)->createErrorBox(npc(dvRecord)->getErrorTitle(), npc(dvRecord)->getErrorText());
    npc(hssfDataValidation)->setShowErrorBox(npc(dvRecord)->getShowErrorOnInvalidValue());
    npc(hssfValidations)->add(static_cast< ::java::lang::Object* >(hssfDataValidation));
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::usermodel::HSSFSheet_getDataValidations_1::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

java::lang::Class* org::apache::poi::hssf::usermodel::HSSFSheet_getDataValidations_1::getClass0()
{
    return class_();
}

