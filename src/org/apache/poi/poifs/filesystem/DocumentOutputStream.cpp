// Generated from /POI/java/org/apache/poi/poifs/filesystem/DocumentOutputStream.java
#include <org/apache/poi/poifs/filesystem/DocumentOutputStream.hpp>

#include <java/io/IOException.hpp>
#include <java/io/OutputStream.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/util/Arrays.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::poifs::filesystem::DocumentOutputStream::DocumentOutputStream(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::poifs::filesystem::DocumentOutputStream::DocumentOutputStream(::java::io::OutputStream* stream, int32_t limit) 
    : DocumentOutputStream(*static_cast< ::default_init_tag* >(0))
{
    ctor(stream,limit);
}

void poi::poifs::filesystem::DocumentOutputStream::ctor(::java::io::OutputStream* stream, int32_t limit)
{
    super::ctor();
    _stream = stream;
    _limit = limit;
    _written = 0;
}

void poi::poifs::filesystem::DocumentOutputStream::write(int32_t b) /* throws(IOException) */
{
    limitCheck(1);
    npc(_stream)->write(b);
}

void poi::poifs::filesystem::DocumentOutputStream::write(::int8_tArray* b) /* throws(IOException) */
{
    write(b, int32_t(0), npc(b)->length);
}

void poi::poifs::filesystem::DocumentOutputStream::write(::int8_tArray* b, int32_t off, int32_t len) /* throws(IOException) */
{
    limitCheck(len);
    npc(_stream)->write(b, off, len);
}

void poi::poifs::filesystem::DocumentOutputStream::flush() /* throws(IOException) */
{
    npc(_stream)->flush();
}

void poi::poifs::filesystem::DocumentOutputStream::close()
{
}

void poi::poifs::filesystem::DocumentOutputStream::writeFiller(int32_t totalLimit, int8_t fill) /* throws(IOException) */
{
    if(totalLimit > _written) {
        auto filler = new ::int8_tArray(totalLimit - _written);
        ::java::util::Arrays::fill(filler, fill);
        npc(_stream)->write(filler);
    }
}

void poi::poifs::filesystem::DocumentOutputStream::limitCheck(int32_t toBeWritten) /* throws(IOException) */
{
    if((_written + toBeWritten) > _limit) {
        throw new ::java::io::IOException(u"tried to write too much data"_j);
    }
    _written += toBeWritten;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::poifs::filesystem::DocumentOutputStream::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.filesystem.DocumentOutputStream", 52);
    return c;
}

java::lang::Class* poi::poifs::filesystem::DocumentOutputStream::getClass0()
{
    return class_();
}

