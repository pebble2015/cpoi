// Generated from /POI/java/org/apache/poi/poifs/filesystem/OPOIFSDocument.java
#include <org/apache/poi/poifs/filesystem/OPOIFSDocument.hpp>

#include <java/io/ByteArrayOutputStream.hpp>
#include <java/io/IOException.hpp>
#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/IllegalStateException.hpp>
#include <java/lang/Math.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/System.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/Collections.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/List.hpp>
#include <org/apache/poi/poifs/common/POIFSBigBlockSize.hpp>
#include <org/apache/poi/poifs/common/POIFSConstants.hpp>
#include <org/apache/poi/poifs/filesystem/OPOIFSDocument_BigBlockStore.hpp>
#include <org/apache/poi/poifs/filesystem/OPOIFSDocument_SmallBlockStore.hpp>
#include <org/apache/poi/poifs/property/DocumentProperty.hpp>
#include <org/apache/poi/poifs/property/Property.hpp>
#include <org/apache/poi/poifs/storage/BigBlock.hpp>
#include <org/apache/poi/poifs/storage/BlockWritable.hpp>
#include <org/apache/poi/poifs/storage/DataInputBlock.hpp>
#include <org/apache/poi/poifs/storage/DocumentBlock.hpp>
#include <org/apache/poi/poifs/storage/ListManagedBlock.hpp>
#include <org/apache/poi/poifs/storage/RawDataBlock.hpp>
#include <org/apache/poi/poifs/storage/SmallDocumentBlock.hpp>
#include <org/apache/poi/util/HexDump.hpp>
#include <Array.hpp>
#include <SubArray.hpp>
#include <ObjectArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace io
    {
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
    } // io

    namespace lang
    {
typedef ::SubArray< ::java::lang::CharSequence, ObjectArray > CharSequenceArray;
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::String, ObjectArray, ::java::io::SerializableArray, ComparableArray, CharSequenceArray > StringArray;
    } // lang
} // java

