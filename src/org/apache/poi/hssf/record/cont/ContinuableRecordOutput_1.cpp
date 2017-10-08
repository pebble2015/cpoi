// Generated from /POI/java/org/apache/poi/hssf/record/cont/ContinuableRecordOutput.java
#include <org/apache/poi/hssf/record/cont/ContinuableRecordOutput_1.hpp>

poi::hssf::record::cont::ContinuableRecordOutput_1::ContinuableRecordOutput_1()
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
    ctor();
}

poi::util::LittleEndianOutput* poi::hssf::record::cont::ContinuableRecordOutput_1::createDelayedOutput(int32_t size)
{
    return this;
}

void poi::hssf::record::cont::ContinuableRecordOutput_1::write(::int8_tArray* b)
{
}

void poi::hssf::record::cont::ContinuableRecordOutput_1::write(::int8_tArray* b, int32_t offset, int32_t len)
{
}

void poi::hssf::record::cont::ContinuableRecordOutput_1::writeByte(int32_t v)
{
}

void poi::hssf::record::cont::ContinuableRecordOutput_1::writeDouble(double v)
{
}

void poi::hssf::record::cont::ContinuableRecordOutput_1::writeInt(int32_t v)
{
}

void poi::hssf::record::cont::ContinuableRecordOutput_1::writeLong(int64_t v)
{
}

void poi::hssf::record::cont::ContinuableRecordOutput_1::writeShort(int32_t v)
{
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::cont::ContinuableRecordOutput_1::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

java::lang::Class* poi::hssf::record::cont::ContinuableRecordOutput_1::getClass0()
{
    return class_();
}

