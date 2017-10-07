// Generated from /POI/java/org/apache/poi/util/BoundedInputStream.java
#include <org/apache/poi/util/BoundedInputStream.hpp>

#include <java/io/InputStream.hpp>
#include <java/lang/Math.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::util::BoundedInputStream::BoundedInputStream(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::util::BoundedInputStream::BoundedInputStream(::java::io::InputStream* in, int64_t size) 
    : BoundedInputStream(*static_cast< ::default_init_tag* >(0))
{
    ctor(in,size);
}

org::apache::poi::util::BoundedInputStream::BoundedInputStream(::java::io::InputStream* in) 
    : BoundedInputStream(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

void org::apache::poi::util::BoundedInputStream::init()
{
    pos = int32_t(0);
    mark_ = -int32_t(1);
    propagateClose = true;
}

void org::apache::poi::util::BoundedInputStream::ctor(::java::io::InputStream* in, int64_t size)
{
    super::ctor();
    init();
    this->max = size;
    this->in = in;
}

void org::apache::poi::util::BoundedInputStream::ctor(::java::io::InputStream* in)
{
    ctor(in, -int32_t(1));
}

int32_t org::apache::poi::util::BoundedInputStream::read() /* throws(IOException) */
{
    if(max >= 0 && pos == max) {
        return -int32_t(1);
    }
    auto result = npc(in)->read();
    pos++;
    return result;
}

int32_t org::apache::poi::util::BoundedInputStream::read(::int8_tArray* b) /* throws(IOException) */
{
    return this->read(b, int32_t(0), npc(b)->length);
}

int32_t org::apache::poi::util::BoundedInputStream::read(::int8_tArray* b, int32_t off, int32_t len) /* throws(IOException) */
{
    if(max >= 0 && pos >= max) {
        return -int32_t(1);
    }
    auto maxRead = max >= 0 ? ::java::lang::Math::min(static_cast< int64_t >(len), max - pos) : static_cast< int64_t >(len);
    auto bytesRead = npc(in)->read(b, off, static_cast< int32_t >(maxRead));
    if(bytesRead == -int32_t(1)) {
        return -int32_t(1);
    }
    pos += bytesRead;
    return bytesRead;
}

int64_t org::apache::poi::util::BoundedInputStream::skip(int64_t n) /* throws(IOException) */
{
    auto toSkip = max >= 0 ? ::java::lang::Math::min(n, max - pos) : n;
    auto skippedBytes = npc(in)->skip(toSkip);
    pos += skippedBytes;
    return skippedBytes;
}

int32_t org::apache::poi::util::BoundedInputStream::available() /* throws(IOException) */
{
    if(max >= 0 && pos >= max) {
        return 0;
    }
    return npc(in)->available();
}

java::lang::String* org::apache::poi::util::BoundedInputStream::toString()
{
    return npc(in)->toString();
}

void org::apache::poi::util::BoundedInputStream::close() /* throws(IOException) */
{
    if(propagateClose) {
        npc(in)->close();
    }
}

void org::apache::poi::util::BoundedInputStream::reset() /* throws(IOException) */
{
    npc(in)->reset();
    pos = mark_;
}

void org::apache::poi::util::BoundedInputStream::mark(int32_t readlimit)
{
    npc(in)->mark(readlimit);
    mark_ = pos;
}

bool org::apache::poi::util::BoundedInputStream::markSupported()
{
    return npc(in)->markSupported();
}

bool org::apache::poi::util::BoundedInputStream::isPropagateClose()
{
    return propagateClose;
}

void org::apache::poi::util::BoundedInputStream::setPropagateClose(bool propagateClose)
{
    this->propagateClose = propagateClose;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::util::BoundedInputStream::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.util.BoundedInputStream", 38);
    return c;
}

java::lang::Class* org::apache::poi::util::BoundedInputStream::getClass0()
{
    return class_();
}

