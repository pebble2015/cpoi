// Generated from /POI/java/org/apache/poi/ss/util/AreaReference.java
#include <org/apache/poi/ss/util/AreaReference.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/Math.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/List.hpp>
#include <java/util/StringTokenizer.hpp>
#include <org/apache/poi/ss/SpreadsheetVersion.hpp>
#include <org/apache/poi/ss/util/CellReference.hpp>
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

namespace org
{
    namespace apache
    {
        namespace poi
        {
            namespace ss
            {
                namespace util
                {
typedef ::SubArray< ::org::apache::poi::ss::util::AreaReference, ::java::lang::ObjectArray > AreaReferenceArray;
typedef ::SubArray< ::org::apache::poi::ss::util::CellReference, ::java::lang::ObjectArray > CellReferenceArray;
                } // util
            } // ss
        } // poi
    } // apache
} // org

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

org::apache::poi::ss::util::AreaReference::AreaReference(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::util::AreaReference::AreaReference(::java::lang::String* reference, ::org::apache::poi::ss::SpreadsheetVersion* version) 
    : AreaReference(*static_cast< ::default_init_tag* >(0))
{
    ctor(reference,version);
}

org::apache::poi::ss::util::AreaReference::AreaReference(CellReference* topLeft, CellReference* botRight) 
    : AreaReference(*static_cast< ::default_init_tag* >(0))
{
    ctor(topLeft,botRight);
}

org::apache::poi::ss::util::AreaReference::AreaReference(CellReference* topLeft, CellReference* botRight, ::org::apache::poi::ss::SpreadsheetVersion* version) 
    : AreaReference(*static_cast< ::default_init_tag* >(0))
{
    ctor(topLeft,botRight,version);
}

constexpr char16_t org::apache::poi::ss::util::AreaReference::SHEET_NAME_DELIMITER;

constexpr char16_t org::apache::poi::ss::util::AreaReference::CELL_DELIMITER;

constexpr char16_t org::apache::poi::ss::util::AreaReference::SPECIAL_NAME_DELIMITER;

org::apache::poi::ss::SpreadsheetVersion*& org::apache::poi::ss::util::AreaReference::DEFAULT_SPREADSHEET_VERSION()
{
    clinit();
    return DEFAULT_SPREADSHEET_VERSION_;
}
org::apache::poi::ss::SpreadsheetVersion* org::apache::poi::ss::util::AreaReference::DEFAULT_SPREADSHEET_VERSION_;

void org::apache::poi::ss::util::AreaReference::ctor(::java::lang::String* reference, ::org::apache::poi::ss::SpreadsheetVersion* version)
{
    super::ctor();
    _version = (nullptr != version) ? version : DEFAULT_SPREADSHEET_VERSION_;
    if(!isContiguous(reference)) {
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"References passed to the AreaReference must be contiguous, "_j)->append(u"use generateContiguous(ref) if you have non-contiguous references"_j)->toString());
    }
    auto parts = separateAreaRefs(reference);
    auto part0 = (*parts)[int32_t(0)];
    if(npc(parts)->length == 1) {
        _firstCell = new CellReference(part0);
        _lastCell = _firstCell;
        _isSingleCell = true;
        return;
    }
    if(npc(parts)->length != 2) {
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Bad area ref '"_j)->append(reference)
            ->append(u"'"_j)->toString());
    }
    auto part1 = (*parts)[int32_t(1)];
    if(isPlainColumn(part0)) {
        if(!isPlainColumn(part1)) {
            throw new ::java::lang::RuntimeException(::java::lang::StringBuilder().append(u"Bad area ref '"_j)->append(reference)
                ->append(u"'"_j)->toString());
        }
        auto firstIsAbs = CellReference::isPartAbsolute(part0);
        auto lastIsAbs = CellReference::isPartAbsolute(part1);
        auto col0 = CellReference::convertColStringToIndex(part0);
        auto col1 = CellReference::convertColStringToIndex(part1);
        _firstCell = new CellReference(int32_t(0), col0, true, firstIsAbs);
        _lastCell = new CellReference(int32_t(65535), col1, true, lastIsAbs);
        _isSingleCell = false;
    } else {
        _firstCell = new CellReference(part0);
        _lastCell = new CellReference(part1);
        _isSingleCell = npc(part0)->equals(static_cast< ::java::lang::Object* >(part1));
    }
}

