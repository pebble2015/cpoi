// Generated from /POI/java/org/apache/poi/hssf/model/HSSFFormulaParser.java
#include <org/apache/poi/hssf/model/HSSFFormulaParser.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/String.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFEvaluationWorkbook.hpp>
#include <org/apache/poi/ss/formula/FormulaParser.hpp>
#include <org/apache/poi/ss/formula/FormulaRenderer.hpp>
#include <org/apache/poi/ss/formula/FormulaType.hpp>
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

org::apache::poi::hssf::model::HSSFFormulaParser::HSSFFormulaParser(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::model::HSSFFormulaParser::HSSFFormulaParser() 
    : HSSFFormulaParser(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::ss::formula::FormulaParsingWorkbook* org::apache::poi::hssf::model::HSSFFormulaParser::createParsingWorkbook(::org::apache::poi::hssf::usermodel::HSSFWorkbook* book)
{
    clinit();
    return ::org::apache::poi::hssf::usermodel::HSSFEvaluationWorkbook::create(book);
}

void org::apache::poi::hssf::model::HSSFFormulaParser::ctor()
{
    super::ctor();
}

org::apache::poi::ss::formula::ptg::PtgArray* org::apache::poi::hssf::model::HSSFFormulaParser::parse(::java::lang::String* formula, ::org::apache::poi::hssf::usermodel::HSSFWorkbook* workbook) /* throws(FormulaParseException) */
{
    clinit();
    return parse(formula, workbook, ::org::apache::poi::ss::formula::FormulaType::CELL);
}

org::apache::poi::ss::formula::ptg::PtgArray* org::apache::poi::hssf::model::HSSFFormulaParser::parse(::java::lang::String* formula, ::org::apache::poi::hssf::usermodel::HSSFWorkbook* workbook, ::org::apache::poi::ss::formula::FormulaType* formulaType) /* throws(FormulaParseException) */
{
    clinit();
    return parse(formula, workbook, formulaType, -int32_t(1));
}

org::apache::poi::ss::formula::ptg::PtgArray* org::apache::poi::hssf::model::HSSFFormulaParser::parse(::java::lang::String* formula, ::org::apache::poi::hssf::usermodel::HSSFWorkbook* workbook, ::org::apache::poi::ss::formula::FormulaType* formulaType, int32_t sheetIndex) /* throws(FormulaParseException) */
{
    clinit();
    return ::org::apache::poi::ss::formula::FormulaParser::parse(formula, createParsingWorkbook(workbook), formulaType, sheetIndex);
}

java::lang::String* org::apache::poi::hssf::model::HSSFFormulaParser::toFormulaString(::org::apache::poi::hssf::usermodel::HSSFWorkbook* book, ::org::apache::poi::ss::formula::ptg::PtgArray* ptgs)
{
    clinit();
    return ::org::apache::poi::ss::formula::FormulaRenderer::toFormulaString(::org::apache::poi::hssf::usermodel::HSSFEvaluationWorkbook::create(book), ptgs);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::model::HSSFFormulaParser::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.model.HSSFFormulaParser", 43);
    return c;
}

java::lang::Class* org::apache::poi::hssf::model::HSSFFormulaParser::getClass0()
{
    return class_();
}