namespace poi
{
    namespace poifs
    {
        namespace storage
        {
typedef ::SubArray< ::poi::poifs::storage::BlockWritable, ::java::lang::ObjectArray > BlockWritableArray;
typedef ::SubArray< ::poi::poifs::storage::BigBlock, ::java::lang::ObjectArray, BlockWritableArray > BigBlockArray;
typedef ::SubArray< ::poi::poifs::storage::DocumentBlock, BigBlockArray > DocumentBlockArray;
typedef ::SubArray< ::poi::poifs::storage::ListManagedBlock, ::java::lang::ObjectArray > ListManagedBlockArray;
typedef ::SubArray< ::poi::poifs::storage::RawDataBlock, ::java::lang::ObjectArray, ListManagedBlockArray > RawDataBlockArray;
typedef ::SubArray< ::poi::poifs::storage::SmallDocumentBlock, ::java::lang::ObjectArray, BlockWritableArray, ListManagedBlockArray > SmallDocumentBlockArray;
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

poi::poifs::filesystem::OPOIFSDocument::OPOIFSDocument(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::poifs::filesystem::OPOIFSDocument::OPOIFSDocument(::java::lang::String* name, ::poi::poifs::storage::RawDataBlockArray* blocks, int32_t length)  /* throws(IOException) */
    : OPOIFSDocument(*static_cast< ::default_init_tag* >(0))
{
    ctor(name,blocks,length);
}

poi::poifs::filesystem::OPOIFSDocument::OPOIFSDocument(::java::lang::String* name, ::poi::poifs::storage::SmallDocumentBlockArray* blocks, int32_t length) 
    : OPOIFSDocument(*static_cast< ::default_init_tag* >(0))
{
    ctor(name,blocks,length);
}

poi::poifs::filesystem::OPOIFSDocument::OPOIFSDocument(::java::lang::String* name, ::poi::poifs::common::POIFSBigBlockSize* bigBlockSize, ::poi::poifs::storage::ListManagedBlockArray* blocks, int32_t length)  /* throws(IOException) */
    : OPOIFSDocument(*static_cast< ::default_init_tag* >(0))
{
    ctor(name,bigBlockSize,blocks,length);
}

poi::poifs::filesystem::OPOIFSDocument::OPOIFSDocument(::java::lang::String* name, ::poi::poifs::storage::ListManagedBlockArray* blocks, int32_t length)  /* throws(IOException) */
    : OPOIFSDocument(*static_cast< ::default_init_tag* >(0))
{
    ctor(name,blocks,length);
}

poi::poifs::filesystem::OPOIFSDocument::OPOIFSDocument(::java::lang::String* name, ::poi::poifs::common::POIFSBigBlockSize* bigBlockSize, ::java::io::InputStream* stream)  /* throws(IOException) */
    : OPOIFSDocument(*static_cast< ::default_init_tag* >(0))
{
    ctor(name,bigBlockSize,stream);
}

poi::poifs::filesystem::OPOIFSDocument::OPOIFSDocument(::java::lang::String* name, ::java::io::InputStream* stream)  /* throws(IOException) */
    : OPOIFSDocument(*static_cast< ::default_init_tag* >(0))
{
    ctor(name,stream);
}

poi::poifs::filesystem::OPOIFSDocument::OPOIFSDocument(::java::lang::String* name, int32_t size, ::poi::poifs::common::POIFSBigBlockSize* bigBlockSize, POIFSDocumentPath* path, POIFSWriterListener* writer) 
    : OPOIFSDocument(*static_cast< ::default_init_tag* >(0))
{
    ctor(name,size,bigBlockSize,path,writer);
}

poi::poifs::filesystem::OPOIFSDocument::OPOIFSDocument(::java::lang::String* name, int32_t size, POIFSDocumentPath* path, POIFSWriterListener* writer) 
    : OPOIFSDocument(*static_cast< ::default_init_tag* >(0))
{
    ctor(name,size,path,writer);
}

poi::poifs::storage::DocumentBlockArray*& poi::poifs::filesystem::OPOIFSDocument::EMPTY_BIG_BLOCK_ARRAY()
{
    clinit();
    return EMPTY_BIG_BLOCK_ARRAY_;
}
poi::poifs::storage::DocumentBlockArray* poi::poifs::filesystem::OPOIFSDocument::EMPTY_BIG_BLOCK_ARRAY_;

poi::poifs::storage::SmallDocumentBlockArray*& poi::poifs::filesystem::OPOIFSDocument::EMPTY_SMALL_BLOCK_ARRAY()
{
    clinit();
    return EMPTY_SMALL_BLOCK_ARRAY_;
}
poi::poifs::storage::SmallDocumentBlockArray* poi::poifs::filesystem::OPOIFSDocument::EMPTY_SMALL_BLOCK_ARRAY_;

void poi::poifs::filesystem::OPOIFSDocument::ctor(::java::lang::String* name, ::poi::poifs::storage::RawDataBlockArray* blocks, int32_t length) /* throws(IOException) */
{
    super::ctor();
    _size = length;
    if(npc(blocks)->length == 0) {
        _bigBigBlockSize = ::poi::poifs::common::POIFSConstants::SMALLER_BIG_BLOCK_SIZE_DETAILS();
    } else {
        _bigBigBlockSize = (npc((*blocks)[int32_t(0)])->getBigBlockSize() == ::poi::poifs::common::POIFSConstants::SMALLER_BIG_BLOCK_SIZE ? ::poi::poifs::common::POIFSConstants::SMALLER_BIG_BLOCK_SIZE_DETAILS() : ::poi::poifs::common::POIFSConstants::LARGER_BIG_BLOCK_SIZE_DETAILS());
    }
    _big_store = new OPOIFSDocument_BigBlockStore(_bigBigBlockSize, convertRawBlocksToBigBlocks(blocks));
    _property = new ::poi::poifs::property::DocumentProperty(name, _size);
    _small_store = new OPOIFSDocument_SmallBlockStore(_bigBigBlockSize, EMPTY_SMALL_BLOCK_ARRAY_);
    npc(_property)->setDocument(this);
}

poi::poifs::storage::DocumentBlockArray* poi::poifs::filesystem::OPOIFSDocument::convertRawBlocksToBigBlocks(::poi::poifs::storage::ListManagedBlockArray* blocks) /* throws(IOException) */
{
    clinit();
    auto result = new ::poi::poifs::storage::DocumentBlockArray(npc(blocks)->length);
    for (auto i = int32_t(0); i < npc(result)->length; i++) {
        result->set(i, new ::poi::poifs::storage::DocumentBlock(java_cast< ::poi::poifs::storage::RawDataBlock* >((*blocks)[i])));
    }
    return result;
}

poi::poifs::storage::SmallDocumentBlockArray* poi::poifs::filesystem::OPOIFSDocument::convertRawBlocksToSmallBlocks(::poi::poifs::storage::ListManagedBlockArray* blocks)
{
    clinit();
    if(dynamic_cast< ::poi::poifs::storage::SmallDocumentBlockArray* >(blocks) != nullptr) {
        return java_cast< ::poi::poifs::storage::SmallDocumentBlockArray* >(blocks);
    }
    auto result = new ::poi::poifs::storage::SmallDocumentBlockArray(npc(blocks)->length);
    ::java::lang::System::arraycopy(blocks, 0, result, 0, npc(blocks)->length);
    return result;
}

void poi::poifs::filesystem::OPOIFSDocument::ctor(::java::lang::String* name, ::poi::poifs::storage::SmallDocumentBlockArray* blocks, int32_t length)
{
    super::ctor();
    _size = length;
    if(npc(blocks)->length == 0) {
        _bigBigBlockSize = ::poi::poifs::common::POIFSConstants::SMALLER_BIG_BLOCK_SIZE_DETAILS();
    } else {
        _bigBigBlockSize = npc((*blocks)[int32_t(0)])->getBigBlockSize();
    }
    _big_store = new OPOIFSDocument_BigBlockStore(_bigBigBlockSize, EMPTY_BIG_BLOCK_ARRAY_);
    _property = new ::poi::poifs::property::DocumentProperty(name, _size);
    _small_store = new OPOIFSDocument_SmallBlockStore(_bigBigBlockSize, blocks);
    npc(_property)->setDocument(this);
}

void poi::poifs::filesystem::OPOIFSDocument::ctor(::java::lang::String* name, ::poi::poifs::common::POIFSBigBlockSize* bigBlockSize, ::poi::poifs::storage::ListManagedBlockArray* blocks, int32_t length) /* throws(IOException) */
{
    super::ctor();
    _size = length;
    _bigBigBlockSize = bigBlockSize;
    _property = new ::poi::poifs::property::DocumentProperty(name, _size);
    npc(_property)->setDocument(this);
    if(::poi::poifs::property::Property::isSmall(_size)) {
        _big_store = new OPOIFSDocument_BigBlockStore(bigBlockSize, EMPTY_BIG_BLOCK_ARRAY_);
        _small_store = new OPOIFSDocument_SmallBlockStore(bigBlockSize, convertRawBlocksToSmallBlocks(blocks));
    } else {
        _big_store = new OPOIFSDocument_BigBlockStore(bigBlockSize, convertRawBlocksToBigBlocks(blocks));
        _small_store = new OPOIFSDocument_SmallBlockStore(bigBlockSize, EMPTY_SMALL_BLOCK_ARRAY_);
    }
}

void poi::poifs::filesystem::OPOIFSDocument::ctor(::java::lang::String* name, ::poi::poifs::storage::ListManagedBlockArray* blocks, int32_t length) /* throws(IOException) */
{
    ctor(name, ::poi::poifs::common::POIFSConstants::SMALLER_BIG_BLOCK_SIZE_DETAILS(), blocks, length);
}

void poi::poifs::filesystem::OPOIFSDocument::ctor(::java::lang::String* name, ::poi::poifs::common::POIFSBigBlockSize* bigBlockSize, ::java::io::InputStream* stream) /* throws(IOException) */
{
    super::ctor();
    ::java::util::List* blocks = new ::java::util::ArrayList();
    _size = 0;
    _bigBigBlockSize = bigBlockSize;
    while (true) {
        auto block = new ::poi::poifs::storage::DocumentBlock(stream, bigBlockSize);
        auto blockSize = npc(block)->size();
        if(blockSize > 0) {
            npc(blocks)->add(static_cast< ::java::lang::Object* >(block));
            _size += blockSize;
        }
        if(npc(block)->partiallyRead()) {
            break;
        }
    }
    auto bigBlocks = java_cast< ::poi::poifs::storage::DocumentBlockArray* >(npc(blocks)->toArray_(static_cast< ::java::lang::ObjectArray* >(new ::poi::poifs::storage::DocumentBlockArray(npc(blocks)->size()))));
    _big_store = new OPOIFSDocument_BigBlockStore(bigBlockSize, bigBlocks);
    _property = new ::poi::poifs::property::DocumentProperty(name, _size);
    npc(_property)->setDocument(this);
    if(npc(_property)->shouldUseSmallBlocks()) {
        _small_store = new OPOIFSDocument_SmallBlockStore(bigBlockSize, ::poi::poifs::storage::SmallDocumentBlock::convert(bigBlockSize, static_cast< ::poi::poifs::storage::BlockWritableArray* >(bigBlocks), _size));
        _big_store = new OPOIFSDocument_BigBlockStore(bigBlockSize, new ::poi::poifs::storage::DocumentBlockArray(int32_t(0)));
    } else {
        _small_store = new OPOIFSDocument_SmallBlockStore(bigBlockSize, EMPTY_SMALL_BLOCK_ARRAY_);
    }
}

void poi::poifs::filesystem::OPOIFSDocument::ctor(::java::lang::String* name, ::java::io::InputStream* stream) /* throws(IOException) */
{
    ctor(name, ::poi::poifs::common::POIFSConstants::SMALLER_BIG_BLOCK_SIZE_DETAILS(), stream);
}

void poi::poifs::filesystem::OPOIFSDocument::ctor(::java::lang::String* name, int32_t size, ::poi::poifs::common::POIFSBigBlockSize* bigBlockSize, POIFSDocumentPath* path, POIFSWriterListener* writer)
{
    super::ctor();
    _size = size;
    _bigBigBlockSize = bigBlockSize;
    _property = new ::poi::poifs::property::DocumentProperty(name, _size);
    npc(_property)->setDocument(this);
    if(npc(_property)->shouldUseSmallBlocks()) {
        _small_store = new OPOIFSDocument_SmallBlockStore(_bigBigBlockSize, path, name, size, writer);
        _big_store = new OPOIFSDocument_BigBlockStore(_bigBigBlockSize, EMPTY_BIG_BLOCK_ARRAY_);
    } else {
        _small_store = new OPOIFSDocument_SmallBlockStore(_bigBigBlockSize, EMPTY_SMALL_BLOCK_ARRAY_);
        _big_store = new OPOIFSDocument_BigBlockStore(_bigBigBlockSize, path, name, size, writer);
    }
}

void poi::poifs::filesystem::OPOIFSDocument::ctor(::java::lang::String* name, int32_t size, POIFSDocumentPath* path, POIFSWriterListener* writer)
{
    ctor(name, size, ::poi::poifs::common::POIFSConstants::SMALLER_BIG_BLOCK_SIZE_DETAILS(), path, writer);
}

poi::poifs::storage::SmallDocumentBlockArray* poi::poifs::filesystem::OPOIFSDocument::getSmallBlocks()
{
    return npc(_small_store)->getBlocks();
}

int32_t poi::poifs::filesystem::OPOIFSDocument::getSize()
{
    return _size;
}

void poi::poifs::filesystem::OPOIFSDocument::read(::int8_tArray* buffer, int32_t offset)
{
    auto len = npc(buffer)->length;
    auto currentBlock = getDataInputBlock(offset);
    auto blockAvailable = npc(currentBlock)->available();
    if(blockAvailable > len) {
        npc(currentBlock)->readFully(buffer, 0, len);
        return;
    }
    auto remaining = len;
    auto writePos = int32_t(0);
    auto currentOffset = offset;
    while (remaining > 0) {
        auto blockIsExpiring = remaining >= blockAvailable;
        int32_t reqSize;
        if(blockIsExpiring) {
            reqSize = blockAvailable;
        } else {
            reqSize = remaining;
        }
        npc(currentBlock)->readFully(buffer, writePos, reqSize);
        remaining -= reqSize;
        writePos += reqSize;
        currentOffset += reqSize;
        if(blockIsExpiring) {
            if(currentOffset == _size) {
                if(remaining > 0) {
                    throw new ::java::lang::IllegalStateException(u"reached end of document stream unexpectedly"_j);
                }
                currentBlock = nullptr;
                break;
            }
            currentBlock = getDataInputBlock(currentOffset);
            blockAvailable = npc(currentBlock)->available();
        }
    }
}

poi::poifs::storage::DataInputBlock* poi::poifs::filesystem::OPOIFSDocument::getDataInputBlock(int32_t offset)
{
    if(offset >= _size) {
        if(offset > _size) {
            throw new ::java::lang::RuntimeException(::java::lang::StringBuilder().append(u"Request for Offset "_j)->append(offset)
                ->append(u" doc size is "_j)
                ->append(_size)->toString());
        }
        return nullptr;
    }
    if(npc(_property)->shouldUseSmallBlocks()) {
        return ::poi::poifs::storage::SmallDocumentBlock::getDataInputBlock(npc(_small_store)->getBlocks(), offset);
    }
    return ::poi::poifs::storage::DocumentBlock::getDataInputBlock(npc(_big_store)->getBlocks(), offset);
}

poi::poifs::property::DocumentProperty* poi::poifs::filesystem::OPOIFSDocument::getDocumentProperty()
{
    return _property;
}

void poi::poifs::filesystem::OPOIFSDocument::writeBlocks(::java::io::OutputStream* stream) /* throws(IOException) */
{
    npc(_big_store)->writeBlocks(stream);
}

int32_t poi::poifs::filesystem::OPOIFSDocument::countBlocks()
{
    return npc(_big_store)->countBlocks();
}

void poi::poifs::filesystem::OPOIFSDocument::setStartBlock(int32_t index)
{
    npc(_property)->setStartBlock(index);
}

java::lang::ObjectArray* poi::poifs::filesystem::OPOIFSDocument::getViewableArray_()
{
    auto result = u"<NO DATA>"_j;
    try {
        ::poi::poifs::storage::BlockWritableArray* blocks = nullptr;
        if(npc(_big_store)->isValid()) {
            blocks = npc(_big_store)->getBlocks();
        } else if(npc(_small_store)->isValid()) {
            blocks = npc(_small_store)->getBlocks();
        }
        if(blocks != nullptr) {
            auto output = new ::java::io::ByteArrayOutputStream();
            for(auto bw : *npc(blocks)) {
                npc(bw)->writeBlocks(output);
            }
            auto length = ::java::lang::Math::min(npc(output)->size(), npc(_property)->getSize());
            result = ::poi::util::HexDump::dump(npc(output)->toByteArray_(), static_cast< int64_t >(int32_t(0)), int32_t(0), length);
        }
    } catch (::java::io::IOException* e) {
        result = npc(e)->getMessage();
    }
    return new ::java::lang::StringArray({result});
}

java::util::Iterator* poi::poifs::filesystem::OPOIFSDocument::getViewableIterator()
{
    return npc(::java::util::Collections::emptyList())->iterator();
}

bool poi::poifs::filesystem::OPOIFSDocument::preferArray_()
{
    return true;
}

java::lang::String* poi::poifs::filesystem::OPOIFSDocument::getShortDescription()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(npc(npc(buffer)->append(u"Document: \""_j))->append(npc(_property)->getName()))->append(u"\""_j);
    npc(npc(buffer)->append(u" size = "_j))->append(getSize());
    return npc(buffer)->toString();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::poifs::filesystem::OPOIFSDocument::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.filesystem.OPOIFSDocument", 46);
    return c;
}

void poi::poifs::filesystem::OPOIFSDocument::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        EMPTY_BIG_BLOCK_ARRAY_ = (new ::poi::poifs::storage::DocumentBlockArray({}));
        EMPTY_SMALL_BLOCK_ARRAY_ = (new ::poi::poifs::storage::SmallDocumentBlockArray({}));
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* poi::poifs::filesystem::OPOIFSDocument::getClass0()
{
    return class_();
}

