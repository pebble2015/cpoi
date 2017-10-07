// Generated from /POI/java/org/apache/poi/hssf/record/cont/UnknownLengthRecordOutput.java
#include <org/apache/poi/hssf/record/cont/UnknownLengthRecordOutput.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/IllegalStateException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream.hpp>
#include <org/apache/poi/util/DelayableLittleEndianOutput.hpp>
#include <org/apache/poi/util/LittleEndianByteArrayOutputStream.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>
#include <Array.hpp>

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(nullptr);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::hssf::record::cont::UnknownLengthRecordOutput::UnknownLengthRecordOutput(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::cont::UnknownLengthRecordOutput::UnknownLengthRecordOutput(::org::apache::poi::util::LittleEndianOutput* out, int32_t sid) 
    : UnknownLengthRecordOutput(*static_cast< ::default_init_tag* >(0))
{
    ctor(out,sid);
}

constexpr int32_t org::apache::poi::hssf::record::cont::UnknownLengthRecordOutput::MAX_DATA_SIZE;

void org::apache::poi::hssf::record::cont::UnknownLengthRecordOutput::ctor(::org::apache::poi::util::LittleEndianOutput* out, int32_t sid)
{
    super::ctor();
    _originalOut = out;
    npc(out)->writeShort(sid);
    if(dynamic_cast< ::org::apache::poi::util::DelayableLittleEndianOutput* >(out) != nullptr) {
        auto dleo = java_cast< ::org::apache::poi::util::DelayableLittleEndianOutput* >(out);
        _dataSizeOutput = npc(dleo)->createDelayedOutput(2);
        _byteBuffer = nullptr;
        _out = out;
    } else {
        _dataSizeOutput = out;
        _byteBuffer = new ::int8_tArray(::org::apache::poi::hssf::record::RecordInputStream::MAX_RECORD_DATA_SIZE);
        _out = new ::org::apache::poi::util::LittleEndianByteArrayOutputStream(_byteBuffer, int32_t(0));
    }
}

int32_t org::apache::poi::hssf::record::cont::UnknownLengthRecordOutput::getTotalSize()
{
    return int32_t(4) + _size;
}

int32_t org::apache::poi::hssf::record::cont::UnknownLengthRecordOutput::getAvailableSpace()
{
    if(_out == nullptr) {
        throw new ::java::lang::IllegalStateException(u"Record already terminated"_j);
    }
    return MAX_DATA_SIZE - _size;
}

void org::apache::poi::hssf::record::cont::UnknownLengthRecordOutput::terminate()
{
    if(_out == nullptr) {
        throw new ::java::lang::IllegalStateException(u"Record already terminated"_j);
    }
    npc(_dataSizeOutput)->writeShort(_size);
    if(_byteBuffer != nullptr) {
        npc(_originalOut)->write(_byteBuffer, 0, _size);
        _out = nullptr;
        return;
    }
    _out = nullptr;
}

void org::apache::poi::hssf::record::cont::UnknownLengthRecordOutput::write(::int8_tArray* b)
{
    npc(_out)->write(b);
    _size += npc(b)->length;
}

void org::apache::poi::hssf::record::cont::UnknownLengthRecordOutput::write(::int8_tArray* b, int32_t offset, int32_t len)
{
    npc(_out)->write(b, offset, len);
    _size += len;
}

void org::apache::poi::hssf::record::cont::UnknownLengthRecordOutput::writeByte(int32_t v)
{
    npc(_out)->writeByte(v);
    _size += 1;
}

void org::apache::poi::hssf::record::cont::UnknownLengthRecordOutput::writeDouble(double v)
{
    npc(_out)->writeDouble(v);
    _size += 8;
}

void org::apache::poi::hssf::record::cont::UnknownLengthRecordOutput::writeInt(int32_t v)
{
    npc(_out)->writeInt(v);
    _size += 4;
}

void org::apache::poi::hssf::record::cont::UnknownLengthRecordOutput::writeLong(int64_t v)
{
    npc(_out)->writeLong(v);
    _size += 8;
}

void org::apache::poi::hssf::record::cont::UnknownLengthRecordOutput::writeShort(int32_t v)
{
    npc(_out)->writeShort(v);
    _size += 2;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::cont::UnknownLengthRecordOutput::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.cont.UnknownLengthRecordOutput", 57);
    return c;
}

java::lang::Class* org::apache::poi::hssf::record::cont::UnknownLengthRecordOutput::getClass0()
{
    return class_();
}

