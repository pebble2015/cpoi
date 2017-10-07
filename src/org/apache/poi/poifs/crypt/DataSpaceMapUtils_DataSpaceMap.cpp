// Generated from /POI/java/org/apache/poi/poifs/crypt/DataSpaceMapUtils.java
#include <org/apache/poi/poifs/crypt/DataSpaceMapUtils_DataSpaceMap.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/poifs/crypt/DataSpaceMapUtils_DataSpaceMapEntry.hpp>
#include <org/apache/poi/poifs/crypt/standard/EncryptionRecord.hpp>
#include <org/apache/poi/util/LittleEndianByteArrayOutputStream.hpp>
#include <org/apache/poi/util/LittleEndianInput.hpp>
#include <ObjectArray.hpp>
#include <SubArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace org
{
    namespace apache
    {
        namespace poi
        {
            namespace poifs
            {
                namespace crypt
                {
                    namespace standard
                    {
typedef ::SubArray< ::org::apache::poi::poifs::crypt::standard::EncryptionRecord, ::java::lang::ObjectArray > EncryptionRecordArray;
                    } // standard
typedef ::SubArray< ::org::apache::poi::poifs::crypt::DataSpaceMapUtils_DataSpaceMapEntry, ::java::lang::ObjectArray, ::org::apache::poi::poifs::crypt::standard::EncryptionRecordArray > DataSpaceMapUtils_DataSpaceMapEntryArray;
                } // crypt
            } // poifs
        } // poi
    } // apache
} // org

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::poifs::crypt::DataSpaceMapUtils_DataSpaceMap::DataSpaceMapUtils_DataSpaceMap(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::poifs::crypt::DataSpaceMapUtils_DataSpaceMap::DataSpaceMapUtils_DataSpaceMap(DataSpaceMapUtils_DataSpaceMapEntryArray* entries) 
    : DataSpaceMapUtils_DataSpaceMap(*static_cast< ::default_init_tag* >(0))
{
    ctor(entries);
}

org::apache::poi::poifs::crypt::DataSpaceMapUtils_DataSpaceMap::DataSpaceMapUtils_DataSpaceMap(::org::apache::poi::util::LittleEndianInput* is) 
    : DataSpaceMapUtils_DataSpaceMap(*static_cast< ::default_init_tag* >(0))
{
    ctor(is);
}

void org::apache::poi::poifs::crypt::DataSpaceMapUtils_DataSpaceMap::ctor(DataSpaceMapUtils_DataSpaceMapEntryArray* entries)
{
    super::ctor();
    this->entries = npc(entries)->clone();
}

void org::apache::poi::poifs::crypt::DataSpaceMapUtils_DataSpaceMap::ctor(::org::apache::poi::util::LittleEndianInput* is)
{
    super::ctor();
    npc(is)->readInt();
    auto entryCount = npc(is)->readInt();
    entries = new DataSpaceMapUtils_DataSpaceMapEntryArray(entryCount);
    for (auto i = int32_t(0); i < entryCount; i++) {
        entries->set(i, new DataSpaceMapUtils_DataSpaceMapEntry(is));
    }
}

void org::apache::poi::poifs::crypt::DataSpaceMapUtils_DataSpaceMap::write(::org::apache::poi::util::LittleEndianByteArrayOutputStream* os)
{
    npc(os)->writeInt(int32_t(8));
    npc(os)->writeInt(npc(entries)->length);
    for(auto dsme : *npc(entries)) {
        npc(dsme)->write(os);
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::poifs::crypt::DataSpaceMapUtils_DataSpaceMap::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.crypt.DataSpaceMapUtils.DataSpaceMap", 57);
    return c;
}

java::lang::Class* org::apache::poi::poifs::crypt::DataSpaceMapUtils_DataSpaceMap::getClass0()
{
    return class_();
}

