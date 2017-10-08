// Generated from /POI/java/org/apache/poi/poifs/storage/HeaderBlockWriter.java
#include <org/apache/poi/poifs/storage/HeaderBlockWriter.hpp>

#include <java/io/ByteArrayOutputStream.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Math.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/nio/ByteBuffer.hpp>
#include <org/apache/poi/poifs/common/POIFSBigBlockSize.hpp>
#include <org/apache/poi/poifs/common/POIFSConstants.hpp>
#include <org/apache/poi/poifs/storage/BATBlock.hpp>
#include <org/apache/poi/poifs/storage/BigBlock.hpp>
#include <org/apache/poi/poifs/storage/BlockWritable.hpp>
#include <org/apache/poi/poifs/storage/HeaderBlock.hpp>
#include <Array.hpp>
#include <ObjectArray.hpp>
#include <SubArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace poi
{
    namespace poifs
    {
        namespace storage
        {
typedef ::SubArray< ::poi::poifs::storage::BlockWritable, ::java::lang::ObjectArray > BlockWritableArray;
typedef ::SubArray< ::poi::poifs::storage::BigBlock, ::java::lang::ObjectArray, BlockWritableArray > BigBlockArray;
typedef ::SubArray< ::poi::poifs::storage::BATBlock, BigBlockArray > BATBlockArray;
        } // storage
    } // poifs
} // poi

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::poifs::storage::HeaderBlockWriter::HeaderBlockWriter(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::poifs::storage::HeaderBlockWriter::HeaderBlockWriter(::poi::poifs::common::POIFSBigBlockSize* bigBlockSize) 
    : HeaderBlockWriter(*static_cast< ::default_init_tag* >(0))
{
    ctor(bigBlockSize);
}

poi::poifs::storage::HeaderBlockWriter::HeaderBlockWriter(HeaderBlock* headerBlock) 
    : HeaderBlockWriter(*static_cast< ::default_init_tag* >(0))
{
    ctor(headerBlock);
}

void poi::poifs::storage::HeaderBlockWriter::ctor(::poi::poifs::common::POIFSBigBlockSize* bigBlockSize)
{
    super::ctor();
    _header_block = new HeaderBlock(bigBlockSize);
}

void poi::poifs::storage::HeaderBlockWriter::ctor(HeaderBlock* headerBlock)
{
    super::ctor();
    _header_block = headerBlock;
}

poi::poifs::storage::BATBlockArray* poi::poifs::storage::HeaderBlockWriter::setBATBlocks(int32_t blockCount, int32_t startBlock)
{
    BATBlockArray* rvalue;
    auto bigBlockSize = npc(_header_block)->getBigBlockSize();
    npc(_header_block)->setBATCount(blockCount);
    auto limit = ::java::lang::Math::min(blockCount, _max_bats_in_header);
    auto bat_blocks = new ::int32_tArray(limit);
    for (auto j = int32_t(0); j < limit; j++) {
        (*bat_blocks)[j] = startBlock + j;
    }
    npc(_header_block)->setBATArray_(bat_blocks);
    if(blockCount > _max_bats_in_header) {
        auto excess_blocks = blockCount - _max_bats_in_header;
        auto excess_block_array = new ::int32_tArray(excess_blocks);
        for (auto j = int32_t(0); j < excess_blocks; j++) {
            (*excess_block_array)[j] = startBlock + j + _max_bats_in_header;
        }
        rvalue = BATBlock::createXBATBlocks(bigBlockSize, excess_block_array, startBlock + blockCount);
        npc(_header_block)->setXBATStart(startBlock + blockCount);
    } else {
        rvalue = BATBlock::createXBATBlocks(bigBlockSize, new ::int32_tArray(int32_t(0)), 0);
        npc(_header_block)->setXBATStart(::poi::poifs::common::POIFSConstants::END_OF_CHAIN);
    }
    npc(_header_block)->setXBATCount(npc(rvalue)->length);
    return rvalue;
}

void poi::poifs::storage::HeaderBlockWriter::setPropertyStart(int32_t startBlock)
{
    npc(_header_block)->setPropertyStart(startBlock);
}

void poi::poifs::storage::HeaderBlockWriter::setSBATStart(int32_t startBlock)
{
    npc(_header_block)->setSBATStart(startBlock);
}

void poi::poifs::storage::HeaderBlockWriter::setSBATBlockCount(int32_t count)
{
    npc(_header_block)->setSBATBlockCount(count);
}

int32_t poi::poifs::storage::HeaderBlockWriter::calculateXBATStorageRequirements(::poi::poifs::common::POIFSBigBlockSize* bigBlockSize, int32_t blockCount)
{
    clinit();
    return (blockCount > _max_bats_in_header) ? BATBlock::calculateXBATStorageRequirements(bigBlockSize, blockCount - _max_bats_in_header) : int32_t(0);
}

void poi::poifs::storage::HeaderBlockWriter::writeBlocks(::java::io::OutputStream* stream) /* throws(IOException) */
{
    npc(_header_block)->writeData(stream);
}

void poi::poifs::storage::HeaderBlockWriter::writeBlock(::java::nio::ByteBuffer* block) /* throws(IOException) */
{
    auto baos = new ::java::io::ByteArrayOutputStream(npc(npc(_header_block)->getBigBlockSize())->getBigBlockSize());
    npc(_header_block)->writeData(baos);
    npc(block)->put(npc(baos)->toByteArray_());
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::poifs::storage::HeaderBlockWriter::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.storage.HeaderBlockWriter", 46);
    return c;
}

java::lang::Class* poi::poifs::storage::HeaderBlockWriter::getClass0()
{
    return class_();
}

