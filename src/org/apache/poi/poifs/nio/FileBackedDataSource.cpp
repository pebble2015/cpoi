// Generated from /POI/java/org/apache/poi/poifs/nio/FileBackedDataSource.java
#include <org/apache/poi/poifs/nio/FileBackedDataSource.hpp>

#include <java/io/File.hpp>
#include <java/io/FileNotFoundException.hpp>
#include <java/io/RandomAccessFile.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/IndexOutOfBoundsException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/nio/ByteBuffer.hpp>
#include <java/nio/MappedByteBuffer.hpp>
#include <java/nio/channels/Channels.hpp>
#include <java/nio/channels/FileChannel_MapMode.hpp>
#include <java/nio/channels/FileChannel.hpp>
#include <java/nio/channels/ReadableByteChannel.hpp>
#include <java/nio/channels/WritableByteChannel.hpp>
#include <java/security/AccessController.hpp>
#include <java/security/PrivilegedAction.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/List.hpp>
#include <org/apache/poi/poifs/nio/FileBackedDataSource_unmap_1.hpp>
#include <org/apache/poi/util/IOUtils.hpp>
#include <org/apache/poi/util/POILogFactory.hpp>

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

poi::poifs::nio::FileBackedDataSource::FileBackedDataSource(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::poifs::nio::FileBackedDataSource::FileBackedDataSource(::java::io::File* file)  /* throws(FileNotFoundException) */
    : FileBackedDataSource(*static_cast< ::default_init_tag* >(0))
{
    ctor(file);
}

poi::poifs::nio::FileBackedDataSource::FileBackedDataSource(::java::io::File* file, bool readOnly)  /* throws(FileNotFoundException) */
    : FileBackedDataSource(*static_cast< ::default_init_tag* >(0))
{
    ctor(file,readOnly);
}

poi::poifs::nio::FileBackedDataSource::FileBackedDataSource(::java::io::RandomAccessFile* srcFile, bool readOnly) 
    : FileBackedDataSource(*static_cast< ::default_init_tag* >(0))
{
    ctor(srcFile,readOnly);
}

poi::poifs::nio::FileBackedDataSource::FileBackedDataSource(::java::nio::channels::FileChannel* channel, bool readOnly) 
    : FileBackedDataSource(*static_cast< ::default_init_tag* >(0))
{
    ctor(channel,readOnly);
}

void poi::poifs::nio::FileBackedDataSource::init()
{
    buffersToClean = new ::java::util::ArrayList();
}

poi::util::POILogger*& poi::poifs::nio::FileBackedDataSource::logger()
{
    clinit();
    return logger_;
}
poi::util::POILogger* poi::poifs::nio::FileBackedDataSource::logger_;

void poi::poifs::nio::FileBackedDataSource::ctor(::java::io::File* file) /* throws(FileNotFoundException) */
{
    ctor(newSrcFile(file, u"r"_j), true);
}

void poi::poifs::nio::FileBackedDataSource::ctor(::java::io::File* file, bool readOnly) /* throws(FileNotFoundException) */
{
    ctor(newSrcFile(file, readOnly ? u"r"_j : u"rw"_j), readOnly);
}

void poi::poifs::nio::FileBackedDataSource::ctor(::java::io::RandomAccessFile* srcFile, bool readOnly)
{
    ctor(npc(srcFile)->getChannel(), readOnly);
    this->srcFile = srcFile;
}

void poi::poifs::nio::FileBackedDataSource::ctor(::java::nio::channels::FileChannel* channel, bool readOnly)
{
    super::ctor();
    init();
    this->channel = channel;
    this->writable = !readOnly;
}

bool poi::poifs::nio::FileBackedDataSource::isWriteable()
{
    return this->writable;
}

java::nio::channels::FileChannel* poi::poifs::nio::FileBackedDataSource::getChannel()
{
    return this->channel;
}

java::nio::ByteBuffer* poi::poifs::nio::FileBackedDataSource::read(int32_t length, int64_t position) /* throws(IOException) */
{
    if(position >= size()) {
        throw new ::java::lang::IndexOutOfBoundsException(::java::lang::StringBuilder().append(u"Position "_j)->append(position)
            ->append(u" past the end of the file"_j)->toString());
    }
    ::java::nio::ByteBuffer* dst;
    if(writable) {
        dst = npc(channel)->map(::java::nio::channels::FileChannel_MapMode::READ_WRITE(), position, length);
        npc(buffersToClean)->add(static_cast< ::java::lang::Object* >(dst));
    } else {
        npc(channel)->position(position);
        dst = ::java::nio::ByteBuffer::allocate(length);
        auto worked = ::poi::util::IOUtils::readFully(static_cast< ::java::nio::channels::ReadableByteChannel* >(channel), dst);
        if(worked == -int32_t(1)) {
            throw new ::java::lang::IndexOutOfBoundsException(::java::lang::StringBuilder().append(u"Position "_j)->append(position)
                ->append(u" past the end of the file"_j)->toString());
        }
    }
    npc(dst)->position(0);
    return dst;
}

void poi::poifs::nio::FileBackedDataSource::write(::java::nio::ByteBuffer* src, int64_t position) /* throws(IOException) */
{
    npc(channel)->write(src, position);
}

void poi::poifs::nio::FileBackedDataSource::copyTo(::java::io::OutputStream* stream) /* throws(IOException) */
{
    auto out = ::java::nio::channels::Channels::newChannel(stream);
    npc(channel)->transferTo(0, npc(channel)->size(), out);
}

int64_t poi::poifs::nio::FileBackedDataSource::size() /* throws(IOException) */
{
    return npc(channel)->size();
}

void poi::poifs::nio::FileBackedDataSource::close() /* throws(IOException) */
{
    for (auto _i = npc(buffersToClean)->iterator(); _i->hasNext(); ) {
        ::java::nio::ByteBuffer* buffer = java_cast< ::java::nio::ByteBuffer* >(_i->next());
        {
            unmap(buffer);
        }
    }
    npc(buffersToClean)->clear();
    if(srcFile != nullptr) {
        npc(srcFile)->close();
    } else {
        npc(channel)->close();
    }
}

java::io::RandomAccessFile* poi::poifs::nio::FileBackedDataSource::newSrcFile(::java::io::File* file, ::java::lang::String* mode) /* throws(FileNotFoundException) */
{
    clinit();
    if(!npc(file)->exists()) {
        throw new ::java::io::FileNotFoundException(npc(file)->toString());
    }
    return new ::java::io::RandomAccessFile(file, mode);
}

void poi::poifs::nio::FileBackedDataSource::unmap(::java::nio::ByteBuffer* buffer)
{
    clinit();
    if(npc(npc(npc(buffer)->getClass())->getName())->endsWith(u"HeapByteBuffer"_j)) {
        return;
    }
    ::java::security::AccessController::doPrivileged(static_cast< ::java::security::PrivilegedAction* >(new FileBackedDataSource_unmap_1(buffer)));
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::poifs::nio::FileBackedDataSource::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.nio.FileBackedDataSource", 45);
    return c;
}

void poi::poifs::nio::FileBackedDataSource::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        logger_ = ::poi::util::POILogFactory::getLogger(static_cast< ::java::lang::Class* >(FileBackedDataSource::class_()));
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* poi::poifs::nio::FileBackedDataSource::getClass0()
{
    return class_();
}

