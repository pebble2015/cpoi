// Generated from /POI/java/org/apache/poi/ss/formula/FormulaParser.java
#include <org/apache/poi/ss/formula/FormulaParser.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Boolean.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Character.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Cloneable.hpp>
#include <java/lang/Double.hpp>
#include <java/lang/IllegalStateException.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/NumberFormatException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/System.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/List.hpp>
#include <java/util/Locale.hpp>
#include <java/util/regex/Matcher.hpp>
#include <java/util/regex/Pattern.hpp>
#include <org/apache/poi/ss/SpreadsheetVersion.hpp>
#include <org/apache/poi/ss/formula/EvaluationName.hpp>
#include <org/apache/poi/ss/formula/ExternSheetReferenceToken.hpp>
#include <org/apache/poi/ss/formula/FormulaParseException.hpp>
#include <org/apache/poi/ss/formula/FormulaParser_SimpleRangePart.hpp>
#include <org/apache/poi/ss/formula/FormulaParsingWorkbook.hpp>
#include <org/apache/poi/ss/formula/FormulaType.hpp>
#include <org/apache/poi/ss/formula/NameIdentifier.hpp>
#include <org/apache/poi/ss/formula/OperandClassTransformer.hpp>
#include <org/apache/poi/ss/formula/ParseNode.hpp>
#include <org/apache/poi/ss/formula/SheetIdentifier.hpp>
#include <org/apache/poi/ss/formula/SheetRangeIdentifier.hpp>
#include <org/apache/poi/ss/formula/constant/ErrorConstant.hpp>
#include <org/apache/poi/ss/formula/function/FunctionMetadata.hpp>
#include <org/apache/poi/ss/formula/function/FunctionMetadataRegistry.hpp>
#include <org/apache/poi/ss/formula/ptg/AbstractFunctionPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/AddPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/Area3DPxg.hpp>
#include <org/apache/poi/ss/formula/ptg/AreaPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/ArrayPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/AttrPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/BoolPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/ConcatPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/ControlPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/DividePtg.hpp>
#include <org/apache/poi/ss/formula/ptg/EqualPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/ErrPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/FuncPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/FuncVarPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/GreaterEqualPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/GreaterThanPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/IntPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/IntersectionPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/LessEqualPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/LessThanPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/MemAreaPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/MemFuncPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/MissingArgPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/MultiplyPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/NamePtg.hpp>
#include <org/apache/poi/ss/formula/ptg/NameXPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/NameXPxg.hpp>
#include <org/apache/poi/ss/formula/ptg/NotEqualPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/NumberPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/OperandPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/OperationPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/ParenthesisPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/PercentPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/PowerPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/Ptg.hpp>
#include <org/apache/poi/ss/formula/ptg/RangePtg.hpp>
#include <org/apache/poi/ss/formula/ptg/RefPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/StringPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/SubtractPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/UnaryMinusPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/UnaryPlusPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/UnionPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/ValueOperatorPtg.hpp>
#include <org/apache/poi/ss/usermodel/FormulaError.hpp>
#include <org/apache/poi/ss/usermodel/Name.hpp>
#include <org/apache/poi/ss/usermodel/Table.hpp>
#include <org/apache/poi/ss/util/AreaReference.hpp>
#include <org/apache/poi/ss/util/CellReference_NameType.hpp>
#include <org/apache/poi/ss/util/CellReference.hpp>
#include <org/apache/poi/util/POILogFactory.hpp>
#include <org/apache/poi/util/POILogger.hpp>
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

