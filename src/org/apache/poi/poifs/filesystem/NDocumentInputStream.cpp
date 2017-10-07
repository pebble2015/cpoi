// Generated from /POI/java/org/apache/poi/poifs/filesystem/NDocumentInputStream.java
#include <org/apache/poi/poifs/filesystem/NDocumentInputStream.hpp>

#include <java/io/IOException.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Double.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/IllegalStateException.hpp>
#include <java/lang/IndexOutOfBoundsException.hpp>
#include <java/lang/Math.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/nio/ByteBuffer.hpp>
#include <java/util/Iterator.hpp>
#include <org/apache/poi/poifs/filesystem/DirectoryEntry.hpp>
#include <org/apache/poi/poifs/filesystem/DirectoryNode.hpp>
#include <org/apache/poi/poifs/filesystem/DocumentEntry.hpp>
#include <org/apache/poi/poifs/filesystem/DocumentNode.hpp>
#include <org/apache/poi/poifs/filesystem/NPOIFSDocument.hpp>
#include <org/apache/poi/poifs/property/DocumentProperty.hpp>
#include <org/apache/poi/poifs/property/Property.hpp>
#include <org/apache/poi/util/LittleEndian.hpp>
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

org::apache::poi::poifs::filesystem::NDocumentInputStream::NDocumentInputStream(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::poifs::filesystem::NDocumentInputStream::NDocumentInputStream(DocumentEntry* document)  /* throws(IOException) */
    : NDocumentInputStream(*static_cast< ::default_init_tag* >(0))
{
    ctor(document);
}

org::apache::poi::poifs::filesystem::NDocumentInputStream::NDocumentInputStream(NPOIFSDocument* document) 
    : NDocumentInputStream(*static_cast< ::default_init_tag* >(0))
{
    ctor(document);
}

void org::apache::poi::poifs::filesystem::NDocumentInputStream::ctor(DocumentEntry* document) /* throws(IOException) */
{
    super::ctor();
    if(!(dynamic_cast< DocumentNode* >(document) != nullptr)) {
        throw new ::java::io::IOException(::java::lang::StringBuilder().append(u"Cannot open internal document storage, "_j)->append(static_cast< ::java::lang::Object* >(document))
            ->append(u" not a Document Node"_j)->toString());
    }
    _current_offset = 0;
    _current_block_count = 0;
    _marked_offset = 0;
    _marked_offset_count = 0;
    _document_size = npc(document)->getSize();
    _closed = false;
    if(_document_size < 0) {
    }
    auto doc = java_cast< DocumentNode* >(document);
    auto property = java_cast< ::org::apache::poi::poifs::property::DocumentProperty* >(npc(doc)->getProperty());
    _document = new NPOIFSDocument(property, npc((java_cast< DirectoryNode* >(npc(doc)->getParent())))->getNFileSystem());
    _data = npc(_document)->getBlockIterator();
}

void org::apache::poi::poifs::filesystem::NDocumentInputStream::ctor(NPOIFSDocument* document)
{
    super::ctor();
    _current_offset = 0;
    _current_block_count = 0;
    _marked_offset = 0;
    _marked_offset_count = 0;
    _document_size = npc(document)->getSize();
    _closed = false;
    _document = document;
    _data = npc(_document)->getBlockIterator();
}

int32_t org::apache::poi::poifs::filesystem::NDocumentInputStream::available()
{
    return remainingBytes();
}

int32_t org::apache::poi::poifs::filesystem::NDocumentInputStream::remainingBytes()
{
    if(_closed) {
        throw new ::java::lang::IllegalStateException(u"cannot perform requested operation on a closed stream"_j);
    }
    return _document_size - _current_offset;
}

void org::apache::poi::poifs::filesystem::NDocumentInputStream::close()
{
    _closed = true;
}

void org::apache::poi::poifs::filesystem::NDocumentInputStream::mark(int32_t ignoredReadlimit)
{
    _marked_offset = _current_offset;
    _marked_offset_count = ::java::lang::Math::max(int32_t(0), _current_block_count - int32_t(1));
}

int32_t org::apache::poi::poifs::filesystem::NDocumentInputStream::read() /* throws(IOException) */
{
    dieIfClosed();
    if(atEOD()) {
        return EOF_;
    }
    auto b = new ::int8_tArray(int32_t(1));
    auto result = read(b, int32_t(0), int32_t(1));
    if(result >= 0) {
        if((*b)[int32_t(0)] < 0) {
            return (*b)[int32_t(0)] + int32_t(256);
        }
        return (*b)[int32_t(0)];
    }
    return result;
}

int32_t org::apache::poi::poifs::filesystem::NDocumentInputStream::read(::int8_tArray* b, int32_t off, int32_t len) /* throws(IOException) */
{
    dieIfClosed();
    if(b == nullptr) {
        throw new ::java::lang::IllegalArgumentException(u"buffer must not be null"_j);
    }
    if(off < 0 || len < 0 || npc(b)->length < off + len) {
        throw new ::java::lang::IndexOutOfBoundsException(u"can't read past buffer boundaries"_j);
    }
    if(len == 0) {
        return 0;
    }
    if(atEOD()) {
        return EOF_;
    }
    auto limit = ::java::lang::Math::min(remainingBytes(), len);
    readFully(b, off, limit);
    return limit;
}

void org::apache::poi::poifs::filesystem::NDocumentInputStream::reset()
{
    if(_marked_offset == 0 && _marked_offset_count == 0) {
        _current_block_count = _marked_offset_count;
        _current_offset = _marked_offset;
        _data = npc(_document)->getBlockIterator();
        _buffer = nullptr;
        return;
    }
    _data = npc(_document)->getBlockIterator();
    _current_offset = 0;
    for (auto i = int32_t(0); i < _marked_offset_count; i++) {
        _buffer = java_cast< ::java::nio::ByteBuffer* >(npc(_data)->next());
        _current_offset += npc(_buffer)->remaining();
    }
    _current_block_count = _marked_offset_count;
    if(_current_offset != _marked_offset) {
        _buffer = java_cast< ::java::nio::ByteBuffer* >(npc(_data)->next());
        _current_block_count++;
        auto skipBy = _marked_offset - _current_offset;
        npc(_buffer)->position(npc(_buffer)->position() + skipBy);
    }
    _current_offset = _marked_offset;
}

int64_t org::apache::poi::poifs::filesystem::NDocumentInputStream::skip(int64_t n) /* throws(IOException) */
{
    dieIfClosed();
    if(n < 0) {
        return 0;
    }
    auto new_offset = _current_offset + n;
    if(new_offset < _current_offset) {
        new_offset = _document_size;
    } else if(new_offset > _document_size) {
        new_offset = _document_size;
    }
    auto rval = new_offset - _current_offset;
    auto skip = new ::int8_tArray(static_cast< int32_t >(rval));
    readFully(skip);
    return rval;
}

void org::apache::poi::poifs::filesystem::NDocumentInputStream::dieIfClosed() /* throws(IOException) */
{
    if(_closed) {
        throw new ::java::io::IOException(u"cannot perform requested operation on a closed stream"_j);
    }
}

bool org::apache::poi::poifs::filesystem::NDocumentInputStream::atEOD()
{
    return _current_offset == _document_size;
}

void org::apache::poi::poifs::filesystem::NDocumentInputStream::checkAvaliable(int32_t requestedSize)
{
    if(_closed) {
        throw new ::java::lang::IllegalStateException(u"cannot perform requested operation on a closed stream"_j);
    }
    if(requestedSize > _document_size - _current_offset) {
        throw new ::java::lang::RuntimeException(::java::lang::StringBuilder().append(u"Buffer underrun - requested "_j)->append(requestedSize)
            ->append(u" bytes but "_j)
            ->append((_document_size - _current_offset))
            ->append(u" was available"_j)->toString());
    }
}

void org::apache::poi::poifs::filesystem::NDocumentInputStream::readFully(::int8_tArray* buf, int32_t off, int32_t len)
{
    if(len < 0) {
        throw new ::java::lang::RuntimeException(u"Can't read negative number of bytes"_j);
    }
    checkAvaliable(len);
    auto read = int32_t(0);
    while (read < len) {
        if(_buffer == nullptr || npc(_buffer)->remaining() == 0) {
            _current_block_count++;
            _buffer = java_cast< ::java::nio::ByteBuffer* >(npc(_data)->next());
        }
        auto limit = ::java::lang::Math::min(len - read, npc(_buffer)->remaining());
        npc(_buffer)->get(buf, off + read, limit);
        _current_offset += limit;
        read += limit;
    }
}

int8_t org::apache::poi::poifs::filesystem::NDocumentInputStream::readByte()
{
    return static_cast< int8_t >(readUByte());
}

double org::apache::poi::poifs::filesystem::NDocumentInputStream::readDouble()
{
    return ::java::lang::Double::longBitsToDouble(readLong());
}

int64_t org::apache::poi::poifs::filesystem::NDocumentInputStream::readLong()
{
    checkAvaliable(SIZE_LONG);
    auto data = new ::int8_tArray(SIZE_LONG);
    readFully(data, int32_t(0), SIZE_LONG);
    return ::org::apache::poi::util::LittleEndian::getLong(data, 0);
}

int16_t org::apache::poi::poifs::filesystem::NDocumentInputStream::readShort()
{
    checkAvaliable(SIZE_SHORT);
    auto data = new ::int8_tArray(SIZE_SHORT);
    readFully(data, int32_t(0), SIZE_SHORT);
    return ::org::apache::poi::util::LittleEndian::getShort(data);
}

int32_t org::apache::poi::poifs::filesystem::NDocumentInputStream::readInt()
{
    checkAvaliable(SIZE_INT);
    auto data = new ::int8_tArray(SIZE_INT);
    readFully(data, int32_t(0), SIZE_INT);
    return ::org::apache::poi::util::LittleEndian::getInt(data);
}

int32_t org::apache::poi::poifs::filesystem::NDocumentInputStream::readUShort()
{
    checkAvaliable(SIZE_SHORT);
    auto data = new ::int8_tArray(SIZE_SHORT);
    readFully(data, int32_t(0), SIZE_SHORT);
    return ::org::apache::poi::util::LittleEndian::getUShort(data);
}

int32_t org::apache::poi::poifs::filesystem::NDocumentInputStream::readUByte()
{
    checkAvaliable(1);
    auto data = new ::int8_tArray(int32_t(1));
    readFully(data, int32_t(0), int32_t(1));
    if((*data)[int32_t(0)] >= 0)
        return (*data)[int32_t(0)];

    return (*data)[int32_t(0)] + int32_t(256);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::poifs::filesystem::NDocumentInputStream::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.filesystem.NDocumentInputStream", 52);
    return c;
}

int32_t org::apache::poi::poifs::filesystem::NDocumentInputStream::read(::int8_tArray* b)
{
    return super::read(b);
}

void org::apache::poi::poifs::filesystem::NDocumentInputStream::readFully(::int8_tArray* buf)
{
    super::readFully(buf);
}

java::lang::Class* org::apache::poi::poifs::filesystem::NDocumentInputStream::getClass0()
{
    return class_();
}

