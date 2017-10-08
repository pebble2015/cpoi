// Generated from /POI/java/org/apache/poi/poifs/storage/BlockAllocationTableReader.java
#include <org/apache/poi/poifs/storage/BlockAllocationTableReader.hpp>

#include <java/io/IOException.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/IndexOutOfBoundsException.hpp>
#include <java/lang/Math.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/List.hpp>
#include <org/apache/poi/poifs/common/POIFSBigBlockSize.hpp>
#include <org/apache/poi/poifs/common/POIFSConstants.hpp>
#include <org/apache/poi/poifs/storage/BlockList.hpp>
#include <org/apache/poi/poifs/storage/ListManagedBlock.hpp>
#include <org/apache/poi/poifs/storage/RawDataBlock.hpp>
#include <org/apache/poi/util/IntList.hpp>
#include <org/apache/poi/util/LittleEndian.hpp>
#include <org/apache/poi/util/LittleEndianConsts.hpp>
#include <org/apache/poi/util/POILogFactory.hpp>
#include <org/apache/poi/util/POILogger.hpp>
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
typedef ::SubArray< ::poi::poifs::storage::ListManagedBlock, ::java::lang::ObjectArray > ListManagedBlockArray;
typedef ::SubArray< ::poi::poifs::storage::RawDataBlock, ::java::lang::ObjectArray, ListManagedBlockArray > RawDataBlockArray;
        } // storage
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

poi::poifs::storage::BlockAllocationTableReader::BlockAllocationTableReader(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::poifs::storage::BlockAllocationTableReader::BlockAllocationTableReader(::poi::poifs::common::POIFSBigBlockSize* bigBlockSize, int32_t block_count, ::int32_tArray* block_array, int32_t xbat_count, int32_t xbat_index, BlockList* raw_block_list)  /* throws(IOException) */
    : BlockAllocationTableReader(*static_cast< ::default_init_tag* >(0))
{
    ctor(bigBlockSize,block_count,block_array,xbat_count,xbat_index,raw_block_list);
}

poi::poifs::storage::BlockAllocationTableReader::BlockAllocationTableReader(::poi::poifs::common::POIFSBigBlockSize* bigBlockSize, ListManagedBlockArray* blocks, BlockList* raw_block_list)  /* throws(IOException) */
    : BlockAllocationTableReader(*static_cast< ::default_init_tag* >(0))
{
    ctor(bigBlockSize,blocks,raw_block_list);
}

poi::poifs::storage::BlockAllocationTableReader::BlockAllocationTableReader(::poi::poifs::common::POIFSBigBlockSize* bigBlockSize) 
    : BlockAllocationTableReader(*static_cast< ::default_init_tag* >(0))
{
    ctor(bigBlockSize);
}

poi::util::POILogger*& poi::poifs::storage::BlockAllocationTableReader::_logger()
{
    clinit();
    return _logger_;
}
poi::util::POILogger* poi::poifs::storage::BlockAllocationTableReader::_logger_;

constexpr int32_t poi::poifs::storage::BlockAllocationTableReader::MAX_BLOCK_COUNT;

void poi::poifs::storage::BlockAllocationTableReader::ctor(::poi::poifs::common::POIFSBigBlockSize* bigBlockSize, int32_t block_count, ::int32_tArray* block_array, int32_t xbat_count, int32_t xbat_index, BlockList* raw_block_list) /* throws(IOException) */
{
    ctor(bigBlockSize);
    sanityCheckBlockCount(block_count);
    auto limit = ::java::lang::Math::min(block_count, npc(block_array)->length);
    int32_t block_index;
    auto blocks = new RawDataBlockArray(block_count);
    for (block_index = 0; block_index < limit; block_index++) {
        auto nextOffset = (*block_array)[block_index];
        if(nextOffset > npc(raw_block_list)->blockCount()) {
            throw new ::java::io::IOException(::java::lang::StringBuilder().append(u"Your file contains "_j)->append(npc(raw_block_list)->blockCount())
                ->append(u" sectors, but the initial DIFAT array at index "_j)
                ->append(block_index)
                ->append(u" referenced block # "_j)
                ->append(nextOffset)
                ->append(u". This isn't allowed and "_j)
                ->append(u" your file is corrupt"_j)->toString());
        }
        blocks->set(block_index, java_cast< RawDataBlock* >(npc(raw_block_list)->remove(nextOffset)));
    }
    if(block_index < block_count) {
        if(xbat_index < 0) {
            throw new ::java::io::IOException(u"BAT count exceeds limit, yet XBAT index indicates no valid entries"_j);
        }
        auto chain_index = xbat_index;
        auto max_entries_per_block = npc(bigBlockSize)->getXBATEntriesPerBlock();
        auto chain_index_offset = npc(bigBlockSize)->getNextXBATChainOffset();
        for (auto j = int32_t(0); j < xbat_count; j++) {
            limit = ::java::lang::Math::min(block_count - block_index, max_entries_per_block);
            auto data = npc(npc(raw_block_list)->remove(chain_index))->getData();
            auto offset = int32_t(0);
            for (auto k = int32_t(0); k < limit; k++) {
                blocks->set(block_index++, java_cast< RawDataBlock* >(npc(raw_block_list)->remove(::poi::util::LittleEndian::getInt(data, offset))));
                offset += ::poi::util::LittleEndianConsts::INT_SIZE;
            }
            chain_index = ::poi::util::LittleEndian::getInt(data, chain_index_offset);
            if(chain_index == ::poi::poifs::common::POIFSConstants::END_OF_CHAIN) {
                break;
            }
        }
    }
    if(block_index != block_count) {
        throw new ::java::io::IOException(u"Could not find all blocks"_j);
    }
    setEntries(blocks, raw_block_list);
}

void poi::poifs::storage::BlockAllocationTableReader::ctor(::poi::poifs::common::POIFSBigBlockSize* bigBlockSize, ListManagedBlockArray* blocks, BlockList* raw_block_list) /* throws(IOException) */
{
    ctor(bigBlockSize);
    setEntries(blocks, raw_block_list);
}

void poi::poifs::storage::BlockAllocationTableReader::ctor(::poi::poifs::common::POIFSBigBlockSize* bigBlockSize)
{
    super::ctor();
    this->bigBlockSize = bigBlockSize;
    _entries = new ::poi::util::IntList();
}

void poi::poifs::storage::BlockAllocationTableReader::sanityCheckBlockCount(int32_t block_count) /* throws(IOException) */
{
    clinit();
    if(block_count <= 0) {
        throw new ::java::io::IOException(::java::lang::StringBuilder().append(u"Illegal block count; minimum count is 1, got "_j)->append(block_count)
            ->append(u" instead"_j)->toString());
    }
    if(block_count > MAX_BLOCK_COUNT) {
        throw new ::java::io::IOException(::java::lang::StringBuilder().append(u"Block count "_j)->append(block_count)
            ->append(u" is too high. POI maximum is "_j)
            ->append(MAX_BLOCK_COUNT)
            ->append(u"."_j)->toString());
    }
}

poi::poifs::storage::ListManagedBlockArray* poi::poifs::storage::BlockAllocationTableReader::fetchBlocks(int32_t startBlock, int32_t headerPropertiesStartBlock, BlockList* blockList) /* throws(IOException) */
{
    ::java::util::List* blocks = new ::java::util::ArrayList();
    auto currentBlock = startBlock;
    auto firstPass = true;
    ListManagedBlock* dataBlock = nullptr;
    while (currentBlock != ::poi::poifs::common::POIFSConstants::END_OF_CHAIN) {
        try {
            dataBlock = npc(blockList)->remove(currentBlock);
            npc(blocks)->add(static_cast< ::java::lang::Object* >(dataBlock));
            currentBlock = npc(_entries)->get(currentBlock);
            firstPass = false;
        } catch (::java::io::IOException* e) {
            if(currentBlock == headerPropertiesStartBlock) {
                npc(_logger_)->log(::poi::util::POILogger::WARN, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(u"Warning, header block comes after data blocks in POIFS block listing"_j)}));
                currentBlock = ::poi::poifs::common::POIFSConstants::END_OF_CHAIN;
            } else if(currentBlock == 0 && firstPass) {
                npc(_logger_)->log(::poi::util::POILogger::WARN, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(u"Warning, incorrectly terminated empty data blocks in POIFS block listing (should end at -2, ended at 0)"_j)}));
                currentBlock = ::poi::poifs::common::POIFSConstants::END_OF_CHAIN;
            } else {
                throw e;
            }
        }
    }
    return java_cast< ListManagedBlockArray* >(npc(blocks)->toArray_(static_cast< ::java::lang::ObjectArray* >(new ListManagedBlockArray(npc(blocks)->size()))));
}

