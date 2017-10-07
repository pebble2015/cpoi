// Generated from /POI/java/org/apache/poi/poifs/storage/BlockAllocationTableWriter.java
#include <org/apache/poi/poifs/storage/BlockAllocationTableWriter.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/poifs/common/POIFSBigBlockSize.hpp>
#include <org/apache/poi/poifs/common/POIFSConstants.hpp>
#include <org/apache/poi/poifs/storage/BATBlock.hpp>
#include <org/apache/poi/poifs/storage/BigBlock.hpp>
#include <org/apache/poi/poifs/storage/BlockWritable.hpp>
#include <org/apache/poi/poifs/storage/HeaderBlockWriter.hpp>
#include <org/apache/poi/util/IntList.hpp>
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
                namespace storage
                {
typedef ::SubArray< ::org::apache::poi::poifs::storage::BlockWritable, ::java::lang::ObjectArray > BlockWritableArray;
typedef ::SubArray< ::org::apache::poi::poifs::storage::BigBlock, ::java::lang::ObjectArray, BlockWritableArray > BigBlockArray;
typedef ::SubArray< ::org::apache::poi::poifs::storage::BATBlock, BigBlockArray > BATBlockArray;
                } // storage
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

org::apache::poi::poifs::storage::BlockAllocationTableWriter::BlockAllocationTableWriter(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::poifs::storage::BlockAllocationTableWriter::BlockAllocationTableWriter(::org::apache::poi::poifs::common::POIFSBigBlockSize* bigBlockSize) 
    : BlockAllocationTableWriter(*static_cast< ::default_init_tag* >(0))
{
    ctor(bigBlockSize);
}

void org::apache::poi::poifs::storage::BlockAllocationTableWriter::ctor(::org::apache::poi::poifs::common::POIFSBigBlockSize* bigBlockSize)
{
    super::ctor();
    _bigBlockSize = bigBlockSize;
    _start_block = ::org::apache::poi::poifs::common::POIFSConstants::END_OF_CHAIN;
    _entries = new ::org::apache::poi::util::IntList();
    _blocks = new BATBlockArray(int32_t(0));
}

int32_t org::apache::poi::poifs::storage::BlockAllocationTableWriter::createBlocks()
{
    auto xbat_blocks = int32_t(0);
    auto bat_blocks = int32_t(0);
    while (true) {
        auto calculated_bat_blocks = BATBlock::calculateStorageRequirements(_bigBlockSize, bat_blocks + xbat_blocks + npc(_entries)->size());
        auto calculated_xbat_blocks = HeaderBlockWriter::calculateXBATStorageRequirements(_bigBlockSize, calculated_bat_blocks);
        if((bat_blocks == calculated_bat_blocks) && (xbat_blocks == calculated_xbat_blocks)) {
            break;
        }
        bat_blocks = calculated_bat_blocks;
        xbat_blocks = calculated_xbat_blocks;
    }
    auto startBlock = allocateSpace(bat_blocks);
    allocateSpace(xbat_blocks);
    simpleCreateBlocks();
    return startBlock;
}

int32_t org::apache::poi::poifs::storage::BlockAllocationTableWriter::allocateSpace(int32_t blockCount)
{
    auto startBlock = npc(_entries)->size();
    if(blockCount > 0) {
        auto limit = blockCount - int32_t(1);
        auto index = startBlock + int32_t(1);
        for (auto k = int32_t(0); k < limit; k++) {
            npc(_entries)->add(index++);
        }
        npc(_entries)->add(::org::apache::poi::poifs::common::POIFSConstants::END_OF_CHAIN);
    }
    return startBlock;
}

int32_t org::apache::poi::poifs::storage::BlockAllocationTableWriter::getStartBlock()
{
    return _start_block;
}

void org::apache::poi::poifs::storage::BlockAllocationTableWriter::simpleCreateBlocks()
{
    _blocks = BATBlock::createBATBlocks(_bigBlockSize, npc(_entries)->toArray_());
}

void org::apache::poi::poifs::storage::BlockAllocationTableWriter::writeBlocks(::java::io::OutputStream* stream) /* throws(IOException) */
{
    for (auto j = int32_t(0); j < npc(_blocks)->length; j++) {
        npc((*_blocks)[j])->writeBlocks(stream);
    }
}

void org::apache::poi::poifs::storage::BlockAllocationTableWriter::writeBlock(BATBlock* bat, ::java::nio::ByteBuffer* block) /* throws(IOException) */
{
    clinit();
    npc(bat)->writeData(block);
}

int32_t org::apache::poi::poifs::storage::BlockAllocationTableWriter::countBlocks()
{
    return npc(_blocks)->length;
}

void org::apache::poi::poifs::storage::BlockAllocationTableWriter::setStartBlock(int32_t start_block)
{
    _start_block = start_block;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::poifs::storage::BlockAllocationTableWriter::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.storage.BlockAllocationTableWriter", 55);
    return c;
}

java::lang::Class* org::apache::poi::poifs::storage::BlockAllocationTableWriter::getClass0()
{
    return class_();
}