poi::ss::formula::FormulaParser::FormulaParser(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::FormulaParser::FormulaParser(::java::lang::String* formula, FormulaParsingWorkbook* book, int32_t sheetIndex, int32_t rowIndex) 
    : FormulaParser(*static_cast< ::default_init_tag* >(0))
{
    ctor(formula,book,sheetIndex,rowIndex);
}

poi::util::POILogger*& poi::ss::formula::FormulaParser::log()
{
    clinit();
    return log_;
}
poi::util::POILogger* poi::ss::formula::FormulaParser::log_;

constexpr char16_t poi::ss::formula::FormulaParser::TAB;

constexpr char16_t poi::ss::formula::FormulaParser::CR;

constexpr char16_t poi::ss::formula::FormulaParser::LF;

void poi::ss::formula::FormulaParser::ctor(::java::lang::String* formula, FormulaParsingWorkbook* book, int32_t sheetIndex, int32_t rowIndex)
{
    super::ctor();
    _formulaString = formula;
    _pointer = 0;
    _book = book;
    _ssVersion = book == nullptr ? ::poi::ss::SpreadsheetVersion::EXCEL97 : npc(book)->getSpreadsheetVersion();
    _formulaLength = npc(_formulaString)->length();
    _sheetIndex = sheetIndex;
    _rowIndex = rowIndex;
}

poi::ss::formula::ptg::PtgArray* poi::ss::formula::FormulaParser::parse(::java::lang::String* formula, FormulaParsingWorkbook* workbook, FormulaType* formulaType, int32_t sheetIndex, int32_t rowIndex)
{
    clinit();
    auto fp = new FormulaParser(formula, workbook, sheetIndex, rowIndex);
    npc(fp)->parse();
    return npc(fp)->getRPNPtg(formulaType);
}

poi::ss::formula::ptg::PtgArray* poi::ss::formula::FormulaParser::parse(::java::lang::String* formula, FormulaParsingWorkbook* workbook, FormulaType* formulaType, int32_t sheetIndex)
{
    clinit();
    return parse(formula, workbook, formulaType, sheetIndex, -int32_t(1));
}

poi::ss::formula::ptg::Area3DPxg* poi::ss::formula::FormulaParser::parseStructuredReference(::java::lang::String* tableText, FormulaParsingWorkbook* workbook, int32_t rowIndex)
{
    clinit();
    auto const sheetIndex = -int32_t(1);
    auto arr = FormulaParser::parse(tableText, workbook, FormulaType::CELL, sheetIndex, rowIndex);
    if(npc(arr)->length != 1 || !(dynamic_cast< ::poi::ss::formula::ptg::Area3DPxg* >((*arr)[int32_t(0)]) != nullptr)) {
        throw new ::java::lang::IllegalStateException(u"Illegal structured reference"_j);
    }
    return java_cast< ::poi::ss::formula::ptg::Area3DPxg* >((*arr)[int32_t(0)]);
}

void poi::ss::formula::FormulaParser::GetChar()
{
    if(IsWhite(look)) {
        if(look == u' ') {
            _inIntersection = true;
        }
    } else {
        _inIntersection = false;
    }
    if(_pointer > _formulaLength) {
        throw new ::java::lang::RuntimeException(u"too far"_j);
    }
    if(_pointer < _formulaLength) {
        look = npc(_formulaString)->codePointAt(_pointer);
    } else {
        look = static_cast< char16_t >(int32_t(0));
        _inIntersection = false;
    }
    _pointer += ::java::lang::Character::charCount(look);
}

void poi::ss::formula::FormulaParser::resetPointer(int32_t ptr)
{
    _pointer = ptr;
    if(_pointer <= _formulaLength) {
        look = npc(_formulaString)->codePointAt(_pointer - ::java::lang::Character::charCount(look));
    } else {
        look = static_cast< char16_t >(int32_t(0));
    }
}

java::lang::RuntimeException* poi::ss::formula::FormulaParser::expected(::java::lang::String* s)
{
    ::java::lang::String* msg;
    if(look == u'=' && npc(npc(npc(_formulaString)->substring(0, _pointer - int32_t(1)))->trim())->length() < 1) {
        msg = ::java::lang::StringBuilder().append(u"The specified formula '"_j)->append(_formulaString)
            ->append(u"' starts with an equals sign which is not allowed."_j)->toString();
    } else {
        msg = npc(npc(npc(npc(npc(npc(npc(npc((new ::java::lang::StringBuilder(u"Parse error near char "_j))->append(_pointer - int32_t(1)))->append(u" '"_j))->appendCodePoint(look))->append(u"'"_j))->append(u" in specified formula '"_j))->append(_formulaString))->append(u"'. Expected "_j))->append(s))->toString();
    }
    return new FormulaParseException(msg);
}

bool poi::ss::formula::FormulaParser::IsAlpha(int32_t c)
{
    clinit();
    return ::java::lang::Character::isLetter(c) || c == u'$' || c == u'_';
}

bool poi::ss::formula::FormulaParser::IsDigit(int32_t c)
{
    clinit();
    return ::java::lang::Character::isDigit(c);
}

bool poi::ss::formula::FormulaParser::IsWhite(int32_t c)
{
    clinit();
    return c == u' ' || c == TAB || c == CR || c == LF;
}

void poi::ss::formula::FormulaParser::SkipWhite()
{
    while (IsWhite(look)) {
        GetChar();
    }
}

void poi::ss::formula::FormulaParser::Match(int32_t x)
{
    if(look != x) {
        throw expected(npc(npc(npc((new ::java::lang::StringBuilder())->append(u"'"_j))->appendCodePoint(x))->append(u"'"_j))->toString());
    }
    GetChar();
}

java::lang::String* poi::ss::formula::FormulaParser::GetNum()
{
    auto value = new ::java::lang::StringBuilder();
    while (IsDigit(this->look)) {
        npc(value)->appendCodePoint(this->look);
        GetChar();
    }
    return npc(value)->length() == 0 ? static_cast< ::java::lang::String* >(nullptr) : npc(value)->toString();
}

poi::ss::formula::ParseNode* poi::ss::formula::FormulaParser::parseRangeExpression()
{
    auto result = parseRangeable();
    auto hasRange = false;
    while (look == u':') {
        auto pos = _pointer;
        GetChar();
        auto nextPart = parseRangeable();
        checkValidRangeOperand(u"LHS"_j, pos, result);
        checkValidRangeOperand(u"RHS"_j, pos, nextPart);
        auto children = (new ::poi::ss::formula::ParseNodeArray({
            result
            , nextPart
        }));
        result = new ParseNode(static_cast< ::poi::ss::formula::ptg::Ptg* >(::poi::ss::formula::ptg::RangePtg::instance()), children);
        hasRange = true;
    }
    if(hasRange) {
        return augmentWithMemPtg(result);
    }
    return result;
}

poi::ss::formula::ParseNode* poi::ss::formula::FormulaParser::augmentWithMemPtg(ParseNode* root)
{
    clinit();
    ::poi::ss::formula::ptg::Ptg* memPtg;
    if(needsMemFunc(root)) {
        memPtg = new ::poi::ss::formula::ptg::MemFuncPtg(npc(root)->getEncodedSize());
    } else {
        memPtg = new ::poi::ss::formula::ptg::MemAreaPtg(npc(root)->getEncodedSize());
    }
    return new ParseNode(memPtg, root);
}

bool poi::ss::formula::FormulaParser::needsMemFunc(ParseNode* root)
{
    clinit();
    auto token = npc(root)->getToken();
    if(dynamic_cast< ::poi::ss::formula::ptg::AbstractFunctionPtg* >(token) != nullptr) {
        return true;
    }
    if(dynamic_cast< ExternSheetReferenceToken* >(token) != nullptr) {
        return true;
    }
    if(dynamic_cast< ::poi::ss::formula::ptg::NamePtg* >(token) != nullptr || dynamic_cast< ::poi::ss::formula::ptg::NameXPtg* >(token) != nullptr) {
        return true;
    }
    if(dynamic_cast< ::poi::ss::formula::ptg::OperationPtg* >(token) != nullptr || dynamic_cast< ::poi::ss::formula::ptg::ParenthesisPtg* >(token) != nullptr) {
        for(auto child : *npc(npc(root)->getChildren())) {
            if(needsMemFunc(child)) {
                return true;
            }
        }
        return false;
    }
    if(dynamic_cast< ::poi::ss::formula::ptg::OperandPtg* >(token) != nullptr) {
        return false;
    }
    if(dynamic_cast< ::poi::ss::formula::ptg::OperationPtg* >(token) != nullptr) {
        return true;
    }
    return false;
}

void poi::ss::formula::FormulaParser::checkValidRangeOperand(::java::lang::String* sideName, int32_t currentParsePosition, ParseNode* pn)
{
    clinit();
    if(!isValidRangeOperand(pn)) {
        throw new FormulaParseException(::java::lang::StringBuilder().append(u"The "_j)->append(sideName)
            ->append(u" of the range operator ':' at position "_j)
            ->append(currentParsePosition)
            ->append(u" is not a proper reference."_j)->toString());
    }
}

bool poi::ss::formula::FormulaParser::isValidRangeOperand(ParseNode* a)
{
    clinit();
    auto tkn = npc(a)->getToken();
    if(dynamic_cast< ::poi::ss::formula::ptg::OperandPtg* >(tkn) != nullptr) {
        return true;
    }
    if(dynamic_cast< ::poi::ss::formula::ptg::AbstractFunctionPtg* >(tkn) != nullptr) {
        auto afp = java_cast< ::poi::ss::formula::ptg::AbstractFunctionPtg* >(tkn);
        auto returnClass = npc(afp)->getDefaultOperandClass();
        return ::poi::ss::formula::ptg::Ptg::CLASS_REF == returnClass;
    }
    if(dynamic_cast< ::poi::ss::formula::ptg::ValueOperatorPtg* >(tkn) != nullptr) {
        return false;
    }
    if(dynamic_cast< ::poi::ss::formula::ptg::OperationPtg* >(tkn) != nullptr) {
        return true;
    }
    if(dynamic_cast< ::poi::ss::formula::ptg::ParenthesisPtg* >(tkn) != nullptr) {
        return isValidRangeOperand((*npc(a)->getChildren())[int32_t(0)]);
    }
    if(tkn == static_cast< ::poi::ss::formula::ptg::Ptg* >(::poi::ss::formula::ptg::ErrPtg::REF_INVALID())) {
        return true;
    }
    return false;
}

poi::ss::formula::ParseNode* poi::ss::formula::FormulaParser::parseRangeable()
{
    SkipWhite();
    auto savePointer = _pointer;
    auto sheetIden = parseSheetName();
    if(sheetIden == nullptr) {
        resetPointer(savePointer);
    } else {
        SkipWhite();
        savePointer = _pointer;
    }
    auto part1 = parseSimpleRangePart();
    if(part1 == nullptr) {
        if(sheetIden != nullptr) {
            if(look == u'#') {
                return new ParseNode(::poi::ss::formula::ptg::ErrPtg::valueOf(parseErrorLiteral()));
            } else {
                auto name = parseAsName();
                if(npc(name)->length() == 0) {
                    throw new FormulaParseException(::java::lang::StringBuilder().append(::java::lang::StringBuilder().append(u"Cell reference or Named Range "_j)->append(u"expected after sheet name at index "_j)->toString())->append(_pointer)
                        ->append(u"."_j)->toString());
                }
                auto nameXPtg = npc(_book)->getNameXPtg(name, sheetIden);
                if(nameXPtg == nullptr) {
                    throw new FormulaParseException(::java::lang::StringBuilder().append(u"Specified name '"_j)->append(name)
                        ->append(u"' for sheet "_j)
                        ->append(npc(sheetIden)->asFormulaString())
                        ->append(u" not found"_j)->toString());
                }
                return new ParseNode(nameXPtg);
            }
        }
        return parseNonRange(savePointer);
    }
    auto whiteAfterPart1 = IsWhite(look);
    if(whiteAfterPart1) {
        SkipWhite();
    }
    if(look == u':') {
        auto colonPos = _pointer;
        GetChar();
        SkipWhite();
        auto part2 = parseSimpleRangePart();
        if(part2 != nullptr && !npc(part1)->isCompatibleForArea(part2)) {
            part2 = nullptr;
        }
        if(part2 == nullptr) {
            resetPointer(colonPos);
            if(!npc(part1)->isCell()) {
                auto prefix = u""_j;
                if(sheetIden != nullptr) {
                    prefix = ::java::lang::StringBuilder().append(u"'"_j)->append(npc(npc(sheetIden)->getSheetIdentifier())->getName())
                        ->append(u'!')->toString();
                }
                throw new FormulaParseException(::java::lang::StringBuilder().append(prefix)->append(npc(part1)->getRep())
                    ->append(u"' is not a proper reference."_j)->toString());
            }
        }
        return createAreaRefParseNode(sheetIden, part1, part2);
    }
    if(look == u'.') {
        GetChar();
        auto dotCount = int32_t(1);
        while (look == u'.') {
            dotCount++;
            GetChar();
        }
        auto whiteBeforePart2 = IsWhite(look);
        SkipWhite();
        auto part2 = parseSimpleRangePart();
        auto part1And2 = npc(_formulaString)->substring(savePointer - int32_t(1), _pointer - int32_t(1));
        if(part2 == nullptr) {
            if(sheetIden != nullptr) {
                throw new FormulaParseException(::java::lang::StringBuilder().append(u"Complete area reference expected after sheet name at index "_j)->append(_pointer)
                    ->append(u"."_j)->toString());
            }
            return parseNonRange(savePointer);
        }
        if(whiteAfterPart1 || whiteBeforePart2) {
            if(npc(part1)->isRowOrColumn() || npc(part2)->isRowOrColumn()) {
                throw new FormulaParseException(::java::lang::StringBuilder().append(u"Dotted range (full row or column) expression '"_j)->append(part1And2)
                    ->append(u"' must not contain whitespace."_j)->toString());
            }
            return createAreaRefParseNode(sheetIden, part1, part2);
        }
        if(dotCount == 1 && npc(part1)->isRow() && npc(part2)->isRow()) {
            return parseNonRange(savePointer);
        }
        if(npc(part1)->isRowOrColumn() || npc(part2)->isRowOrColumn()) {
            if(dotCount != 2) {
                throw new FormulaParseException(::java::lang::StringBuilder().append(u"Dotted range (full row or column) expression '"_j)->append(part1And2)
                    ->append(u"' must have exactly 2 dots."_j)->toString());
            }
        }
        return createAreaRefParseNode(sheetIden, part1, part2);
    }
    if(npc(part1)->isCell() && isValidCellReference(npc(part1)->getRep())) {
        return createAreaRefParseNode(sheetIden, part1, nullptr);
    }
    if(sheetIden != nullptr) {
        throw new FormulaParseException(::java::lang::StringBuilder().append(u"Second part of cell reference expected after sheet name at index "_j)->append(_pointer)
            ->append(u"."_j)->toString());
    }
    return parseNonRange(savePointer);
}

java::lang::String*& poi::ss::formula::FormulaParser::specHeaders()
{
    clinit();
    return specHeaders_;
}
java::lang::String* poi::ss::formula::FormulaParser::specHeaders_;

java::lang::String*& poi::ss::formula::FormulaParser::specAll()
{
    clinit();
    return specAll_;
}
java::lang::String* poi::ss::formula::FormulaParser::specAll_;

java::lang::String*& poi::ss::formula::FormulaParser::specData()
{
    clinit();
    return specData_;
}
java::lang::String* poi::ss::formula::FormulaParser::specData_;

java::lang::String*& poi::ss::formula::FormulaParser::specTotals()
{
    clinit();
    return specTotals_;
}
java::lang::String* poi::ss::formula::FormulaParser::specTotals_;

java::lang::String*& poi::ss::formula::FormulaParser::specThisRow()
{
    clinit();
    return specThisRow_;
}
java::lang::String* poi::ss::formula::FormulaParser::specThisRow_;

poi::ss::formula::ParseNode* poi::ss::formula::FormulaParser::parseStructuredReference(::java::lang::String* tableName)
{
    if(!(npc(_ssVersion)->equals(static_cast< ::java::lang::Object* >(::poi::ss::SpreadsheetVersion::EXCEL2007)))) {
        throw new FormulaParseException(u"Structured references work only on XSSF (Excel 2007+)!"_j);
    }
    auto tbl = npc(_book)->getTable(tableName);
    if(tbl == nullptr) {
        throw new FormulaParseException(::java::lang::StringBuilder().append(u"Illegal table name: '"_j)->append(tableName)
            ->append(u"'"_j)->toString());
    }
    auto sheetName = npc(tbl)->getSheetName();
    auto startCol = npc(tbl)->getStartColIndex();
    auto endCol = npc(tbl)->getEndColIndex();
    auto startRow = npc(tbl)->getStartRowIndex();
    auto endRow = npc(tbl)->getEndRowIndex();
    auto savePtr0 = _pointer;
    GetChar();
    auto isTotalsSpec = false;
    auto isThisRowSpec = false;
    auto isDataSpec = false;
    auto isHeadersSpec = false;
    auto isAllSpec = false;
    auto nSpecQuantifiers = int32_t(0);
    while (true) {
        auto savePtr1 = _pointer;
        auto specName = parseAsSpecialQuantifier();
        if(specName == nullptr) {
            resetPointer(savePtr1);
            break;
        }
        if(npc(specName)->equals(static_cast< ::java::lang::Object* >(specAll_))) {
            isAllSpec = true;
        } else if(npc(specName)->equals(static_cast< ::java::lang::Object* >(specData_))) {
            isDataSpec = true;
        } else if(npc(specName)->equals(static_cast< ::java::lang::Object* >(specHeaders_))) {
            isHeadersSpec = true;
        } else if(npc(specName)->equals(static_cast< ::java::lang::Object* >(specThisRow_))) {
            isThisRowSpec = true;
        } else if(npc(specName)->equals(static_cast< ::java::lang::Object* >(specTotals_))) {
            isTotalsSpec = true;
        } else {
            throw new FormulaParseException(::java::lang::StringBuilder().append(u"Unknown special quantifier "_j)->append(specName)->toString());
        }
        nSpecQuantifiers++;
        if(look == u',') {
            GetChar();
        } else {
            break;
        }
    }
    auto isThisRow = false;
    SkipWhite();
    if(look == u'@') {
        isThisRow = true;
        GetChar();
    }
    ::java::lang::String* startColumnName;
    ::java::lang::String* endColumnName = nullptr;
    auto nColQuantifiers = int32_t(0);
    auto savePtr1 = _pointer;
    startColumnName = parseAsColumnQuantifier();
    if(startColumnName == nullptr) {
        resetPointer(savePtr1);
    } else {
        nColQuantifiers++;
        if(look == u',') {
            throw new FormulaParseException(::java::lang::StringBuilder().append(u"The formula "_j)->append(_formulaString)
                ->append(u"is illegal: you should not use ',' with column quantifiers"_j)->toString());
        } else if(look == u':') {
            GetChar();
            endColumnName = parseAsColumnQuantifier();
            nColQuantifiers++;
            if(endColumnName == nullptr) {
                throw new FormulaParseException(::java::lang::StringBuilder().append(u"The formula "_j)->append(_formulaString)
                    ->append(u"is illegal: the string after ':' must be column quantifier"_j)->toString());
            }
        }
    }
    if(nColQuantifiers == 0 && nSpecQuantifiers == 0) {
        resetPointer(savePtr0);
        savePtr0 = _pointer;
        startColumnName = parseAsColumnQuantifier();
        if(startColumnName != nullptr) {
            nColQuantifiers++;
        } else {
            resetPointer(savePtr0);
            auto name = parseAsSpecialQuantifier();
            if(name != nullptr) {
                if(npc(name)->equals(static_cast< ::java::lang::Object* >(specAll_))) {
                    isAllSpec = true;
                } else if(npc(name)->equals(static_cast< ::java::lang::Object* >(specData_))) {
                    isDataSpec = true;
                } else if(npc(name)->equals(static_cast< ::java::lang::Object* >(specHeaders_))) {
                    isHeadersSpec = true;
                } else if(npc(name)->equals(static_cast< ::java::lang::Object* >(specThisRow_))) {
                    isThisRowSpec = true;
                } else if(npc(name)->equals(static_cast< ::java::lang::Object* >(specTotals_))) {
                    isTotalsSpec = true;
                } else {
                    throw new FormulaParseException(::java::lang::StringBuilder().append(u"Unknown special quantifier "_j)->append(name)->toString());
                }
                nSpecQuantifiers++;
            } else {
                throw new FormulaParseException(::java::lang::StringBuilder().append(u"The formula "_j)->append(_formulaString)
                    ->append(u" is illegal"_j)->toString());
            }
        }
    } else {
        Match(u']');
    }
    if(isTotalsSpec && npc(tbl)->getTotalsRowCount() == 0) {
        return new ParseNode(::poi::ss::formula::ptg::ErrPtg::REF_INVALID());
    }
    if((isThisRow || isThisRowSpec) && (_rowIndex < startRow || endRow < _rowIndex)) {
        if(_rowIndex >= 0) {
            return new ParseNode(::poi::ss::formula::ptg::ErrPtg::VALUE_INVALID());
        } else {
            throw new FormulaParseException(::java::lang::StringBuilder().append(u"Formula contained [#This Row] or [@] structured reference but this row < 0. "_j)->append(u"Row index must be specified for row-referencing structured references."_j)->toString());
        }
    }
    auto actualStartRow = startRow;
    auto actualEndRow = endRow;
    auto actualStartCol = startCol;
    auto actualEndCol = endCol;
    if(nSpecQuantifiers > 0) {
        if(nSpecQuantifiers == 1 && isAllSpec) {
        } else if(isDataSpec && isHeadersSpec) {
            if(npc(tbl)->getTotalsRowCount() > 0) {
                actualEndRow = endRow - int32_t(1);
            }
        } else if(isDataSpec && isTotalsSpec) {
            actualStartRow = startRow + int32_t(1);
        } else if(nSpecQuantifiers == 1 && isDataSpec) {
            actualStartRow = startRow + int32_t(1);
            if(npc(tbl)->getTotalsRowCount() > 0) {
                actualEndRow = endRow - int32_t(1);
            }
        } else if(nSpecQuantifiers == 1 && isHeadersSpec) {
            actualEndRow = actualStartRow;
        } else if(nSpecQuantifiers == 1 && isTotalsSpec) {
            actualStartRow = actualEndRow;
        } else if((nSpecQuantifiers == 1 && isThisRowSpec) || isThisRow) {
            actualStartRow = _rowIndex;
            actualEndRow = _rowIndex;
        } else {
            throw new FormulaParseException(::java::lang::StringBuilder().append(u"The formula "_j)->append(_formulaString)
                ->append(u" is illegal"_j)->toString());
        }
    } else {
        if(isThisRow) {
            actualStartRow = _rowIndex;
            actualEndRow = _rowIndex;
        } else {
            actualStartRow++;
            if(npc(tbl)->getTotalsRowCount() > 0)
                actualEndRow--;

        }
    }
    if(nColQuantifiers == 2) {
        if(startColumnName == nullptr || endColumnName == nullptr) {
            throw new ::java::lang::IllegalStateException(u"Fatal error"_j);
        }
        auto startIdx = npc(tbl)->findColumnIndex(startColumnName);
        auto endIdx = npc(tbl)->findColumnIndex(endColumnName);
        if(startIdx == -int32_t(1) || endIdx == -int32_t(1)) {
            throw new FormulaParseException(::java::lang::StringBuilder().append(u"One of the columns "_j)->append(startColumnName)
                ->append(u", "_j)
                ->append(endColumnName)
                ->append(u" doesn't exist in table "_j)
                ->append(npc(tbl)->getName())->toString());
        }
        actualStartCol = startCol + startIdx;
        actualEndCol = startCol + endIdx;
    } else if(nColQuantifiers == 1 && !isThisRow) {
        if(startColumnName == nullptr) {
            throw new ::java::lang::IllegalStateException(u"Fatal error"_j);
        }
        auto idx = npc(tbl)->findColumnIndex(startColumnName);
        if(idx == -int32_t(1)) {
            throw new FormulaParseException(::java::lang::StringBuilder().append(u"The column "_j)->append(startColumnName)
                ->append(u" doesn't exist in table "_j)
                ->append(npc(tbl)->getName())->toString());
        }
        actualStartCol = startCol + idx;
        actualEndCol = actualStartCol;
    }
    auto topLeft = new ::poi::ss::util::CellReference(actualStartRow, actualStartCol);
    auto bottomRight = new ::poi::ss::util::CellReference(actualEndRow, actualEndCol);
    auto sheetIden = new SheetIdentifier(nullptr, new NameIdentifier(sheetName, true));
    auto ptg = npc(_book)->get3DReferencePtg(new ::poi::ss::util::AreaReference(topLeft, bottomRight, _ssVersion), sheetIden);
    return new ParseNode(ptg);
}

java::lang::String* poi::ss::formula::FormulaParser::parseAsColumnQuantifier()
{
    if(look != u'[') {
        return nullptr;
    }
    GetChar();
    if(look == u'#') {
        return nullptr;
    }
    if(look == u'@') {
        GetChar();
    }
    auto name = new ::java::lang::StringBuilder();
    while (look != u']') {
        npc(name)->appendCodePoint(look);
        GetChar();
    }
    Match(u']');
    return npc(name)->toString();
}

java::lang::String* poi::ss::formula::FormulaParser::parseAsSpecialQuantifier()
{
    if(look != u'[') {
        return nullptr;
    }
    GetChar();
    if(look != u'#') {
        return nullptr;
    }
    GetChar();
    auto name = parseAsName();
    if(npc(name)->equals(static_cast< ::java::lang::Object* >(u"This"_j))) {
        name = ::java::lang::StringBuilder().append(name)->append(u' ')
            ->append(parseAsName())->toString();
    }
    Match(u']');
    return name;
}

poi::ss::formula::ParseNode* poi::ss::formula::FormulaParser::parseNonRange(int32_t savePointer)
{
    resetPointer(savePointer);
    if(::java::lang::Character::isDigit(look)) {
        return new ParseNode(parseNumber());
    }
    if(look == u'"') {
        return new ParseNode(new ::poi::ss::formula::ptg::StringPtg(parseStringLiteral()));
    }
    auto name = parseAsName();
    if(look == u'(') {
        return function(name);
    }
    if(look == u'[') {
        return parseStructuredReference(name);
    }
    if(npc(name)->equalsIgnoreCase(u"TRUE"_j) || npc(name)->equalsIgnoreCase(u"FALSE"_j)) {
        return new ParseNode(::poi::ss::formula::ptg::BoolPtg::valueOf(npc(name)->equalsIgnoreCase(u"TRUE"_j)));
    }
    if(_book == nullptr) {
        throw new ::java::lang::IllegalStateException(::java::lang::StringBuilder().append(u"Need book to evaluate name '"_j)->append(name)
            ->append(u"'"_j)->toString());
    }
    auto evalName = npc(_book)->getName(name, _sheetIndex);
    if(evalName == nullptr) {
        throw new FormulaParseException(::java::lang::StringBuilder().append(u"Specified named range '"_j)->append(name)
            ->append(u"' does not exist in the current workbook."_j)->toString());
    }
    if(npc(evalName)->isRange()) {
        return new ParseNode(npc(evalName)->createPtg());
    }
    throw new FormulaParseException(::java::lang::StringBuilder().append(u"Specified name '"_j)->append(name)
        ->append(u"' is not a range as expected."_j)->toString());
}

java::lang::String* poi::ss::formula::FormulaParser::parseAsName()
{
    auto sb = new ::java::lang::StringBuilder();
    if(!::java::lang::Character::isLetter(look) && look != u'_' && look != u'\\') {
        throw expected(u"number, string, defined name, or data table"_j);
    }
    while (isValidDefinedNameChar(look)) {
        npc(sb)->appendCodePoint(look);
        GetChar();
    }
    SkipWhite();
    return npc(sb)->toString();
}

bool poi::ss::formula::FormulaParser::isValidDefinedNameChar(int32_t ch)
{
    clinit();
    if(::java::lang::Character::isLetterOrDigit(ch)) {
        return true;
    }
    if(ch > 128) {
        return true;
    }
    switch (ch) {
    case u'.':
    case u'_':
    case u'?':
    case u'\\':
        return true;
    }

    return false;
}

poi::ss::formula::ParseNode* poi::ss::formula::FormulaParser::createAreaRefParseNode(SheetIdentifier* sheetIden, FormulaParser_SimpleRangePart* part1, FormulaParser_SimpleRangePart* part2) /* throws(FormulaParseException) */
{
    ::poi::ss::formula::ptg::Ptg* ptg;
    if(part2 == nullptr) {
        auto cr = npc(part1)->getCellReference();
        if(sheetIden == nullptr) {
            ptg = new ::poi::ss::formula::ptg::RefPtg(cr);
        } else {
            ptg = npc(_book)->get3DReferencePtg(cr, sheetIden);
        }
    } else {
        auto areaRef = createAreaRef(part1, part2);
        if(sheetIden == nullptr) {
            ptg = new ::poi::ss::formula::ptg::AreaPtg(areaRef);
        } else {
            ptg = npc(_book)->get3DReferencePtg(areaRef, sheetIden);
        }
    }
    return new ParseNode(ptg);
}

poi::ss::util::AreaReference* poi::ss::formula::FormulaParser::createAreaRef(FormulaParser_SimpleRangePart* part1, FormulaParser_SimpleRangePart* part2)
{
    if(!npc(part1)->isCompatibleForArea(part2)) {
        throw new FormulaParseException(::java::lang::StringBuilder().append(u"has incompatible parts: '"_j)->append(npc(part1)->getRep())
            ->append(u"' and '"_j)
            ->append(npc(part2)->getRep())
            ->append(u"'."_j)->toString());
    }
    if(npc(part1)->isRow()) {
        return ::poi::ss::util::AreaReference::getWholeRow(_ssVersion, npc(part1)->getRep(), npc(part2)->getRep());
    }
    if(npc(part1)->isColumn()) {
        return ::poi::ss::util::AreaReference::getWholeColumn(_ssVersion, npc(part1)->getRep(), npc(part2)->getRep());
    }
    return new ::poi::ss::util::AreaReference(npc(part1)->getCellReference(), npc(part2)->getCellReference(), _ssVersion);
}

java::util::regex::Pattern*& poi::ss::formula::FormulaParser::CELL_REF_PATTERN()
{
    clinit();
    return CELL_REF_PATTERN_;
}
java::util::regex::Pattern* poi::ss::formula::FormulaParser::CELL_REF_PATTERN_;

poi::ss::formula::FormulaParser_SimpleRangePart* poi::ss::formula::FormulaParser::parseSimpleRangePart()
{
    auto ptr = _pointer - int32_t(1);
    auto hasDigits = false;
    auto hasLetters = false;
    while (ptr < _formulaLength) {
        auto ch = npc(_formulaString)->charAt(ptr);
        if(::java::lang::Character::isDigit(ch)) {
            hasDigits = true;
        } else if(::java::lang::Character::isLetter(ch)) {
            hasLetters = true;
        } else if(ch == u'$' || ch == u'_') {
        } else {
            break;
        }
        ptr++;
    }
    if(ptr <= _pointer - int32_t(1)) {
        return nullptr;
    }
    auto rep = npc(_formulaString)->substring(_pointer - int32_t(1), ptr);
    if(!npc(npc(CELL_REF_PATTERN_)->matcher(rep))->matches()) {
        return nullptr;
    }
    if(hasLetters && hasDigits) {
        if(!isValidCellReference(rep)) {
            return nullptr;
        }
    } else if(hasLetters) {
        if(!::poi::ss::util::CellReference::isColumnWithinRange(npc(rep)->replace(static_cast< ::java::lang::CharSequence* >(u"$"_j), static_cast< ::java::lang::CharSequence* >(u""_j)), _ssVersion)) {
            return nullptr;
        }
    } else if(hasDigits) {
        int32_t i;
        try {
            i = ::java::lang::Integer::parseInt(npc(rep)->replace(static_cast< ::java::lang::CharSequence* >(u"$"_j), static_cast< ::java::lang::CharSequence* >(u""_j)));
        } catch (::java::lang::NumberFormatException* e) {
            return nullptr;
        }
        if(i < 1 || i > npc(_ssVersion)->getMaxRows()) {
            return nullptr;
        }
    } else {
        return nullptr;
    }
    resetPointer(ptr + int32_t(1));
    return new FormulaParser_SimpleRangePart(rep, hasLetters, hasDigits);
}

java::lang::String* poi::ss::formula::FormulaParser::getBookName()
{
    auto sb = new ::java::lang::StringBuilder();
    GetChar();
    while (look != u']') {
        npc(sb)->appendCodePoint(look);
        GetChar();
    }
    GetChar();
    return npc(sb)->toString();
}

poi::ss::formula::SheetIdentifier* poi::ss::formula::FormulaParser::parseSheetName()
{
    ::java::lang::String* bookName;
    if(look == u'[') {
        bookName = getBookName();
    } else {
        bookName = nullptr;
    }
    if(look == u'\'') {
        Match(u'\'');
        if(look == u'[')
            bookName = getBookName();

        auto sb = new ::java::lang::StringBuilder();
        auto done = look == u'\'';
        while (!done) {
            npc(sb)->appendCodePoint(look);
            GetChar();
            if(look == u'\'') {
                Match(u'\'');
                done = look != u'\'';
            }
        }
        auto iden = new NameIdentifier(npc(sb)->toString(), true);
        SkipWhite();
        if(look == u'!') {
            GetChar();
            return new SheetIdentifier(bookName, iden);
        }
        if(look == u':') {
            return parseSheetRange(bookName, iden);
        }
        return nullptr;
    }
    if(look == u'_' || ::java::lang::Character::isLetter(look)) {
        auto sb = new ::java::lang::StringBuilder();
        while (isUnquotedSheetNameChar(look)) {
            npc(sb)->appendCodePoint(look);
            GetChar();
        }
        auto iden = new NameIdentifier(npc(sb)->toString(), false);
        SkipWhite();
        if(look == u'!') {
            GetChar();
            return new SheetIdentifier(bookName, iden);
        }
        if(look == u':') {
            return parseSheetRange(bookName, iden);
        }
        return nullptr;
    }
    if(look == u'!' && bookName != nullptr) {
        GetChar();
        return new SheetIdentifier(bookName, nullptr);
    }
    return nullptr;
}

poi::ss::formula::SheetIdentifier* poi::ss::formula::FormulaParser::parseSheetRange(::java::lang::String* bookname, NameIdentifier* sheet1Name)
{
    GetChar();
    auto sheet2 = parseSheetName();
    if(sheet2 != nullptr) {
        return new SheetRangeIdentifier(bookname, sheet1Name, npc(sheet2)->getSheetIdentifier());
    }
    return nullptr;
}

bool poi::ss::formula::FormulaParser::isUnquotedSheetNameChar(int32_t ch)
{
    clinit();
    if(::java::lang::Character::isLetterOrDigit(ch)) {
        return true;
    }
    if(ch > 128) {
        return true;
    }
    switch (ch) {
    case u'.':
    case u'_':
        return true;
    }

    return false;
}

bool poi::ss::formula::FormulaParser::isValidCellReference(::java::lang::String* str)
{
    auto result = ::poi::ss::util::CellReference::classifyCellReference(str, _ssVersion) == ::poi::ss::util::CellReference_NameType::CELL;
    if(result) {
        auto isFunc = ::poi::ss::formula::function::FunctionMetadataRegistry::getFunctionByName(npc(str)->toUpperCase(::java::util::Locale::ROOT())) != nullptr;
        if(isFunc) {
            auto savePointer = _pointer;
            resetPointer(_pointer + npc(str)->length());
            SkipWhite();
            result = look != u'(';
            resetPointer(savePointer);
        }
    }
    return result;
}

poi::ss::formula::ParseNode* poi::ss::formula::FormulaParser::function(::java::lang::String* name)
{
    ::poi::ss::formula::ptg::Ptg* nameToken = nullptr;
    if(!::poi::ss::formula::ptg::AbstractFunctionPtg::isBuiltInFunctionName(name)) {
        if(_book == nullptr) {
            throw new ::java::lang::IllegalStateException(::java::lang::StringBuilder().append(u"Need book to evaluate name '"_j)->append(name)
                ->append(u"'"_j)->toString());
        }
        auto hName = npc(_book)->getName(name, _sheetIndex);
        if(hName != nullptr) {
            if(!npc(hName)->isFunctionName()) {
                throw new FormulaParseException(::java::lang::StringBuilder().append(u"Attempt to use name '"_j)->append(name)
                    ->append(u"' as a function, but defined name in workbook does not refer to a function"_j)->toString());
            }
            nameToken = npc(hName)->createPtg();
        } else {
            nameToken = npc(_book)->getNameXPtg(name, nullptr);
            if(nameToken == nullptr) {
                if(npc(log_)->check(::poi::util::POILogger::WARN)) {
                    npc(log_)->log(::poi::util::POILogger::WARN, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(::java::lang::StringBuilder().append(u"FormulaParser.function: Name '"_j)->append(name)
                        ->append(u"' is completely unknown in the current workbook."_j)->toString())}));
                }
                {
                    auto v = npc(_book)->getSpreadsheetVersion();
                    if((v == ::poi::ss::SpreadsheetVersion::EXCEL97)) {
                        addName(name);
                        hName = npc(_book)->getName(name, _sheetIndex);
                        nameToken = npc(hName)->createPtg();
                        goto end_switch0;;
                    }
                    if((v == ::poi::ss::SpreadsheetVersion::EXCEL2007)) {
                        nameToken = new ::poi::ss::formula::ptg::NameXPxg(name);
                        goto end_switch0;;
                    }
                    if((((v != ::poi::ss::SpreadsheetVersion::EXCEL97) && (v != ::poi::ss::SpreadsheetVersion::EXCEL2007)))) {
                        throw new ::java::lang::IllegalStateException(::java::lang::StringBuilder().append(u"Unexpected spreadsheet version: "_j)->append(npc(npc(_book)->getSpreadsheetVersion())->name())->toString());
                    }
end_switch0:;
                }

            }
        }
    }
    Match(u'(');
    auto args = Arguments();
    Match(u')');
    return getFunction(name, nameToken, args);
}

