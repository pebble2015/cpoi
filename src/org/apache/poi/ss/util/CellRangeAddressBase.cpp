// Generated from /POI/java/org/apache/poi/ss/util/CellRangeAddressBase.java
#include <org/apache/poi/ss/util/CellRangeAddressBase.hpp>

#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/Math.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/util/EnumSet.hpp>
#include <java/util/Set.hpp>
#include <org/apache/poi/ss/SpreadsheetVersion.hpp>
#include <org/apache/poi/ss/usermodel/Cell.hpp>
#include <org/apache/poi/ss/util/CellRangeAddressBase_CellPosition.hpp>
#include <org/apache/poi/ss/util/CellReference.hpp>

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

org::apache::poi::ss::util::CellRangeAddressBase::CellRangeAddressBase(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::util::CellRangeAddressBase::CellRangeAddressBase(int32_t firstRow, int32_t lastRow, int32_t firstCol, int32_t lastCol) 
    : CellRangeAddressBase(*static_cast< ::default_init_tag* >(0))
{
    ctor(firstRow,lastRow,firstCol,lastCol);
}

void org::apache::poi::ss::util::CellRangeAddressBase::ctor(int32_t firstRow, int32_t lastRow, int32_t firstCol, int32_t lastCol)
{
    super::ctor();
    _firstRow = firstRow;
    _lastRow = lastRow;
    _firstCol = firstCol;
    _lastCol = lastCol;
}

void org::apache::poi::ss::util::CellRangeAddressBase::validate(::org::apache::poi::ss::SpreadsheetVersion* ssVersion)
{
    validateRow(_firstRow, ssVersion);
    validateRow(_lastRow, ssVersion);
    validateColumn(_firstCol, ssVersion);
    validateColumn(_lastCol, ssVersion);
}

void org::apache::poi::ss::util::CellRangeAddressBase::validateRow(int32_t row, ::org::apache::poi::ss::SpreadsheetVersion* ssVersion)
{
    clinit();
    auto maxrow = npc(ssVersion)->getLastRowIndex();
    if(row > maxrow)
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Maximum row number is "_j)->append(maxrow)->toString());

    if(row < 0)
        throw new ::java::lang::IllegalArgumentException(u"Minumum row number is 0"_j);

}

void org::apache::poi::ss::util::CellRangeAddressBase::validateColumn(int32_t column, ::org::apache::poi::ss::SpreadsheetVersion* ssVersion)
{
    clinit();
    auto maxcol = npc(ssVersion)->getLastColumnIndex();
    if(column > maxcol)
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Maximum column number is "_j)->append(maxcol)->toString());

    if(column < 0)
        throw new ::java::lang::IllegalArgumentException(u"Minimum column number is 0"_j);

}

bool org::apache::poi::ss::util::CellRangeAddressBase::isFullColumnRange()
{
    return (_firstRow == 0 && _lastRow == npc(::org::apache::poi::ss::SpreadsheetVersion::EXCEL97)->getLastRowIndex()) || (_firstRow == -int32_t(1) && _lastRow == -int32_t(1));
}

bool org::apache::poi::ss::util::CellRangeAddressBase::isFullRowRange()
{
    return (_firstCol == 0 && _lastCol == npc(::org::apache::poi::ss::SpreadsheetVersion::EXCEL97)->getLastColumnIndex()) || (_firstCol == -int32_t(1) && _lastCol == -int32_t(1));
}

int32_t org::apache::poi::ss::util::CellRangeAddressBase::getFirstColumn()
{
    return _firstCol;
}

int32_t org::apache::poi::ss::util::CellRangeAddressBase::getFirstRow()
{
    return _firstRow;
}

int32_t org::apache::poi::ss::util::CellRangeAddressBase::getLastColumn()
{
    return _lastCol;
}

int32_t org::apache::poi::ss::util::CellRangeAddressBase::getLastRow()
{
    return _lastRow;
}

bool org::apache::poi::ss::util::CellRangeAddressBase::isInRange(int32_t rowInd, int32_t colInd)
{
    return _firstRow <= rowInd && rowInd <= _lastRow && _firstCol <= colInd && colInd <= _lastCol;
}

bool org::apache::poi::ss::util::CellRangeAddressBase::isInRange(CellReference* ref)
{
    return isInRange(npc(ref)->getRow(), npc(ref)->getCol());
}

bool org::apache::poi::ss::util::CellRangeAddressBase::isInRange(::org::apache::poi::ss::usermodel::Cell* cell)
{
    return isInRange(npc(cell)->getRowIndex(), npc(cell)->getColumnIndex());
}

bool org::apache::poi::ss::util::CellRangeAddressBase::containsRow(int32_t rowInd)
{
    return _firstRow <= rowInd && rowInd <= _lastRow;
}

bool org::apache::poi::ss::util::CellRangeAddressBase::containsColumn(int32_t colInd)
{
    return _firstCol <= colInd && colInd <= _lastCol;
}

bool org::apache::poi::ss::util::CellRangeAddressBase::intersects(CellRangeAddressBase* other)
{
    return this->_firstRow <= npc(other)->_lastRow && this->_firstCol <= npc(other)->_lastCol && npc(other)->_firstRow <= this->_lastRow && npc(other)->_firstCol <= this->_lastCol;
}

java::util::Set* org::apache::poi::ss::util::CellRangeAddressBase::getPosition(int32_t rowInd, int32_t colInd)
{
    ::java::util::Set* positions = ::java::util::EnumSet::noneOf(CellRangeAddressBase_CellPosition::class_());
    if(rowInd > getFirstRow() && rowInd < getLastRow() && colInd > getFirstColumn() && colInd < getLastColumn()) {
        npc(positions)->add(static_cast< ::java::lang::Object* >(CellRangeAddressBase_CellPosition::INSIDE));
        return positions;
    }
    if(rowInd == getFirstRow())
        npc(positions)->add(static_cast< ::java::lang::Object* >(CellRangeAddressBase_CellPosition::TOP));

    if(rowInd == getLastRow())
        npc(positions)->add(static_cast< ::java::lang::Object* >(CellRangeAddressBase_CellPosition::BOTTOM));

    if(colInd == getFirstColumn())
        npc(positions)->add(static_cast< ::java::lang::Object* >(CellRangeAddressBase_CellPosition::LEFT));

    if(colInd == getLastColumn())
        npc(positions)->add(static_cast< ::java::lang::Object* >(CellRangeAddressBase_CellPosition::RIGHT));

    return positions;
}

void org::apache::poi::ss::util::CellRangeAddressBase::setFirstColumn(int32_t firstCol)
{
    _firstCol = firstCol;
}

void org::apache::poi::ss::util::CellRangeAddressBase::setFirstRow(int32_t firstRow)
{
    _firstRow = firstRow;
}

void org::apache::poi::ss::util::CellRangeAddressBase::setLastColumn(int32_t lastCol)
{
    _lastCol = lastCol;
}

void org::apache::poi::ss::util::CellRangeAddressBase::setLastRow(int32_t lastRow)
{
    _lastRow = lastRow;
}

int32_t org::apache::poi::ss::util::CellRangeAddressBase::getNumberOfCells()
{
    return (_lastRow - _firstRow + int32_t(1)) * (_lastCol - _firstCol + int32_t(1));
}

java::lang::String* org::apache::poi::ss::util::CellRangeAddressBase::toString()
{
    auto crA = new CellReference(_firstRow, _firstCol);
    auto crB = new CellReference(_lastRow, _lastCol);
    return ::java::lang::StringBuilder().append(npc(getClass())->getName())->append(u" ["_j)
        ->append(npc(crA)->formatAsString())
        ->append(u":"_j)
        ->append(npc(crB)->formatAsString())
        ->append(u"]"_j)->toString();
}

int32_t org::apache::poi::ss::util::CellRangeAddressBase::getMinRow()
{
    return ::java::lang::Math::min(_firstRow, _lastRow);
}

int32_t org::apache::poi::ss::util::CellRangeAddressBase::getMaxRow()
{
    return ::java::lang::Math::max(_firstRow, _lastRow);
}

int32_t org::apache::poi::ss::util::CellRangeAddressBase::getMinColumn()
{
    return ::java::lang::Math::min(_firstCol, _lastCol);
}

int32_t org::apache::poi::ss::util::CellRangeAddressBase::getMaxColumn()
{
    return ::java::lang::Math::max(_firstCol, _lastCol);
}

bool org::apache::poi::ss::util::CellRangeAddressBase::equals(::java::lang::Object* other)
{
    if(dynamic_cast< CellRangeAddressBase* >(other) != nullptr) {
        auto o = java_cast< CellRangeAddressBase* >(other);
        return ((getMinRow() == npc(o)->getMinRow()) && (getMaxRow() == npc(o)->getMaxRow()) && (getMinColumn() == npc(o)->getMinColumn())&& (getMaxColumn() == npc(o)->getMaxColumn()));
    }
    return false;
}

int32_t org::apache::poi::ss::util::CellRangeAddressBase::hashCode()
{
    auto code = (getMinColumn() + (getMaxColumn() << int32_t(8)) + (getMinRow() << int32_t(16))+ (getMaxRow() << int32_t(24)));
    return code;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::util::CellRangeAddressBase::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.util.CellRangeAddressBase", 43);
    return c;
}

java::lang::Class* org::apache::poi::ss::util::CellRangeAddressBase::getClass0()
{
    return class_();
}

