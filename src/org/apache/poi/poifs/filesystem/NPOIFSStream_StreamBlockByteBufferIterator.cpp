// Generated from /POI/java/org/apache/poi/poifs/filesystem/NPOIFSStream.java
#include <org/apache/poi/poifs/filesystem/NPOIFSStream_StreamBlockByteBufferIterator.hpp>

#include <java/io/IOException.hpp>
#include <java/lang/IndexOutOfBoundsException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/Throwable.hpp>
#include <java/lang/UnsupportedOperationException.hpp>
#include <java/nio/ByteBuffer.hpp>
#include <org/apache/poi/poifs/common/POIFSConstants.hpp>
#include <org/apache/poi/poifs/filesystem/BlockStore_ChainLoopDetector.hpp>
#include <org/apache/poi/poifs/filesystem/BlockStore.hpp>
#include <org/apache/poi/poifs/filesystem/NPOIFSStream.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::poifs::filesystem::NPOIFSStream_StreamBlockByteBufferIterator::NPOIFSStream_StreamBlockByteBufferIterator(NPOIFSStream *NPOIFSStream_this, const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
    , NPOIFSStream_this(NPOIFSStream_this)
{
    clinit();
}

org::apache::poi::poifs::filesystem::NPOIFSStream_StreamBlockByteBufferIterator::NPOIFSStream_StreamBlockByteBufferIterator(NPOIFSStream *NPOIFSStream_this, int32_t firstBlock) 
    : NPOIFSStream_StreamBlockByteBufferIterator(NPOIFSStream_this, *static_cast< ::default_init_tag* >(0))
{
    ctor(firstBlock);
}

void org::apache::poi::poifs::filesystem::NPOIFSStream_StreamBlockByteBufferIterator::ctor(int32_t firstBlock)
{
    super::ctor();
    this->nextBlock = firstBlock;
    try {
        this->loopDetector = npc(NPOIFSStream_this->blockStore)->getChainLoopDetector();
    } catch (::java::io::IOException* e) {
        throw new ::java::lang::RuntimeException(static_cast< ::java::lang::Throwable* >(e));
    }
}

bool org::apache::poi::poifs::filesystem::NPOIFSStream_StreamBlockByteBufferIterator::hasNext()
{
    if(nextBlock == ::org::apache::poi::poifs::common::POIFSConstants::END_OF_CHAIN) {
        return false;
    }
    return true;
}

java::nio::ByteBuffer* org::apache::poi::poifs::filesystem::NPOIFSStream_StreamBlockByteBufferIterator::next()
{
    if(nextBlock == ::org::apache::poi::poifs::common::POIFSConstants::END_OF_CHAIN) {
        throw new ::java::lang::IndexOutOfBoundsException(u"Can't read past the end of the stream"_j);
    }
    try {
        npc(loopDetector)->claim(nextBlock);
        auto data = npc(NPOIFSStream_this->blockStore)->getBlockAt(nextBlock);
        nextBlock = npc(NPOIFSStream_this->blockStore)->getNextBlock(nextBlock);
        return data;
    } catch (::java::io::IOException* e) {
        throw new ::java::lang::RuntimeException(static_cast< ::java::lang::Throwable* >(e));
    }
}

void org::apache::poi::poifs::filesystem::NPOIFSStream_StreamBlockByteBufferIterator::remove()
{
    throw new ::java::lang::UnsupportedOperationException();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::poifs::filesystem::NPOIFSStream_StreamBlockByteBufferIterator::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.filesystem.NPOIFSStream.StreamBlockByteBufferIterator", 74);
    return c;
}

java::lang::Class* org::apache::poi::poifs::filesystem::NPOIFSStream_StreamBlockByteBufferIterator::getClass0()
{
    return class_();
}

