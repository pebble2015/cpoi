// Generated from /POI/java/org/apache/poi/util/IntegerField.java
#include <org/apache/poi/util/IntegerField.hpp>

#include <java/lang/ArrayIndexOutOfBoundsException.hpp>
#include <java/lang/String.hpp>
#include <org/apache/poi/util/LittleEndian.hpp>

poi::util::IntegerField::IntegerField(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::util::IntegerField::IntegerField(int32_t offset)  /* throws(ArrayIndexOutOfBoundsException) */
    : IntegerField(*static_cast< ::default_init_tag* >(0))
{
    ctor(offset);
}

poi::util::IntegerField::IntegerField(int32_t offset, int32_t value)  /* throws(ArrayIndexOutOfBoundsException) */
    : IntegerField(*static_cast< ::default_init_tag* >(0))
{
    ctor(offset,value);
}

poi::util::IntegerField::IntegerField(int32_t offset, ::int8_tArray* data)  /* throws(ArrayIndexOutOfBoundsException) */
    : IntegerField(*static_cast< ::default_init_tag* >(0))
{
    ctor(offset,data);
}

poi::util::IntegerField::IntegerField(int32_t offset, int32_t value, ::int8_tArray* data)  /* throws(ArrayIndexOutOfBoundsException) */
    : IntegerField(*static_cast< ::default_init_tag* >(0))
{
    ctor(offset,value,data);
}

void poi::util::IntegerField::ctor(int32_t offset) /* throws(ArrayIndexOutOfBoundsException) */
{
    super::ctor();
    if(offset < 0) {
        throw new ::java::lang::ArrayIndexOutOfBoundsException(u"negative offset"_j);
    }
    _offset = offset;
}

void poi::util::IntegerField::ctor(int32_t offset, int32_t value) /* throws(ArrayIndexOutOfBoundsException) */
{
    ctor(offset);
    set(value);
}

void poi::util::IntegerField::ctor(int32_t offset, ::int8_tArray* data) /* throws(ArrayIndexOutOfBoundsException) */
{
    ctor(offset);
    readFromBytes(data);
}

void poi::util::IntegerField::ctor(int32_t offset, int32_t value, ::int8_tArray* data) /* throws(ArrayIndexOutOfBoundsException) */
{
    ctor(offset);
    set(value, data);
}

int32_t poi::util::IntegerField::get()
{
    return _value;
}

void poi::util::IntegerField::set(int32_t value)
{
    _value = value;
}

void poi::util::IntegerField::set(int32_t value, ::int8_tArray* data) /* throws(ArrayIndexOutOfBoundsException) */
{
    _value = value;
    writeToBytes(data);
}

void poi::util::IntegerField::readFromBytes(::int8_tArray* data) /* throws(ArrayIndexOutOfBoundsException) */
{
    _value = LittleEndian::getInt(data, _offset);
}

void poi::util::IntegerField::readFromStream(::java::io::InputStream* stream) /* throws(IOException) */
{
    _value = LittleEndian::readInt(stream);
}

void poi::util::IntegerField::writeToBytes(::int8_tArray* data) /* throws(ArrayIndexOutOfBoundsException) */
{
    LittleEndian::putInt(data, _offset, _value);
}

java::lang::String* poi::util::IntegerField::toString()
{
    return ::java::lang::String::valueOf(_value);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::util::IntegerField::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.util.IntegerField", 32);
    return c;
}

java::lang::Class* poi::util::IntegerField::getClass0()
{
    return class_();
}

