// Generated from /POI/java/org/apache/poi/poifs/filesystem/NPOIFSStream.java
#include <org/apache/poi/poifs/filesystem/NPOIFSStream.hpp>

#include <java/io/OutputStream.hpp>
#include <java/lang/IllegalStateException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/util/Iterator.hpp>
#include <org/apache/poi/poifs/common/POIFSConstants.hpp>
#include <org/apache/poi/poifs/filesystem/BlockStore_ChainLoopDetector.hpp>
#include <org/apache/poi/poifs/filesystem/BlockStore.hpp>
#include <org/apache/poi/poifs/filesystem/NPOIFSStream_StreamBlockByteBuffer.hpp>
#include <org/apache/poi/poifs/filesystem/NPOIFSStream_StreamBlockByteBufferIterator.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::poifs::filesystem::NPOIFSStream::NPOIFSStream(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::poifs::filesystem::NPOIFSStream::NPOIFSStream(BlockStore* blockStore, int32_t startBlock) 
    : NPOIFSStream(*static_cast< ::default_init_tag* >(0))
{
    ctor(blockStore,startBlock);
}

poi::poifs::filesystem::NPOIFSStream::NPOIFSStream(BlockStore* blockStore) 
    : NPOIFSStream(*static_cast< ::default_init_tag* >(0))
{
    ctor(blockStore);
}

void poi::poifs::filesystem::NPOIFSStream::ctor(BlockStore* blockStore, int32_t startBlock)
{
    super::ctor();
    this->blockStore = blockStore;
    this->startBlock = startBlock;
}

void poi::poifs::filesystem::NPOIFSStream::ctor(BlockStore* blockStore)
{
    super::ctor();
    this->blockStore = blockStore;
    this->startBlock = ::poi::poifs::common::POIFSConstants::END_OF_CHAIN;
}

int32_t poi::poifs::filesystem::NPOIFSStream::getStartBlock()
{
    return startBlock;
}

java::util::Iterator* poi::poifs::filesystem::NPOIFSStream::iterator()
{
    return getBlockIterator();
}

java::util::Iterator* poi::poifs::filesystem::NPOIFSStream::getBlockIterator()
{
    if(startBlock == ::poi::poifs::common::POIFSConstants::END_OF_CHAIN) {
        throw new ::java::lang::IllegalStateException(u"Can't read from a new stream before it has been written to"_j);
    }
    return new NPOIFSStream_StreamBlockByteBufferIterator(this, startBlock);
}

void poi::poifs::filesystem::NPOIFSStream::updateContents(::int8_tArray* contents) /* throws(IOException) */
{
    auto os = getOutputStream();
    npc(os)->write(contents);
    npc(os)->close();
}

java::io::OutputStream* poi::poifs::filesystem::NPOIFSStream::getOutputStream() /* throws(IOException) */
{
    if(outStream == nullptr) {
        outStream = new NPOIFSStream_StreamBlockByteBuffer(this);
    }
    return outStream;
}

void poi::poifs::filesystem::NPOIFSStream::free() /* throws(IOException) */
{
    auto loopDetector = npc(blockStore)->getChainLoopDetector();
    free(loopDetector);
}

void poi::poifs::filesystem::NPOIFSStream::free(BlockStore_ChainLoopDetector* loopDetector)
{
    auto nextBlock = startBlock;
    while (nextBlock != ::poi::poifs::common::POIFSConstants::END_OF_CHAIN) {
        auto thisBlock = nextBlock;
        npc(loopDetector)->claim(thisBlock);
        nextBlock = npc(blockStore)->getNextBlock(thisBlock);
        npc(blockStore)->setNextBlock(thisBlock, ::poi::poifs::common::POIFSConstants::UNUSED_BLOCK);
    }
    this->startBlock = ::poi::poifs::common::POIFSConstants::END_OF_CHAIN;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::poifs::filesystem::NPOIFSStream::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.filesystem.NPOIFSStream", 44);
    return c;
}

java::lang::Class* poi::poifs::filesystem::NPOIFSStream::getClass0()
{
    return class_();
}

