// Generated from /POI/java/org/apache/poi/poifs/filesystem/NPOIFSStream.java
#include <org/apache/poi/poifs/filesystem/NPOIFSStream_StreamBlockByteBuffer.hpp>

#include <java/lang/IndexOutOfBoundsException.hpp>
#include <java/lang/Math.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/nio/ByteBuffer.hpp>
#include <org/apache/poi/poifs/common/POIFSConstants.hpp>
#include <org/apache/poi/poifs/filesystem/BlockStore_ChainLoopDetector.hpp>
#include <org/apache/poi/poifs/filesystem/BlockStore.hpp>
#include <org/apache/poi/poifs/filesystem/NPOIFSStream.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::poifs::filesystem::NPOIFSStream_StreamBlockByteBuffer::NPOIFSStream_StreamBlockByteBuffer(NPOIFSStream *NPOIFSStream_this, const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
    , NPOIFSStream_this(NPOIFSStream_this)
{
    clinit();
}

poi::poifs::filesystem::NPOIFSStream_StreamBlockByteBuffer::NPOIFSStream_StreamBlockByteBuffer(NPOIFSStream *NPOIFSStream_this)  /* throws(IOException) */
    : NPOIFSStream_StreamBlockByteBuffer(NPOIFSStream_this, *static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void poi::poifs::filesystem::NPOIFSStream_StreamBlockByteBuffer::init()
{
    oneByte = new ::int8_tArray(int32_t(1));
}

void poi::poifs::filesystem::NPOIFSStream_StreamBlockByteBuffer::ctor() /* throws(IOException) */
{
    super::ctor();
    init();
    loopDetector = npc(NPOIFSStream_this->blockStore)->getChainLoopDetector();
    prevBlock = ::poi::poifs::common::POIFSConstants::END_OF_CHAIN;
    nextBlock = NPOIFSStream_this->startBlock;
}

void poi::poifs::filesystem::NPOIFSStream_StreamBlockByteBuffer::createBlockIfNeeded() /* throws(IOException) */
{
    if(buffer != nullptr && npc(buffer)->hasRemaining())
        return;

    auto thisBlock = nextBlock;
    if(thisBlock == ::poi::poifs::common::POIFSConstants::END_OF_CHAIN) {
        thisBlock = npc(NPOIFSStream_this->blockStore)->getFreeBlock();
        npc(loopDetector)->claim(thisBlock);
        nextBlock = ::poi::poifs::common::POIFSConstants::END_OF_CHAIN;
        if(prevBlock != ::poi::poifs::common::POIFSConstants::END_OF_CHAIN) {
            npc(NPOIFSStream_this->blockStore)->setNextBlock(prevBlock, thisBlock);
        }
        npc(NPOIFSStream_this->blockStore)->setNextBlock(thisBlock, ::poi::poifs::common::POIFSConstants::END_OF_CHAIN);
        if(NPOIFSStream_this->startBlock == ::poi::poifs::common::POIFSConstants::END_OF_CHAIN) {
            NPOIFSStream_this->startBlock = thisBlock;
        }
    } else {
        npc(loopDetector)->claim(thisBlock);
        nextBlock = npc(NPOIFSStream_this->blockStore)->getNextBlock(thisBlock);
    }
    buffer = npc(NPOIFSStream_this->blockStore)->createBlockIfNeeded(thisBlock);
    prevBlock = thisBlock;
}

void poi::poifs::filesystem::NPOIFSStream_StreamBlockByteBuffer::write(int32_t b) /* throws(IOException) */
{
    (*oneByte)[int32_t(0)] = static_cast< int8_t >((b & int32_t(255)));
    write(oneByte);
}

void poi::poifs::filesystem::NPOIFSStream_StreamBlockByteBuffer::write(::int8_tArray* b, int32_t off, int32_t len) /* throws(IOException) */
{
    if((off < 0) || (off > npc(b)->length) || (len < 0)|| ((off + len) > npc(b)->length)|| ((off + len) < 0)) {
        throw new ::java::lang::IndexOutOfBoundsException();
    } else if(len == 0) {
        return;
    }
    do {
        createBlockIfNeeded();
        auto writeBytes = ::java::lang::Math::min(npc(buffer)->remaining(), len);
        npc(buffer)->put(b, off, writeBytes);
        off += writeBytes;
        len -= writeBytes;
    } while (len > 0);
}

void poi::poifs::filesystem::NPOIFSStream_StreamBlockByteBuffer::close() /* throws(IOException) */
{
    auto toFree = new NPOIFSStream(NPOIFSStream_this->blockStore, nextBlock);
    npc(toFree)->free(loopDetector);
    if(prevBlock != ::poi::poifs::common::POIFSConstants::END_OF_CHAIN) {
        npc(NPOIFSStream_this->blockStore)->setNextBlock(prevBlock, ::poi::poifs::common::POIFSConstants::END_OF_CHAIN);
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::poifs::filesystem::NPOIFSStream_StreamBlockByteBuffer::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.filesystem.NPOIFSStream.StreamBlockByteBuffer", 66);
    return c;
}

void poi::poifs::filesystem::NPOIFSStream_StreamBlockByteBuffer::write(::int8_tArray* b)
{
    super::write(b);
}

java::lang::Class* poi::poifs::filesystem::NPOIFSStream_StreamBlockByteBuffer::getClass0()
{
    return class_();
}

