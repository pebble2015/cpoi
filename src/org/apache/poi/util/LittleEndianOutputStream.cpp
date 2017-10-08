// Generated from /POI/java/org/apache/poi/util/LittleEndianOutputStream.java
#include <org/apache/poi/util/LittleEndianOutputStream.hpp>

#include <java/io/IOException.hpp>
#include <java/io/OutputStream.hpp>
#include <java/lang/Double.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/Throwable.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::util::LittleEndianOutputStream::LittleEndianOutputStream(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::util::LittleEndianOutputStream::LittleEndianOutputStream(::java::io::OutputStream* out) 
    : LittleEndianOutputStream(*static_cast< ::default_init_tag* >(0))
{
    ctor(out);
}

void poi::util::LittleEndianOutputStream::ctor(::java::io::OutputStream* out)
{
    super::ctor(out);
}

void poi::util::LittleEndianOutputStream::writeByte(int32_t v)
{
    try {
        npc(out)->write(v);
    } catch (::java::io::IOException* e) {
        throw new ::java::lang::RuntimeException(static_cast< ::java::lang::Throwable* >(e));
    }
}

void poi::util::LittleEndianOutputStream::writeDouble(double v)
{
    writeLong(::java::lang::Double::doubleToLongBits(v));
}

void poi::util::LittleEndianOutputStream::writeInt(int32_t v)
{
    auto b3 = (static_cast<int32_t>(static_cast<uint32_t>(v) >> int32_t(24))) & int32_t(255);
    auto b2 = (static_cast<int32_t>(static_cast<uint32_t>(v) >> int32_t(16))) & int32_t(255);
    auto b1 = (static_cast<int32_t>(static_cast<uint32_t>(v) >> int32_t(8))) & int32_t(255);
    auto b0 = (v) & int32_t(255);
    try {
        npc(out)->write(b0);
        npc(out)->write(b1);
        npc(out)->write(b2);
        npc(out)->write(b3);
    } catch (::java::io::IOException* e) {
        throw new ::java::lang::RuntimeException(static_cast< ::java::lang::Throwable* >(e));
    }
}

void poi::util::LittleEndianOutputStream::writeLong(int64_t v)
{
    writeInt(static_cast< int32_t >((v)));
    writeInt(static_cast< int32_t >((v >> int32_t(32))));
}

void poi::util::LittleEndianOutputStream::writeShort(int32_t v)
{
    auto b1 = (static_cast<int32_t>(static_cast<uint32_t>(v) >> int32_t(8))) & int32_t(255);
    auto b0 = (v) & int32_t(255);
    try {
        npc(out)->write(b0);
        npc(out)->write(b1);
    } catch (::java::io::IOException* e) {
        throw new ::java::lang::RuntimeException(static_cast< ::java::lang::Throwable* >(e));
    }
}

void poi::util::LittleEndianOutputStream::write(::int8_tArray* b)
{
    try {
        super::write(b);
    } catch (::java::io::IOException* e) {
        throw new ::java::lang::RuntimeException(static_cast< ::java::lang::Throwable* >(e));
    }
}

void poi::util::LittleEndianOutputStream::write(::int8_tArray* b, int32_t off, int32_t len)
{
    try {
        super::write(b, off, len);
    } catch (::java::io::IOException* e) {
        throw new ::java::lang::RuntimeException(static_cast< ::java::lang::Throwable* >(e));
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::util::LittleEndianOutputStream::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.util.LittleEndianOutputStream", 44);
    return c;
}

void poi::util::LittleEndianOutputStream::write(int32_t b)
{
    super::write(b);
}

java::lang::Class* poi::util::LittleEndianOutputStream::getClass0()
{
    return class_();
}

