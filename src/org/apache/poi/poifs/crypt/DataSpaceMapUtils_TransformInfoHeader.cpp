// Generated from /POI/java/org/apache/poi/poifs/crypt/DataSpaceMapUtils.java
#include <org/apache/poi/poifs/crypt/DataSpaceMapUtils_TransformInfoHeader.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <org/apache/poi/poifs/crypt/DataSpaceMapUtils.hpp>
#include <org/apache/poi/util/LittleEndianByteArrayOutputStream.hpp>
#include <org/apache/poi/util/LittleEndianConsts.hpp>
#include <org/apache/poi/util/LittleEndianInput.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::poifs::crypt::DataSpaceMapUtils_TransformInfoHeader::DataSpaceMapUtils_TransformInfoHeader(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::poifs::crypt::DataSpaceMapUtils_TransformInfoHeader::DataSpaceMapUtils_TransformInfoHeader(int32_t transformType, ::java::lang::String* transformerId, ::java::lang::String* transformerName, int32_t readerVersionMajor, int32_t readerVersionMinor, int32_t updaterVersionMajor, int32_t updaterVersionMinor, int32_t writerVersionMajor, int32_t writerVersionMinor) 
    : DataSpaceMapUtils_TransformInfoHeader(*static_cast< ::default_init_tag* >(0))
{
    ctor(transformType,transformerId,transformerName,readerVersionMajor,readerVersionMinor,updaterVersionMajor,updaterVersionMinor,writerVersionMajor,writerVersionMinor);
}

poi::poifs::crypt::DataSpaceMapUtils_TransformInfoHeader::DataSpaceMapUtils_TransformInfoHeader(::poi::util::LittleEndianInput* is) 
    : DataSpaceMapUtils_TransformInfoHeader(*static_cast< ::default_init_tag* >(0))
{
    ctor(is);
}

void poi::poifs::crypt::DataSpaceMapUtils_TransformInfoHeader::init()
{
    readerVersionMajor = int32_t(1);
    readerVersionMinor = int32_t(0);
    updaterVersionMajor = int32_t(1);
    updaterVersionMinor = int32_t(0);
    writerVersionMajor = int32_t(1);
    writerVersionMinor = int32_t(0);
}

void poi::poifs::crypt::DataSpaceMapUtils_TransformInfoHeader::ctor(int32_t transformType, ::java::lang::String* transformerId, ::java::lang::String* transformerName, int32_t readerVersionMajor, int32_t readerVersionMinor, int32_t updaterVersionMajor, int32_t updaterVersionMinor, int32_t writerVersionMajor, int32_t writerVersionMinor)
{
    super::ctor();
    init();
    this->transformType = transformType;
    this->transformerId = transformerId;
    this->transformerName = transformerName;
    this->readerVersionMajor = readerVersionMajor;
    this->readerVersionMinor = readerVersionMinor;
    this->updaterVersionMajor = updaterVersionMajor;
    this->updaterVersionMinor = updaterVersionMinor;
    this->writerVersionMajor = writerVersionMajor;
    this->writerVersionMinor = writerVersionMinor;
}

void poi::poifs::crypt::DataSpaceMapUtils_TransformInfoHeader::ctor(::poi::util::LittleEndianInput* is)
{
    super::ctor();
    init();
    npc(is)->readInt();
    transformType = npc(is)->readInt();
    transformerId = DataSpaceMapUtils::readUnicodeLPP4(is);
    transformerName = DataSpaceMapUtils::readUnicodeLPP4(is);
    readerVersionMajor = npc(is)->readShort();
    readerVersionMinor = npc(is)->readShort();
    updaterVersionMajor = npc(is)->readShort();
    updaterVersionMinor = npc(is)->readShort();
    writerVersionMajor = npc(is)->readShort();
    writerVersionMinor = npc(is)->readShort();
}

void poi::poifs::crypt::DataSpaceMapUtils_TransformInfoHeader::write(::poi::util::LittleEndianByteArrayOutputStream* bos)
{
    auto start = npc(bos)->getWriteIndex();
    auto sizeOut = npc(bos)->createDelayedOutput(::poi::util::LittleEndianConsts::INT_SIZE);
    npc(bos)->writeInt(transformType);
    DataSpaceMapUtils::writeUnicodeLPP4(bos, transformerId);
    npc(sizeOut)->writeInt(npc(bos)->getWriteIndex() - start);
    DataSpaceMapUtils::writeUnicodeLPP4(bos, transformerName);
    npc(bos)->writeShort(readerVersionMajor);
    npc(bos)->writeShort(readerVersionMinor);
    npc(bos)->writeShort(updaterVersionMajor);
    npc(bos)->writeShort(updaterVersionMinor);
    npc(bos)->writeShort(writerVersionMajor);
    npc(bos)->writeShort(writerVersionMinor);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::poifs::crypt::DataSpaceMapUtils_TransformInfoHeader::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.crypt.DataSpaceMapUtils.TransformInfoHeader", 64);
    return c;
}

java::lang::Class* poi::poifs::crypt::DataSpaceMapUtils_TransformInfoHeader::getClass0()
{
    return class_();
}

