// Generated from /POI/java/org/apache/poi/poifs/storage/PropertyBlock.java
#include <org/apache/poi/poifs/storage/PropertyBlock.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/System.hpp>
#include <java/util/List.hpp>
#include <org/apache/poi/poifs/common/POIFSBigBlockSize.hpp>
#include <org/apache/poi/poifs/dev/POIFSViewable.hpp>
#include <org/apache/poi/poifs/property/Child.hpp>
#include <org/apache/poi/poifs/property/Property.hpp>
#include <org/apache/poi/poifs/storage/BlockWritable.hpp>
#include <org/apache/poi/poifs/storage/PropertyBlock_createPropertyBlockArray_1.hpp>
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

poi::poifs::storage::PropertyBlock::PropertyBlock(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::poifs::storage::PropertyBlock::PropertyBlock(::poi::poifs::common::POIFSBigBlockSize* bigBlockSize, ::poi::poifs::property::PropertyArray* properties, int32_t offset) 
    : PropertyBlock(*static_cast< ::default_init_tag* >(0))
{
    ctor(bigBlockSize,properties,offset);
}

void poi::poifs::storage::PropertyBlock::ctor(::poi::poifs::common::POIFSBigBlockSize* bigBlockSize, ::poi::poifs::property::PropertyArray* properties, int32_t offset)
{
    super::ctor(bigBlockSize);
    _properties = new ::poi::poifs::property::PropertyArray(npc(bigBlockSize)->getPropertiesPerBlock());
    for (auto j = int32_t(0); j < npc(_properties)->length; j++) {
        _properties->set(j, (*properties)[j + offset]);
    }
}

poi::poifs::storage::BlockWritableArray* poi::poifs::storage::PropertyBlock::createPropertyBlockArray_(::poi::poifs::common::POIFSBigBlockSize* bigBlockSize, ::java::util::List* properties)
{
    clinit();
    auto _properties_per_block = npc(bigBlockSize)->getPropertiesPerBlock();
    auto block_count = (npc(properties)->size() + _properties_per_block - int32_t(1)) / _properties_per_block;
    auto to_be_written = new ::poi::poifs::property::PropertyArray(block_count * _properties_per_block);
    ::java::lang::System::arraycopy(java_cast< ::poi::poifs::property::PropertyArray* >(npc(properties)->toArray_(static_cast< ::java::lang::ObjectArray* >(new ::poi::poifs::property::PropertyArray(int32_t(0))))), 0, to_be_written, 0, npc(properties)->size());
    for (auto j = npc(properties)->size(); j < npc(to_be_written)->length; j++) {
        to_be_written->set(j, new PropertyBlock_createPropertyBlockArray_1());
    }
    auto rvalue = new BlockWritableArray(block_count);
    for (auto j = int32_t(0); j < block_count; j++) {
        rvalue->set(j, new PropertyBlock(bigBlockSize, to_be_written, j * _properties_per_block));
    }
    return rvalue;
}

void poi::poifs::storage::PropertyBlock::writeData(::java::io::OutputStream* stream) /* throws(IOException) */
{
    auto _properties_per_block = npc(bigBlockSize)->getPropertiesPerBlock();
    for (auto j = int32_t(0); j < _properties_per_block; j++) {
        npc((*_properties)[j])->writeData(stream);
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::poifs::storage::PropertyBlock::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.storage.PropertyBlock", 42);
    return c;
}

java::lang::Class* poi::poifs::storage::PropertyBlock::getClass0()
{
    return class_();
}