bool poi::poifs::storage::BlockAllocationTableReader::isUsed(int32_t index)
{
    try {
        return npc(_entries)->get(index) != -int32_t(1);
    } catch (::java::lang::IndexOutOfBoundsException* e) {
        return false;
    }
}

int32_t poi::poifs::storage::BlockAllocationTableReader::getNextBlockIndex(int32_t index) /* throws(IOException) */
{
    if(isUsed(index)) {
        return npc(_entries)->get(index);
    }
    throw new ::java::io::IOException(::java::lang::StringBuilder().append(u"index "_j)->append(index)
        ->append(u" is unused"_j)->toString());
}

void poi::poifs::storage::BlockAllocationTableReader::setEntries(ListManagedBlockArray* blocks, BlockList* raw_blocks) /* throws(IOException) */
{
    auto limit = npc(bigBlockSize)->getBATEntriesPerBlock();
    for (auto block_index = int32_t(0); block_index < npc(blocks)->length; block_index++) {
        auto data = npc((*blocks)[block_index])->getData();
        auto offset = int32_t(0);
        for (auto k = int32_t(0); k < limit; k++) {
            auto entry = ::poi::util::LittleEndian::getInt(data, offset);
            if(entry == ::poi::poifs::common::POIFSConstants::UNUSED_BLOCK) {
                npc(raw_blocks)->zap(npc(_entries)->size());
            }
            npc(_entries)->add(entry);
            offset += ::poi::util::LittleEndianConsts::INT_SIZE;
        }
        blocks->set(block_index, nullptr);
    }
    npc(raw_blocks)->setBAT(this);
}

poi::util::IntList* poi::poifs::storage::BlockAllocationTableReader::getEntries()
{
    return _entries;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::poifs::storage::BlockAllocationTableReader::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.storage.BlockAllocationTableReader", 55);
    return c;
}

void poi::poifs::storage::BlockAllocationTableReader::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        _logger_ = ::poi::util::POILogFactory::getLogger(static_cast< ::java::lang::Class* >(BlockAllocationTableReader::class_()));
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* poi::poifs::storage::BlockAllocationTableReader::getClass0()
{
    return class_();
}

