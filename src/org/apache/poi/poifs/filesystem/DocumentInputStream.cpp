// Generated from /POI/java/org/apache/poi/poifs/filesystem/DocumentInputStream.java
#include <org/apache/poi/poifs/filesystem/DocumentInputStream.hpp>

#include <java/io/IOException.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <org/apache/poi/poifs/filesystem/DirectoryEntry.hpp>
#include <org/apache/poi/poifs/filesystem/DirectoryNode.hpp>
#include <org/apache/poi/poifs/filesystem/DocumentEntry.hpp>
#include <org/apache/poi/poifs/filesystem/DocumentNode.hpp>
#include <org/apache/poi/poifs/filesystem/NDocumentInputStream.hpp>
#include <org/apache/poi/poifs/filesystem/NPOIFSFileSystem.hpp>
#include <org/apache/poi/poifs/filesystem/ODocumentInputStream.hpp>
#include <org/apache/poi/poifs/filesystem/OPOIFSDocument.hpp>
#include <org/apache/poi/poifs/filesystem/OPOIFSFileSystem.hpp>
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

org::apache::poi::poifs::filesystem::DocumentInputStream::DocumentInputStream(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::poifs::filesystem::DocumentInputStream::DocumentInputStream() 
    : DocumentInputStream(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::poifs::filesystem::DocumentInputStream::DocumentInputStream(DocumentEntry* document)  /* throws(IOException) */
    : DocumentInputStream(*static_cast< ::default_init_tag* >(0))
{
    ctor(document);
}

org::apache::poi::poifs::filesystem::DocumentInputStream::DocumentInputStream(OPOIFSDocument* document) 
    : DocumentInputStream(*static_cast< ::default_init_tag* >(0))
{
    ctor(document);
}

org::apache::poi::poifs::filesystem::DocumentInputStream::DocumentInputStream(NPOIFSDocument* document) 
    : DocumentInputStream(*static_cast< ::default_init_tag* >(0))
{
    ctor(document);
}

constexpr int32_t org::apache::poi::poifs::filesystem::DocumentInputStream::EOF_;

constexpr int32_t org::apache::poi::poifs::filesystem::DocumentInputStream::SIZE_SHORT;

constexpr int32_t org::apache::poi::poifs::filesystem::DocumentInputStream::SIZE_INT;

constexpr int32_t org::apache::poi::poifs::filesystem::DocumentInputStream::SIZE_LONG;

void org::apache::poi::poifs::filesystem::DocumentInputStream::ctor()
{
    super::ctor();
}

void org::apache::poi::poifs::filesystem::DocumentInputStream::ctor(DocumentEntry* document) /* throws(IOException) */
{
    super::ctor();
    if(!(dynamic_cast< DocumentNode* >(document) != nullptr)) {
        throw new ::java::io::IOException(u"Cannot open internal document storage"_j);
    }
    auto documentNode = java_cast< DocumentNode* >(document);
    auto parentNode = java_cast< DirectoryNode* >(npc(document)->getParent());
    if(npc(documentNode)->getDocument() != nullptr) {
        delegate = new ODocumentInputStream(document);
    } else if(npc(parentNode)->getOFileSystem() != nullptr) {
        delegate = new ODocumentInputStream(document);
    } else if(npc(parentNode)->getNFileSystem() != nullptr) {
        delegate = new NDocumentInputStream(document);
    } else {
        throw new ::java::io::IOException(u"No FileSystem bound on the parent, can't read contents"_j);
    }
}

void org::apache::poi::poifs::filesystem::DocumentInputStream::ctor(OPOIFSDocument* document)
{
    super::ctor();
    delegate = new ODocumentInputStream(document);
}

void org::apache::poi::poifs::filesystem::DocumentInputStream::ctor(NPOIFSDocument* document)
{
    super::ctor();
    delegate = new NDocumentInputStream(document);
}

int32_t org::apache::poi::poifs::filesystem::DocumentInputStream::available()
{
    return npc(delegate)->available();
}

void org::apache::poi::poifs::filesystem::DocumentInputStream::close()
{
    npc(delegate)->close();
}

void org::apache::poi::poifs::filesystem::DocumentInputStream::mark(int32_t ignoredReadlimit)
{
    npc(delegate)->mark(ignoredReadlimit);
}

bool org::apache::poi::poifs::filesystem::DocumentInputStream::markSupported()
{
    return true;
}

int32_t org::apache::poi::poifs::filesystem::DocumentInputStream::read() /* throws(IOException) */
{
    return npc(delegate)->read();
}

int32_t org::apache::poi::poifs::filesystem::DocumentInputStream::read(::int8_tArray* b) /* throws(IOException) */
{
    return read(b, int32_t(0), npc(b)->length);
}

int32_t org::apache::poi::poifs::filesystem::DocumentInputStream::read(::int8_tArray* b, int32_t off, int32_t len) /* throws(IOException) */
{
    return npc(delegate)->read(b, off, len);
}

void org::apache::poi::poifs::filesystem::DocumentInputStream::reset()
{
    npc(delegate)->reset();
}

int64_t org::apache::poi::poifs::filesystem::DocumentInputStream::skip(int64_t n) /* throws(IOException) */
{
    return npc(delegate)->skip(n);
}

int8_t org::apache::poi::poifs::filesystem::DocumentInputStream::readByte()
{
    return npc(delegate)->readByte();
}

double org::apache::poi::poifs::filesystem::DocumentInputStream::readDouble()
{
    return npc(delegate)->readDouble();
}

int16_t org::apache::poi::poifs::filesystem::DocumentInputStream::readShort()
{
    return static_cast< int16_t >(readUShort());
}

void org::apache::poi::poifs::filesystem::DocumentInputStream::readFully(::int8_tArray* buf)
{
    readFully(buf, int32_t(0), npc(buf)->length);
}

void org::apache::poi::poifs::filesystem::DocumentInputStream::readFully(::int8_tArray* buf, int32_t off, int32_t len)
{
    npc(delegate)->readFully(buf, off, len);
}

int64_t org::apache::poi::poifs::filesystem::DocumentInputStream::readLong()
{
    return npc(delegate)->readLong();
}

int32_t org::apache::poi::poifs::filesystem::DocumentInputStream::readInt()
{
    return npc(delegate)->readInt();
}

int32_t org::apache::poi::poifs::filesystem::DocumentInputStream::readUShort()
{
    return npc(delegate)->readUShort();
}

int32_t org::apache::poi::poifs::filesystem::DocumentInputStream::readUByte()
{
    return npc(delegate)->readUByte();
}

int64_t org::apache::poi::poifs::filesystem::DocumentInputStream::readUInt()
{
    auto i = readInt();
    return i & int64_t(4294967295LL);
}

void org::apache::poi::poifs::filesystem::DocumentInputStream::readPlain(::int8_tArray* buf, int32_t off, int32_t len)
{
    readFully(buf, off, len);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::poifs::filesystem::DocumentInputStream::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.filesystem.DocumentInputStream", 51);
    return c;
}

java::lang::Class* org::apache::poi::poifs::filesystem::DocumentInputStream::getClass0()
{
    return class_();
}