bool org::apache::poi::ss::util::AreaReference::isPlainColumn(::java::lang::String* refPart)
{
    clinit();
    for (auto i = npc(refPart)->length() - int32_t(1); i >= 0; i--) {
        int32_t ch = npc(refPart)->charAt(i);
        if(ch == u'$' && i == 0) {
            continue;
        }
        if(ch < u'A' || ch > u'Z') {
            return false;
        }
    }
    return true;
}

void org::apache::poi::ss::util::AreaReference::ctor(CellReference* topLeft, CellReference* botRight)
{
    ctor(topLeft, botRight, DEFAULT_SPREADSHEET_VERSION_);
}

void org::apache::poi::ss::util::AreaReference::ctor(CellReference* topLeft, CellReference* botRight, ::org::apache::poi::ss::SpreadsheetVersion* version)
{
    super::ctor();
    _version = (nullptr != version) ? version : DEFAULT_SPREADSHEET_VERSION_;
    auto swapRows = npc(topLeft)->getRow() > npc(botRight)->getRow();
    auto swapCols = npc(topLeft)->getCol() > npc(botRight)->getCol();
    if(swapRows || swapCols) {
        int32_t firstRow;
        int32_t lastRow;
        int32_t firstColumn;
        int32_t lastColumn;
        bool firstRowAbs;
        bool lastRowAbs;
        bool firstColAbs;
        bool lastColAbs;
        if(swapRows) {
            firstRow = npc(botRight)->getRow();
            firstRowAbs = npc(botRight)->isRowAbsolute();
            lastRow = npc(topLeft)->getRow();
            lastRowAbs = npc(topLeft)->isRowAbsolute();
        } else {
            firstRow = npc(topLeft)->getRow();
            firstRowAbs = npc(topLeft)->isRowAbsolute();
            lastRow = npc(botRight)->getRow();
            lastRowAbs = npc(botRight)->isRowAbsolute();
        }
        if(swapCols) {
            firstColumn = npc(botRight)->getCol();
            firstColAbs = npc(botRight)->isColAbsolute();
            lastColumn = npc(topLeft)->getCol();
            lastColAbs = npc(topLeft)->isColAbsolute();
        } else {
            firstColumn = npc(topLeft)->getCol();
            firstColAbs = npc(topLeft)->isColAbsolute();
            lastColumn = npc(botRight)->getCol();
            lastColAbs = npc(botRight)->isColAbsolute();
        }
        _firstCell = new CellReference(firstRow, firstColumn, firstRowAbs, firstColAbs);
        _lastCell = new CellReference(lastRow, lastColumn, lastRowAbs, lastColAbs);
    } else {
        _firstCell = topLeft;
        _lastCell = botRight;
    }
    _isSingleCell = false;
}

bool org::apache::poi::ss::util::AreaReference::isContiguous(::java::lang::String* reference)
{
    clinit();
    auto sheetRefEnd = npc(reference)->indexOf(static_cast< int32_t >(u'!'));
    if(sheetRefEnd != -int32_t(1)) {
        reference = npc(reference)->substring(sheetRefEnd);
    }
    return !npc(reference)->contains(u","_j);
}

org::apache::poi::ss::util::AreaReference* org::apache::poi::ss::util::AreaReference::getWholeRow(::org::apache::poi::ss::SpreadsheetVersion* version, ::java::lang::String* start, ::java::lang::String* end)
{
    clinit();
    if(nullptr == version) {
        version = DEFAULT_SPREADSHEET_VERSION_;
    }
    return new AreaReference(::java::lang::StringBuilder().append(u"$A"_j)->append(start)
        ->append(u":$"_j)
        ->append(npc(version)->getLastColumnName())
        ->append(end)->toString(), version);
}

