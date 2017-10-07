// Generated from /POI/java/org/apache/poi/ss/util/SSCellRange.java
#include <org/apache/poi/ss/util/SSCellRange.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/ArrayIndexOutOfBoundsException.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Cloneable.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/System.hpp>
#include <java/lang/reflect/Array_.hpp>
#include <java/util/List.hpp>
#include <org/apache/poi/ss/usermodel/Cell.hpp>
#include <org/apache/poi/ss/util/CellRangeAddress.hpp>
#include <org/apache/poi/ss/util/SSCellRange_ArrayIterator.hpp>
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

namespace org
{
    namespace apache
    {
        namespace poi
        {
            namespace ss
            {
                namespace usermodel
                {
typedef ::SubArray< ::org::apache::poi::ss::usermodel::Cell, ::java::lang::ObjectArray > CellArray;
typedef ::SubArray< ::org::apache::poi::ss::usermodel::CellArray, ::java::lang::CloneableArray, ::java::io::SerializableArray > CellArrayArray;
                } // usermodel
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

org::apache::poi::ss::util::SSCellRange::SSCellRange(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::util::SSCellRange::SSCellRange(int32_t firstRow, int32_t firstColumn, int32_t height, int32_t width, ::org::apache::poi::ss::usermodel::CellArray* flattenedArray_) 
    : SSCellRange(*static_cast< ::default_init_tag* >(0))
{
    ctor(firstRow,firstColumn,height,width,flattenedArray_);
}

void org::apache::poi::ss::util::SSCellRange::ctor(int32_t firstRow, int32_t firstColumn, int32_t height, int32_t width, ::org::apache::poi::ss::usermodel::CellArray* flattenedArray_)
{
    super::ctor();
    _firstRow = firstRow;
    _firstColumn = firstColumn;
    _height = height;
    _width = width;
    _flattenedArray_ = java_cast< ::org::apache::poi::ss::usermodel::CellArray* >(npc(flattenedArray_)->clone());
}

/* <B extends Cell> */org::apache::poi::ss::util::SSCellRange* org::apache::poi::ss::util::SSCellRange::create(int32_t firstRow, int32_t firstColumn, int32_t height, int32_t width, ::java::util::List* flattenedList, ::java::lang::Class* cellClass)
{
    clinit();
    auto nItems = npc(flattenedList)->size();
    if(height * width != nItems) {
        throw new ::java::lang::IllegalArgumentException(u"Array size mismatch."_j);
    }
    auto flattenedArray_ = java_cast< ::org::apache::poi::ss::usermodel::CellArray* >(::java::lang::reflect::Array_::newInstance(static_cast< ::java::lang::Class* >(cellClass), nItems));
    npc(flattenedList)->toArray_(static_cast< ::java::lang::ObjectArray* >(flattenedArray_));
    return new SSCellRange(firstRow, firstColumn, height, width, flattenedArray_);
}

int32_t org::apache::poi::ss::util::SSCellRange::getHeight()
{
    return _height;
}

int32_t org::apache::poi::ss::util::SSCellRange::getWidth()
{
    return _width;
}

int32_t org::apache::poi::ss::util::SSCellRange::size()
{
    return _height * _width;
}

java::lang::String* org::apache::poi::ss::util::SSCellRange::getReferenceText()
{
    auto cra = new CellRangeAddress(_firstRow, _firstRow + _height - int32_t(1), _firstColumn, _firstColumn + _width - int32_t(1));
    return npc(cra)->formatAsString();
}

org::apache::poi::ss::usermodel::Cell* org::apache::poi::ss::util::SSCellRange::getTopLeftCell()
{
    return (*_flattenedArray_)[int32_t(0)];
}

org::apache::poi::ss::usermodel::Cell* org::apache::poi::ss::util::SSCellRange::getCell(int32_t relativeRowIndex, int32_t relativeColumnIndex)
{
    if(relativeRowIndex < 0 || relativeRowIndex >= _height) {
        throw new ::java::lang::ArrayIndexOutOfBoundsException(::java::lang::StringBuilder().append(u"Specified row "_j)->append(relativeRowIndex)
            ->append(u" is outside the allowable range (0.."_j)
            ->append((_height - int32_t(1)))
            ->append(u")."_j)->toString());
    }
    if(relativeColumnIndex < 0 || relativeColumnIndex >= _width) {
        throw new ::java::lang::ArrayIndexOutOfBoundsException(::java::lang::StringBuilder().append(u"Specified colummn "_j)->append(relativeColumnIndex)
            ->append(u" is outside the allowable range (0.."_j)
            ->append((_width - int32_t(1)))
            ->append(u")."_j)->toString());
    }
    auto flatIndex = _width * relativeRowIndex + relativeColumnIndex;
    return (*_flattenedArray_)[flatIndex];
}

org::apache::poi::ss::usermodel::CellArray* org::apache::poi::ss::util::SSCellRange::getFlattenedCells()
{
    return java_cast< ::org::apache::poi::ss::usermodel::CellArray* >(npc(_flattenedArray_)->clone());
}

org::apache::poi::ss::usermodel::CellArrayArray* org::apache::poi::ss::util::SSCellRange::getCells()
{
    auto itemCls = npc(_flattenedArray_)->getClass();
    auto result = java_cast< ::org::apache::poi::ss::usermodel::CellArrayArray* >(::java::lang::reflect::Array_::newInstance(static_cast< ::java::lang::Class* >(itemCls), _height));
    itemCls = npc(itemCls)->getComponentType();
    for (auto r = _height - int32_t(1); r >= 0; r--) {
        auto row = java_cast< ::org::apache::poi::ss::usermodel::CellArray* >(::java::lang::reflect::Array_::newInstance(static_cast< ::java::lang::Class* >(itemCls), _width));
        auto flatIndex = _width * r;
        ::java::lang::System::arraycopy(_flattenedArray_, flatIndex, row, 0, _width);
    }
    return result;
}

java::util::Iterator* org::apache::poi::ss::util::SSCellRange::iterator()
{
    return new SSCellRange_ArrayIterator(_flattenedArray_);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::util::SSCellRange::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.util.SSCellRange", 34);
    return c;
}

java::lang::Class* org::apache::poi::ss::util::SSCellRange::getClass0()
{
    return class_();
}