void poi::ss::formula::FormulaParser::addName(::java::lang::String* functionName)
{
    auto const name = npc(_book)->createName();
    npc(name)->setFunction(true);
    npc(name)->setNameName(functionName);
    npc(name)->setSheetIndex(_sheetIndex);
}

poi::ss::formula::ParseNode* poi::ss::formula::FormulaParser::getFunction(::java::lang::String* name, ::poi::ss::formula::ptg::Ptg* namePtg, ParseNodeArray* args)
{
    auto fm = ::poi::ss::formula::function::FunctionMetadataRegistry::getFunctionByName(npc(name)->toUpperCase(::java::util::Locale::ROOT()));
    auto numArgs = npc(args)->length;
    if(fm == nullptr) {
        if(namePtg == nullptr) {
            throw new ::java::lang::IllegalStateException(u"NamePtg must be supplied for external functions"_j);
        }
        auto allArgs = new ParseNodeArray(numArgs + int32_t(1));
        allArgs->set(int32_t(0), new ParseNode(namePtg));
        ::java::lang::System::arraycopy(args, 0, allArgs, 1, numArgs);
        return new ParseNode(static_cast< ::poi::ss::formula::ptg::Ptg* >(::poi::ss::formula::ptg::FuncVarPtg::create(name, numArgs + int32_t(1))), allArgs);
    }
    if(namePtg != nullptr) {
        throw new ::java::lang::IllegalStateException(u"NamePtg no applicable to internal functions"_j);
    }
    auto isVarArgs = !npc(fm)->hasFixedArgsLength();
    auto funcIx = npc(fm)->getIndex();
    if(funcIx == ::poi::ss::formula::function::FunctionMetadataRegistry::FUNCTION_INDEX_SUM && npc(args)->length == 1) {
        return new ParseNode(static_cast< ::poi::ss::formula::ptg::Ptg* >(::poi::ss::formula::ptg::AttrPtg::getSumSingle()), args);
    }
    validateNumArgs(npc(args)->length, fm);
    ::poi::ss::formula::ptg::AbstractFunctionPtg* retval;
    if(isVarArgs) {
        retval = ::poi::ss::formula::ptg::FuncVarPtg::create(name, numArgs);
    } else {
        retval = ::poi::ss::formula::ptg::FuncPtg::create(funcIx);
    }
    return new ParseNode(static_cast< ::poi::ss::formula::ptg::Ptg* >(retval), args);
}

