// Generated from /POI/java/org/apache/poi/poifs/filesystem/OPOIFSDocument.java
#include <org/apache/poi/poifs/filesystem/OPOIFSDocument_BigBlockStore.hpp>

#include <java/io/ByteArrayOutputStream.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <org/apache/poi/poifs/common/POIFSBigBlockSize.hpp>
#include <org/apache/poi/poifs/filesystem/DocumentOutputStream.hpp>
#include <org/apache/poi/poifs/filesystem/POIFSDocumentPath.hpp>
#include <org/apache/poi/poifs/filesystem/POIFSWriterEvent.hpp>
#include <org/apache/poi/poifs/filesystem/POIFSWriterListener.hpp>
#include <org/apache/poi/poifs/storage/BigBlock.hpp>
#include <org/apache/poi/poifs/storage/BlockWritable.hpp>
#include <org/apache/poi/poifs/storage/DocumentBlock.hpp>
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

org::apache::poi::poifs::filesystem::OPOIFSDocument_BigBlockStore::OPOIFSDocument_BigBlockStore(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::poifs::filesystem::OPOIFSDocument_BigBlockStore::OPOIFSDocument_BigBlockStore(::org::apache::poi::poifs::common::POIFSBigBlockSize* bigBlockSize, ::org::apache::poi::poifs::storage::DocumentBlockArray* blocks) 
    : OPOIFSDocument_BigBlockStore(*static_cast< ::default_init_tag* >(0))
{
    ctor(bigBlockSize,blocks);
}

org::apache::poi::poifs::filesystem::OPOIFSDocument_BigBlockStore::OPOIFSDocument_BigBlockStore(::org::apache::poi::poifs::common::POIFSBigBlockSize* bigBlockSize, POIFSDocumentPath* path, ::java::lang::String* name, int32_t size, POIFSWriterListener* writer) 
    : OPOIFSDocument_BigBlockStore(*static_cast< ::default_init_tag* >(0))
{
    ctor(bigBlockSize,path,name,size,writer);
}

void org::apache::poi::poifs::filesystem::OPOIFSDocument_BigBlockStore::ctor(::org::apache::poi::poifs::common::POIFSBigBlockSize* bigBlockSize, ::org::apache::poi::poifs::storage::DocumentBlockArray* blocks)
{
    super::ctor();
    _bigBlockSize = bigBlockSize;
    bigBlocks = npc(blocks)->clone();
    _path = nullptr;
    _name = nullptr;
    _size = -int32_t(1);
    _writer = nullptr;
}

void org::apache::poi::poifs::filesystem::OPOIFSDocument_BigBlockStore::ctor(::org::apache::poi::poifs::common::POIFSBigBlockSize* bigBlockSize, POIFSDocumentPath* path, ::java::lang::String* name, int32_t size, POIFSWriterListener* writer)
{
    super::ctor();
    _bigBlockSize = bigBlockSize;
    bigBlocks = new ::org::apache::poi::poifs::storage::DocumentBlockArray(int32_t(0));
    _path = path;
    _name = name;
    _size = size;
    _writer = writer;
}

bool org::apache::poi::poifs::filesystem::OPOIFSDocument_BigBlockStore::isValid()
{
    return npc(bigBlocks)->length > 0 || _writer != nullptr;
}

org::apache::poi::poifs::storage::DocumentBlockArray* org::apache::poi::poifs::filesystem::OPOIFSDocument_BigBlockStore::getBlocks()
{
    if(isValid() && _writer != nullptr) {
        auto stream = new ::java::io::ByteArrayOutputStream(_size);
        auto dstream = new DocumentOutputStream(stream, _size);
        npc(_writer)->processPOIFSWriterEvent(new POIFSWriterEvent(dstream, _path, _name, _size));
        bigBlocks = ::org::apache::poi::poifs::storage::DocumentBlock::convert(_bigBlockSize, npc(stream)->toByteArray_(), _size);
    }
    return bigBlocks;
}

void org::apache::poi::poifs::filesystem::OPOIFSDocument_BigBlockStore::writeBlocks(::java::io::OutputStream* stream) /* throws(IOException) */
{
    if(isValid()) {
        if(_writer != nullptr) {
            auto dstream = new DocumentOutputStream(stream, _size);
            npc(_writer)->processPOIFSWriterEvent(new POIFSWriterEvent(dstream, _path, _name, _size));
            npc(dstream)->writeFiller(countBlocks() * npc(_bigBlockSize)->getBigBlockSize(), ::org::apache::poi::poifs::storage::DocumentBlock::getFillByte());
        } else {
            for (auto k = int32_t(0); k < npc(bigBlocks)->length; k++) {
                npc((*bigBlocks)[k])->writeBlocks(stream);
            }
        }
    }
}

int32_t org::apache::poi::poifs::filesystem::OPOIFSDocument_BigBlockStore::countBlocks()
{
    if(isValid()) {
        if(_writer == nullptr) {
            return npc(bigBlocks)->length;
        }
        return (_size + npc(_bigBlockSize)->getBigBlockSize() - int32_t(1)) / npc(_bigBlockSize)->getBigBlockSize();
    }
    return 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::poifs::filesystem::OPOIFSDocument_BigBlockStore::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.filesystem.OPOIFSDocument.BigBlockStore", 60);
    return c;
}

java::lang::Class* org::apache::poi::poifs::filesystem::OPOIFSDocument_BigBlockStore::getClass0()
{
    return class_();
}

