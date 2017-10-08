// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFEvaluationSheet.java
#include <org/apache/poi/hssf/usermodel/HSSFEvaluationSheet.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFCell.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFEvaluationCell.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFRow.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFSheet.hpp>
#include <org/apache/poi/ss/usermodel/Cell.hpp>
#include <org/apache/poi/ss/usermodel/Row.hpp>

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

poi::hssf::usermodel::HSSFEvaluationSheet::HSSFEvaluationSheet(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::usermodel::HSSFEvaluationSheet::HSSFEvaluationSheet(HSSFSheet* hs) 
    : HSSFEvaluationSheet(*static_cast< ::default_init_tag* >(0))
{
    ctor(hs);
}

void poi::hssf::usermodel::HSSFEvaluationSheet::ctor(HSSFSheet* hs)
{
    super::ctor();
    _hs = hs;
}

poi::hssf::usermodel::HSSFSheet* poi::hssf::usermodel::HSSFEvaluationSheet::getHSSFSheet()
{
    return _hs;
}

poi::ss::formula::EvaluationCell* poi::hssf::usermodel::HSSFEvaluationSheet::getCell(int32_t rowIndex, int32_t columnIndex)
{
    auto row = java_cast< HSSFRow* >(npc(_hs)->getRow(rowIndex));
    if(row == nullptr) {
        return nullptr;
    }
    auto cell = java_cast< HSSFCell* >(npc(row)->getCell(columnIndex));
    if(cell == nullptr) {
        return nullptr;
    }
    return new HSSFEvaluationCell(cell, this);
}

void poi::hssf::usermodel::HSSFEvaluationSheet::clearAllCachedResultValues()
{
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::usermodel::HSSFEvaluationSheet::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.usermodel.HSSFEvaluationSheet", 49);
    return c;
}

java::lang::Class* poi::hssf::usermodel::HSSFEvaluationSheet::getClass0()
{
    return class_();
}

