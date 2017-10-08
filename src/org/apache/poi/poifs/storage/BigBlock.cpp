// Generated from /POI/java/org/apache/poi/poifs/storage/BigBlock.java
#include <org/apache/poi/poifs/storage/BigBlock.hpp>

#include <java/io/OutputStream.hpp>
#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/poifs/common/POIFSBigBlockSize.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::poifs::storage::BigBlock::BigBlock(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::poifs::storage::BigBlock::BigBlock(::poi::poifs::common::POIFSBigBlockSize* bigBlockSize) 
    : BigBlock(*static_cast< ::default_init_tag* >(0))
{
    ctor(bigBlockSize);
}

void poi::poifs::storage::BigBlock::ctor(::poi::poifs::common::POIFSBigBlockSize* bigBlockSize)
{
    super::ctor();
    this->bigBlockSize = bigBlockSize;
}

void poi::poifs::storage::BigBlock::doWriteData(::java::io::OutputStream* stream, ::int8_tArray* data) /* throws(IOException) */
{
    npc(stream)->write(data);
}

void poi::poifs::storage::BigBlock::writeBlocks(::java::io::OutputStream* stream) /* throws(IOException) */
{
    writeData(stream);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::poifs::storage::BigBlock::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.storage.BigBlock", 37);
    return c;
}

java::lang::Class* poi::poifs::storage::BigBlock::getClass0()
{
    return class_();
}