void poi::ss::formula::FormulaParser::validateNumArgs(int32_t numArgs, ::poi::ss::formula::function::FunctionMetadata* fm)
{
    if(numArgs < npc(fm)->getMinParams()) {
        auto msg = ::java::lang::StringBuilder().append(u"Too few arguments to function '"_j)->append(npc(fm)->getName())
            ->append(u"'. "_j)->toString();
        if(npc(fm)->hasFixedArgsLength()) {
            msg = ::java::lang::StringBuilder(msg).append(::java::lang::StringBuilder().append(u"Expected "_j)->append(npc(fm)->getMinParams())->toString())->toString();
        } else {
            msg = ::java::lang::StringBuilder(msg).append(::java::lang::StringBuilder().append(u"At least "_j)->append(npc(fm)->getMinParams())
                ->append(u" were expected"_j)->toString())->toString();
        }
        msg = ::java::lang::StringBuilder(msg).append(::java::lang::StringBuilder().append(u" but got "_j)->append(numArgs)
            ->append(u"."_j)->toString())->toString();
        throw new FormulaParseException(msg);
    }
    int32_t maxArgs;
    if(npc(fm)->hasUnlimitedVarags()) {
        if(_book != nullptr) {
            maxArgs = npc(npc(_book)->getSpreadsheetVersion())->getMaxFunctionArgs();
        } else {
            maxArgs = npc(fm)->getMaxParams();
        }
    } else {
        maxArgs = npc(fm)->getMaxParams();
    }
    if(numArgs > maxArgs) {
        auto msg = ::java::lang::StringBuilder().append(u"Too many arguments to function '"_j)->append(npc(fm)->getName())
            ->append(u"'. "_j)->toString();
        if(npc(fm)->hasFixedArgsLength()) {
            msg = ::java::lang::StringBuilder(msg).append(::java::lang::StringBuilder().append(u"Expected "_j)->append(maxArgs)->toString())->toString();
        } else {
            msg = ::java::lang::StringBuilder(msg).append(::java::lang::StringBuilder().append(u"At most "_j)->append(maxArgs)
                ->append(u" were expected"_j)->toString())->toString();
        }
        msg = ::java::lang::StringBuilder(msg).append(::java::lang::StringBuilder().append(u" but got "_j)->append(numArgs)
            ->append(u"."_j)->toString())->toString();
        throw new FormulaParseException(msg);
    }
}

