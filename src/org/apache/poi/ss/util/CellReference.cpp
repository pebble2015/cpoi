// Generated from /POI/java/org/apache/poi/ss/util/CellReference.java
#include <org/apache/poi/ss/util/CellReference.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Character.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/util/Locale.hpp>
#include <java/util/regex/Matcher.hpp>
#include <java/util/regex/Pattern.hpp>
#include <org/apache/poi/ss/SpreadsheetVersion.hpp>
#include <org/apache/poi/ss/formula/SheetNameFormatter.hpp>
#include <org/apache/poi/ss/usermodel/Cell.hpp>
#include <org/apache/poi/ss/util/CellReference_CellRefParts.hpp>
#include <org/apache/poi/ss/util/CellReference_NameType.hpp>
#include <org/apache/poi/util/StringUtil.hpp>
#include <Array.hpp>
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
typedef ::SubArray< ::java::lang::CharSequence, ObjectArray > CharSequenceArray;
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::String, ObjectArray, ::java::io::SerializableArray, ComparableArray, CharSequenceArray > StringArray;
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

poi::ss::util::CellReference::CellReference(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::util::CellReference::CellReference(::java::lang::String* cellRef) 
    : CellReference(*static_cast< ::default_init_tag* >(0))
{
    ctor(cellRef);
}

poi::ss::util::CellReference::CellReference(int32_t pRow, int32_t pCol) 
    : CellReference(*static_cast< ::default_init_tag* >(0))
{
    ctor(pRow,pCol);
}

poi::ss::util::CellReference::CellReference(int32_t pRow, int16_t pCol) 
    : CellReference(*static_cast< ::default_init_tag* >(0))
{
    ctor(pRow,pCol);
}

poi::ss::util::CellReference::CellReference(::poi::ss::usermodel::Cell* cell) 
    : CellReference(*static_cast< ::default_init_tag* >(0))
{
    ctor(cell);
}

poi::ss::util::CellReference::CellReference(int32_t pRow, int32_t pCol, bool pAbsRow, bool pAbsCol) 
    : CellReference(*static_cast< ::default_init_tag* >(0))
{
    ctor(pRow,pCol,pAbsRow,pAbsCol);
}

poi::ss::util::CellReference::CellReference(::java::lang::String* pSheetName, int32_t pRow, int32_t pCol, bool pAbsRow, bool pAbsCol) 
    : CellReference(*static_cast< ::default_init_tag* >(0))
{
    ctor(pSheetName,pRow,pCol,pAbsRow,pAbsCol);
}

constexpr char16_t poi::ss::util::CellReference::ABSOLUTE_REFERENCE_MARKER;

constexpr char16_t poi::ss::util::CellReference::SHEET_NAME_DELIMITER;

constexpr char16_t poi::ss::util::CellReference::SPECIAL_NAME_DELIMITER;

java::util::regex::Pattern*& poi::ss::util::CellReference::CELL_REF_PATTERN()
{
    clinit();
    return CELL_REF_PATTERN_;
}
java::util::regex::Pattern* poi::ss::util::CellReference::CELL_REF_PATTERN_;

java::util::regex::Pattern*& poi::ss::util::CellReference::STRICTLY_CELL_REF_PATTERN()
{
    clinit();
    return STRICTLY_CELL_REF_PATTERN_;
}
java::util::regex::Pattern* poi::ss::util::CellReference::STRICTLY_CELL_REF_PATTERN_;

java::util::regex::Pattern*& poi::ss::util::CellReference::COLUMN_REF_PATTERN()
{
    clinit();
    return COLUMN_REF_PATTERN_;
}
java::util::regex::Pattern* poi::ss::util::CellReference::COLUMN_REF_PATTERN_;

java::util::regex::Pattern*& poi::ss::util::CellReference::ROW_REF_PATTERN()
{
    clinit();
    return ROW_REF_PATTERN_;
}
java::util::regex::Pattern* poi::ss::util::CellReference::ROW_REF_PATTERN_;

java::util::regex::Pattern*& poi::ss::util::CellReference::NAMED_RANGE_NAME_PATTERN()
{
    clinit();
    return NAMED_RANGE_NAME_PATTERN_;
}
java::util::regex::Pattern* poi::ss::util::CellReference::NAMED_RANGE_NAME_PATTERN_;

void poi::ss::util::CellReference::ctor(::java::lang::String* cellRef)
{
    super::ctor();
    if(::poi::util::StringUtil::endsWithIgnoreCase(cellRef, u"#REF!"_j)) {
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Cell reference invalid: "_j)->append(cellRef)->toString());
    }
    auto parts = separateRefParts(cellRef);
    _sheetName = npc(parts)->sheetName;
    auto colRef = npc(parts)->colRef;
    _isColAbs = (npc(colRef)->length() > 0) && npc(colRef)->charAt(int32_t(0)) == u'$';
    if(_isColAbs) {
        colRef = npc(colRef)->substring(1);
    }
    if(npc(colRef)->length() == 0) {
        _colIndex = -int32_t(1);
    } else {
        _colIndex = convertColStringToIndex(colRef);
    }
    auto rowRef = npc(parts)->rowRef;
    _isRowAbs = (npc(rowRef)->length() > 0) && npc(rowRef)->charAt(int32_t(0)) == u'$';
    if(_isRowAbs) {
        rowRef = npc(rowRef)->substring(1);
    }
    if(npc(rowRef)->length() == 0) {
        _rowIndex = -int32_t(1);
    } else {
        _rowIndex = ::java::lang::Integer::parseInt(rowRef) - int32_t(1);
    }
}

void poi::ss::util::CellReference::ctor(int32_t pRow, int32_t pCol)
{
    ctor(pRow, pCol, false, false);
}

void poi::ss::util::CellReference::ctor(int32_t pRow, int16_t pCol)
{
    ctor(pRow, pCol & int32_t(65535), false, false);
}

void poi::ss::util::CellReference::ctor(::poi::ss::usermodel::Cell* cell)
{
    ctor(npc(cell)->getRowIndex(), npc(cell)->getColumnIndex(), false, false);
}

void poi::ss::util::CellReference::ctor(int32_t pRow, int32_t pCol, bool pAbsRow, bool pAbsCol)
{
    ctor(nullptr, pRow, pCol, pAbsRow, pAbsCol);
}

void poi::ss::util::CellReference::ctor(::java::lang::String* pSheetName, int32_t pRow, int32_t pCol, bool pAbsRow, bool pAbsCol)
{
    super::ctor();
    if(pRow < -int32_t(1)) {
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"row index may not be negative, but had "_j)->append(pRow)->toString());
    }
    if(pCol < -int32_t(1)) {
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"column index may not be negative, but had "_j)->append(pCol)->toString());
    }
    _sheetName = pSheetName;
    _rowIndex = pRow;
    _colIndex = pCol;
    _isRowAbs = pAbsRow;
    _isColAbs = pAbsCol;
}

