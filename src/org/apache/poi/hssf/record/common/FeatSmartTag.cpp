// Generated from /POI/java/org/apache/poi/hssf/record/common/FeatSmartTag.java
#include <org/apache/poi/hssf/record/common/FeatSmartTag.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::hssf::record::common::FeatSmartTag::FeatSmartTag(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::common::FeatSmartTag::FeatSmartTag() 
    : FeatSmartTag(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::hssf::record::common::FeatSmartTag::FeatSmartTag(::org::apache::poi::hssf::record::RecordInputStream* in) 
    : FeatSmartTag(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

void org::apache::poi::hssf::record::common::FeatSmartTag::ctor()
{
    super::ctor();
    data = new ::int8_tArray(int32_t(0));
}

void org::apache::poi::hssf::record::common::FeatSmartTag::ctor(::org::apache::poi::hssf::record::RecordInputStream* in)
{
    super::ctor();
    data = npc(in)->readRemainder();
}

java::lang::String* org::apache::poi::hssf::record::common::FeatSmartTag::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u" [FEATURE SMART TAGS]\n"_j);
    npc(buffer)->append(u" [/FEATURE SMART TAGS]\n"_j);
    return npc(buffer)->toString();
}

int32_t org::apache::poi::hssf::record::common::FeatSmartTag::getDataSize()
{
    return npc(data)->length;
}

void org::apache::poi::hssf::record::common::FeatSmartTag::serialize(::org::apache::poi::util::LittleEndianOutput* out)
{
    npc(out)->write(data);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::common::FeatSmartTag::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.common.FeatSmartTag", 46);
    return c;
}

java::lang::Class* org::apache::poi::hssf::record::common::FeatSmartTag::getClass0()
{
    return class_();
}