org::apache::poi::ss::util::AreaReference* org::apache::poi::ss::util::AreaReference::getWholeColumn(::org::apache::poi::ss::SpreadsheetVersion* version, ::java::lang::String* start, ::java::lang::String* end)
{
    clinit();
    if(nullptr == version) {
        version = DEFAULT_SPREADSHEET_VERSION_;
    }
    return new AreaReference(::java::lang::StringBuilder().append(start)->append(u"$1:"_j)
        ->append(end)
        ->append(u"$"_j)
        ->append(npc(version)->getMaxRows())->toString(), version);
}

bool org::apache::poi::ss::util::AreaReference::isWholeColumnReference(::org::apache::poi::ss::SpreadsheetVersion* version, CellReference* topLeft, CellReference* botRight)
{
    clinit();
    if(nullptr == version) {
        version = DEFAULT_SPREADSHEET_VERSION_;
    }
    if(npc(topLeft)->getRow() == 0 && npc(topLeft)->isRowAbsolute() && npc(botRight)->getRow() == npc(version)->getLastRowIndex() && npc(botRight)->isRowAbsolute()) {
        return true;
    }
    return false;
}

bool org::apache::poi::ss::util::AreaReference::isWholeColumnReference()
{
    return isWholeColumnReference(_version, _firstCell, _lastCell);
}

org::apache::poi::ss::util::AreaReferenceArray* org::apache::poi::ss::util::AreaReference::generateContiguous(::java::lang::String* reference)
{
    clinit();
    return generateContiguous(DEFAULT_SPREADSHEET_VERSION_, reference);
}

org::apache::poi::ss::util::AreaReferenceArray* org::apache::poi::ss::util::AreaReference::generateContiguous(::org::apache::poi::ss::SpreadsheetVersion* version, ::java::lang::String* reference)
{
    clinit();
    if(nullptr == version) {
        version = DEFAULT_SPREADSHEET_VERSION_;
    }
    ::java::util::List* refs = new ::java::util::ArrayList();
    auto st = new ::java::util::StringTokenizer(reference, u","_j);
    while (npc(st)->hasMoreTokens()) {
        npc(refs)->add(static_cast< ::java::lang::Object* >(new AreaReference(npc(st)->nextToken(), version)));
    }
    return java_cast< AreaReferenceArray* >(npc(refs)->toArray_(static_cast< ::java::lang::ObjectArray* >(new AreaReferenceArray(npc(refs)->size()))));
}

bool org::apache::poi::ss::util::AreaReference::isSingleCell()
{
    return _isSingleCell;
}

org::apache::poi::ss::util::CellReference* org::apache::poi::ss::util::AreaReference::getFirstCell()
{
    return _firstCell;
}

org::apache::poi::ss::util::CellReference* org::apache::poi::ss::util::AreaReference::getLastCell()
{
    return _lastCell;
}

org::apache::poi::ss::util::CellReferenceArray* org::apache::poi::ss::util::AreaReference::getAllReferencedCells()
{
    if(_isSingleCell) {
        return new CellReferenceArray({_firstCell});
    }
    auto minRow = ::java::lang::Math::min(npc(_firstCell)->getRow(), npc(_lastCell)->getRow());
    auto maxRow = ::java::lang::Math::max(npc(_firstCell)->getRow(), npc(_lastCell)->getRow());
    auto minCol = ::java::lang::Math::min(static_cast< int32_t >(npc(_firstCell)->getCol()), static_cast< int32_t >(npc(_lastCell)->getCol()));
    auto maxCol = ::java::lang::Math::max(static_cast< int32_t >(npc(_firstCell)->getCol()), static_cast< int32_t >(npc(_lastCell)->getCol()));
    auto sheetName = npc(_firstCell)->getSheetName();
    ::java::util::List* refs = new ::java::util::ArrayList();
    for (auto row = minRow; row <= maxRow; row++) {
        for (auto col = minCol; col <= maxCol; col++) {
            auto ref = new CellReference(sheetName, row, col, npc(_firstCell)->isRowAbsolute(), npc(_firstCell)->isColAbsolute());
            npc(refs)->add(static_cast< ::java::lang::Object* >(ref));
        }
    }
    return java_cast< CellReferenceArray* >(npc(refs)->toArray_(static_cast< ::java::lang::ObjectArray* >(new CellReferenceArray(npc(refs)->size()))));
}

