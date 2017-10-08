// Generated from /POI/java/org/apache/poi/ss/formula/FormulaParser.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/regex/fwd-POI.hpp>
#include <org/apache/poi/ss/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/function/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/fwd-POI.hpp>
#include <org/apache/poi/ss/util/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace io
    {
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
    } // io

    namespace lang
    {
typedef ::SubArray< ::java::lang::Cloneable, ObjectArray > CloneableArray;
    } // lang
} // java

namespace poi
{
    namespace ss
    {
        namespace formula
        {
typedef ::SubArray< ::poi::ss::formula::ParseNode, ::java::lang::ObjectArray > ParseNodeArray;

            namespace ptg
            {
typedef ::SubArray< ::poi::ss::formula::ptg::Ptg, ::java::lang::ObjectArray > PtgArray;
            } // ptg
        } // formula
    } // ss
} // poi

namespace java
{
    namespace lang
    {
typedef ::SubArray< ::java::lang::ObjectArray, CloneableArray, ::java::io::SerializableArray > ObjectArrayArray;
    } // lang
} // java

struct default_init_tag;

class poi::ss::formula::FormulaParser final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static ::poi::util::POILogger* log_;
    ::java::lang::String* _formulaString {  };
    int32_t _formulaLength {  };
    int32_t _pointer {  };
    ParseNode* _rootNode {  };
    static constexpr char16_t TAB { u'\u0009' };
    static constexpr char16_t CR { u'\u000d' };
    static constexpr char16_t LF { u'\u000a' };
    int32_t look {  };
    bool _inIntersection {  };
    FormulaParsingWorkbook* _book {  };
    ::poi::ss::SpreadsheetVersion* _ssVersion {  };
    int32_t _sheetIndex {  };
    int32_t _rowIndex {  };
protected:
    void ctor(::java::lang::String* formula, FormulaParsingWorkbook* book, int32_t sheetIndex, int32_t rowIndex);

public:
    static ::poi::ss::formula::ptg::PtgArray* parse(::java::lang::String* formula, FormulaParsingWorkbook* workbook, FormulaType* formulaType, int32_t sheetIndex, int32_t rowIndex);
    static ::poi::ss::formula::ptg::PtgArray* parse(::java::lang::String* formula, FormulaParsingWorkbook* workbook, FormulaType* formulaType, int32_t sheetIndex);
    static ::poi::ss::formula::ptg::Area3DPxg* parseStructuredReference(::java::lang::String* tableText, FormulaParsingWorkbook* workbook, int32_t rowIndex);

private:
    void GetChar();
    void resetPointer(int32_t ptr);
    ::java::lang::RuntimeException* expected(::java::lang::String* s);
    static bool IsAlpha(int32_t c);
    static bool IsDigit(int32_t c);
    static bool IsWhite(int32_t c);
    void SkipWhite();
    void Match(int32_t x);
    ::java::lang::String* GetNum();
    ParseNode* parseRangeExpression();
    static ParseNode* augmentWithMemPtg(ParseNode* root);
    static bool needsMemFunc(ParseNode* root);
    static void checkValidRangeOperand(::java::lang::String* sideName, int32_t currentParsePosition, ParseNode* pn);
    static bool isValidRangeOperand(ParseNode* a);
    ParseNode* parseRangeable();
    static ::java::lang::String* specHeaders_;
    static ::java::lang::String* specAll_;
    static ::java::lang::String* specData_;
    static ::java::lang::String* specTotals_;
    static ::java::lang::String* specThisRow_;
    ParseNode* parseStructuredReference(::java::lang::String* tableName);
    ::java::lang::String* parseAsColumnQuantifier();
    ::java::lang::String* parseAsSpecialQuantifier();
    ParseNode* parseNonRange(int32_t savePointer);
    ::java::lang::String* parseAsName();
    static bool isValidDefinedNameChar(int32_t ch);
    ParseNode* createAreaRefParseNode(SheetIdentifier* sheetIden, FormulaParser_SimpleRangePart* part1, FormulaParser_SimpleRangePart* part2) /* throws(FormulaParseException) */;
    ::poi::ss::util::AreaReference* createAreaRef(FormulaParser_SimpleRangePart* part1, FormulaParser_SimpleRangePart* part2);
    static ::java::util::regex::Pattern* CELL_REF_PATTERN_;
    FormulaParser_SimpleRangePart* parseSimpleRangePart();
    ::java::lang::String* getBookName();
    SheetIdentifier* parseSheetName();
    SheetIdentifier* parseSheetRange(::java::lang::String* bookname, NameIdentifier* sheet1Name);
    static bool isUnquotedSheetNameChar(int32_t ch);
    bool isValidCellReference(::java::lang::String* str);
    ParseNode* function(::java::lang::String* name);
    void addName(::java::lang::String* functionName);
    ParseNode* getFunction(::java::lang::String* name, ::poi::ss::formula::ptg::Ptg* namePtg, ParseNodeArray* args);
    void validateNumArgs(int32_t numArgs, ::poi::ss::formula::function::FunctionMetadata* fm);
    static bool isArgumentDelimiter(int32_t ch);
    ParseNodeArray* Arguments();
    ParseNode* powerFactor();
    ParseNode* percentFactor();
    ParseNode* parseSimpleFactor();
    ParseNode* parseUnary(bool isPlus);
    ParseNode* parseArray_();
    void checkRowLengths(::java::lang::ObjectArrayArray* values2d, int32_t nColumns);
    ::java::lang::ObjectArray* parseArrayRow();
    ::java::lang::Object* parseArrayItem();
    ::java::lang::Boolean* parseBooleanLiteral();
    static ::java::lang::Double* convertArrayNumber(::poi::ss::formula::ptg::Ptg* ptg, bool isPositive);
    ::poi::ss::formula::ptg::Ptg* parseNumber();
    int32_t parseErrorLiteral();
    ::java::lang::String* parseUnquotedIdentifier();
    static ::poi::ss::formula::ptg::Ptg* getNumberPtgFromString(::java::lang::String* number1, ::java::lang::String* number2, ::java::lang::String* exponent);
    ::java::lang::String* parseStringLiteral();
    ParseNode* Term();
    ParseNode* unionExpression();
    ParseNode* intersectionExpression();
    ParseNode* comparisonExpression();
    ::poi::ss::formula::ptg::Ptg* getComparisonToken();
    ParseNode* concatExpression();
    ParseNode* additiveExpression();
    void parse();
    ::poi::ss::formula::ptg::PtgArray* getRPNPtg(FormulaType* formulaType);

    // Generated
    FormulaParser(::java::lang::String* formula, FormulaParsingWorkbook* book, int32_t sheetIndex, int32_t rowIndex);
protected:
    FormulaParser(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static ::poi::util::POILogger*& log();
    static ::java::lang::String*& specHeaders();
    static ::java::lang::String*& specAll();
    static ::java::lang::String*& specData();
    static ::java::lang::String*& specTotals();
    static ::java::lang::String*& specThisRow();
    static ::java::util::regex::Pattern*& CELL_REF_PATTERN();
    virtual ::java::lang::Class* getClass0();
    friend class FormulaParser_SimpleRangePart;
    friend class FormulaParser_SimpleRangePart_Type;
};
