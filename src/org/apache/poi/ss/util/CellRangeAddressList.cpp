// Generated from /POI/java/org/apache/poi/ss/util/CellRangeAddressList.java
#include <org/apache/poi/ss/util/CellRangeAddressList.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/List.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream.hpp>
#include <org/apache/poi/ss/util/CellRangeAddress.hpp>
#include <org/apache/poi/ss/util/CellRangeAddressBase.hpp>
#include <org/apache/poi/util/LittleEndianByteArrayOutputStream.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>
#include <ObjectArray.hpp>
#include <SubArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace poi
{
    namespace ss
    {
        namespace util
        {
typedef ::SubArray< ::poi::ss::util::CellRangeAddressBase, ::java::lang::ObjectArray > CellRangeAddressBaseArray;
typedef ::SubArray< ::poi::ss::util::CellRangeAddress, CellRangeAddressBaseArray > CellRangeAddressArray;
        } // util
    } // ss
} // poi

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

poi::ss::util::CellRangeAddressList::CellRangeAddressList(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::util::CellRangeAddressList::CellRangeAddressList() 
    : CellRangeAddressList(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::ss::util::CellRangeAddressList::CellRangeAddressList(int32_t firstRow, int32_t lastRow, int32_t firstCol, int32_t lastCol) 
    : CellRangeAddressList(*static_cast< ::default_init_tag* >(0))
{
    ctor(firstRow,lastRow,firstCol,lastCol);
}

poi::ss::util::CellRangeAddressList::CellRangeAddressList(::poi::hssf::record::RecordInputStream* in) 
    : CellRangeAddressList(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

void poi::ss::util::CellRangeAddressList::ctor()
{
    super::ctor();
    _list = new ::java::util::ArrayList();
}

void poi::ss::util::CellRangeAddressList::ctor(int32_t firstRow, int32_t lastRow, int32_t firstCol, int32_t lastCol)
{
    ctor();
    addCellRangeAddress(firstRow, firstCol, lastRow, lastCol);
}

void poi::ss::util::CellRangeAddressList::ctor(::poi::hssf::record::RecordInputStream* in)
{
    ctor();
    auto nItems = npc(in)->readUShort();
    for (auto k = int32_t(0); k < nItems; k++) {
        npc(_list)->add(static_cast< ::java::lang::Object* >(new CellRangeAddress(in)));
    }
}

int32_t poi::ss::util::CellRangeAddressList::countRanges()
{
    return npc(_list)->size();
}

void poi::ss::util::CellRangeAddressList::addCellRangeAddress(int32_t firstRow, int32_t firstCol, int32_t lastRow, int32_t lastCol)
{
    auto region = new CellRangeAddress(firstRow, lastRow, firstCol, lastCol);
    addCellRangeAddress(region);
}

void poi::ss::util::CellRangeAddressList::addCellRangeAddress(CellRangeAddress* cra)
{
    npc(_list)->add(static_cast< ::java::lang::Object* >(cra));
}

poi::ss::util::CellRangeAddress* poi::ss::util::CellRangeAddressList::remove(int32_t rangeIndex)
{
    if(npc(_list)->isEmpty()) {
        throw new ::java::lang::RuntimeException(u"List is empty"_j);
    }
    if(rangeIndex < 0 || rangeIndex >= npc(_list)->size()) {
        throw new ::java::lang::RuntimeException(::java::lang::StringBuilder().append(u"Range index ("_j)->append(rangeIndex)
            ->append(u") is outside allowable range (0.."_j)
            ->append((npc(_list)->size() - int32_t(1)))
            ->append(u")"_j)->toString());
    }
    return java_cast< CellRangeAddress* >(npc(_list)->remove(rangeIndex));
}

poi::ss::util::CellRangeAddress* poi::ss::util::CellRangeAddressList::getCellRangeAddress(int32_t index)
{
    return java_cast< CellRangeAddress* >(npc(_list)->get(index));
}

int32_t poi::ss::util::CellRangeAddressList::getSize()
{
    return getEncodedSize(npc(_list)->size());
}

int32_t poi::ss::util::CellRangeAddressList::getEncodedSize(int32_t numberOfRanges)
{
    clinit();
    return int32_t(2) + CellRangeAddress::getEncodedSize(numberOfRanges);
}

int32_t poi::ss::util::CellRangeAddressList::serialize(int32_t offset, ::int8_tArray* data)
{
    auto totalSize = getSize();
    serialize(new ::poi::util::LittleEndianByteArrayOutputStream(data, offset, totalSize));
    return totalSize;
}

void poi::ss::util::CellRangeAddressList::serialize(::poi::util::LittleEndianOutput* out)
{
    auto nItems = npc(_list)->size();
    npc(out)->writeShort(nItems);
    for (auto k = int32_t(0); k < nItems; k++) {
        auto region = java_cast< CellRangeAddress* >(npc(_list)->get(k));
        npc(region)->serialize(out);
    }
}

poi::ss::util::CellRangeAddressList* poi::ss::util::CellRangeAddressList::copy()
{
    auto result = new CellRangeAddressList();
    auto nItems = npc(_list)->size();
    for (auto k = int32_t(0); k < nItems; k++) {
        auto region = java_cast< CellRangeAddress* >(npc(_list)->get(k));
        npc(result)->addCellRangeAddress(npc(region)->copy());
    }
    return result;
}

poi::ss::util::CellRangeAddressArray* poi::ss::util::CellRangeAddressList::getCellRangeAddresses()
{
    auto result = new CellRangeAddressArray(npc(_list)->size());
    npc(_list)->toArray_(static_cast< ::java::lang::ObjectArray* >(result));
    return result;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::util::CellRangeAddressList::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.util.CellRangeAddressList", 43);
    return c;
}

java::lang::Class* poi::ss::util::CellRangeAddressList::getClass0()
{
    return class_();
}

