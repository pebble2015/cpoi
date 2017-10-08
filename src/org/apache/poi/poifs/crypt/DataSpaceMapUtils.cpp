// Generated from /POI/java/org/apache/poi/poifs/crypt/DataSpaceMapUtils.java
#include <org/apache/poi/poifs/crypt/DataSpaceMapUtils.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/nio/charset/Charset.hpp>
#include <org/apache/poi/EncryptedDocumentException.hpp>
#include <org/apache/poi/poifs/crypt/DataSpaceMapUtils_createEncryptionEntry_1.hpp>
#include <org/apache/poi/poifs/crypt/DataSpaceMapUtils_DataSpaceDefinition.hpp>
#include <org/apache/poi/poifs/crypt/DataSpaceMapUtils_DataSpaceMap.hpp>
#include <org/apache/poi/poifs/crypt/DataSpaceMapUtils_DataSpaceMapEntry.hpp>
#include <org/apache/poi/poifs/crypt/DataSpaceMapUtils_DataSpaceVersionInfo.hpp>
#include <org/apache/poi/poifs/crypt/DataSpaceMapUtils_IRMDSTransformInfo.hpp>
#include <org/apache/poi/poifs/crypt/DataSpaceMapUtils_TransformInfoHeader.hpp>
#include <org/apache/poi/poifs/crypt/Decryptor.hpp>
#include <org/apache/poi/poifs/crypt/standard/EncryptionRecord.hpp>
#include <org/apache/poi/poifs/filesystem/DirectoryEntry.hpp>
#include <org/apache/poi/poifs/filesystem/DocumentEntry.hpp>
#include <org/apache/poi/poifs/filesystem/Entry.hpp>
#include <org/apache/poi/util/LittleEndianByteArrayOutputStream.hpp>
#include <org/apache/poi/util/LittleEndianInput.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>
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

