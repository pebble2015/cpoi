// Generated from /POI/java/org/apache/poi/poifs/property/PropertyTable.java
#include <org/apache/poi/poifs/property/PropertyTable.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/util/List.hpp>
#include <org/apache/poi/poifs/common/POIFSBigBlockSize.hpp>
#include <org/apache/poi/poifs/dev/POIFSViewable.hpp>
#include <org/apache/poi/poifs/property/Child.hpp>
#include <org/apache/poi/poifs/property/Property.hpp>
#include <org/apache/poi/poifs/property/PropertyFactory.hpp>
#include <org/apache/poi/poifs/storage/BlockWritable.hpp>
#include <org/apache/poi/poifs/storage/HeaderBlock.hpp>
#include <org/apache/poi/poifs/storage/PropertyBlock.hpp>
#include <org/apache/poi/poifs/storage/RawDataBlockList.hpp>
#include <ObjectArray.hpp>
#include <SubArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace poi
{
    namespace poifs
    {
        namespace dev
        {
typedef ::SubArray< ::poi::poifs::dev::POIFSViewable, ::java::lang::ObjectArray > POIFSViewableArray;
        } // dev

        namespace property
        {
typedef ::SubArray< ::poi::poifs::property::Child, ::java::lang::ObjectArray > ChildArray;
typedef ::SubArray< ::poi::poifs::property::Property, ::java::lang::ObjectArray, ChildArray, ::poi::poifs::dev::POIFSViewableArray > PropertyArray;
        } // property

        namespace storage
        {
typedef ::SubArray< ::poi::poifs::storage::BlockWritable, ::java::lang::ObjectArray > BlockWritableArray;
        } // storage
    } // poifs
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

poi::poifs::property::PropertyTable::PropertyTable(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::poifs::property::PropertyTable::PropertyTable(::poi::poifs::storage::HeaderBlock* headerBlock) 
    : PropertyTable(*static_cast< ::default_init_tag* >(0))
{
    ctor(headerBlock);
}

poi::poifs::property::PropertyTable::PropertyTable(::poi::poifs::storage::HeaderBlock* headerBlock, ::poi::poifs::storage::RawDataBlockList* blockList)  /* throws(IOException) */
    : PropertyTable(*static_cast< ::default_init_tag* >(0))
{
    ctor(headerBlock,blockList);
}

void poi::poifs::property::PropertyTable::ctor(::poi::poifs::storage::HeaderBlock* headerBlock)
{
    super::ctor(headerBlock);
    _bigBigBlockSize = npc(headerBlock)->getBigBlockSize();
    _blocks = nullptr;
}

void poi::poifs::property::PropertyTable::ctor(::poi::poifs::storage::HeaderBlock* headerBlock, ::poi::poifs::storage::RawDataBlockList* blockList) /* throws(IOException) */
{
    super::ctor(headerBlock, PropertyFactory::convertToProperties(npc(blockList)->fetchBlocks(npc(headerBlock)->getPropertyStart(), -int32_t(1))));
    _bigBigBlockSize = npc(headerBlock)->getBigBlockSize();
    _blocks = nullptr;
}

void poi::poifs::property::PropertyTable::preWrite()
{
    auto properties = java_cast< PropertyArray* >(npc(_properties)->toArray_(static_cast< ::java::lang::ObjectArray* >(new PropertyArray(npc(_properties)->size()))));
    for (auto k = int32_t(0); k < npc(properties)->length; k++) {
        npc((*properties)[k])->setIndex(k);
    }
    _blocks = ::poi::poifs::storage::PropertyBlock::createPropertyBlockArray_(_bigBigBlockSize, _properties);
    for(auto property : *npc(properties)) {
        npc(property)->preWrite();
    }
}

int32_t poi::poifs::property::PropertyTable::countBlocks()
{
    return (_blocks == nullptr) ? int32_t(0) : npc(_blocks)->length;
}

void poi::poifs::property::PropertyTable::writeBlocks(::java::io::OutputStream* stream) /* throws(IOException) */
{
    if(_blocks != nullptr) {
        for(auto _block : *npc(_blocks)) {
            npc(_block)->writeBlocks(stream);
        }
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::poifs::property::PropertyTable::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.property.PropertyTable", 43);
    return c;
}

java::lang::Class* poi::poifs::property::PropertyTable::getClass0()
{
    return class_();
}

