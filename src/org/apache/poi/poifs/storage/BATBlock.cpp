// Generated from /POI/java/org/apache/poi/poifs/storage/BATBlock.java
#include <org/apache/poi/poifs/storage/BATBlock.hpp>

#include <java/io/OutputStream.hpp>
#include <java/lang/ArrayIndexOutOfBoundsException.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/nio/ByteBuffer.hpp>
#include <java/util/Arrays.hpp>
#include <java/util/List.hpp>
#include <org/apache/poi/poifs/common/POIFSBigBlockSize.hpp>
#include <org/apache/poi/poifs/common/POIFSConstants.hpp>
#include <org/apache/poi/poifs/storage/BATBlock_BATBlockAndIndex.hpp>
#include <org/apache/poi/poifs/storage/BigBlock.hpp>
#include <org/apache/poi/poifs/storage/BlockWritable.hpp>
#include <org/apache/poi/poifs/storage/HeaderBlock.hpp>
#include <org/apache/poi/util/LittleEndian.hpp>
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

poi::poifs::storage::BATBlock::BATBlock(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::poifs::storage::BATBlock::BATBlock(::poi::poifs::common::POIFSBigBlockSize* bigBlockSize) 
    : BATBlock(*static_cast< ::default_init_tag* >(0))
{
    ctor(bigBlockSize);
}

poi::poifs::storage::BATBlock::BATBlock(::poi::poifs::common::POIFSBigBlockSize* bigBlockSize, ::int32_tArray* entries, int32_t start_index, int32_t end_index) 
    : BATBlock(*static_cast< ::default_init_tag* >(0))
{
    ctor(bigBlockSize,entries,start_index,end_index);
}

void poi::poifs::storage::BATBlock::ctor(::poi::poifs::common::POIFSBigBlockSize* bigBlockSize)
{
    super::ctor(bigBlockSize);
    auto _entries_per_block = npc(bigBlockSize)->getBATEntriesPerBlock();
    _values = new ::int32_tArray(_entries_per_block);
    _has_free_sectors = true;
    ::java::util::Arrays::fill(_values, ::poi::poifs::common::POIFSConstants::UNUSED_BLOCK);
}

void poi::poifs::storage::BATBlock::ctor(::poi::poifs::common::POIFSBigBlockSize* bigBlockSize, ::int32_tArray* entries, int32_t start_index, int32_t end_index)
{
    ctor(bigBlockSize);
    for (auto k = start_index; k < end_index; k++) {
        (*_values)[k - start_index] = (*entries)[k];
    }
    if(end_index - start_index == npc(_values)->length) {
        recomputeFree();
    }
}

void poi::poifs::storage::BATBlock::recomputeFree()
{
    auto hasFree = false;
    for (auto k = int32_t(0); k < npc(_values)->length; k++) {
        if((*_values)[k] == ::poi::poifs::common::POIFSConstants::UNUSED_BLOCK) {
            hasFree = true;
            break;
        }
    }
    _has_free_sectors = hasFree;
}

poi::poifs::storage::BATBlock* poi::poifs::storage::BATBlock::createBATBlock(::poi::poifs::common::POIFSBigBlockSize* bigBlockSize, ::java::nio::ByteBuffer* data)
{
    clinit();
    auto block = new BATBlock(bigBlockSize);
    auto buffer = new ::int8_tArray(::poi::util::LittleEndian::INT_SIZE);
    for (auto i = int32_t(0); i < npc(npc(block)->_values)->length; i++) {
        npc(data)->get(buffer);
        (*npc(block)->_values)[i] = ::poi::util::LittleEndian::getInt(buffer);
    }
    npc(block)->recomputeFree();
    return block;
}

poi::poifs::storage::BATBlock* poi::poifs::storage::BATBlock::createEmptyBATBlock(::poi::poifs::common::POIFSBigBlockSize* bigBlockSize, bool isXBAT)
{
    clinit();
    auto block = new BATBlock(bigBlockSize);
    if(isXBAT) {
        npc(block)->setXBATChain(bigBlockSize, ::poi::poifs::common::POIFSConstants::END_OF_CHAIN);
    }
    return block;
}

poi::poifs::storage::BATBlockArray* poi::poifs::storage::BATBlock::createBATBlocks(::poi::poifs::common::POIFSBigBlockSize* bigBlockSize, ::int32_tArray* entries)
{
    clinit();
    auto block_count = calculateStorageRequirements(bigBlockSize, npc(entries)->length);
    auto blocks = new BATBlockArray(block_count);
    auto index = int32_t(0);
    auto remaining = npc(entries)->length;
    auto _entries_per_block = npc(bigBlockSize)->getBATEntriesPerBlock();
    for (auto j = int32_t(0); j < npc(entries)->length; j += _entries_per_block) {
        blocks->set(index++, new BATBlock(bigBlockSize, entries, j, (remaining > _entries_per_block) ? j + _entries_per_block : npc(entries)->length));
        remaining -= _entries_per_block;
    }
    return blocks;
}

poi::poifs::storage::BATBlockArray* poi::poifs::storage::BATBlock::createXBATBlocks(::poi::poifs::common::POIFSBigBlockSize* bigBlockSize, ::int32_tArray* entries, int32_t startBlock)
{
    clinit();
    auto block_count = calculateXBATStorageRequirements(bigBlockSize, npc(entries)->length);
    auto blocks = new BATBlockArray(block_count);
    auto index = int32_t(0);
    auto remaining = npc(entries)->length;
    auto _entries_per_xbat_block = npc(bigBlockSize)->getXBATEntriesPerBlock();
    if(block_count != 0) {
        for (auto j = int32_t(0); j < npc(entries)->length; j += _entries_per_xbat_block) {
            blocks->set(index++, new BATBlock(bigBlockSize, entries, j, (remaining > _entries_per_xbat_block) ? j + _entries_per_xbat_block : npc(entries)->length));
            remaining -= _entries_per_xbat_block;
        }
        for (index = 0; index < npc(blocks)->length - int32_t(1); index++) {
            npc((*blocks)[index])->setXBATChain(bigBlockSize, startBlock + index + int32_t(1));
        }
        npc((*blocks)[index])->setXBATChain(bigBlockSize, ::poi::poifs::common::POIFSConstants::END_OF_CHAIN);
    }
    return blocks;
}

int32_t poi::poifs::storage::BATBlock::calculateStorageRequirements(::poi::poifs::common::POIFSBigBlockSize* bigBlockSize, int32_t entryCount)
{
    clinit();
    auto _entries_per_block = npc(bigBlockSize)->getBATEntriesPerBlock();
    return (entryCount + _entries_per_block - int32_t(1)) / _entries_per_block;
}

int32_t poi::poifs::storage::BATBlock::calculateXBATStorageRequirements(::poi::poifs::common::POIFSBigBlockSize* bigBlockSize, int32_t entryCount)
{
    clinit();
    auto _entries_per_xbat_block = npc(bigBlockSize)->getXBATEntriesPerBlock();
    return (entryCount + _entries_per_xbat_block - int32_t(1)) / _entries_per_xbat_block;
}

int64_t poi::poifs::storage::BATBlock::calculateMaximumSize(::poi::poifs::common::POIFSBigBlockSize* bigBlockSize, int32_t numBATs)
{
    clinit();
    int64_t size = int32_t(1);
    size += ((static_cast< int64_t >(numBATs)) * npc(bigBlockSize)->getBATEntriesPerBlock());
    return size * npc(bigBlockSize)->getBigBlockSize();
}

int64_t poi::poifs::storage::BATBlock::calculateMaximumSize(HeaderBlock* header)
{
    clinit();
    return calculateMaximumSize(npc(header)->getBigBlockSize(), npc(header)->getBATCount());
}

poi::poifs::storage::BATBlock_BATBlockAndIndex* poi::poifs::storage::BATBlock::getBATBlockAndIndex(int32_t offset, HeaderBlock* header, ::java::util::List* bats)
{
    clinit();
    auto bigBlockSize = npc(header)->getBigBlockSize();
    auto entriesPerBlock = npc(bigBlockSize)->getBATEntriesPerBlock();
    auto whichBAT = offset / entriesPerBlock;
    auto index = offset % entriesPerBlock;
    return new BATBlock_BATBlockAndIndex(index, java_cast< BATBlock* >(npc(bats)->get(whichBAT)));
}

poi::poifs::storage::BATBlock_BATBlockAndIndex* poi::poifs::storage::BATBlock::getSBATBlockAndIndex(int32_t offset, HeaderBlock* header, ::java::util::List* sbats)
{
    clinit();
    auto bigBlockSize = npc(header)->getBigBlockSize();
    auto entriesPerBlock = npc(bigBlockSize)->getBATEntriesPerBlock();
    auto whichSBAT = offset / entriesPerBlock;
    auto index = offset % entriesPerBlock;
    return new BATBlock_BATBlockAndIndex(index, java_cast< BATBlock* >(npc(sbats)->get(whichSBAT)));
}

void poi::poifs::storage::BATBlock::setXBATChain(::poi::poifs::common::POIFSBigBlockSize* bigBlockSize, int32_t chainIndex)
{
    auto _entries_per_xbat_block = npc(bigBlockSize)->getXBATEntriesPerBlock();
    (*_values)[_entries_per_xbat_block] = chainIndex;
}

bool poi::poifs::storage::BATBlock::hasFreeSectors()
{
    return _has_free_sectors;
}

int32_t poi::poifs::storage::BATBlock::getUsedSectors(bool isAnXBAT)
{
    auto usedSectors = int32_t(0);
    auto toCheck = npc(_values)->length;
    if(isAnXBAT)
        toCheck--;

    for (auto k = int32_t(0); k < toCheck; k++) {
        if((*_values)[k] != ::poi::poifs::common::POIFSConstants::UNUSED_BLOCK) {
            usedSectors++;
        }
    }
    return usedSectors;
}

int32_t poi::poifs::storage::BATBlock::getValueAt(int32_t relativeOffset)
{
    if(relativeOffset >= npc(_values)->length) {
        throw new ::java::lang::ArrayIndexOutOfBoundsException(::java::lang::StringBuilder().append(u"Unable to fetch offset "_j)->append(relativeOffset)
            ->append(u" as the "_j)
            ->append(u"BAT only contains "_j)
            ->append(npc(_values)->length)
            ->append(u" entries"_j)->toString());
    }
    return (*_values)[relativeOffset];
}

void poi::poifs::storage::BATBlock::setValueAt(int32_t relativeOffset, int32_t value)
{
    auto oldValue = (*_values)[relativeOffset];
    (*_values)[relativeOffset] = value;
    if(value == ::poi::poifs::common::POIFSConstants::UNUSED_BLOCK) {
        _has_free_sectors = true;
        return;
    }
    if(oldValue == ::poi::poifs::common::POIFSConstants::UNUSED_BLOCK) {
        recomputeFree();
    }
}

void poi::poifs::storage::BATBlock::setOurBlockIndex(int32_t index)
{
    this->ourBlockIndex = index;
}

int32_t poi::poifs::storage::BATBlock::getOurBlockIndex()
{
    return ourBlockIndex;
}

void poi::poifs::storage::BATBlock::writeData(::java::io::OutputStream* stream) /* throws(IOException) */
{
    npc(stream)->write(serialize());
}

void poi::poifs::storage::BATBlock::writeData(::java::nio::ByteBuffer* block) /* throws(IOException) */
{
    npc(block)->put(serialize());
}

int8_tArray* poi::poifs::storage::BATBlock::serialize()
{
    auto data = new ::int8_tArray(npc(bigBlockSize)->getBigBlockSize());
    auto offset = int32_t(0);
    for (auto i = int32_t(0); i < npc(_values)->length; i++) {
        ::poi::util::LittleEndian::putInt(data, offset, (*_values)[i]);
        offset += ::poi::util::LittleEndian::INT_SIZE;
    }
    return data;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::poifs::storage::BATBlock::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.storage.BATBlock", 37);
    return c;
}

java::lang::Class* poi::poifs::storage::BATBlock::getClass0()
{
    return class_();
}

