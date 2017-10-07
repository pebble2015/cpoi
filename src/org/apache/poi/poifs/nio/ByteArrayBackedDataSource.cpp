// Generated from /POI/java/org/apache/poi/poifs/nio/ByteArrayBackedDataSource.java
#include <org/apache/poi/poifs/nio/ByteArrayBackedDataSource.hpp>

#include <java/io/OutputStream.hpp>
#include <java/lang/IndexOutOfBoundsException.hpp>
#include <java/lang/Math.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/System.hpp>
#include <java/nio/ByteBuffer.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::poifs::nio::ByteArrayBackedDataSource::ByteArrayBackedDataSource(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::poifs::nio::ByteArrayBackedDataSource::ByteArrayBackedDataSource(::int8_tArray* data, int32_t size) 
    : ByteArrayBackedDataSource(*static_cast< ::default_init_tag* >(0))
{
    ctor(data,size);
}

org::apache::poi::poifs::nio::ByteArrayBackedDataSource::ByteArrayBackedDataSource(::int8_tArray* data) 
    : ByteArrayBackedDataSource(*static_cast< ::default_init_tag* >(0))
{
    ctor(data);
}

void org::apache::poi::poifs::nio::ByteArrayBackedDataSource::ctor(::int8_tArray* data, int32_t size)
{
    super::ctor();
    this->buffer = data;
    this->size_ = size;
}

void org::apache::poi::poifs::nio::ByteArrayBackedDataSource::ctor(::int8_tArray* data)
{
    ctor(data, npc(data)->length);
}

java::nio::ByteBuffer* org::apache::poi::poifs::nio::ByteArrayBackedDataSource::read(int32_t length, int64_t position)
{
    if(position >= size_) {
        throw new ::java::lang::IndexOutOfBoundsException(::java::lang::StringBuilder().append(u"Unable to read "_j)->append(length)
            ->append(u" bytes from "_j)
            ->append(position)
            ->append(u" in stream of length "_j)
            ->append(size_)->toString());
    }
    auto toRead = static_cast< int32_t >(::java::lang::Math::min(static_cast< int64_t >(length), size_ - position));
    return ::java::nio::ByteBuffer::wrap(buffer, static_cast< int32_t >(position), toRead);
}

void org::apache::poi::poifs::nio::ByteArrayBackedDataSource::write(::java::nio::ByteBuffer* src, int64_t position)
{
    auto endPosition = position + npc(src)->capacity();
    if(endPosition > npc(buffer)->length) {
        extend(endPosition);
    }
    npc(src)->get(buffer, static_cast< int32_t >(position), npc(src)->capacity());
    if(endPosition > size_) {
        size_ = endPosition;
    }
}

void org::apache::poi::poifs::nio::ByteArrayBackedDataSource::extend(int64_t length)
{
    auto difference = length - npc(buffer)->length;
    if(difference < npc(buffer)->length * 0.25) {
        difference = static_cast< int64_t >((npc(buffer)->length * 0.25));
    }
    if(difference < 4096) {
        difference = 4096;
    }
    auto nb = new ::int8_tArray(static_cast< int32_t >((difference + npc(buffer)->length)));
    ::java::lang::System::arraycopy(buffer, 0, nb, 0, static_cast< int32_t >(size_));
    buffer = nb;
}

void org::apache::poi::poifs::nio::ByteArrayBackedDataSource::copyTo(::java::io::OutputStream* stream) /* throws(IOException) */
{
    npc(stream)->write(buffer, 0, static_cast< int32_t >(size_));
}

int64_t org::apache::poi::poifs::nio::ByteArrayBackedDataSource::size()
{
    return size_;
}

void org::apache::poi::poifs::nio::ByteArrayBackedDataSource::close()
{
    buffer = nullptr;
    size_ = -int32_t(1);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::poifs::nio::ByteArrayBackedDataSource::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.nio.ByteArrayBackedDataSource", 50);
    return c;
}

java::lang::Class* org::apache::poi::poifs::nio::ByteArrayBackedDataSource::getClass0()
{
    return class_();
}