int32_t poi::ss::util::CellReference::getRow()
{
    return _rowIndex;
}

int16_t poi::ss::util::CellReference::getCol()
{
    return static_cast< int16_t >(_colIndex);
}

bool poi::ss::util::CellReference::isRowAbsolute()
{
    return _isRowAbs;
}

bool poi::ss::util::CellReference::isColAbsolute()
{
    return _isColAbs;
}

java::lang::String* poi::ss::util::CellReference::getSheetName()
{
    return _sheetName;
}

bool poi::ss::util::CellReference::isPartAbsolute(::java::lang::String* part)
{
    clinit();
    return npc(part)->charAt(int32_t(0)) == ABSOLUTE_REFERENCE_MARKER;
}

int32_t poi::ss::util::CellReference::convertColStringToIndex(::java::lang::String* ref)
{
    clinit();
    auto retval = int32_t(0);
    auto refs = npc(npc(ref)->toUpperCase(::java::util::Locale::ROOT()))->toCharArray_();
    for (auto k = int32_t(0); k < npc(refs)->length; k++) {
        auto thechar = (*refs)[k];
        if(thechar == ABSOLUTE_REFERENCE_MARKER) {
            if(k != 0) {
                throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Bad col ref format '"_j)->append(ref)
                    ->append(u"'"_j)->toString());
            }
            continue;
        }
        retval = (retval * int32_t(26)) + (thechar - u'A' + int32_t(1));
    }
    return retval - int32_t(1);
}

