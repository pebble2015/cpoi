// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFEvaluationCell.java
#include <org/apache/poi/hssf/usermodel/HSSFEvaluationCell.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFCell.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFEvaluationSheet.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFRichTextString.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFSheet.hpp>
#include <org/apache/poi/ss/formula/EvaluationSheet.hpp>
#include <org/apache/poi/ss/usermodel/CellType.hpp>
#include <org/apache/poi/ss/usermodel/Sheet.hpp>

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

org::apache::poi::hssf::usermodel::HSSFEvaluationCell::HSSFEvaluationCell(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::usermodel::HSSFEvaluationCell::HSSFEvaluationCell(HSSFCell* cell, ::org::apache::poi::ss::formula::EvaluationSheet* evalSheet) 
    : HSSFEvaluationCell(*static_cast< ::default_init_tag* >(0))
{
    ctor(cell,evalSheet);
}

org::apache::poi::hssf::usermodel::HSSFEvaluationCell::HSSFEvaluationCell(HSSFCell* cell) 
    : HSSFEvaluationCell(*static_cast< ::default_init_tag* >(0))
{
    ctor(cell);
}

void org::apache::poi::hssf::usermodel::HSSFEvaluationCell::ctor(HSSFCell* cell, ::org::apache::poi::ss::formula::EvaluationSheet* evalSheet)
{
    super::ctor();
    _cell = cell;
    _evalSheet = evalSheet;
}

void org::apache::poi::hssf::usermodel::HSSFEvaluationCell::ctor(HSSFCell* cell)
{
    ctor(cell, new HSSFEvaluationSheet(java_cast< HSSFSheet* >(npc(cell)->getSheet())));
}

java::lang::Object* org::apache::poi::hssf::usermodel::HSSFEvaluationCell::getIdentityKey()
{
    return _cell;
}

org::apache::poi::hssf::usermodel::HSSFCell* org::apache::poi::hssf::usermodel::HSSFEvaluationCell::getHSSFCell()
{
    return _cell;
}

bool org::apache::poi::hssf::usermodel::HSSFEvaluationCell::getBooleanCellValue()
{
    return npc(_cell)->getBooleanCellValue();
}

int32_t org::apache::poi::hssf::usermodel::HSSFEvaluationCell::getCellType()
{
    return npc(_cell)->getCellType();
}

org::apache::poi::ss::usermodel::CellType* org::apache::poi::hssf::usermodel::HSSFEvaluationCell::getCellTypeEnum()
{
    return npc(_cell)->getCellTypeEnum();
}

int32_t org::apache::poi::hssf::usermodel::HSSFEvaluationCell::getColumnIndex()
{
    return npc(_cell)->getColumnIndex();
}

int32_t org::apache::poi::hssf::usermodel::HSSFEvaluationCell::getErrorCellValue()
{
    return npc(_cell)->getErrorCellValue();
}

double org::apache::poi::hssf::usermodel::HSSFEvaluationCell::getNumericCellValue()
{
    return npc(_cell)->getNumericCellValue();
}

int32_t org::apache::poi::hssf::usermodel::HSSFEvaluationCell::getRowIndex()
{
    return npc(_cell)->getRowIndex();
}

org::apache::poi::ss::formula::EvaluationSheet* org::apache::poi::hssf::usermodel::HSSFEvaluationCell::getSheet()
{
    return _evalSheet;
}

java::lang::String* org::apache::poi::hssf::usermodel::HSSFEvaluationCell::getStringCellValue()
{
    return npc(npc(_cell)->getRichStringCellValue())->getString();
}

int32_t org::apache::poi::hssf::usermodel::HSSFEvaluationCell::getCachedFormulaResultType()
{
    return npc(_cell)->getCachedFormulaResultType();
}

org::apache::poi::ss::usermodel::CellType* org::apache::poi::hssf::usermodel::HSSFEvaluationCell::getCachedFormulaResultTypeEnum()
{
    return npc(_cell)->getCachedFormulaResultTypeEnum();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::usermodel::HSSFEvaluationCell::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.usermodel.HSSFEvaluationCell", 48);
    return c;
}

java::lang::Class* org::apache::poi::hssf::usermodel::HSSFEvaluationCell::getClass0()
{
    return class_();
}

