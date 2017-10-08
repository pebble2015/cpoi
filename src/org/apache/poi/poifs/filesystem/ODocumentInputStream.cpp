// Generated from /POI/java/org/apache/poi/poifs/filesystem/ODocumentInputStream.java
#include <org/apache/poi/poifs/filesystem/ODocumentInputStream.hpp>

#include <java/io/IOException.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Double.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/IllegalStateException.hpp>
#include <java/lang/IndexOutOfBoundsException.hpp>
#include <java/lang/Math.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/poifs/filesystem/DocumentEntry.hpp>
#include <org/apache/poi/poifs/filesystem/DocumentNode.hpp>
#include <org/apache/poi/poifs/filesystem/OPOIFSDocument.hpp>
#include <org/apache/poi/poifs/storage/DataInputBlock.hpp>
#include <org/apache/poi/util/RecordFormatException.hpp>
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

poi::poifs::filesystem::ODocumentInputStream::ODocumentInputStream(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::poifs::filesystem::ODocumentInputStream::ODocumentInputStream(DocumentEntry* document)  /* throws(IOException) */
    : ODocumentInputStream(*static_cast< ::default_init_tag* >(0))
{
    ctor(document);
}

poi::poifs::filesystem::ODocumentInputStream::ODocumentInputStream(OPOIFSDocument* document) 
    : ODocumentInputStream(*static_cast< ::default_init_tag* >(0))
{
    ctor(document);
}

void poi::poifs::filesystem::ODocumentInputStream::ctor(DocumentEntry* document) /* throws(IOException) */
{
    super::ctor();
    if(!(dynamic_cast< DocumentNode* >(document) != nullptr)) {
        throw new ::java::io::IOException(u"Cannot open internal document storage"_j);
    }
    auto documentNode = java_cast< DocumentNode* >(document);
    if(npc(documentNode)->getDocument() == nullptr) {
        throw new ::java::io::IOException(u"Cannot open internal document storage"_j);
    }
    _current_offset = 0;
    _marked_offset = 0;
    _document_size = npc(document)->getSize();
    if(_document_size < 0) {
        throw new ::poi::util::RecordFormatException(u"document_size cannot be < 0"_j);
    }
    _closed = false;
    _document = npc(documentNode)->getDocument();
    _currentBlock = getDataInputBlock(0);
}

void poi::poifs::filesystem::ODocumentInputStream::ctor(OPOIFSDocument* document)
{
    super::ctor();
    _current_offset = 0;
    _marked_offset = 0;
    _document_size = npc(document)->getSize();
    _closed = false;
    _document = document;
    _currentBlock = getDataInputBlock(0);
}

int32_t poi::poifs::filesystem::ODocumentInputStream::available()
{
    if(_closed) {
        throw new ::java::lang::IllegalStateException(u"cannot perform requested operation on a closed stream"_j);
    }
    return _document_size - _current_offset;
}

void poi::poifs::filesystem::ODocumentInputStream::close()
{
    _closed = true;
}

void poi::poifs::filesystem::ODocumentInputStream::mark(int32_t ignoredReadlimit)
{
    _marked_offset = _current_offset;
}

poi::poifs::storage::DataInputBlock* poi::poifs::filesystem::ODocumentInputStream::getDataInputBlock(int32_t offset)
{
    return npc(_document)->getDataInputBlock(offset);
}

int32_t poi::poifs::filesystem::ODocumentInputStream::read() /* throws(IOException) */
{
    dieIfClosed();
    if(atEOD()) {
        return EOF_;
    }
    auto result = npc(_currentBlock)->readUByte();
    _current_offset++;
    if(npc(_currentBlock)->available() < 1) {
        _currentBlock = getDataInputBlock(_current_offset);
    }
    return result;
}

int32_t poi::poifs::filesystem::ODocumentInputStream::read(::int8_tArray* b, int32_t off, int32_t len) /* throws(IOException) */
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
    auto limit = ::java::lang::Math::min(available(), len);
    readFully(b, off, limit);
    return limit;
}

void poi::poifs::filesystem::ODocumentInputStream::reset()
{
    _current_offset = _marked_offset;
    _currentBlock = getDataInputBlock(_current_offset);
}

int64_t poi::poifs::filesystem::ODocumentInputStream::skip(int64_t n) /* throws(IOException) */
{
    dieIfClosed();
    if(n < 0) {
        return 0;
    }
    auto new_offset = _current_offset + static_cast< int32_t >(n);
    if(new_offset < _current_offset) {
        new_offset = _document_size;
    } else if(new_offset > _document_size) {
        new_offset = _document_size;
    }
    int64_t rval = new_offset - _current_offset;
    _current_offset = new_offset;
    _currentBlock = getDataInputBlock(_current_offset);
    return rval;
}

void poi::poifs::filesystem::ODocumentInputStream::dieIfClosed() /* throws(IOException) */
{
    if(_closed) {
        throw new ::java::io::IOException(u"cannot perform requested operation on a closed stream"_j);
    }
}