bool poi::ss::formula::FormulaParser::isArgumentDelimiter(int32_t ch)
{
    clinit();
    return ch == u',' || ch == u')';
}

poi::ss::formula::ParseNodeArray* poi::ss::formula::FormulaParser::Arguments()
{
    ::java::util::List* temp = new ::java::util::ArrayList(int32_t(2));
    SkipWhite();
    if(look == u')') {
        return ParseNode::EMPTY_ARRAY();
    }
    auto missedPrevArg = true;
    while (true) {
        SkipWhite();
        if(isArgumentDelimiter(look)) {
            if(missedPrevArg) {
                npc(temp)->add(static_cast< ::java::lang::Object* >(new ParseNode(::poi::ss::formula::ptg::MissingArgPtg::instance())));
            }
            if(look == u')') {
                break;
            }
            Match(u',');
            missedPrevArg = true;
            continue;
        }
        npc(temp)->add(static_cast< ::java::lang::Object* >(comparisonExpression()));
        missedPrevArg = false;
        SkipWhite();
        if(!isArgumentDelimiter(look)) {
            throw expected(u"',' or ')'"_j);
        }
    }
    auto result = new ParseNodeArray(npc(temp)->size());
    npc(temp)->toArray_(static_cast< ::java::lang::ObjectArray* >(result));
    return result;
}