namespace poi
{
    namespace poifs
    {
        namespace crypt
        {
            namespace standard
            {
typedef ::SubArray< ::poi::poifs::crypt::standard::EncryptionRecord, ::java::lang::ObjectArray > EncryptionRecordArray;
            } // standard
typedef ::SubArray< ::poi::poifs::crypt::DataSpaceMapUtils_DataSpaceMapEntry, ::java::lang::ObjectArray, ::poi::poifs::crypt::standard::EncryptionRecordArray > DataSpaceMapUtils_DataSpaceMapEntryArray;
        } // crypt
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

poi::poifs::crypt::DataSpaceMapUtils::DataSpaceMapUtils(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::poifs::crypt::DataSpaceMapUtils::DataSpaceMapUtils()
    : DataSpaceMapUtils(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void poi::poifs::crypt::DataSpaceMapUtils::addDefaultDataSpace(::poi::poifs::filesystem::DirectoryEntry* dir) /* throws(IOException) */
{
    clinit();
    auto dsme = new DataSpaceMapUtils_DataSpaceMapEntry(new ::int32_tArray({int32_t(0)}), new ::java::lang::StringArray({Decryptor::DEFAULT_POIFS_ENTRY()}), u"StrongEncryptionDataSpace"_j);
    auto dsm = new DataSpaceMapUtils_DataSpaceMap(new DataSpaceMapUtils_DataSpaceMapEntryArray({dsme}));
    createEncryptionEntry(dir, u"\u0006DataSpaces/DataSpaceMap"_j, dsm);
    auto dsd = new DataSpaceMapUtils_DataSpaceDefinition(new ::java::lang::StringArray({u"StrongEncryptionTransform"_j}));
    createEncryptionEntry(dir, u"\u0006DataSpaces/DataSpaceInfo/StrongEncryptionDataSpace"_j, dsd);
    auto tih = new DataSpaceMapUtils_TransformInfoHeader(int32_t(1), u"{FF9A3F03-56EF-4613-BDD5-5A41C1D07246}"_j, u"Microsoft.Container.EncryptionTransform"_j, int32_t(1), int32_t(0), int32_t(1), int32_t(0), int32_t(1), int32_t(0));
    auto irm = new DataSpaceMapUtils_IRMDSTransformInfo(tih, int32_t(0), nullptr);
    createEncryptionEntry(dir, u"\u0006DataSpaces/TransformInfo/StrongEncryptionTransform/\u0006Primary"_j, irm);
    auto dsvi = new DataSpaceMapUtils_DataSpaceVersionInfo(u"Microsoft.Container.DataSpaces"_j, int32_t(1), int32_t(0), int32_t(1), int32_t(0), int32_t(1), int32_t(0));
    createEncryptionEntry(dir, u"\u0006DataSpaces/Version"_j, dsvi);
}

poi::poifs::filesystem::DocumentEntry* poi::poifs::crypt::DataSpaceMapUtils::createEncryptionEntry(::poi::poifs::filesystem::DirectoryEntry* dir, ::java::lang::String* path, ::poi::poifs::crypt::standard::EncryptionRecord* out) /* throws(IOException) */
{
    clinit();
    auto parts = npc(path)->split(u"/"_j);
    for (auto i = int32_t(0); i < npc(parts)->length - int32_t(1); i++) {
        dir = npc(dir)->hasEntry((*parts)[i]) ? java_cast< ::poi::poifs::filesystem::DirectoryEntry* >(npc(dir)->getEntry((*parts)[i])) : npc(dir)->createDirectory((*parts)[i]);
    }
    auto const buf = new ::int8_tArray(int32_t(5000));
    auto bos = new ::poi::util::LittleEndianByteArrayOutputStream(buf, int32_t(0));
    npc(out)->write(bos);
    auto fileName = (*parts)[npc(parts)->length - int32_t(1)];
    if(npc(dir)->hasEntry(fileName)) {
        npc(npc(dir)->getEntry(fileName))->delete_();
    }
    return npc(dir)->createDocument(fileName, npc(bos)->getWriteIndex(), new DataSpaceMapUtils_createEncryptionEntry_1(buf));
}

java::lang::String* poi::poifs::crypt::DataSpaceMapUtils::readUnicodeLPP4(::poi::util::LittleEndianInput* is)
{
    clinit();
    auto length = npc(is)->readInt();
    if(length % int32_t(2) != 0) {
        throw new ::poi::EncryptedDocumentException(::java::lang::StringBuilder().append(u"UNICODE-LP-P4 structure is a multiple of 4 bytes. "_j)->append(u"If Padding is present, it MUST be exactly 2 bytes long"_j)->toString());
    }
    auto result = ::poi::util::StringUtil::readUnicodeLE(is, length / int32_t(2));
    if(length % int32_t(4) == 2) {
        npc(is)->readShort();
    }
    return result;
}

void poi::poifs::crypt::DataSpaceMapUtils::writeUnicodeLPP4(::poi::util::LittleEndianOutput* os, ::java::lang::String* string)
{
    clinit();
    auto buf = ::poi::util::StringUtil::getToUnicodeLE(string);
    npc(os)->writeInt(npc(buf)->length);
    npc(os)->write(buf);
    if(npc(buf)->length % int32_t(4) == 2) {
        npc(os)->writeShort(0);
    }
}

java::lang::String* poi::poifs::crypt::DataSpaceMapUtils::readUtf8LPP4(::poi::util::LittleEndianInput* is)
{
    clinit();
    auto length = npc(is)->readInt();
    if(length == 0 || length == 4) {
        npc(is)->readInt();
        return length == 0 ? static_cast< ::java::lang::String* >(nullptr) : u""_j;
    }
    auto data = new ::int8_tArray(length);
    npc(is)->readFully(data);
    auto scratchedBytes = length % int32_t(4);
    if(scratchedBytes > 0) {
        for (auto i = int32_t(0); i < (int32_t(4) - scratchedBytes); i++) {
            npc(is)->readByte();
        }
    }
    return new ::java::lang::String(data, int32_t(0), npc(data)->length, ::java::nio::charset::Charset::forName(u"UTF-8"_j));
}

void poi::poifs::crypt::DataSpaceMapUtils::writeUtf8LPP4(::poi::util::LittleEndianOutput* os, ::java::lang::String* str)
{
    clinit();
    if(str == nullptr || npc(u""_j)->equals(static_cast< ::java::lang::Object* >(str))) {
        npc(os)->writeInt(str == nullptr ? int32_t(0) : int32_t(4));
        npc(os)->writeInt(0);
    } else {
        auto buf = npc(str)->getBytes(::java::nio::charset::Charset::forName(u"UTF-8"_j));
        npc(os)->writeInt(npc(buf)->length);
        npc(os)->write(buf);
        auto scratchBytes = npc(buf)->length % int32_t(4);
        if(scratchBytes > 0) {
            for (auto i = int32_t(0); i < (int32_t(4) - scratchBytes); i++) {
                npc(os)->writeByte(0);
            }
        }
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::poifs::crypt::DataSpaceMapUtils::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.crypt.DataSpaceMapUtils", 44);
    return c;
}

java::lang::Class* poi::poifs::crypt::DataSpaceMapUtils::getClass0()
{
    return class_();
}

