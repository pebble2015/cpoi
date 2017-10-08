// Generated from /POI/java/org/apache/poi/poifs/crypt/DataSpaceMapUtils.java
#include <org/apache/poi/poifs/crypt/DataSpaceMapUtils_DataSpaceVersionInfo.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <org/apache/poi/poifs/crypt/DataSpaceMapUtils.hpp>
#include <org/apache/poi/util/LittleEndianByteArrayOutputStream.hpp>
#include <org/apache/poi/util/LittleEndianInput.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::poifs::crypt::DataSpaceMapUtils_DataSpaceVersionInfo::DataSpaceMapUtils_DataSpaceVersionInfo(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::poifs::crypt::DataSpaceMapUtils_DataSpaceVersionInfo::DataSpaceMapUtils_DataSpaceVersionInfo(::poi::util::LittleEndianInput* is) 
    : DataSpaceMapUtils_DataSpaceVersionInfo(*static_cast< ::default_init_tag* >(0))
{
    ctor(is);
}

poi::poifs::crypt::DataSpaceMapUtils_DataSpaceVersionInfo::DataSpaceMapUtils_DataSpaceVersionInfo(::java::lang::String* featureIdentifier, int32_t readerVersionMajor, int32_t readerVersionMinor, int32_t updaterVersionMajor, int32_t updaterVersionMinor, int32_t writerVersionMajor, int32_t writerVersionMinor) 
    : DataSpaceMapUtils_DataSpaceVersionInfo(*static_cast< ::default_init_tag* >(0))
{
    ctor(featureIdentifier,readerVersionMajor,readerVersionMinor,updaterVersionMajor,updaterVersionMinor,writerVersionMajor,writerVersionMinor);
}

void poi::poifs::crypt::DataSpaceMapUtils_DataSpaceVersionInfo::init()
{
    readerVersionMajor = int32_t(1);
    readerVersionMinor = int32_t(0);
    updaterVersionMajor = int32_t(1);
    updaterVersionMinor = int32_t(0);
    writerVersionMajor = int32_t(1);
    writerVersionMinor = int32_t(0);
}

void poi::poifs::crypt::DataSpaceMapUtils_DataSpaceVersionInfo::ctor(::poi::util::LittleEndianInput* is)
{
    super::ctor();
    init();
    featureIdentifier = DataSpaceMapUtils::readUnicodeLPP4(is);
    readerVersionMajor = npc(is)->readShort();
    readerVersionMinor = npc(is)->readShort();
    updaterVersionMajor = npc(is)->readShort();
    updaterVersionMinor = npc(is)->readShort();
    writerVersionMajor = npc(is)->readShort();
    writerVersionMinor = npc(is)->readShort();
}

void poi::poifs::crypt::DataSpaceMapUtils_DataSpaceVersionInfo::ctor(::java::lang::String* featureIdentifier, int32_t readerVersionMajor, int32_t readerVersionMinor, int32_t updaterVersionMajor, int32_t updaterVersionMinor, int32_t writerVersionMajor, int32_t writerVersionMinor)
{
    super::ctor();
    init();
    this->featureIdentifier = featureIdentifier;
    this->readerVersionMajor = readerVersionMajor;
    this->readerVersionMinor = readerVersionMinor;
    this->updaterVersionMajor = updaterVersionMajor;
    this->updaterVersionMinor = updaterVersionMinor;
    this->writerVersionMajor = writerVersionMajor;
    this->writerVersionMinor = writerVersionMinor;
}

void poi::poifs::crypt::DataSpaceMapUtils_DataSpaceVersionInfo::write(::poi::util::LittleEndianByteArrayOutputStream* bos)
{
    DataSpaceMapUtils::writeUnicodeLPP4(bos, featureIdentifier);
    npc(bos)->writeShort(readerVersionMajor);
    npc(bos)->writeShort(readerVersionMinor);
    npc(bos)->writeShort(updaterVersionMajor);
    npc(bos)->writeShort(updaterVersionMinor);
    npc(bos)->writeShort(writerVersionMajor);
    npc(bos)->writeShort(writerVersionMinor);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::poifs::crypt::DataSpaceMapUtils_DataSpaceVersionInfo::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.crypt.DataSpaceMapUtils.DataSpaceVersionInfo", 65);
    return c;
}

java::lang::Class* poi::poifs::crypt::DataSpaceMapUtils_DataSpaceVersionInfo::getClass0()
{
    return class_();
}