poi::ss::util::CellReference_NameType* poi::ss::util::CellReference::classifyCellReference(::java::lang::String* str, ::poi::ss::SpreadsheetVersion* ssVersion)
{
    clinit();
    auto len = npc(str)->length();
    if(len < 1) {
        throw new ::java::lang::IllegalArgumentException(u"Empty string not allowed"_j);
    }
    auto firstChar = npc(str)->charAt(int32_t(0));
    switch (firstChar) {
    case ABSOLUTE_REFERENCE_MARKER:
    case u'.':
    case u'_':
        break;
    default:
        if(!::java::lang::Character::isLetter(firstChar) && !::java::lang::Character::isDigit(firstChar)) {
            throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Invalid first char ("_j)->append(firstChar)
                ->append(u") of cell reference or named range.  Letter expected"_j)->toString());
        }
    }

    if(!::java::lang::Character::isDigit(npc(str)->charAt(len - int32_t(1)))) {
        return validateNamedRangeName(str, ssVersion);
    }
    auto cellRefPatternMatcher = npc(STRICTLY_CELL_REF_PATTERN_)->matcher(str);
    if(!npc(cellRefPatternMatcher)->matches()) {
        return validateNamedRangeName(str, ssVersion);
    }
    auto lettersGroup = npc(cellRefPatternMatcher)->group(int32_t(1));
    auto digitsGroup = npc(cellRefPatternMatcher)->group(int32_t(2));
    if(cellReferenceIsWithinRange(lettersGroup, digitsGroup, ssVersion)) {
        return CellReference_NameType::CELL;
    }
    if(npc(str)->indexOf(static_cast< int32_t >(ABSOLUTE_REFERENCE_MARKER)) >= 0) {
        return CellReference_NameType::BAD_CELL_OR_NAMED_RANGE;
    }
    return CellReference_NameType::NAMED_RANGE;
}

poi::ss::util::CellReference_NameType* poi::ss::util::CellReference::validateNamedRangeName(::java::lang::String* str, ::poi::ss::SpreadsheetVersion* ssVersion)
{
    clinit();
    auto colMatcher = npc(COLUMN_REF_PATTERN_)->matcher(str);
    if(npc(colMatcher)->matches()) {
        auto colStr = npc(colMatcher)->group(int32_t(1));
        if(isColumnWithinRange(colStr, ssVersion)) {
            return CellReference_NameType::COLUMN;
        }
    }
    auto rowMatcher = npc(ROW_REF_PATTERN_)->matcher(str);
    if(npc(rowMatcher)->matches()) {
        auto rowStr = npc(rowMatcher)->group(int32_t(1));
        if(isRowWithinRange(rowStr, ssVersion)) {
            return CellReference_NameType::ROW;
        }
    }
    if(!npc(npc(NAMED_RANGE_NAME_PATTERN_)->matcher(str))->matches()) {
        return CellReference_NameType::BAD_CELL_OR_NAMED_RANGE;
    }
    return CellReference_NameType::NAMED_RANGE;
}

bool poi::ss::util::CellReference::cellReferenceIsWithinRange(::java::lang::String* colStr, ::java::lang::String* rowStr, ::poi::ss::SpreadsheetVersion* ssVersion)
{
    clinit();
    if(!isColumnWithinRange(colStr, ssVersion)) {
        return false;
    }
    return isRowWithinRange(rowStr, ssVersion);
}

bool poi::ss::util::CellReference::isColumnWithinRange(::java::lang::String* colStr, ::poi::ss::SpreadsheetVersion* ssVersion)
{
    clinit();
    auto lastCol = npc(ssVersion)->getLastColumnName();
    auto lastColLength = npc(lastCol)->length();
    auto numberOfLetters = npc(colStr)->length();
    if(numberOfLetters > lastColLength) {
        return false;
    }
    if(numberOfLetters == lastColLength) {
        if(npc(npc(colStr)->toUpperCase(::java::util::Locale::ROOT()))->compareTo(lastCol) > 0) {
            return false;
        }
    } else {
    }
    return true;
}