poi::ss::formula::ParseNode* poi::ss::formula::FormulaParser::powerFactor()
{
    auto result = percentFactor();
    while (true) {
        SkipWhite();
        if(look != u'^') {
            return result;
        }
        Match(u'^');
        auto other = percentFactor();
        result = new ParseNode(::poi::ss::formula::ptg::PowerPtg::instance(), result, other);
    }
}

poi::ss::formula::ParseNode* poi::ss::formula::FormulaParser::percentFactor()
{
    auto result = parseSimpleFactor();
    while (true) {
        SkipWhite();
        if(look != u'%') {
            return result;
        }
        Match(u'%');
        result = new ParseNode(static_cast< ::poi::ss::formula::ptg::Ptg* >(::poi::ss::formula::ptg::PercentPtg::instance()), result);
    }
}

poi::ss::formula::ParseNode* poi::ss::formula::FormulaParser::parseSimpleFactor()
{
    SkipWhite();
    {
        ParseNode* inside;
        ParseNode* arrayNode;
        switch (look) {
        case u'#':
            return new ParseNode(::poi::ss::formula::ptg::ErrPtg::valueOf(parseErrorLiteral()));
        case u'-':
            Match(u'-');
            return parseUnary(false);
        case u'+':
            Match(u'+');
            return parseUnary(true);
        case u'(':
            Match(u'(');
            inside = unionExpression();
            Match(u')');
            return new ParseNode(static_cast< ::poi::ss::formula::ptg::Ptg* >(::poi::ss::formula::ptg::ParenthesisPtg::instance()), inside);
        case u'"':
            return new ParseNode(new ::poi::ss::formula::ptg::StringPtg(parseStringLiteral()));
        case u'{':
            Match(u'{');
            arrayNode = parseArray_();
            Match(u'}');
            return arrayNode;
        }
    }

    if(IsAlpha(look) || ::java::lang::Character::isDigit(look) || look == u'\'' || look == u'[' || look == u'_' || look == u'\\') {
        return parseRangeExpression();
    }
    if(look == u'.') {
        return new ParseNode(parseNumber());
    }
    throw expected(u"cell ref or constant literal"_j);
}

