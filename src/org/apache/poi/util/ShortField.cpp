// Generated from /POI/java/org/apache/poi/util/ShortField.java
#include <org/apache/poi/util/ShortField.hpp>

#include <java/lang/ArrayIndexOutOfBoundsException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/util/LittleEndian.hpp>

org::apache::poi::util::ShortField::ShortField(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::util::ShortField::ShortField(int32_t offset)  /* throws(ArrayIndexOutOfBoundsException) */
    : ShortField(*static_cast< ::default_init_tag* >(0))
{
    ctor(offset);
}

org::apache::poi::util::ShortField::ShortField(int32_t offset, int16_t value)  /* throws(ArrayIndexOutOfBoundsException) */
    : ShortField(*static_cast< ::default_init_tag* >(0))
{
    ctor(offset,value);
}

org::apache::poi::util::ShortField::ShortField(int32_t offset, ::int8_tArray* data)  /* throws(ArrayIndexOutOfBoundsException) */
    : ShortField(*static_cast< ::default_init_tag* >(0))
{
    ctor(offset,data);
}

org::apache::poi::util::ShortField::ShortField(int32_t offset, int16_t value, ::int8_tArray* data)  /* throws(ArrayIndexOutOfBoundsException) */
    : ShortField(*static_cast< ::default_init_tag* >(0))
{
    ctor(offset,value,data);
}

void org::apache::poi::util::ShortField::ctor(int32_t offset) /* throws(ArrayIndexOutOfBoundsException) */
{
    super::ctor();
    if(offset < 0) {
        throw new ::java::lang::ArrayIndexOutOfBoundsException(::java::lang::StringBuilder().append(u"Illegal offset: "_j)->append(offset)->toString());
    }
    _offset = offset;
}

void org::apache::poi::util::ShortField::ctor(int32_t offset, int16_t value) /* throws(ArrayIndexOutOfBoundsException) */
{
    ctor(offset);
    set(value);
}

void org::apache::poi::util::ShortField::ctor(int32_t offset, ::int8_tArray* data) /* throws(ArrayIndexOutOfBoundsException) */
{
    ctor(offset);
    readFromBytes(data);
}

void org::apache::poi::util::ShortField::ctor(int32_t offset, int16_t value, ::int8_tArray* data) /* throws(ArrayIndexOutOfBoundsException) */
{
    ctor(offset);
    set(value, data);
}

int16_t org::apache::poi::util::ShortField::get()
{
    return _value;
}

void org::apache::poi::util::ShortField::set(int16_t value)
{
    _value = value;
}

void org::apache::poi::util::ShortField::set(int16_t value, ::int8_tArray* data) /* throws(ArrayIndexOutOfBoundsException) */
{
    _value = value;
    writeToBytes(data);
}

void org::apache::poi::util::ShortField::readFromBytes(::int8_tArray* data) /* throws(ArrayIndexOutOfBoundsException) */
{
    _value = LittleEndian::getShort(data, _offset);
}

void org::apache::poi::util::ShortField::readFromStream(::java::io::InputStream* stream) /* throws(IOException) */
{
    _value = LittleEndian::readShort(stream);
}

void org::apache::poi::util::ShortField::writeToBytes(::int8_tArray* data) /* throws(ArrayIndexOutOfBoundsException) */
{
    LittleEndian::putShort(data, _offset, _value);
}

java::lang::String* org::apache::poi::util::ShortField::toString()
{
    return ::java::lang::String::valueOf(static_cast< int32_t >(_value));
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::util::ShortField::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.util.ShortField", 30);
    return c;
}

java::lang::Class* org::apache::poi::util::ShortField::getClass0()
{
    return class_();
}

