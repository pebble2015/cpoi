// Generated from /POI/java/org/apache/poi/hssf/record/cf/IconMultiStateThreshold.java
#include <org/apache/poi/hssf/record/cf/IconMultiStateThreshold.hpp>

#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/util/LittleEndianInput.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::hssf::record::cf::IconMultiStateThreshold::IconMultiStateThreshold(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::cf::IconMultiStateThreshold::IconMultiStateThreshold() 
    : IconMultiStateThreshold(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::hssf::record::cf::IconMultiStateThreshold::IconMultiStateThreshold(::poi::util::LittleEndianInput* in) 
    : IconMultiStateThreshold(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int8_t poi::hssf::record::cf::IconMultiStateThreshold::EQUALS_EXCLUDE;

constexpr int8_t poi::hssf::record::cf::IconMultiStateThreshold::EQUALS_INCLUDE;

void poi::hssf::record::cf::IconMultiStateThreshold::ctor()
{
    super::ctor();
    equals_ = EQUALS_INCLUDE;
}

void poi::hssf::record::cf::IconMultiStateThreshold::ctor(::poi::util::LittleEndianInput* in)
{
    super::ctor(in);
    equals_ = npc(in)->readByte();
    npc(in)->readInt();
}

int8_t poi::hssf::record::cf::IconMultiStateThreshold::getEquals()
{
    return equals_;
}

void poi::hssf::record::cf::IconMultiStateThreshold::setEquals(int8_t equals)
{
    this->equals_ = equals;
}

int32_t poi::hssf::record::cf::IconMultiStateThreshold::getDataLength()
{
    return super::getDataLength() + int32_t(5);
}

poi::hssf::record::cf::IconMultiStateThreshold* poi::hssf::record::cf::IconMultiStateThreshold::clone()
{
    auto rec = new IconMultiStateThreshold();
    super::copyTo(rec);
    npc(rec)->equals_ = equals_;
    return rec;
}

void poi::hssf::record::cf::IconMultiStateThreshold::serialize(::poi::util::LittleEndianOutput* out)
{
    super::serialize(out);
    npc(out)->writeByte(equals_);
    npc(out)->writeInt(0);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::cf::IconMultiStateThreshold::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.cf.IconMultiStateThreshold", 53);
    return c;
}

java::lang::Class* poi::hssf::record::cf::IconMultiStateThreshold::getClass0()
{
    return class_();
}