poi::ss::formula::ParseNode* poi::ss::formula::FormulaParser::parseUnary(bool isPlus)
{
    auto numberFollows = IsDigit(look) || look == u'.';
    auto factor = powerFactor();
    if(numberFollows) {
        auto token = npc(factor)->getToken();
        if(dynamic_cast< ::poi::ss::formula::ptg::NumberPtg* >(token) != nullptr) {
            if(isPlus) {
                return factor;
            }
            token = new ::poi::ss::formula::ptg::NumberPtg(-npc((java_cast< ::poi::ss::formula::ptg::NumberPtg* >(token)))->getValue());
            return new ParseNode(token);
        }
        if(dynamic_cast< ::poi::ss::formula::ptg::IntPtg* >(token) != nullptr) {
            if(isPlus) {
                return factor;
            }
            auto intVal = npc((java_cast< ::poi::ss::formula::ptg::IntPtg* >(token)))->getValue();
            token = new ::poi::ss::formula::ptg::NumberPtg(static_cast< double >(-intVal));
            return new ParseNode(token);
        }
    }
    return new ParseNode(isPlus ? static_cast< ::poi::ss::formula::ptg::Ptg* >(::poi::ss::formula::ptg::UnaryPlusPtg::instance()) : static_cast< ::poi::ss::formula::ptg::Ptg* >(::poi::ss::formula::ptg::UnaryMinusPtg::instance()), factor);
}

poi::ss::formula::ParseNode* poi::ss::formula::FormulaParser::parseArray_()
{
    ::java::util::List* rowsData = new ::java::util::ArrayList();
    while (true) {
        auto singleRowData = parseArrayRow();
        npc(rowsData)->add(static_cast< ::java::lang::Object* >(singleRowData));
        if(look == u'}') {
            break;
        }
        if(look != u';') {
            throw expected(u"'}' or ';'"_j);
        }
        Match(u';');
    }
    auto nRows = npc(rowsData)->size();
    auto values2d = new ::java::lang::ObjectArrayArray(nRows);
    npc(rowsData)->toArray_(static_cast< ::java::lang::ObjectArray* >(values2d));
    auto nColumns = npc((*values2d)[int32_t(0)])->length;
    checkRowLengths(values2d, nColumns);
    return new ParseNode(new ::poi::ss::formula::ptg::ArrayPtg(values2d));
}

void poi::ss::formula::FormulaParser::checkRowLengths(::java::lang::ObjectArrayArray* values2d, int32_t nColumns)
{
    for (auto i = int32_t(0); i < npc(values2d)->length; i++) {
        auto rowLen = npc((*values2d)[i])->length;
        if(rowLen != nColumns) {
            throw new FormulaParseException(::java::lang::StringBuilder().append(u"Array row "_j)->append(i)
                ->append(u" has length "_j)
                ->append(rowLen)
                ->append(u" but row 0 has length "_j)
                ->append(nColumns)->toString());
        }
    }
}

java::lang::ObjectArray* poi::ss::formula::FormulaParser::parseArrayRow()
{
    ::java::util::List* temp = new ::java::util::ArrayList();
    while (true) {
        npc(temp)->add(static_cast< ::java::lang::Object* >(parseArrayItem()));
        SkipWhite();
        switch (look) {
        case u'}':
        case u';':
            break;
        case u',':
            Match(u',');
            continue;
        default:
            throw expected(u"'}' or ','"_j);
        }

        break;
    }
    auto result = new ::java::lang::ObjectArray(npc(temp)->size());
    npc(temp)->toArray_(static_cast< ::java::lang::ObjectArray* >(result));
    return result;
}

java::lang::Object* poi::ss::formula::FormulaParser::parseArrayItem()
{
    SkipWhite();
    switch (look) {
    case u'"':
        return parseStringLiteral();
    case u'#':
        return ::poi::ss::formula::constant::ErrorConstant::valueOf(parseErrorLiteral());
    case u'F':
    case u'f':
    case u'T':
    case u't':
        return parseBooleanLiteral();
    case u'-':
        Match(u'-');
        SkipWhite();
        return convertArrayNumber(parseNumber(), false);
    }

    return convertArrayNumber(parseNumber(), true);
}

java::lang::Boolean* poi::ss::formula::FormulaParser::parseBooleanLiteral()
{
    auto iden = parseUnquotedIdentifier();
    if(npc(u"TRUE"_j)->equalsIgnoreCase(iden)) {
        return ::java::lang::Boolean::TRUE();
    }
    if(npc(u"FALSE"_j)->equalsIgnoreCase(iden)) {
        return ::java::lang::Boolean::FALSE();
    }
    throw expected(u"'TRUE' or 'FALSE'"_j);
}

java::lang::Double* poi::ss::formula::FormulaParser::convertArrayNumber(::poi::ss::formula::ptg::Ptg* ptg, bool isPositive)
{
    clinit();
    double value;
    if(dynamic_cast< ::poi::ss::formula::ptg::IntPtg* >(ptg) != nullptr) {
        value = npc((java_cast< ::poi::ss::formula::ptg::IntPtg* >(ptg)))->getValue();
    } else if(dynamic_cast< ::poi::ss::formula::ptg::NumberPtg* >(ptg) != nullptr) {
        value = npc((java_cast< ::poi::ss::formula::ptg::NumberPtg* >(ptg)))->getValue();
    } else {
        throw new ::java::lang::RuntimeException(::java::lang::StringBuilder().append(u"Unexpected ptg ("_j)->append(npc(npc(ptg)->getClass())->getName())
            ->append(u")"_j)->toString());
    }
    if(!isPositive) {
        value = -value;
    }
    return new ::java::lang::Double(value);
}

poi::ss::formula::ptg::Ptg* poi::ss::formula::FormulaParser::parseNumber()
{
    ::java::lang::String* number2 = nullptr;
    ::java::lang::String* exponent = nullptr;
    auto number1 = GetNum();
    if(look == u'.') {
        GetChar();
        number2 = GetNum();
    }
    if(look == u'E') {
        GetChar();
        auto sign = u""_j;
        if(look == u'+') {
            GetChar();
        } else if(look == u'-') {
            GetChar();
            sign = u"-"_j;
        }
        auto number = GetNum();
        if(number == nullptr) {
            throw expected(u"Integer"_j);
        }
        exponent = ::java::lang::StringBuilder().append(sign)->append(number)->toString();
    }
    if(number1 == nullptr && number2 == nullptr) {
        throw expected(u"Integer"_j);
    }
    return getNumberPtgFromString(number1, number2, exponent);
}

int32_t poi::ss::formula::FormulaParser::parseErrorLiteral()
{
    Match(u'#');
    auto part1 = npc(parseUnquotedIdentifier())->toUpperCase(::java::util::Locale::ROOT());
    if(part1 == nullptr) {
        throw expected(u"remainder of error constant literal"_j);
    }
    switch (npc(part1)->charAt(int32_t(0))) {
    case u'V': {
            auto fe = ::poi::ss::usermodel::FormulaError::VALUE;
            if(npc(part1)->equals(static_cast< ::java::lang::Object* >(npc(fe)->name()))) {
                Match(u'!');
                return npc(fe)->getCode();
            }
            throw expected(npc(fe)->getString());
        }
    case u'R': {
            auto fe = ::poi::ss::usermodel::FormulaError::REF;
            if(npc(part1)->equals(static_cast< ::java::lang::Object* >(npc(fe)->name()))) {
                Match(u'!');
                return npc(fe)->getCode();
            }
            throw expected(npc(fe)->getString());
        }
    case u'D': {
            auto fe = ::poi::ss::usermodel::FormulaError::DIV0;
            if(npc(part1)->equals(static_cast< ::java::lang::Object* >(u"DIV"_j))) {
                Match(u'/');
                Match(u'0');
                Match(u'!');
                return npc(fe)->getCode();
            }
            throw expected(npc(fe)->getString());
        }
    case u'N': {
            auto fe = ::poi::ss::usermodel::FormulaError::NAME;
            if(npc(part1)->equals(static_cast< ::java::lang::Object* >(npc(fe)->name()))) {
                Match(u'?');
                return npc(fe)->getCode();
            }
            fe = ::poi::ss::usermodel::FormulaError::NUM;
            if(npc(part1)->equals(static_cast< ::java::lang::Object* >(npc(fe)->name()))) {
                Match(u'!');
                return npc(fe)->getCode();
            }
            fe = ::poi::ss::usermodel::FormulaError::NULL_;
            if(npc(part1)->equals(static_cast< ::java::lang::Object* >(npc(fe)->name()))) {
                Match(u'!');
                return npc(fe)->getCode();
            }
            fe = ::poi::ss::usermodel::FormulaError::NA;
            if(npc(part1)->equals(static_cast< ::java::lang::Object* >(u"N"_j))) {
                Match(u'/');
                if(look != u'A' && look != u'a') {
                    throw expected(npc(fe)->getString());
                }
                Match(look);
                return npc(fe)->getCode();
            }
            throw expected(u"#NAME?, #NUM!, #NULL! or #N/A"_j);
        }
    }

    throw expected(u"#VALUE!, #REF!, #DIV/0!, #NAME?, #NUM!, #NULL! or #N/A"_j);
}

