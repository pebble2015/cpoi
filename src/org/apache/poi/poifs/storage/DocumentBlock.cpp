// Generated from /POI/java/org/apache/poi/poifs/storage/DocumentBlock.java
#include <org/apache/poi/poifs/storage/DocumentBlock.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Math.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/System.hpp>
#include <java/util/Arrays.hpp>
#include <org/apache/poi/poifs/common/POIFSBigBlockSize.hpp>
#include <org/apache/poi/poifs/common/POIFSConstants.hpp>
#include <org/apache/poi/poifs/storage/BigBlock.hpp>
#include <org/apache/poi/poifs/storage/BlockWritable.hpp>
#include <org/apache/poi/poifs/storage/DataInputBlock.hpp>
#include <org/apache/poi/poifs/storage/RawDataBlock.hpp>
#include <org/apache/poi/util/IOUtils.hpp>
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
typedef ::SubArray< ::org::apache::poi::poifs::storage::BigBlock, ::java::lang::ObjectArray, BlockWritableArray > BigBlockArray;
typedef ::SubArray< ::org::apache::poi::poifs::storage::DocumentBlock, BigBlockArray > DocumentBlockArray;
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

org::apache::poi::poifs::storage::DocumentBlock::DocumentBlock(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::poifs::storage::DocumentBlock::DocumentBlock(RawDataBlock* block)  /* throws(IOException) */
    : DocumentBlock(*static_cast< ::default_init_tag* >(0))
{
    ctor(block);
}

org::apache::poi::poifs::storage::DocumentBlock::DocumentBlock(::java::io::InputStream* stream, ::org::apache::poi::poifs::common::POIFSBigBlockSize* bigBlockSize)  /* throws(IOException) */
    : DocumentBlock(*static_cast< ::default_init_tag* >(0))
{
    ctor(stream,bigBlockSize);
}

org::apache::poi::poifs::storage::DocumentBlock::DocumentBlock(::org::apache::poi::poifs::common::POIFSBigBlockSize* bigBlockSize) 
    : DocumentBlock(*static_cast< ::default_init_tag* >(0))
{
    ctor(bigBlockSize);
}

constexpr int8_t org::apache::poi::poifs::storage::DocumentBlock::_default_value;

void org::apache::poi::poifs::storage::DocumentBlock::ctor(RawDataBlock* block) /* throws(IOException) */
{
    super::ctor(npc(block)->getBigBlockSize() == ::org::apache::poi::poifs::common::POIFSConstants::SMALLER_BIG_BLOCK_SIZE ? ::org::apache::poi::poifs::common::POIFSConstants::SMALLER_BIG_BLOCK_SIZE_DETAILS() : ::org::apache::poi::poifs::common::POIFSConstants::LARGER_BIG_BLOCK_SIZE_DETAILS());
    _data = npc(block)->getData();
    _bytes_read = npc(_data)->length;
}

void org::apache::poi::poifs::storage::DocumentBlock::ctor(::java::io::InputStream* stream, ::org::apache::poi::poifs::common::POIFSBigBlockSize* bigBlockSize) /* throws(IOException) */
{
    ctor(bigBlockSize);
    auto count = ::org::apache::poi::util::IOUtils::readFully(stream, _data);
    _bytes_read = (count == -int32_t(1)) ? int32_t(0) : count;
}

void org::apache::poi::poifs::storage::DocumentBlock::ctor(::org::apache::poi::poifs::common::POIFSBigBlockSize* bigBlockSize)
{
    super::ctor(bigBlockSize);
    _data = new ::int8_tArray(npc(bigBlockSize)->getBigBlockSize());
    ::java::util::Arrays::fill(_data, _default_value);
}

int32_t org::apache::poi::poifs::storage::DocumentBlock::size()
{
    return _bytes_read;
}

bool org::apache::poi::poifs::storage::DocumentBlock::partiallyRead()
{
    return _bytes_read != npc(bigBlockSize)->getBigBlockSize();
}

int8_t org::apache::poi::poifs::storage::DocumentBlock::getFillByte()
{
    clinit();
    return _default_value;
}

org::apache::poi::poifs::storage::DocumentBlockArray* org::apache::poi::poifs::storage::DocumentBlock::convert(::org::apache::poi::poifs::common::POIFSBigBlockSize* bigBlockSize, ::int8_tArray* array, int32_t size)
{
    clinit();
    auto rval = new DocumentBlockArray((size + npc(bigBlockSize)->getBigBlockSize() - int32_t(1)) / npc(bigBlockSize)->getBigBlockSize());
    auto offset = int32_t(0);
    for (auto k = int32_t(0); k < npc(rval)->length; k++) {
        rval->set(k, new DocumentBlock(bigBlockSize));
        if(offset < npc(array)->length) {
            auto length = ::java::lang::Math::min(npc(bigBlockSize)->getBigBlockSize(), npc(array)->length - offset);
            ::java::lang::System::arraycopy(array, offset, npc((*rval)[k])->_data, 0, length);
            if(length != npc(bigBlockSize)->getBigBlockSize()) {
                ::java::util::Arrays::fill(npc((*rval)[k])->_data, length, npc(bigBlockSize)->getBigBlockSize(), _default_value);
            }
        } else {
            ::java::util::Arrays::fill(npc((*rval)[k])->_data, _default_value);
        }
        offset += npc(bigBlockSize)->getBigBlockSize();
    }
    return rval;
}

org::apache::poi::poifs::storage::DataInputBlock* org::apache::poi::poifs::storage::DocumentBlock::getDataInputBlock(DocumentBlockArray* blocks, int32_t offset)
{
    clinit();
    if(blocks == nullptr || npc(blocks)->length == 0) {
        return nullptr;
    }
    auto bigBlockSize = npc((*blocks)[int32_t(0)])->bigBlockSize;
    int32_t BLOCK_SHIFT = npc(bigBlockSize)->getHeaderValue();
    auto BLOCK_SIZE = npc(bigBlockSize)->getBigBlockSize();
    auto BLOCK_MASK = BLOCK_SIZE - int32_t(1);
    auto firstBlockIndex = offset >> BLOCK_SHIFT;
    auto firstBlockOffset = offset & BLOCK_MASK;
    return new DataInputBlock(npc((*blocks)[firstBlockIndex])->_data, firstBlockOffset);
}

void org::apache::poi::poifs::storage::DocumentBlock::writeData(::java::io::OutputStream* stream) /* throws(IOException) */
{
    doWriteData(stream, _data);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::poifs::storage::DocumentBlock::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.storage.DocumentBlock", 42);
    return c;
}

java::lang::Class* org::apache::poi::poifs::storage::DocumentBlock::getClass0()
{
    return class_();
}

