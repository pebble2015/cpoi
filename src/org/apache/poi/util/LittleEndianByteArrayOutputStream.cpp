// Generated from /POI/java/org/apache/poi/util/LittleEndianByteArrayOutputStream.java
#include <org/apache/poi/util/LittleEndianByteArrayOutputStream.hpp>

#include <java/lang/Double.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/System.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::util::LittleEndianByteArrayOutputStream::LittleEndianByteArrayOutputStream(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::util::LittleEndianByteArrayOutputStream::LittleEndianByteArrayOutputStream(::int8_tArray* buf, int32_t startOffset, int32_t maxWriteLen) 
    : LittleEndianByteArrayOutputStream(*static_cast< ::default_init_tag* >(0))
{
    ctor(buf,startOffset,maxWriteLen);
}

poi::util::LittleEndianByteArrayOutputStream::LittleEndianByteArrayOutputStream(::int8_tArray* buf, int32_t startOffset) 
    : LittleEndianByteArrayOutputStream(*static_cast< ::default_init_tag* >(0))
{
    ctor(buf,startOffset);
}

void poi::util::LittleEndianByteArrayOutputStream::ctor(::int8_tArray* buf, int32_t startOffset, int32_t maxWriteLen)
{
    super::ctor();
    if(startOffset < 0 || startOffset > npc(buf)->length) {
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Specified startOffset ("_j)->append(startOffset)
            ->append(u") is out of allowable range (0.."_j)
            ->append(npc(buf)->length)
            ->append(u")"_j)->toString());
    }
    _buf = buf;
    _writeIndex = startOffset;
    _endIndex = startOffset + maxWriteLen;
    if(_endIndex < startOffset || _endIndex > npc(buf)->length) {
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"calculated end index ("_j)->append(_endIndex)
            ->append(u") is out of allowable range ("_j)
            ->append(_writeIndex)
            ->append(u".."_j)
            ->append(npc(buf)->length)
            ->append(u")"_j)->toString());
    }
}

void poi::util::LittleEndianByteArrayOutputStream::ctor(::int8_tArray* buf, int32_t startOffset)
{
    ctor(buf, startOffset, npc(buf)->length - startOffset);
}

void poi::util::LittleEndianByteArrayOutputStream::checkPosition(int32_t i)
{
    if(i > _endIndex - _writeIndex) {
        throw new ::java::lang::RuntimeException(u"Buffer overrun"_j);
    }
}

void poi::util::LittleEndianByteArrayOutputStream::writeByte(int32_t v)
{
    checkPosition(1);
    (*_buf)[_writeIndex++] = static_cast< int8_t >(v);
}

void poi::util::LittleEndianByteArrayOutputStream::writeDouble(double v)
{
    writeLong(::java::lang::Double::doubleToLongBits(v));
}

void poi::util::LittleEndianByteArrayOutputStream::writeInt(int32_t v)
{
    checkPosition(4);
    auto i = _writeIndex;
    (*_buf)[i++] = static_cast< int8_t >(((static_cast<int32_t>(static_cast<uint32_t>(v) >> int32_t(0))) & int32_t(255)));
    (*_buf)[i++] = static_cast< int8_t >(((static_cast<int32_t>(static_cast<uint32_t>(v) >> int32_t(8))) & int32_t(255)));
    (*_buf)[i++] = static_cast< int8_t >(((static_cast<int32_t>(static_cast<uint32_t>(v) >> int32_t(16))) & int32_t(255)));
    (*_buf)[i++] = static_cast< int8_t >(((static_cast<int32_t>(static_cast<uint32_t>(v) >> int32_t(24))) & int32_t(255)));
    _writeIndex = i;
}

void poi::util::LittleEndianByteArrayOutputStream::writeLong(int64_t v)
{
    writeInt(static_cast< int32_t >((v >> int32_t(0))));
    writeInt(static_cast< int32_t >((v >> int32_t(32))));
}

void poi::util::LittleEndianByteArrayOutputStream::writeShort(int32_t v)
{
    checkPosition(2);
    auto i = _writeIndex;
    (*_buf)[i++] = static_cast< int8_t >(((static_cast<int32_t>(static_cast<uint32_t>(v) >> int32_t(0))) & int32_t(255)));
    (*_buf)[i++] = static_cast< int8_t >(((static_cast<int32_t>(static_cast<uint32_t>(v) >> int32_t(8))) & int32_t(255)));
    _writeIndex = i;
}

void poi::util::LittleEndianByteArrayOutputStream::write(int32_t b)
{
    writeByte(b);
}

void poi::util::LittleEndianByteArrayOutputStream::write(::int8_tArray* b)
{
    auto len = npc(b)->length;
    checkPosition(len);
    ::java::lang::System::arraycopy(b, 0, _buf, _writeIndex, len);
    _writeIndex += len;
}

void poi::util::LittleEndianByteArrayOutputStream::write(::int8_tArray* b, int32_t offset, int32_t len)
{
    checkPosition(len);
    ::java::lang::System::arraycopy(b, offset, _buf, _writeIndex, len);
    _writeIndex += len;
}

int32_t poi::util::LittleEndianByteArrayOutputStream::getWriteIndex()
{
    return _writeIndex;
}

poi::util::LittleEndianOutput* poi::util::LittleEndianByteArrayOutputStream::createDelayedOutput(int32_t size)
{
    checkPosition(size);
    LittleEndianOutput* result = new LittleEndianByteArrayOutputStream(_buf, _writeIndex, size);
    _writeIndex += size;
    return result;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::util::LittleEndianByteArrayOutputStream::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.util.LittleEndianByteArrayOutputStream", 53);
    return c;
}

java::lang::Class* poi::util::LittleEndianByteArrayOutputStream::getClass0()
{
    return class_();
}

