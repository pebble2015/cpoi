// Generated from /POI/java/org/apache/poi/util/LongField.java
#include <org/apache/poi/util/LongField.hpp>

#include <java/lang/ArrayIndexOutOfBoundsException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/util/LittleEndian.hpp>

poi::util::LongField::LongField(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::util::LongField::LongField(int32_t offset)  /* throws(ArrayIndexOutOfBoundsException) */
    : LongField(*static_cast< ::default_init_tag* >(0))
{
    ctor(offset);
}

poi::util::LongField::LongField(int32_t offset, int64_t value)  /* throws(ArrayIndexOutOfBoundsException) */
    : LongField(*static_cast< ::default_init_tag* >(0))
{
    ctor(offset,value);
}

poi::util::LongField::LongField(int32_t offset, ::int8_tArray* data)  /* throws(ArrayIndexOutOfBoundsException) */
    : LongField(*static_cast< ::default_init_tag* >(0))
{
    ctor(offset,data);
}

poi::util::LongField::LongField(int32_t offset, int64_t value, ::int8_tArray* data)  /* throws(ArrayIndexOutOfBoundsException) */
    : LongField(*static_cast< ::default_init_tag* >(0))
{
    ctor(offset,value,data);
}

void poi::util::LongField::ctor(int32_t offset) /* throws(ArrayIndexOutOfBoundsException) */
{
    super::ctor();
    if(offset < 0) {
        throw new ::java::lang::ArrayIndexOutOfBoundsException(::java::lang::StringBuilder().append(u"Illegal offset: "_j)->append(offset)->toString());
    }
    _offset = offset;
}

void poi::util::LongField::ctor(int32_t offset, int64_t value) /* throws(ArrayIndexOutOfBoundsException) */
{
    ctor(offset);
    set(value);
}

void poi::util::LongField::ctor(int32_t offset, ::int8_tArray* data) /* throws(ArrayIndexOutOfBoundsException) */
{
    ctor(offset);
    readFromBytes(data);
}

void poi::util::LongField::ctor(int32_t offset, int64_t value, ::int8_tArray* data) /* throws(ArrayIndexOutOfBoundsException) */
{
    ctor(offset);
    set(value, data);
}

int64_t poi::util::LongField::get()
{
    return _value;
}

void poi::util::LongField::set(int64_t value)
{
    _value = value;
}

void poi::util::LongField::set(int64_t value, ::int8_tArray* data) /* throws(ArrayIndexOutOfBoundsException) */
{
    _value = value;
    writeToBytes(data);
}

void poi::util::LongField::readFromBytes(::int8_tArray* data) /* throws(ArrayIndexOutOfBoundsException) */
{
    _value = LittleEndian::getLong(data, _offset);
}

void poi::util::LongField::readFromStream(::java::io::InputStream* stream) /* throws(IOException) */
{
    _value = LittleEndian::readLong(stream);
}

void poi::util::LongField::writeToBytes(::int8_tArray* data) /* throws(ArrayIndexOutOfBoundsException) */
{
    LittleEndian::putLong(data, _offset, _value);
}

java::lang::String* poi::util::LongField::toString()
{
    return ::java::lang::String::valueOf(_value);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::util::LongField::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.util.LongField", 29);
    return c;
}

java::lang::Class* poi::util::LongField::getClass0()
{
    return class_();
}

