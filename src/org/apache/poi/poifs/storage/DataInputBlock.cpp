// Generated from /POI/java/org/apache/poi/poifs/storage/DataInputBlock.java
#include <org/apache/poi/poifs/storage/DataInputBlock.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/System.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::poifs::storage::DataInputBlock::DataInputBlock(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::poifs::storage::DataInputBlock::DataInputBlock(::int8_tArray* data, int32_t startOffset) 
    : DataInputBlock(*static_cast< ::default_init_tag* >(0))
{
    ctor(data,startOffset);
}

void org::apache::poi::poifs::storage::DataInputBlock::ctor(::int8_tArray* data, int32_t startOffset)
{
    super::ctor();
    _buf = data;
    _readIndex = startOffset;
    _maxIndex = npc(_buf)->length;
}

int32_t org::apache::poi::poifs::storage::DataInputBlock::available()
{
    return _maxIndex - _readIndex;
}

int32_t org::apache::poi::poifs::storage::DataInputBlock::readUByte()
{
    return (*_buf)[_readIndex++] & int32_t(255);
}

int32_t org::apache::poi::poifs::storage::DataInputBlock::readUShortLE()
{
    auto i = _readIndex;
    auto b0 = (*_buf)[i++] & int32_t(255);
    auto b1 = (*_buf)[i++] & int32_t(255);
    _readIndex = i;
    return (b1 << int32_t(8)) + (b0 << int32_t(0));
}

int32_t org::apache::poi::poifs::storage::DataInputBlock::readUShortLE(DataInputBlock* prevBlock)
{
    auto i = npc(npc(prevBlock)->_buf)->length - int32_t(1);
    auto b0 = (*npc(prevBlock)->_buf)[i] & int32_t(255);
    auto b1 = (*_buf)[_readIndex++] & int32_t(255);
    return (b1 << int32_t(8)) + (b0 << int32_t(0));
}

int32_t org::apache::poi::poifs::storage::DataInputBlock::readIntLE()
{
    auto i = _readIndex;
    auto b0 = (*_buf)[i++] & int32_t(255);
    auto b1 = (*_buf)[i++] & int32_t(255);
    auto b2 = (*_buf)[i++] & int32_t(255);
    auto b3 = (*_buf)[i++] & int32_t(255);
    _readIndex = i;
    return (b3 << int32_t(24)) + (b2 << int32_t(16)) + (b1 << int32_t(8))+ (b0 << int32_t(0));
}

int32_t org::apache::poi::poifs::storage::DataInputBlock::readIntLE(DataInputBlock* prevBlock, int32_t prevBlockAvailable)
{
    auto buf = new ::int8_tArray(int32_t(4));
    readSpanning(prevBlock, prevBlockAvailable, buf);
    auto b0 = (*buf)[int32_t(0)] & int32_t(255);
    auto b1 = (*buf)[int32_t(1)] & int32_t(255);
    auto b2 = (*buf)[int32_t(2)] & int32_t(255);
    auto b3 = (*buf)[int32_t(3)] & int32_t(255);
    return (b3 << int32_t(24)) + (b2 << int32_t(16)) + (b1 << int32_t(8))+ (b0 << int32_t(0));
}

int64_t org::apache::poi::poifs::storage::DataInputBlock::readLongLE()
{
    auto i = _readIndex;
    auto b0 = (*_buf)[i++] & int32_t(255);
    auto b1 = (*_buf)[i++] & int32_t(255);
    auto b2 = (*_buf)[i++] & int32_t(255);
    auto b3 = (*_buf)[i++] & int32_t(255);
    auto b4 = (*_buf)[i++] & int32_t(255);
    auto b5 = (*_buf)[i++] & int32_t(255);
    auto b6 = (*_buf)[i++] & int32_t(255);
    auto b7 = (*_buf)[i++] & int32_t(255);
    _readIndex = i;
    return ((static_cast< int64_t >(b7) << int32_t(56)) + (static_cast< int64_t >(b6) << int32_t(48)) + (static_cast< int64_t >(b5) << int32_t(40))+ (static_cast< int64_t >(b4) << int32_t(32))+ (static_cast< int64_t >(b3) << int32_t(24))+ (b2 << int32_t(16))+ (b1 << int32_t(8))+ (b0 << int32_t(0)));
}

int64_t org::apache::poi::poifs::storage::DataInputBlock::readLongLE(DataInputBlock* prevBlock, int32_t prevBlockAvailable)
{
    auto buf = new ::int8_tArray(int32_t(8));
    readSpanning(prevBlock, prevBlockAvailable, buf);
    auto b0 = (*buf)[int32_t(0)] & int32_t(255);
    auto b1 = (*buf)[int32_t(1)] & int32_t(255);
    auto b2 = (*buf)[int32_t(2)] & int32_t(255);
    auto b3 = (*buf)[int32_t(3)] & int32_t(255);
    auto b4 = (*buf)[int32_t(4)] & int32_t(255);
    auto b5 = (*buf)[int32_t(5)] & int32_t(255);
    auto b6 = (*buf)[int32_t(6)] & int32_t(255);
    auto b7 = (*buf)[int32_t(7)] & int32_t(255);
    return ((static_cast< int64_t >(b7) << int32_t(56)) + (static_cast< int64_t >(b6) << int32_t(48)) + (static_cast< int64_t >(b5) << int32_t(40))+ (static_cast< int64_t >(b4) << int32_t(32))+ (static_cast< int64_t >(b3) << int32_t(24))+ (b2 << int32_t(16))+ (b1 << int32_t(8))+ (b0 << int32_t(0)));
}

void org::apache::poi::poifs::storage::DataInputBlock::readSpanning(DataInputBlock* prevBlock, int32_t prevBlockAvailable, ::int8_tArray* buf)
{
    ::java::lang::System::arraycopy(npc(prevBlock)->_buf, npc(prevBlock)->_readIndex, buf, 0, prevBlockAvailable);
    auto secondReadLen = npc(buf)->length - prevBlockAvailable;
    ::java::lang::System::arraycopy(_buf, 0, buf, prevBlockAvailable, secondReadLen);
    _readIndex = secondReadLen;
}

void org::apache::poi::poifs::storage::DataInputBlock::readFully(::int8_tArray* buf, int32_t off, int32_t len)
{
    ::java::lang::System::arraycopy(_buf, _readIndex, buf, off, len);
    _readIndex += len;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::poifs::storage::DataInputBlock::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.storage.DataInputBlock", 43);
    return c;
}

java::lang::Class* org::apache::poi::poifs::storage::DataInputBlock::getClass0()
{
    return class_();
}

