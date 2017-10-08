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

poi::hssf::model::HSSFFormulaParser::HSSFFormulaParser(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::model::HSSFFormulaParser::HSSFFormulaParser() 
    : HSSFFormulaParser(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::ss::formula::FormulaParsingWorkbook* poi::hssf::model::HSSFFormulaParser::createParsingWorkbook(::poi::hssf::usermodel::HSSFWorkbook* book)
{
    clinit();
    return ::poi::hssf::usermodel::HSSFEvaluationWorkbook::create(book);
}

void poi::hssf::model::HSSFFormulaParser::ctor()
{
    super::ctor();
}

poi::ss::formula::ptg::PtgArray* poi::hssf::model::HSSFFormulaParser::parse(::java::lang::String* formula, ::poi::hssf::usermodel::HSSFWorkbook* workbook) /* throws(FormulaParseException) */
{
    clinit();
    return parse(formula, workbook, ::poi::ss::formula::FormulaType::CELL);
}

poi::ss::formula::ptg::PtgArray* poi::hssf::model::HSSFFormulaParser::parse(::java::lang::String* formula, ::poi::hssf::usermodel::HSSFWorkbook* workbook, ::poi::ss::formula::FormulaType* formulaType) /* throws(FormulaParseException) */
{
    clinit();
    return parse(formula, workbook, formulaType, -int32_t(1));
}

poi::ss::formula::ptg::PtgArray* poi::hssf::model::HSSFFormulaParser::parse(::java::lang::String* formula, ::poi::hssf::usermodel::HSSFWorkbook* workbook, ::poi::ss::formula::FormulaType* formulaType, int32_t sheetIndex) /* throws(FormulaParseException) */
{
    clinit();
    return ::poi::ss::formula::FormulaParser::parse(formula, createParsingWorkbook(workbook), formulaType, sheetIndex);
}

java::lang::String* poi::hssf::model::HSSFFormulaParser::toFormulaString(::poi::hssf::usermodel::HSSFWorkbook* book, ::poi::ss::formula::ptg::PtgArray* ptgs)
{
    clinit();
    return ::poi::ss::formula::FormulaRenderer::toFormulaString(::poi::hssf::usermodel::HSSFEvaluationWorkbook::create(book), ptgs);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::model::HSSFFormulaParser::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.model.HSSFFormulaParser", 43);
    return c;
}

java::lang::Class* poi::hssf::model::HSSFFormulaParser::getClass0()
{
    return class_();
}

