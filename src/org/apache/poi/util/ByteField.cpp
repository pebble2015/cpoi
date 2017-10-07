// Generated from /POI/java/org/apache/poi/util/ByteField.java
#include <org/apache/poi/util/ByteField.hpp>

#include <java/io/InputStream.hpp>
#include <java/lang/ArrayIndexOutOfBoundsException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/nio/BufferUnderflowException.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::util::ByteField::ByteField(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::util::ByteField::ByteField(int32_t offset)  /* throws(ArrayIndexOutOfBoundsException) */
    : ByteField(*static_cast< ::default_init_tag* >(0))
{
    ctor(offset);
}

org::apache::poi::util::ByteField::ByteField(int32_t offset, int8_t value)  /* throws(ArrayIndexOutOfBoundsException) */
    : ByteField(*static_cast< ::default_init_tag* >(0))
{
    ctor(offset,value);
}

org::apache::poi::util::ByteField::ByteField(int32_t offset, ::int8_tArray* data)  /* throws(ArrayIndexOutOfBoundsException) */
    : ByteField(*static_cast< ::default_init_tag* >(0))
{
    ctor(offset,data);
}

org::apache::poi::util::ByteField::ByteField(int32_t offset, int8_t value, ::int8_tArray* data)  /* throws(ArrayIndexOutOfBoundsException) */
    : ByteField(*static_cast< ::default_init_tag* >(0))
{
    ctor(offset,value,data);
}

constexpr int8_t org::apache::poi::util::ByteField::_default_value;

void org::apache::poi::util::ByteField::ctor(int32_t offset) /* throws(ArrayIndexOutOfBoundsException) */
{
    ctor(offset, _default_value);
}

void org::apache::poi::util::ByteField::ctor(int32_t offset, int8_t value) /* throws(ArrayIndexOutOfBoundsException) */
{
    super::ctor();
    if(offset < 0) {
        throw new ::java::lang::ArrayIndexOutOfBoundsException(u"offset cannot be negative"_j);
    }
    _offset = offset;
    set(value);
}

void org::apache::poi::util::ByteField::ctor(int32_t offset, ::int8_tArray* data) /* throws(ArrayIndexOutOfBoundsException) */
{
    ctor(offset);
    readFromBytes(data);
}

void org::apache::poi::util::ByteField::ctor(int32_t offset, int8_t value, ::int8_tArray* data) /* throws(ArrayIndexOutOfBoundsException) */
{
    ctor(offset, value);
    writeToBytes(data);
}

int8_t org::apache::poi::util::ByteField::get()
{
    return _value;
}

void org::apache::poi::util::ByteField::set(int8_t value)
{
    _value = value;
}

void org::apache::poi::util::ByteField::set(int8_t value, ::int8_tArray* data) /* throws(ArrayIndexOutOfBoundsException) */
{
    set(value);
    writeToBytes(data);
}

void org::apache::poi::util::ByteField::readFromBytes(::int8_tArray* data) /* throws(ArrayIndexOutOfBoundsException) */
{
    _value = (*data)[_offset];
}

void org::apache::poi::util::ByteField::readFromStream(::java::io::InputStream* stream) /* throws(IOException) */
{
    auto ib = npc(stream)->read();
    if(ib < 0) {
        throw new ::java::nio::BufferUnderflowException();
    }
    _value = static_cast< int8_t >(ib);
}

void org::apache::poi::util::ByteField::writeToBytes(::int8_tArray* data) /* throws(ArrayIndexOutOfBoundsException) */
{
    (*data)[_offset] = _value;
}

java::lang::String* org::apache::poi::util::ByteField::toString()
{
    return ::java::lang::String::valueOf(static_cast< int32_t >(_value));
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::util::ByteField::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.util.ByteField", 29);
    return c;
}

java::lang::Class* org::apache::poi::util::ByteField::getClass0()
{
    return class_();
}