java::lang::String* org::apache::poi::ss::util::AreaReference::formatAsString()
{
    if(isWholeColumnReference()) {
        return ::java::lang::StringBuilder().append(CellReference::convertNumToColString(npc(_firstCell)->getCol()))->append(u":"_j)
            ->append(CellReference::convertNumToColString(npc(_lastCell)->getCol()))->toString();
    }
    auto sb = new ::java::lang::StringBuffer(int32_t(32));
    npc(sb)->append(npc(_firstCell)->formatAsString());
    if(!_isSingleCell) {
        npc(sb)->append(CELL_DELIMITER);
        if(npc(_lastCell)->getSheetName() == nullptr) {
            npc(sb)->append(npc(_lastCell)->formatAsString());
        } else {
            npc(_lastCell)->appendCellReference(sb);
        }
    }
    return npc(sb)->toString();
}

java::lang::String* org::apache::poi::ss::util::AreaReference::toString()
{
    auto sb = new ::java::lang::StringBuffer(int32_t(64));
    npc(npc(sb)->append(npc(getClass())->getName()))->append(u" ["_j);
    npc(sb)->append(formatAsString());
    npc(sb)->append(u"]"_j);
    return npc(sb)->toString();
}

java::lang::StringArray* org::apache::poi::ss::util::AreaReference::separateAreaRefs(::java::lang::String* reference)
{
    clinit();
    auto len = npc(reference)->length();
    auto delimiterPos = -int32_t(1);
    auto insideDelimitedName = false;
    for (auto i = int32_t(0); i < len; i++) {
        switch (npc(reference)->charAt(i)) {
        case CELL_DELIMITER:
            if(!insideDelimitedName) {
                if(delimiterPos >= 0) {
                    throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"More than one cell delimiter '"_j)->append(CELL_DELIMITER)
                        ->append(u"' appears in area reference '"_j)
                        ->append(reference)
                        ->append(u"'"_j)->toString());
                }
                delimiterPos = i;
            }
            continue;
        case SPECIAL_NAME_DELIMITER:
            break;
        default:
            continue;
        }

        if(!insideDelimitedName) {
            insideDelimitedName = true;
            continue;
        }
        if(i >= len - int32_t(1)) {
            throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Area reference '"_j)->append(reference)
                ->append(u"' ends with special name delimiter '"_j)
                ->append(SPECIAL_NAME_DELIMITER)
                ->append(u"'"_j)->toString());
        }
        if(npc(reference)->charAt(i + int32_t(1)) == SPECIAL_NAME_DELIMITER) {
            i++;
        } else {
            insideDelimitedName = false;
        }
    }
    if(delimiterPos < 0) {
        return new ::java::lang::StringArray({reference});
    }
    auto partA = npc(reference)->substring(0, delimiterPos);
    auto partB = npc(reference)->substring(delimiterPos + int32_t(1));
    if(npc(partB)->indexOf(static_cast< int32_t >(SHEET_NAME_DELIMITER)) >= 0) {
        throw new ::java::lang::RuntimeException(::java::lang::StringBuilder().append(u"Unexpected "_j)->append(SHEET_NAME_DELIMITER)
            ->append(u" in second cell reference of '"_j)
            ->append(reference)
            ->append(u"'"_j)->toString());
    }
    auto plingPos = npc(partA)->lastIndexOf(static_cast< int32_t >(SHEET_NAME_DELIMITER));
    if(plingPos < 0) {
        return new ::java::lang::StringArray({
            partA
            , partB
        });
    }
    auto sheetName = npc(partA)->substring(0, plingPos + int32_t(1));
    return new ::java::lang::StringArray({
        partA
        , ::java::lang::StringBuilder().append(sheetName)->append(partB)->toString()
    });
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::util::AreaReference::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.util.AreaReference", 36);
    return c;
}

void org::apache::poi::ss::util::AreaReference::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        DEFAULT_SPREADSHEET_VERSION_ = ::org::apache::poi::ss::SpreadsheetVersion::EXCEL97;
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* org::apache::poi::ss::util::AreaReference::getClass0()
{
    return class_();
}

