// Generated from /POI/java/org/apache/poi/hssf/record/common/UnicodeString.java
#include <org/apache/poi/hssf/record/common/UnicodeString_PhRun.hpp>

#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/hssf/record/cont/ContinuableRecordOutput.hpp>
#include <org/apache/poi/util/LittleEndianInput.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::hssf::record::common::UnicodeString_PhRun::UnicodeString_PhRun(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::common::UnicodeString_PhRun::UnicodeString_PhRun(int32_t phoneticTextFirstCharacterOffset, int32_t realTextFirstCharacterOffset, int32_t realTextLength) 
    : UnicodeString_PhRun(*static_cast< ::default_init_tag* >(0))
{
    ctor(phoneticTextFirstCharacterOffset,realTextFirstCharacterOffset,realTextLength);
}

poi::hssf::record::common::UnicodeString_PhRun::UnicodeString_PhRun(::poi::util::LittleEndianInput* in) 
    : UnicodeString_PhRun(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

void poi::hssf::record::common::UnicodeString_PhRun::ctor(int32_t phoneticTextFirstCharacterOffset, int32_t realTextFirstCharacterOffset, int32_t realTextLength)
{
    super::ctor();
    this->phoneticTextFirstCharacterOffset = phoneticTextFirstCharacterOffset;
    this->realTextFirstCharacterOffset = realTextFirstCharacterOffset;
    this->realTextLength = realTextLength;
}

void poi::hssf::record::common::UnicodeString_PhRun::ctor(::poi::util::LittleEndianInput* in)
{
    super::ctor();
    phoneticTextFirstCharacterOffset = npc(in)->readUShort();
    realTextFirstCharacterOffset = npc(in)->readUShort();
    realTextLength = npc(in)->readUShort();
}

void poi::hssf::record::common::UnicodeString_PhRun::serialize(::poi::hssf::record::cont::ContinuableRecordOutput* out)
{
    npc(out)->writeContinueIfRequired(6);
    npc(out)->writeShort(phoneticTextFirstCharacterOffset);
    npc(out)->writeShort(realTextFirstCharacterOffset);
    npc(out)->writeShort(realTextLength);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::common::UnicodeString_PhRun::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.common.UnicodeString.PhRun", 53);
    return c;
}

java::lang::Class* poi::hssf::record::common::UnicodeString_PhRun::getClass0()
{
    return class_();
}

