// Generated from /POI/java/org/apache/poi/hssf/record/cont/ContinuableRecordInput.java
#include <org/apache/poi/hssf/record/cont/ContinuableRecordInput.hpp>

#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::hssf::record::cont::ContinuableRecordInput::ContinuableRecordInput(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::cont::ContinuableRecordInput::ContinuableRecordInput(::poi::hssf::record::RecordInputStream* in) 
    : ContinuableRecordInput(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

void poi::hssf::record::cont::ContinuableRecordInput::ctor(::poi::hssf::record::RecordInputStream* in)
{
    super::ctor();
    _in = in;
}

int32_t poi::hssf::record::cont::ContinuableRecordInput::available()
{
    return npc(_in)->available();
}

int8_t poi::hssf::record::cont::ContinuableRecordInput::readByte()
{
    return npc(_in)->readByte();
}

int32_t poi::hssf::record::cont::ContinuableRecordInput::readUByte()
{
    return npc(_in)->readUByte();
}

int16_t poi::hssf::record::cont::ContinuableRecordInput::readShort()
{
    return npc(_in)->readShort();
}

int32_t poi::hssf::record::cont::ContinuableRecordInput::readUShort()
{
    auto ch1 = readUByte();
    auto ch2 = readUByte();
    return (ch2 << int32_t(8)) + (ch1 << int32_t(0));
}

int32_t poi::hssf::record::cont::ContinuableRecordInput::readInt()
{
    auto ch1 = npc(_in)->readUByte();
    auto ch2 = npc(_in)->readUByte();
    auto ch3 = npc(_in)->readUByte();
    auto ch4 = npc(_in)->readUByte();
    return (ch4 << int32_t(24)) + (ch3 << int32_t(16)) + (ch2 << int32_t(8))+ (ch1 << int32_t(0));
}

int64_t poi::hssf::record::cont::ContinuableRecordInput::readLong()
{
    auto b0 = npc(_in)->readUByte();
    auto b1 = npc(_in)->readUByte();
    auto b2 = npc(_in)->readUByte();
    auto b3 = npc(_in)->readUByte();
    auto b4 = npc(_in)->readUByte();
    auto b5 = npc(_in)->readUByte();
    auto b6 = npc(_in)->readUByte();
    auto b7 = npc(_in)->readUByte();
    return ((static_cast< int64_t >(b7) << int32_t(56)) + (static_cast< int64_t >(b6) << int32_t(48)) + (static_cast< int64_t >(b5) << int32_t(40))+ (static_cast< int64_t >(b4) << int32_t(32))+ (static_cast< int64_t >(b3) << int32_t(24))+ (b2 << int32_t(16))+ (b1 << int32_t(8))+ (b0 << int32_t(0)));
}

double poi::hssf::record::cont::ContinuableRecordInput::readDouble()
{
    return npc(_in)->readDouble();
}

void poi::hssf::record::cont::ContinuableRecordInput::readFully(::int8_tArray* buf)
{
    npc(_in)->readFully(buf);
}

void poi::hssf::record::cont::ContinuableRecordInput::readFully(::int8_tArray* buf, int32_t off, int32_t len)
{
    npc(_in)->readFully(buf, off, len);
}

void poi::hssf::record::cont::ContinuableRecordInput::readPlain(::int8_tArray* buf, int32_t off, int32_t len)
{
    readFully(buf, off, len);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::cont::ContinuableRecordInput::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.cont.ContinuableRecordInput", 54);
    return c;
}

java::lang::Class* poi::hssf::record::cont::ContinuableRecordInput::getClass0()
{
    return class_();
}

