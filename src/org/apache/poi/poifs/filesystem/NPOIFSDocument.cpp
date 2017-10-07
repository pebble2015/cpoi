// Generated from /POI/java/org/apache/poi/poifs/filesystem/NPOIFSDocument.java
#include <org/apache/poi/poifs/filesystem/NPOIFSDocument.hpp>

#include <java/io/BufferedInputStream.hpp>
#include <java/io/OutputStream.hpp>
#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/Math.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <java/nio/ByteBuffer.hpp>
#include <java/util/Arrays.hpp>
#include <java/util/Collections.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/List.hpp>
#include <org/apache/poi/poifs/common/POIFSConstants.hpp>
#include <org/apache/poi/poifs/filesystem/DirectoryEntry.hpp>
#include <org/apache/poi/poifs/filesystem/DirectoryNode.hpp>
#include <org/apache/poi/poifs/filesystem/DocumentNode.hpp>
#include <org/apache/poi/poifs/filesystem/DocumentOutputStream.hpp>
#include <org/apache/poi/poifs/filesystem/NPOIFSFileSystem.hpp>
#include <org/apache/poi/poifs/filesystem/NPOIFSMiniStore.hpp>
#include <org/apache/poi/poifs/filesystem/NPOIFSStream.hpp>
#include <org/apache/poi/poifs/filesystem/POIFSDocumentPath.hpp>
#include <org/apache/poi/poifs/filesystem/POIFSWriterEvent.hpp>
#include <org/apache/poi/poifs/filesystem/POIFSWriterListener.hpp>
#include <org/apache/poi/poifs/property/DocumentProperty.hpp>
#include <org/apache/poi/poifs/property/Property.hpp>
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