java::lang::String* poi::ss::formula::FormulaParser::parseUnquotedIdentifier()
{
    if(look == u'\'') {
        throw expected(u"unquoted identifier"_j);
    }
    auto sb = new ::java::lang::StringBuilder();
    while (::java::lang::Character::isLetterOrDigit(look) || look == u'.') {
        npc(sb)->appendCodePoint(look);
        GetChar();
    }
    if(npc(sb)->length() < 1) {
        return nullptr;
    }
    return npc(sb)->toString();
}

poi::ss::formula::ptg::Ptg* poi::ss::formula::FormulaParser::getNumberPtgFromString(::java::lang::String* number1, ::java::lang::String* number2, ::java::lang::String* exponent)
{
    clinit();
    auto number = new ::java::lang::StringBuilder();
    if(number2 == nullptr) {
        npc(number)->append(number1);
        if(exponent != nullptr) {
            npc(number)->append(u'E');
            npc(number)->append(exponent);
        }
        auto numberStr = npc(number)->toString();
        int32_t intVal;
        try {
            intVal = ::java::lang::Integer::parseInt(numberStr);
        } catch (::java::lang::NumberFormatException* e) {
            return new ::poi::ss::formula::ptg::NumberPtg(numberStr);
        }
        if(::poi::ss::formula::ptg::IntPtg::isInRange(intVal)) {
            return new ::poi::ss::formula::ptg::IntPtg(intVal);
        }
        return new ::poi::ss::formula::ptg::NumberPtg(numberStr);
    }
    if(number1 != nullptr) {
        npc(number)->append(number1);
    }
    npc(number)->append(u'.');
    npc(number)->append(number2);
    if(exponent != nullptr) {
        npc(number)->append(u'E');
        npc(number)->append(exponent);
    }
    return new ::poi::ss::formula::ptg::NumberPtg(npc(number)->toString());
}

java::lang::String* poi::ss::formula::FormulaParser::parseStringLiteral()
{
    Match(u'"');
    auto token = new ::java::lang::StringBuilder();
    while (true) {
        if(look == u'"') {
            GetChar();
            if(look != u'"') {
                break;
            }
        }
        npc(token)->appendCodePoint(look);
        GetChar();
    }
    return npc(token)->toString();
}

poi::ss::formula::ParseNode* poi::ss::formula::FormulaParser::Term()
{
    auto result = powerFactor();
    while (true) {
        SkipWhite();
        ::poi::ss::formula::ptg::Ptg* operator_;
        switch (look) {
        case u'*':
            Match(u'*');
            operator_ = ::poi::ss::formula::ptg::MultiplyPtg::instance();
            break;
        case u'/':
            Match(u'/');
            operator_ = ::poi::ss::formula::ptg::DividePtg::instance();
            break;
        default:
            return result;
        }

        auto other = powerFactor();
        result = new ParseNode(operator_, result, other);
    }
}

poi::ss::formula::ParseNode* poi::ss::formula::FormulaParser::unionExpression()
{
    auto result = intersectionExpression();
    auto hasUnions = false;
    while (true) {
        SkipWhite();
        {
            ParseNode* other;
            switch (look) {
            case u',':
                GetChar();
                hasUnions = true;
                other = intersectionExpression();
                result = new ParseNode(::poi::ss::formula::ptg::UnionPtg::instance(), result, other);
                continue;
            }
        }

        if(hasUnions) {
            return augmentWithMemPtg(result);
        }
        return result;
    }
}

poi::ss::formula::ParseNode* poi::ss::formula::FormulaParser::intersectionExpression()
{
    auto result = comparisonExpression();
    auto hasIntersections = false;
    while (true) {
        SkipWhite();
        if(_inIntersection) {
            auto savePointer = _pointer;
            try {
                auto other = comparisonExpression();
                result = new ParseNode(::poi::ss::formula::ptg::IntersectionPtg::instance(), result, other);
                hasIntersections = true;
                continue;
            } catch (FormulaParseException* e) {
                resetPointer(savePointer);
            }
        }
        if(hasIntersections) {
            return augmentWithMemPtg(result);
        }
        return result;
    }
}

poi::ss::formula::ParseNode* poi::ss::formula::FormulaParser::comparisonExpression()
{
    auto result = concatExpression();
    while (true) {
        SkipWhite();
        {
            ::poi::ss::formula::ptg::Ptg* comparisonToken;
            ParseNode* other;
            switch (look) {
            case u'=':
            case u'>':
            case u'<':
                comparisonToken = getComparisonToken();
                other = concatExpression();
                result = new ParseNode(comparisonToken, result, other);
                continue;
            }
        }

        return result;
    }
}

poi::ss::formula::ptg::Ptg* poi::ss::formula::FormulaParser::getComparisonToken()
{
    if(look == u'=') {
        Match(look);
        return ::poi::ss::formula::ptg::EqualPtg::instance();
    }
    auto isGreater = look == u'>';
    Match(look);
    if(isGreater) {
        if(look == u'=') {
            Match(u'=');
            return ::poi::ss::formula::ptg::GreaterEqualPtg::instance();
        }
        return ::poi::ss::formula::ptg::GreaterThanPtg::instance();
    }
    switch (look) {
    case u'=':
        Match(u'=');
        return ::poi::ss::formula::ptg::LessEqualPtg::instance();
    case u'>':
        Match(u'>');
        return ::poi::ss::formula::ptg::NotEqualPtg::instance();
    }

    return ::poi::ss::formula::ptg::LessThanPtg::instance();
}

poi::ss::formula::ParseNode* poi::ss::formula::FormulaParser::concatExpression()
{
    auto result = additiveExpression();
    while (true) {
        SkipWhite();
        if(look != u'&') {
            break;
        }
        Match(u'&');
        auto other = additiveExpression();
        result = new ParseNode(::poi::ss::formula::ptg::ConcatPtg::instance(), result, other);
    }
    return result;
}

poi::ss::formula::ParseNode* poi::ss::formula::FormulaParser::additiveExpression()
{
    auto result = Term();
    while (true) {
        SkipWhite();
        ::poi::ss::formula::ptg::Ptg* operator_;
        switch (look) {
        case u'+':
            Match(u'+');
            operator_ = ::poi::ss::formula::ptg::AddPtg::instance();
            break;
        case u'-':
            Match(u'-');
            operator_ = ::poi::ss::formula::ptg::SubtractPtg::instance();
            break;
        default:
            return result;
        }

        auto other = Term();
        result = new ParseNode(operator_, result, other);
    }
}

void poi::ss::formula::FormulaParser::parse()
{
    _pointer = 0;
    GetChar();
    _rootNode = unionExpression();
    if(_pointer <= _formulaLength) {
        auto msg = ::java::lang::StringBuilder().append(u"Unused input ["_j)->append(npc(_formulaString)->substring(_pointer - int32_t(1)))
            ->append(u"] after attempting to parse the formula ["_j)
            ->append(_formulaString)
            ->append(u"]"_j)->toString();
        throw new FormulaParseException(msg);
    }
}

poi::ss::formula::ptg::PtgArray* poi::ss::formula::FormulaParser::getRPNPtg(FormulaType* formulaType)
{
    auto oct = new OperandClassTransformer(formulaType);
    npc(oct)->transformFormula(_rootNode);
    return ParseNode::toTokenArray_(_rootNode);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::FormulaParser::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.FormulaParser", 39);
    return c;
}

void poi::ss::formula::FormulaParser::clinit()
{
struct string_init_ {
    string_init_() {
    specHeaders_ = u"Headers"_j;
    specAll_ = u"All"_j;
    specData_ = u"Data"_j;
    specTotals_ = u"Totals"_j;
    specThisRow_ = u"This Row"_j;
    }
};

    static string_init_ string_init_instance;

    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        log_ = ::poi::util::POILogFactory::getLogger(static_cast< ::java::lang::Class* >(FormulaParser::class_()));
        CELL_REF_PATTERN_ = ::java::util::regex::Pattern::compile(u"(\\$?[A-Za-z]+)?(\\$?[0-9]+)?"_j);
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* poi::ss::formula::FormulaParser::getClass0()
{
    return class_();
}