bool poi::ss::util::CellReference::isRowWithinRange(::java::lang::String* rowStr, ::poi::ss::SpreadsheetVersion* ssVersion)
{
    clinit();
    auto const rowNum = ::java::lang::Integer::parseInt(rowStr) - int32_t(1);
    return isRowWithinRange(rowNum, ssVersion);
}

bool poi::ss::util::CellReference::isRowWithinRange(int32_t rowNum, ::poi::ss::SpreadsheetVersion* ssVersion)
{
    clinit();
    return 0 <= rowNum && rowNum <= npc(ssVersion)->getLastRowIndex();
}

poi::ss::util::CellReference_CellRefParts* poi::ss::util::CellReference::separateRefParts(::java::lang::String* reference)
{
    clinit();
    auto plingPos = npc(reference)->lastIndexOf(static_cast< int32_t >(SHEET_NAME_DELIMITER));
    auto const sheetName = parseSheetName(reference, plingPos);
    auto cell = npc(npc(reference)->substring(plingPos + int32_t(1)))->toUpperCase(::java::util::Locale::ROOT());
    auto matcher = npc(CELL_REF_PATTERN_)->matcher(cell);
    if(!npc(matcher)->matches()) {
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Invalid CellReference: "_j)->append(reference)->toString());
    }
    auto col = npc(matcher)->group(int32_t(1));
    auto row = npc(matcher)->group(int32_t(2));
    auto cellRefParts = new CellReference_CellRefParts(sheetName, row, col);
    return cellRefParts;
}

java::lang::String* poi::ss::util::CellReference::parseSheetName(::java::lang::String* reference, int32_t indexOfSheetNameDelimiter)
{
    clinit();
    if(indexOfSheetNameDelimiter < 0) {
        return nullptr;
    }
    auto isQuoted = npc(reference)->charAt(int32_t(0)) == SPECIAL_NAME_DELIMITER;
    if(!isQuoted) {
        if(!npc(reference)->contains(u" "_j)) {
            return npc(reference)->substring(0, indexOfSheetNameDelimiter);
        } else {
            throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Sheet names containing spaces must be quoted: ("_j)->append(reference)
                ->append(u")"_j)->toString());
        }
    }
    auto lastQuotePos = indexOfSheetNameDelimiter - int32_t(1);
    if(npc(reference)->charAt(lastQuotePos) != SPECIAL_NAME_DELIMITER) {
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Mismatched quotes: ("_j)->append(reference)
            ->append(u")"_j)->toString());
    }
    auto sb = new ::java::lang::StringBuffer(indexOfSheetNameDelimiter);
    for (auto i = int32_t(1); i < lastQuotePos; i++) {
        auto ch = npc(reference)->charAt(i);
        if(ch != SPECIAL_NAME_DELIMITER) {
            npc(sb)->append(ch);
            continue;
        }
        if(i + int32_t(1) < lastQuotePos && npc(reference)->charAt(i + int32_t(1)) == SPECIAL_NAME_DELIMITER) {
            i++;
            npc(sb)->append(ch);
            continue;
        }
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Bad sheet name quote escaping: ("_j)->append(reference)
            ->append(u")"_j)->toString());
    }
    return npc(sb)->toString();
}

java::lang::String* poi::ss::util::CellReference::convertNumToColString(int32_t col)
{
    clinit();
    auto excelColNum = col + int32_t(1);
    auto colRef = new ::java::lang::StringBuilder(int32_t(2));
    auto colRemain = excelColNum;
    while (colRemain > 0) {
        auto thisPart = colRemain % int32_t(26);
        if(thisPart == 0) {
            thisPart = 26;
        }
        colRemain = (colRemain - thisPart) / int32_t(26);
        auto colChar = static_cast< char16_t >((thisPart + int32_t(64)));
        npc(colRef)->insert(int32_t(0), colChar);
    }
    return npc(colRef)->toString();
}

