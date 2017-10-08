// Generated from /POI/java/org/apache/poi/poifs/filesystem/OPOIFSDocument.java
#include <org/apache/poi/poifs/filesystem/OPOIFSDocument_SmallBlockStore.hpp>

#include <java/io/ByteArrayOutputStream.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <org/apache/poi/poifs/common/POIFSBigBlockSize.hpp>
#include <org/apache/poi/poifs/filesystem/DocumentOutputStream.hpp>
#include <org/apache/poi/poifs/filesystem/POIFSDocumentPath.hpp>
#include <org/apache/poi/poifs/filesystem/POIFSWriterEvent.hpp>
#include <org/apache/poi/poifs/filesystem/POIFSWriterListener.hpp>
#include <org/apache/poi/poifs/storage/BlockWritable.hpp>
#include <org/apache/poi/poifs/storage/ListManagedBlock.hpp>
#include <org/apache/poi/poifs/storage/SmallDocumentBlock.hpp>
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
typedef ::SubArray< ::poi::poifs::storage::ListManagedBlock, ::java::lang::ObjectArray > ListManagedBlockArray;
typedef ::SubArray< ::poi::poifs::storage::SmallDocumentBlock, ::java::lang::ObjectArray, BlockWritableArray, ListManagedBlockArray > SmallDocumentBlockArray;
        } // storage
    } // poifs
} // poi

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::poifs::filesystem::OPOIFSDocument_SmallBlockStore::OPOIFSDocument_SmallBlockStore(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::poifs::filesystem::OPOIFSDocument_SmallBlockStore::OPOIFSDocument_SmallBlockStore(::poi::poifs::common::POIFSBigBlockSize* bigBlockSize, ::poi::poifs::storage::SmallDocumentBlockArray* blocks) 
    : OPOIFSDocument_SmallBlockStore(*static_cast< ::default_init_tag* >(0))
{
    ctor(bigBlockSize,blocks);
}

poi::poifs::filesystem::OPOIFSDocument_SmallBlockStore::OPOIFSDocument_SmallBlockStore(::poi::poifs::common::POIFSBigBlockSize* bigBlockSize, POIFSDocumentPath* path, ::java::lang::String* name, int32_t size, POIFSWriterListener* writer) 
    : OPOIFSDocument_SmallBlockStore(*static_cast< ::default_init_tag* >(0))
{
    ctor(bigBlockSize,path,name,size,writer);
}

void poi::poifs::filesystem::OPOIFSDocument_SmallBlockStore::ctor(::poi::poifs::common::POIFSBigBlockSize* bigBlockSize, ::poi::poifs::storage::SmallDocumentBlockArray* blocks)
{
    super::ctor();
    _bigBlockSize = bigBlockSize;
    _smallBlocks = npc(blocks)->clone();
    this->_path = nullptr;
    this->_name = nullptr;
    this->_size = -int32_t(1);
    this->_writer = nullptr;
}

void poi::poifs::filesystem::OPOIFSDocument_SmallBlockStore::ctor(::poi::poifs::common::POIFSBigBlockSize* bigBlockSize, POIFSDocumentPath* path, ::java::lang::String* name, int32_t size, POIFSWriterListener* writer)
{
    super::ctor();
    _bigBlockSize = bigBlockSize;
    _smallBlocks = new ::poi::poifs::storage::SmallDocumentBlockArray(int32_t(0));
    this->_path = path;
    this->_name = name;
    this->_size = size;
    this->_writer = writer;
}

bool poi::poifs::filesystem::OPOIFSDocument_SmallBlockStore::isValid()
{
    return npc(_smallBlocks)->length > 0 || _writer != nullptr;
}

poi::poifs::storage::SmallDocumentBlockArray* poi::poifs::filesystem::OPOIFSDocument_SmallBlockStore::getBlocks()
{
    if(isValid() && _writer != nullptr) {
        auto stream = new ::java::io::ByteArrayOutputStream(_size);
        auto dstream = new DocumentOutputStream(stream, _size);
        npc(_writer)->processPOIFSWriterEvent(new POIFSWriterEvent(dstream, _path, _name, _size));
        _smallBlocks = ::poi::poifs::storage::SmallDocumentBlock::convert(_bigBlockSize, npc(stream)->toByteArray_(), _size);
    }
    return _smallBlocks;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::poifs::filesystem::OPOIFSDocument_SmallBlockStore::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.filesystem.OPOIFSDocument.SmallBlockStore", 62);
    return c;
}

java::lang::Class* poi::poifs::filesystem::OPOIFSDocument_SmallBlockStore::getClass0()
{
    return class_();
}

