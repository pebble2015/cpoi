// Generated from /POI/java/org/apache/poi/poifs/storage/SmallDocumentBlock.java
#include <org/apache/poi/poifs/storage/SmallDocumentBlock.hpp>

#include <java/io/ByteArrayOutputStream.hpp>
#include <java/io/OutputStream.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Math.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/System.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/Arrays.hpp>
#include <java/util/List.hpp>
#include <org/apache/poi/poifs/common/POIFSBigBlockSize.hpp>
#include <org/apache/poi/poifs/storage/BlockWritable.hpp>
#include <org/apache/poi/poifs/storage/DataInputBlock.hpp>
#include <org/apache/poi/poifs/storage/ListManagedBlock.hpp>
#include <Array.hpp>
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
typedef ::SubArray< ::org::apache::poi::poifs::storage::ListManagedBlock, ::java::lang::ObjectArray > ListManagedBlockArray;
typedef ::SubArray< ::org::apache::poi::poifs::storage::SmallDocumentBlock, ::java::lang::ObjectArray, BlockWritableArray, ListManagedBlockArray > SmallDocumentBlockArray;
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

org::apache::poi::poifs::storage::SmallDocumentBlock::SmallDocumentBlock(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::poifs::storage::SmallDocumentBlock::SmallDocumentBlock(::org::apache::poi::poifs::common::POIFSBigBlockSize* bigBlockSize, ::int8_tArray* data, int32_t index) 
    : SmallDocumentBlock(*static_cast< ::default_init_tag* >(0))
{
    ctor(bigBlockSize,data,index);
}

org::apache::poi::poifs::storage::SmallDocumentBlock::SmallDocumentBlock(::org::apache::poi::poifs::common::POIFSBigBlockSize* bigBlockSize) 
    : SmallDocumentBlock(*static_cast< ::default_init_tag* >(0))
{
    ctor(bigBlockSize);
}

constexpr int32_t org::apache::poi::poifs::storage::SmallDocumentBlock::BLOCK_SHIFT;

constexpr int8_t org::apache::poi::poifs::storage::SmallDocumentBlock::_default_fill;

constexpr int32_t org::apache::poi::poifs::storage::SmallDocumentBlock::_block_size;

constexpr int32_t org::apache::poi::poifs::storage::SmallDocumentBlock::BLOCK_MASK;

void org::apache::poi::poifs::storage::SmallDocumentBlock::ctor(::org::apache::poi::poifs::common::POIFSBigBlockSize* bigBlockSize, ::int8_tArray* data, int32_t index)
{
    ctor(bigBlockSize);
    ::java::lang::System::arraycopy(data, index * _block_size, _data, 0, _block_size);
}

void org::apache::poi::poifs::storage::SmallDocumentBlock::ctor(::org::apache::poi::poifs::common::POIFSBigBlockSize* bigBlockSize)
{
    super::ctor();
    _bigBlockSize = bigBlockSize;
    _blocks_per_big_block = getBlocksPerBigBlock(bigBlockSize);
    _data = new ::int8_tArray(_block_size);
}

int32_t org::apache::poi::poifs::storage::SmallDocumentBlock::getBlocksPerBigBlock(::org::apache::poi::poifs::common::POIFSBigBlockSize* bigBlockSize)
{
    clinit();
    return npc(bigBlockSize)->getBigBlockSize() / _block_size;
}

org::apache::poi::poifs::storage::SmallDocumentBlockArray* org::apache::poi::poifs::storage::SmallDocumentBlock::convert(::org::apache::poi::poifs::common::POIFSBigBlockSize* bigBlockSize, ::int8_tArray* array, int32_t size)
{
    clinit();
    auto rval = new SmallDocumentBlockArray((size + _block_size - int32_t(1)) / _block_size);
    auto offset = int32_t(0);
    for (auto k = int32_t(0); k < npc(rval)->length; k++) {
        rval->set(k, new SmallDocumentBlock(bigBlockSize));
        if(offset < npc(array)->length) {
            auto length = ::java::lang::Math::min(_block_size, npc(array)->length - offset);
            ::java::lang::System::arraycopy(array, offset, npc((*rval)[k])->_data, 0, length);
            if(length != _block_size) {
                ::java::util::Arrays::fill(npc((*rval)[k])->_data, length, _block_size, _default_fill);
            }
        } else {
            ::java::util::Arrays::fill(npc((*rval)[k])->_data, _default_fill);
        }
        offset += _block_size;
    }
    return rval;
}

int32_t org::apache::poi::poifs::storage::SmallDocumentBlock::fill(::org::apache::poi::poifs::common::POIFSBigBlockSize* bigBlockSize, ::java::util::List* blocks)
{
    clinit();
    auto _blocks_per_big_block = getBlocksPerBigBlock(bigBlockSize);
    auto count = npc(blocks)->size();
    auto big_block_count = (count + _blocks_per_big_block - int32_t(1)) / _blocks_per_big_block;
    auto full_count = big_block_count * _blocks_per_big_block;
    for (; count < full_count; count++) {
        npc(blocks)->add(static_cast< ::java::lang::Object* >(makeEmptySmallDocumentBlock(bigBlockSize)));
    }
    return big_block_count;
}

org::apache::poi::poifs::storage::SmallDocumentBlockArray* org::apache::poi::poifs::storage::SmallDocumentBlock::convert(::org::apache::poi::poifs::common::POIFSBigBlockSize* bigBlockSize, BlockWritableArray* store, int32_t size) /* throws(IOException, ArrayIndexOutOfBoundsException) */
{
    clinit();
    auto stream = new ::java::io::ByteArrayOutputStream();
    for (auto j = int32_t(0); j < npc(store)->length; j++) {
        npc((*store)[j])->writeBlocks(stream);
    }
    auto data = npc(stream)->toByteArray_();
    auto rval = new SmallDocumentBlockArray(convertToBlockCount(size));
    for (auto index = int32_t(0); index < npc(rval)->length; index++) {
        rval->set(index, new SmallDocumentBlock(bigBlockSize, data, index));
    }
    return rval;
}

java::util::List* org::apache::poi::poifs::storage::SmallDocumentBlock::extract(::org::apache::poi::poifs::common::POIFSBigBlockSize* bigBlockSize, ListManagedBlockArray* blocks) /* throws(IOException) */
{
    clinit();
    auto _blocks_per_big_block = getBlocksPerBigBlock(bigBlockSize);
    ::java::util::List* sdbs = new ::java::util::ArrayList();
    for (auto j = int32_t(0); j < npc(blocks)->length; j++) {
        auto data = npc((*blocks)[j])->getData();
        for (auto k = int32_t(0); k < _blocks_per_big_block; k++) {
            npc(sdbs)->add(static_cast< ::java::lang::Object* >(new SmallDocumentBlock(bigBlockSize, data, k)));
        }
    }
    return sdbs;
}

org::apache::poi::poifs::storage::DataInputBlock* org::apache::poi::poifs::storage::SmallDocumentBlock::getDataInputBlock(SmallDocumentBlockArray* blocks, int32_t offset)
{
    clinit();
    auto firstBlockIndex = offset >> BLOCK_SHIFT;
    auto firstBlockOffset = offset & BLOCK_MASK;
    return new DataInputBlock(npc((*blocks)[firstBlockIndex])->_data, firstBlockOffset);
}

int32_t org::apache::poi::poifs::storage::SmallDocumentBlock::calcSize(int32_t size)
{
    clinit();
    return size * _block_size;
}

int32_t org::apache::poi::poifs::storage::SmallDocumentBlock::getSmallBlocksPerBigBlock()
{
    return _blocks_per_big_block;
}

org::apache::poi::poifs::storage::SmallDocumentBlock* org::apache::poi::poifs::storage::SmallDocumentBlock::makeEmptySmallDocumentBlock(::org::apache::poi::poifs::common::POIFSBigBlockSize* bigBlockSize)
{
    clinit();
    auto block = new SmallDocumentBlock(bigBlockSize);
    ::java::util::Arrays::fill(npc(block)->_data, _default_fill);
    return block;
}

int32_t org::apache::poi::poifs::storage::SmallDocumentBlock::convertToBlockCount(int32_t size)
{
    clinit();
    return (size + _block_size - int32_t(1)) / _block_size;
}

void org::apache::poi::poifs::storage::SmallDocumentBlock::writeBlocks(::java::io::OutputStream* stream) /* throws(IOException) */
{
    npc(stream)->write(_data);
}

int8_tArray* org::apache::poi::poifs::storage::SmallDocumentBlock::getData()
{
    return _data;
}

org::apache::poi::poifs::common::POIFSBigBlockSize* org::apache::poi::poifs::storage::SmallDocumentBlock::getBigBlockSize()
{
    return _bigBlockSize;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::poifs::storage::SmallDocumentBlock::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.storage.SmallDocumentBlock", 47);
    return c;
}

java::lang::Class* org::apache::poi::poifs::storage::SmallDocumentBlock::getClass0()
{
    return class_();
}

