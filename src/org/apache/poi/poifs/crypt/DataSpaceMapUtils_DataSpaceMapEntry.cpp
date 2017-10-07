// Generated from /POI/java/org/apache/poi/poifs/crypt/DataSpaceMapUtils.java
#include <org/apache/poi/poifs/crypt/DataSpaceMapUtils_DataSpaceMapEntry.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <org/apache/poi/poifs/crypt/DataSpaceMapUtils.hpp>
#include <org/apache/poi/util/LittleEndianByteArrayOutputStream.hpp>
#include <org/apache/poi/util/LittleEndianConsts.hpp>
#include <org/apache/poi/util/LittleEndianInput.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>
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

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::poifs::crypt::DataSpaceMapUtils_DataSpaceMapEntry::DataSpaceMapUtils_DataSpaceMapEntry(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::poifs::crypt::DataSpaceMapUtils_DataSpaceMapEntry::DataSpaceMapUtils_DataSpaceMapEntry(::int32_tArray* referenceComponentType, ::java::lang::StringArray* referenceComponent, ::java::lang::String* dataSpaceName) 
    : DataSpaceMapUtils_DataSpaceMapEntry(*static_cast< ::default_init_tag* >(0))
{
    ctor(referenceComponentType,referenceComponent,dataSpaceName);
}

org::apache::poi::poifs::crypt::DataSpaceMapUtils_DataSpaceMapEntry::DataSpaceMapUtils_DataSpaceMapEntry(::org::apache::poi::util::LittleEndianInput* is) 
    : DataSpaceMapUtils_DataSpaceMapEntry(*static_cast< ::default_init_tag* >(0))
{
    ctor(is);
}

void org::apache::poi::poifs::crypt::DataSpaceMapUtils_DataSpaceMapEntry::ctor(::int32_tArray* referenceComponentType, ::java::lang::StringArray* referenceComponent, ::java::lang::String* dataSpaceName)
{
    super::ctor();
    this->referenceComponentType = npc(referenceComponentType)->clone();
    this->referenceComponent = npc(referenceComponent)->clone();
    this->dataSpaceName = dataSpaceName;
}

void org::apache::poi::poifs::crypt::DataSpaceMapUtils_DataSpaceMapEntry::ctor(::org::apache::poi::util::LittleEndianInput* is)
{
    super::ctor();
    npc(is)->readInt();
    auto referenceComponentCount = npc(is)->readInt();
    referenceComponentType = new ::int32_tArray(referenceComponentCount);
    referenceComponent = new ::java::lang::StringArray(referenceComponentCount);
    for (auto i = int32_t(0); i < referenceComponentCount; i++) {
        (*referenceComponentType)[i] = npc(is)->readInt();
        referenceComponent->set(i, DataSpaceMapUtils::readUnicodeLPP4(is));
    }
    dataSpaceName = DataSpaceMapUtils::readUnicodeLPP4(is);
}

void org::apache::poi::poifs::crypt::DataSpaceMapUtils_DataSpaceMapEntry::write(::org::apache::poi::util::LittleEndianByteArrayOutputStream* os)
{
    auto start = npc(os)->getWriteIndex();
    auto sizeOut = npc(os)->createDelayedOutput(::org::apache::poi::util::LittleEndianConsts::INT_SIZE);
    npc(os)->writeInt(npc(referenceComponent)->length);
    for (auto i = int32_t(0); i < npc(referenceComponent)->length; i++) {
        npc(os)->writeInt((*referenceComponentType)[i]);
        DataSpaceMapUtils::writeUnicodeLPP4(os, (*referenceComponent)[i]);
    }
    DataSpaceMapUtils::writeUnicodeLPP4(os, dataSpaceName);
    npc(sizeOut)->writeInt(npc(os)->getWriteIndex() - start);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::poifs::crypt::DataSpaceMapUtils_DataSpaceMapEntry::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.crypt.DataSpaceMapUtils.DataSpaceMapEntry", 62);
    return c;
}

java::lang::Class* org::apache::poi::poifs::crypt::DataSpaceMapUtils_DataSpaceMapEntry::getClass0()
{
    return class_();
}