org::apache::poi::poifs::filesystem::NPOIFSDocument::NPOIFSDocument(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::poifs::filesystem::NPOIFSDocument::NPOIFSDocument(DocumentNode* document)  /* throws(IOException) */
    : NPOIFSDocument(*static_cast< ::default_init_tag* >(0))
{
    ctor(document);
}

org::apache::poi::poifs::filesystem::NPOIFSDocument::NPOIFSDocument(::org::apache::poi::poifs::property::DocumentProperty* property, NPOIFSFileSystem* filesystem)  /* throws(IOException) */
    : NPOIFSDocument(*static_cast< ::default_init_tag* >(0))
{
    ctor(property,filesystem);
}

org::apache::poi::poifs::filesystem::NPOIFSDocument::NPOIFSDocument(::java::lang::String* name, NPOIFSFileSystem* filesystem, ::java::io::InputStream* stream)  /* throws(IOException) */
    : NPOIFSDocument(*static_cast< ::default_init_tag* >(0))
{
    ctor(name,filesystem,stream);
}

org::apache::poi::poifs::filesystem::NPOIFSDocument::NPOIFSDocument(::java::lang::String* name, int32_t size, NPOIFSFileSystem* filesystem, POIFSWriterListener* writer)  /* throws(IOException) */
    : NPOIFSDocument(*static_cast< ::default_init_tag* >(0))
{
    ctor(name,size,filesystem,writer);
}

void org::apache::poi::poifs::filesystem::NPOIFSDocument::ctor(DocumentNode* document) /* throws(IOException) */
{
    ctor(java_cast< ::org::apache::poi::poifs::property::DocumentProperty* >(npc(document)->getProperty()), npc((java_cast< DirectoryNode* >(npc(document)->getParent())))->getNFileSystem());
}

void org::apache::poi::poifs::filesystem::NPOIFSDocument::ctor(::org::apache::poi::poifs::property::DocumentProperty* property, NPOIFSFileSystem* filesystem) /* throws(IOException) */
{
    super::ctor();
    this->_property = property;
    this->_filesystem = filesystem;
    if(npc(property)->getSize() < ::org::apache::poi::poifs::common::POIFSConstants::BIG_BLOCK_MINIMUM_DOCUMENT_SIZE) {
        _stream = new NPOIFSStream(npc(_filesystem)->getMiniStore(), npc(property)->getStartBlock());
        _block_size = npc(npc(_filesystem)->getMiniStore())->getBlockStoreBlockSize();
    } else {
        _stream = new NPOIFSStream(_filesystem, npc(property)->getStartBlock());
        _block_size = npc(_filesystem)->getBlockStoreBlockSize();
    }
}

void org::apache::poi::poifs::filesystem::NPOIFSDocument::ctor(::java::lang::String* name, NPOIFSFileSystem* filesystem, ::java::io::InputStream* stream) /* throws(IOException) */
{
    super::ctor();
    this->_filesystem = filesystem;
    auto length = store(stream);
    this->_property = new ::org::apache::poi::poifs::property::DocumentProperty(name, length);
    npc(_property)->setStartBlock(npc(_stream)->getStartBlock());
}

void org::apache::poi::poifs::filesystem::NPOIFSDocument::ctor(::java::lang::String* name, int32_t size, NPOIFSFileSystem* filesystem, POIFSWriterListener* writer) /* throws(IOException) */
{
    super::ctor();
    this->_filesystem = filesystem;
    if(size < ::org::apache::poi::poifs::common::POIFSConstants::BIG_BLOCK_MINIMUM_DOCUMENT_SIZE) {
        _stream = new NPOIFSStream(npc(filesystem)->getMiniStore());
        _block_size = npc(npc(_filesystem)->getMiniStore())->getBlockStoreBlockSize();
    } else {
        _stream = new NPOIFSStream(filesystem);
        _block_size = npc(_filesystem)->getBlockStoreBlockSize();
    }
    auto innerOs = npc(_stream)->getOutputStream();
    auto os = new DocumentOutputStream(innerOs, size);
    auto path = new POIFSDocumentPath(npc(name)->split(u"\\\\"_j));
    auto docName = npc(path)->getComponent(npc(path)->length() - int32_t(1));
    auto event = new POIFSWriterEvent(os, path, docName, size);
    npc(writer)->processPOIFSWriterEvent(event);
    npc(innerOs)->close();
    this->_property = new ::org::apache::poi::poifs::property::DocumentProperty(name, size);
    npc(_property)->setStartBlock(npc(_stream)->getStartBlock());
}

int32_t org::apache::poi::poifs::filesystem::NPOIFSDocument::store(::java::io::InputStream* stream) /* throws(IOException) */
{
    auto const bigBlockSize = ::org::apache::poi::poifs::common::POIFSConstants::BIG_BLOCK_MINIMUM_DOCUMENT_SIZE;
    auto bis = new ::java::io::BufferedInputStream(stream, bigBlockSize + int32_t(1));
    npc(bis)->mark(bigBlockSize);
    if(npc(bis)->skip(static_cast< int64_t >(bigBlockSize)) < bigBlockSize) {
        _stream = new NPOIFSStream(npc(_filesystem)->getMiniStore());
        _block_size = npc(npc(_filesystem)->getMiniStore())->getBlockStoreBlockSize();
    } else {
        _stream = new NPOIFSStream(_filesystem);
        _block_size = npc(_filesystem)->getBlockStoreBlockSize();
    }
    npc(bis)->reset();
    auto os = npc(_stream)->getOutputStream();
    auto buf = new ::int8_tArray(int32_t(1024));
    auto length = int32_t(0);
    for (int32_t readBytes; (readBytes = npc(bis)->read(buf)) != -int32_t(1); length += readBytes) {
        npc(os)->write(buf, 0, readBytes);
    }
    auto usedInBlock = length % _block_size;
    if(usedInBlock != 0 && usedInBlock != _block_size) {
        auto toBlockEnd = _block_size - usedInBlock;
        auto padding = new ::int8_tArray(toBlockEnd);
        ::java::util::Arrays::fill(padding, static_cast< int8_t >(int32_t(255)));
        npc(os)->write(padding);
    }
    npc(os)->close();
    return length;
}

void org::apache::poi::poifs::filesystem::NPOIFSDocument::free() /* throws(IOException) */
{
    npc(_stream)->free();
    npc(_property)->setStartBlock(::org::apache::poi::poifs::common::POIFSConstants::END_OF_CHAIN);
}

org::apache::poi::poifs::filesystem::NPOIFSFileSystem* org::apache::poi::poifs::filesystem::NPOIFSDocument::getFileSystem()
{
    return _filesystem;
}

int32_t org::apache::poi::poifs::filesystem::NPOIFSDocument::getDocumentBlockSize()
{
    return _block_size;
}

java::util::Iterator* org::apache::poi::poifs::filesystem::NPOIFSDocument::getBlockIterator()
{
    if(getSize() > 0) {
        return npc(_stream)->getBlockIterator();
    } else {
        auto empty = ::java::util::Collections::emptyList();
        return npc(empty)->iterator();
    }
}

int32_t org::apache::poi::poifs::filesystem::NPOIFSDocument::getSize()
{
    return npc(_property)->getSize();
}

void org::apache::poi::poifs::filesystem::NPOIFSDocument::replaceContents(::java::io::InputStream* stream) /* throws(IOException) */
{
    free();
    auto size = store(stream);
    npc(_property)->setStartBlock(npc(_stream)->getStartBlock());
    npc(_property)->updateSize(size);
}

org::apache::poi::poifs::property::DocumentProperty* org::apache::poi::poifs::filesystem::NPOIFSDocument::getDocumentProperty()
{
    return _property;
}

java::lang::ObjectArray* org::apache::poi::poifs::filesystem::NPOIFSDocument::getViewableArray_()
{
    auto result = u"<NO DATA>"_j;
    if(getSize() > 0) {
        auto data = new ::int8_tArray(getSize());
        auto offset = int32_t(0);
        for (auto _i = npc(_stream)->iterator(); _i->hasNext(); ) {
            ::java::nio::ByteBuffer* buffer = java_cast< ::java::nio::ByteBuffer* >(_i->next());
            {
                auto length = ::java::lang::Math::min(_block_size, npc(data)->length - offset);
                npc(buffer)->get(data, offset, length);
                offset += length;
            }
        }
        result = ::org::apache::poi::util::HexDump::dump(data, 0, 0);
    }
    return new ::java::lang::StringArray({result});
}

java::util::Iterator* org::apache::poi::poifs::filesystem::NPOIFSDocument::getViewableIterator()
{
    return npc(::java::util::Collections::emptyList())->iterator();
}

bool org::apache::poi::poifs::filesystem::NPOIFSDocument::preferArray_()
{
    return true;
}

java::lang::String* org::apache::poi::poifs::filesystem::NPOIFSDocument::getShortDescription()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(npc(npc(buffer)->append(u"Document: \""_j))->append(npc(_property)->getName()))->append(u"\""_j);
    npc(npc(buffer)->append(u" size = "_j))->append(getSize());
    return npc(buffer)->toString();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::poifs::filesystem::NPOIFSDocument::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.filesystem.NPOIFSDocument", 46);
    return c;
}

java::lang::Class* org::apache::poi::poifs::filesystem::NPOIFSDocument::getClass0()
{
    return class_();
}