bool poi::poifs::filesystem::ODocumentInputStream::atEOD()
{
    return _current_offset == _document_size;
}

void poi::poifs::filesystem::ODocumentInputStream::checkAvaliable(int32_t requestedSize)
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

int8_t poi::poifs::filesystem::ODocumentInputStream::readByte()
{
    return static_cast< int8_t >(readUByte());
}

double poi::poifs::filesystem::ODocumentInputStream::readDouble()
{
    return ::java::lang::Double::longBitsToDouble(readLong());
}

int16_t poi::poifs::filesystem::ODocumentInputStream::readShort()
{
    return static_cast< int16_t >(readUShort());
}

void poi::poifs::filesystem::ODocumentInputStream::readFully(::int8_tArray* buf, int32_t off, int32_t len)
{
    checkAvaliable(len);
    auto blockAvailable = npc(_currentBlock)->available();
    if(blockAvailable > len) {
        npc(_currentBlock)->readFully(buf, off, len);
        _current_offset += len;
        return;
    }
    auto remaining = len;
    auto writePos = off;
    while (remaining > 0) {
        auto blockIsExpiring = remaining >= blockAvailable;
        int32_t reqSize;
        if(blockIsExpiring) {
            reqSize = blockAvailable;
        } else {
            reqSize = remaining;
        }
        npc(_currentBlock)->readFully(buf, writePos, reqSize);
        remaining -= reqSize;
        writePos += reqSize;
        _current_offset += reqSize;
        if(blockIsExpiring) {
            if(_current_offset == _document_size) {
                if(remaining > 0) {
                    throw new ::java::lang::IllegalStateException(u"reached end of document stream unexpectedly"_j);
                }
                _currentBlock = nullptr;
                break;
            }
            _currentBlock = getDataInputBlock(_current_offset);
            blockAvailable = npc(_currentBlock)->available();
        }
    }
}

int64_t poi::poifs::filesystem::ODocumentInputStream::readLong()
{
    checkAvaliable(SIZE_LONG);
    auto blockAvailable = npc(_currentBlock)->available();
    int64_t result;
    if(blockAvailable > SIZE_LONG) {
        result = npc(_currentBlock)->readLongLE();
    } else {
        auto nextBlock = getDataInputBlock(_current_offset + blockAvailable);
        if(blockAvailable == SIZE_LONG) {
            result = npc(_currentBlock)->readLongLE();
        } else {
            result = npc(nextBlock)->readLongLE(_currentBlock, blockAvailable);
        }
        _currentBlock = nextBlock;
    }
    _current_offset += SIZE_LONG;
    return result;
}

int32_t poi::poifs::filesystem::ODocumentInputStream::readInt()
{
    checkAvaliable(SIZE_INT);
    auto blockAvailable = npc(_currentBlock)->available();
    int32_t result;
    if(blockAvailable > SIZE_INT) {
        result = npc(_currentBlock)->readIntLE();
    } else {
        auto nextBlock = getDataInputBlock(_current_offset + blockAvailable);
        if(blockAvailable == SIZE_INT) {
            result = npc(_currentBlock)->readIntLE();
        } else {
            result = npc(nextBlock)->readIntLE(_currentBlock, blockAvailable);
        }
        _currentBlock = nextBlock;
    }
    _current_offset += SIZE_INT;
    return result;
}

int32_t poi::poifs::filesystem::ODocumentInputStream::readUShort()
{
    checkAvaliable(SIZE_SHORT);
    auto blockAvailable = npc(_currentBlock)->available();
    int32_t result;
    if(blockAvailable > SIZE_SHORT) {
        result = npc(_currentBlock)->readUShortLE();
    } else {
        auto nextBlock = getDataInputBlock(_current_offset + blockAvailable);
        if(blockAvailable == SIZE_SHORT) {
            result = npc(_currentBlock)->readUShortLE();
        } else {
            result = npc(nextBlock)->readUShortLE(_currentBlock);
        }
        _currentBlock = nextBlock;
    }
    _current_offset += SIZE_SHORT;
    return result;
}

int32_t poi::poifs::filesystem::ODocumentInputStream::readUByte()
{
    checkAvaliable(1);
    auto result = npc(_currentBlock)->readUByte();
    _current_offset++;
    if(npc(_currentBlock)->available() < 1) {
        _currentBlock = getDataInputBlock(_current_offset);
    }
    return result;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::poifs::filesystem::ODocumentInputStream::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.filesystem.ODocumentInputStream", 52);
    return c;
}

int32_t poi::poifs::filesystem::ODocumentInputStream::read(::int8_tArray* b)
{
    return super::read(b);
}

void poi::poifs::filesystem::ODocumentInputStream::readFully(::int8_tArray* buf)
{
    super::readFully(buf);
}

java::lang::Class* poi::poifs::filesystem::ODocumentInputStream::getClass0()
{
    return class_();
}

