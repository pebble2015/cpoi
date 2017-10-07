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
namespace org
{
    namespace apache
    {
        namespace poi
        {
            namespace ss
            {
                namespace formula
                {
                    namespace ptg
                    {
typedef ::SubArray< ::org::apache::poi::ss::formula::ptg::Ptg, ::java::lang::ObjectArray > PtgArray;
                    } // ptg
                } // formula
            } // ss
        } // poi
    } // apache
} // org

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::hssf::usermodel::HSSFEvaluationWorkbook_Name::HSSFEvaluationWorkbook_Name(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::usermodel::HSSFEvaluationWorkbook_Name::HSSFEvaluationWorkbook_Name(::org::apache::poi::hssf::record::NameRecord* nameRecord, int32_t index) 
    : HSSFEvaluationWorkbook_Name(*static_cast< ::default_init_tag* >(0))
{
    ctor(nameRecord,index);
}

void org::apache::poi::hssf::usermodel::HSSFEvaluationWorkbook_Name::ctor(::org::apache::poi::hssf::record::NameRecord* nameRecord, int32_t index)
{
    super::ctor();
    _nameRecord = nameRecord;
    _index = index;
}

org::apache::poi::ss::formula::ptg::PtgArray* org::apache::poi::hssf::usermodel::HSSFEvaluationWorkbook_Name::getNameDefinition()
{
    return npc(_nameRecord)->getNameDefinition();
}

java::lang::String* org::apache::poi::hssf::usermodel::HSSFEvaluationWorkbook_Name::getNameText()
{
    return npc(_nameRecord)->getNameText();
}

bool org::apache::poi::hssf::usermodel::HSSFEvaluationWorkbook_Name::hasFormula()
{
    return npc(_nameRecord)->hasFormula();
}

bool org::apache::poi::hssf::usermodel::HSSFEvaluationWorkbook_Name::isFunctionName()
{
    return npc(_nameRecord)->isFunctionName();
}

bool org::apache::poi::hssf::usermodel::HSSFEvaluationWorkbook_Name::isRange()
{
    return npc(_nameRecord)->hasFormula();
}

org::apache::poi::ss::formula::ptg::NamePtg* org::apache::poi::hssf::usermodel::HSSFEvaluationWorkbook_Name::createPtg()
{
    return new ::org::apache::poi::ss::formula::ptg::NamePtg(_index);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::usermodel::HSSFEvaluationWorkbook_Name::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.usermodel.HSSFEvaluationWorkbook.Name", 57);
    return c;
}

java::lang::Class* org::apache::poi::hssf::usermodel::HSSFEvaluationWorkbook_Name::getClass0()
{
    return class_();
}

