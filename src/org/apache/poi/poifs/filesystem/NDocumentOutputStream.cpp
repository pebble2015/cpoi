// Generated from /POI/java/org/apache/poi/poifs/filesystem/NDocumentOutputStream.java
#include <org/apache/poi/poifs/filesystem/NDocumentOutputStream.hpp>

#include <java/io/ByteArrayInputStream.hpp>
#include <java/io/ByteArrayOutputStream.hpp>
#include <java/io/IOException.hpp>
#include <java/io/OutputStream.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/poifs/common/POIFSConstants.hpp>
#include <org/apache/poi/poifs/filesystem/DirectoryEntry.hpp>
#include <org/apache/poi/poifs/filesystem/DirectoryNode.hpp>
#include <org/apache/poi/poifs/filesystem/DocumentEntry.hpp>
#include <org/apache/poi/poifs/filesystem/DocumentNode.hpp>
#include <org/apache/poi/poifs/filesystem/NPOIFSDocument.hpp>
#include <org/apache/poi/poifs/filesystem/NPOIFSFileSystem.hpp>
#include <org/apache/poi/poifs/filesystem/NPOIFSStream.hpp>
#include <org/apache/poi/poifs/property/DocumentProperty.hpp>
#include <org/apache/poi/poifs/property/Property.hpp>
#include <Array.hpp>

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

org::apache::poi::poifs::filesystem::NDocumentOutputStream::NDocumentOutputStream(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::poifs::filesystem::NDocumentOutputStream::NDocumentOutputStream(DocumentEntry* document)  /* throws(IOException) */
    : NDocumentOutputStream(*static_cast< ::default_init_tag* >(0))
{
    ctor(document);
}

org::apache::poi::poifs::filesystem::NDocumentOutputStream::NDocumentOutputStream(DirectoryEntry* parent, ::java::lang::String* name)  /* throws(IOException) */
    : NDocumentOutputStream(*static_cast< ::default_init_tag* >(0))
{
    ctor(parent,name);
}

void org::apache::poi::poifs::filesystem::NDocumentOutputStream::init()
{
    _buffer = new ::java::io::ByteArrayOutputStream(::org::apache::poi::poifs::common::POIFSConstants::BIG_BLOCK_MINIMUM_DOCUMENT_SIZE);
}

void org::apache::poi::poifs::filesystem::NDocumentOutputStream::ctor(DocumentEntry* document) /* throws(IOException) */
{
    super::ctor();
    init();
    if(!(dynamic_cast< DocumentNode* >(document) != nullptr)) {
        throw new ::java::io::IOException(::java::lang::StringBuilder().append(u"Cannot open internal document storage, "_j)->append(static_cast< ::java::lang::Object* >(document))
            ->append(u" not a Document Node"_j)->toString());
    }
    _document_size = 0;
    _closed = false;
    _property = java_cast< ::org::apache::poi::poifs::property::DocumentProperty* >(npc((java_cast< DocumentNode* >(document)))->getProperty());
    _document = new NPOIFSDocument(java_cast< DocumentNode* >(document));
    npc(_document)->free();
}

void org::apache::poi::poifs::filesystem::NDocumentOutputStream::ctor(DirectoryEntry* parent, ::java::lang::String* name) /* throws(IOException) */
{
    super::ctor();
    init();
    if(!(dynamic_cast< DirectoryNode* >(parent) != nullptr)) {
        throw new ::java::io::IOException(::java::lang::StringBuilder().append(u"Cannot open internal directory storage, "_j)->append(static_cast< ::java::lang::Object* >(parent))
            ->append(u" not a Directory Node"_j)->toString());
    }
    _document_size = 0;
    _closed = false;
    auto doc = npc(parent)->createDocument(name, new ::java::io::ByteArrayInputStream(new ::int8_tArray(int32_t(0))));
    _property = java_cast< ::org::apache::poi::poifs::property::DocumentProperty* >(npc((java_cast< DocumentNode* >(doc)))->getProperty());
    _document = new NPOIFSDocument(java_cast< DocumentNode* >(doc));
}

void org::apache::poi::poifs::filesystem::NDocumentOutputStream::dieIfClosed() /* throws(IOException) */
{
    if(_closed) {
        throw new ::java::io::IOException(u"cannot perform requested operation on a closed stream"_j);
    }
}

void org::apache::poi::poifs::filesystem::NDocumentOutputStream::checkBufferSize() /* throws(IOException) */
{
    if(npc(_buffer)->size() > ::org::apache::poi::poifs::common::POIFSConstants::BIG_BLOCK_MINIMUM_DOCUMENT_SIZE) {
        auto data = npc(_buffer)->toByteArray_();
        _buffer = nullptr;
        write(data, int32_t(0), npc(data)->length);
    } else {
    }
}

void org::apache::poi::poifs::filesystem::NDocumentOutputStream::write(int32_t b) /* throws(IOException) */
{
    dieIfClosed();
    if(_buffer != nullptr) {
        npc(_buffer)->write(b);
        checkBufferSize();
    } else {
        write(new ::int8_tArray({static_cast< int8_t >(b)}));
    }
}

void org::apache::poi::poifs::filesystem::NDocumentOutputStream::write(::int8_tArray* b) /* throws(IOException) */
{
    dieIfClosed();
    if(_buffer != nullptr) {
        npc(_buffer)->write(b);
        checkBufferSize();
    } else {
        write(b, int32_t(0), npc(b)->length);
    }
}

void org::apache::poi::poifs::filesystem::NDocumentOutputStream::write(::int8_tArray* b, int32_t off, int32_t len) /* throws(IOException) */
{
    dieIfClosed();
    if(_buffer != nullptr) {
        npc(_buffer)->write(b, off, len);
        checkBufferSize();
    } else {
        if(_stream == nullptr) {
            _stream = new NPOIFSStream(npc(_document)->getFileSystem());
            _stream_output = npc(_stream)->getOutputStream();
        }
        npc(_stream_output)->write(b, off, len);
        _document_size += len;
    }
}

void org::apache::poi::poifs::filesystem::NDocumentOutputStream::close() /* throws(IOException) */
{
    if(_buffer != nullptr) {
        npc(_document)->replaceContents(new ::java::io::ByteArrayInputStream(npc(_buffer)->toByteArray_()));
    } else {
        npc(_stream_output)->close();
        npc(_property)->updateSize(_document_size);
        npc(_property)->setStartBlock(npc(_stream)->getStartBlock());
    }
    _closed = true;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::poifs::filesystem::NDocumentOutputStream::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.filesystem.NDocumentOutputStream", 53);
    return c;
}

java::lang::Class* org::apache::poi::poifs::filesystem::NDocumentOutputStream::getClass0()
{
    return class_();
}

