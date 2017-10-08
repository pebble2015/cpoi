// Generated from /POI/java/org/apache/poi/hssf/model/HSSFFormulaParser.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/model/fwd-POI.hpp>
#include <org/apache/poi/hssf/usermodel/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/fwd-POI.hpp>
#include <java/lang/Object.hpp>

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

struct default_init_tag;

class poi::hssf::model::HSSFFormulaParser final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static ::poi::ss::formula::FormulaParsingWorkbook* createParsingWorkbook(::poi::hssf::usermodel::HSSFWorkbook* book);
protected:
    void ctor();

public:
    static ::poi::ss::formula::ptg::PtgArray* parse(::java::lang::String* formula, ::poi::hssf::usermodel::HSSFWorkbook* workbook) /* throws(FormulaParseException) */;
    static ::poi::ss::formula::ptg::PtgArray* parse(::java::lang::String* formula, ::poi::hssf::usermodel::HSSFWorkbook* workbook, ::poi::ss::formula::FormulaType* formulaType) /* throws(FormulaParseException) */;
    static ::poi::ss::formula::ptg::PtgArray* parse(::java::lang::String* formula, ::poi::hssf::usermodel::HSSFWorkbook* workbook, ::poi::ss::formula::FormulaType* formulaType, int32_t sheetIndex) /* throws(FormulaParseException) */;
    static ::java::lang::String* toFormulaString(::poi::hssf::usermodel::HSSFWorkbook* book, ::poi::ss::formula::ptg::PtgArray* ptgs);

    // Generated

private:
    HSSFFormulaParser();
protected:
    HSSFFormulaParser(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
