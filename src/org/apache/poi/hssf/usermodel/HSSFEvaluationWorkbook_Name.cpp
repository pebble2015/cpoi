// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFEvaluationWorkbook.java
#include <org/apache/poi/hssf/usermodel/HSSFEvaluationWorkbook_Name.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <org/apache/poi/hssf/record/NameRecord.hpp>
#include <org/apache/poi/ss/formula/ptg/NamePtg.hpp>
#include <org/apache/poi/ss/formula/ptg/Ptg.hpp>
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

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::hssf::usermodel::HSSFEvaluationWorkbook_Name::HSSFEvaluationWorkbook_Name(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::usermodel::HSSFEvaluationWorkbook_Name::HSSFEvaluationWorkbook_Name(::poi::hssf::record::NameRecord* nameRecord, int32_t index) 
    : HSSFEvaluationWorkbook_Name(*static_cast< ::default_init_tag* >(0))
{
    ctor(nameRecord,index);
}

void poi::hssf::usermodel::HSSFEvaluationWorkbook_Name::ctor(::poi::hssf::record::NameRecord* nameRecord, int32_t index)
{
    super::ctor();
    _nameRecord = nameRecord;
    _index = index;
}

poi::ss::formula::ptg::PtgArray* poi::hssf::usermodel::HSSFEvaluationWorkbook_Name::getNameDefinition()
{
    return npc(_nameRecord)->getNameDefinition();
}

java::lang::String* poi::hssf::usermodel::HSSFEvaluationWorkbook_Name::getNameText()
{
    return npc(_nameRecord)->getNameText();
}

bool poi::hssf::usermodel::HSSFEvaluationWorkbook_Name::hasFormula()
{
    return npc(_nameRecord)->hasFormula();
}

bool poi::hssf::usermodel::HSSFEvaluationWorkbook_Name::isFunctionName()
{
    return npc(_nameRecord)->isFunctionName();
}

bool poi::hssf::usermodel::HSSFEvaluationWorkbook_Name::isRange()
{
    return npc(_nameRecord)->hasFormula();
}

poi::ss::formula::ptg::NamePtg* poi::hssf::usermodel::HSSFEvaluationWorkbook_Name::createPtg()
{
    return new ::poi::ss::formula::ptg::NamePtg(_index);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::usermodel::HSSFEvaluationWorkbook_Name::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.usermodel.HSSFEvaluationWorkbook.Name", 57);
    return c;
}

java::lang::Class* poi::hssf::usermodel::HSSFEvaluationWorkbook_Name::getClass0()
{
    return class_();
}