java::lang::String* poi::ss::util::CellReference::formatAsString()
{
    auto sb = new ::java::lang::StringBuffer(int32_t(32));
    if(_sheetName != nullptr) {
        ::poi::ss::formula::SheetNameFormatter::appendFormat(sb, _sheetName);
        npc(sb)->append(SHEET_NAME_DELIMITER);
    }
    appendCellReference(sb);
    return npc(sb)->toString();
}

java::lang::String* poi::ss::util::CellReference::toString()
{
    auto sb = new ::java::lang::StringBuffer(int32_t(64));
    npc(npc(sb)->append(npc(getClass())->getName()))->append(u" ["_j);
    npc(sb)->append(formatAsString());
    npc(sb)->append(u"]"_j);
    return npc(sb)->toString();
}

java::lang::StringArray* poi::ss::util::CellReference::getCellRefParts()
{
    return new ::java::lang::StringArray({
        _sheetName
        , ::java::lang::Integer::toString(_rowIndex + int32_t(1))
        , convertNumToColString(_colIndex)
    });
}

void poi::ss::util::CellReference::appendCellReference(::java::lang::StringBuffer* sb)
{
    if(_colIndex != -int32_t(1)) {
        if(_isColAbs) {
            npc(sb)->append(ABSOLUTE_REFERENCE_MARKER);
        }
        npc(sb)->append(convertNumToColString(_colIndex));
    }
    if(_rowIndex != -int32_t(1)) {
        if(_isRowAbs) {
            npc(sb)->append(ABSOLUTE_REFERENCE_MARKER);
        }
        npc(sb)->append(_rowIndex + int32_t(1));
    }
}

bool poi::ss::util::CellReference::equals(::java::lang::Object* o)
{
    if(static_cast< ::java::lang::Object* >(this) == o) {
        return true;
    }
    if(!(dynamic_cast< CellReference* >(o) != nullptr)) {
        return false;
    }
    auto cr = java_cast< CellReference* >(o);
    return _rowIndex == npc(cr)->_rowIndex && _colIndex == npc(cr)->_colIndex && _isRowAbs == npc(cr)->_isRowAbs && _isColAbs == npc(cr)->_isColAbs && ((_sheetName == nullptr) ? (npc(cr)->_sheetName == nullptr) : npc(_sheetName)->equals(static_cast< ::java::lang::Object* >(npc(cr)->_sheetName)));
}

int32_t poi::ss::util::CellReference::hashCode()
{
    auto result = int32_t(17);
    result = int32_t(31) * result + _rowIndex;
    result = int32_t(31) * result + _colIndex;
    result = int32_t(31) * result + (_isRowAbs ? int32_t(1) : int32_t(0));
    result = int32_t(31) * result + (_isColAbs ? int32_t(1) : int32_t(0));
    result = int32_t(31) * result + (_sheetName == nullptr ? int32_t(0) : npc(_sheetName)->hashCode());
    return result;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::util::CellReference::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.util.CellReference", 36);
    return c;
}

void poi::ss::util::CellReference::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        CELL_REF_PATTERN_ = ::java::util::regex::Pattern::compile(::java::lang::StringBuilder().append(u"(\\$?[A-Z]+)?"_j)->append(u"(\\$?[0-9]+)?"_j)->toString(), ::java::util::regex::Pattern::CASE_INSENSITIVE);
        STRICTLY_CELL_REF_PATTERN_ = ::java::util::regex::Pattern::compile(::java::lang::StringBuilder().append(u"\\$?([A-Z]+)"_j)->append(u"\\$?([0-9]+)"_j)->toString(), ::java::util::regex::Pattern::CASE_INSENSITIVE);
        COLUMN_REF_PATTERN_ = ::java::util::regex::Pattern::compile(u"\\$?([A-Z]+)"_j, ::java::util::regex::Pattern::CASE_INSENSITIVE);
        ROW_REF_PATTERN_ = ::java::util::regex::Pattern::compile(u"\\$?([0-9]+)"_j);
        NAMED_RANGE_NAME_PATTERN_ = ::java::util::regex::Pattern::compile(u"[_A-Z][_.A-Z0-9]*"_j, ::java::util::regex::Pattern::CASE_INSENSITIVE);
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* poi::ss::util::CellReference::getClass0()
{
    return class_();
}

