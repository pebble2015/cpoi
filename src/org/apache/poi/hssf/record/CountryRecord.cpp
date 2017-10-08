// Generated from /POI/java/org/apache/poi/hssf/record/CountryRecord.java
#include <org/apache/poi/hssf/record/CountryRecord.hpp>

#include <java/lang/Integer.hpp>
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

poi::hssf::record::CountryRecord::CountryRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::CountryRecord::CountryRecord() 
    : CountryRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::hssf::record::CountryRecord::CountryRecord(RecordInputStream* in) 
    : CountryRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t poi::hssf::record::CountryRecord::sid;

void poi::hssf::record::CountryRecord::ctor()
{
    super::ctor();
}

void poi::hssf::record::CountryRecord::ctor(RecordInputStream* in)
{
    super::ctor();
    field_1_default_country = npc(in)->readShort();
    field_2_current_country = npc(in)->readShort();
}

void poi::hssf::record::CountryRecord::setDefaultCountry(int16_t country)
{
    field_1_default_country = country;
}

void poi::hssf::record::CountryRecord::setCurrentCountry(int16_t country)
{
    field_2_current_country = country;
}

int16_t poi::hssf::record::CountryRecord::getDefaultCountry()
{
    return field_1_default_country;
}

int16_t poi::hssf::record::CountryRecord::getCurrentCountry()
{
    return field_2_current_country;
}

java::lang::String* poi::hssf::record::CountryRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[COUNTRY]\n"_j);
    npc(npc(npc(buffer)->append(u"    .defaultcountry  = "_j))->append(::java::lang::Integer::toHexString(getDefaultCountry())))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"    .currentcountry  = "_j))->append(::java::lang::Integer::toHexString(getCurrentCountry())))->append(u"\n"_j);
    npc(buffer)->append(u"[/COUNTRY]\n"_j);
    return npc(buffer)->toString();
}

void poi::hssf::record::CountryRecord::serialize(::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(getDefaultCountry());
    npc(out)->writeShort(getCurrentCountry());
}

int32_t poi::hssf::record::CountryRecord::getDataSize()
{
    return 4;
}

int16_t poi::hssf::record::CountryRecord::getSid()
{
    return sid;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::CountryRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.CountryRecord", 40);
    return c;
}

int32_t poi::hssf::record::CountryRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* poi::hssf::record::CountryRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* poi::hssf::record::CountryRecord::getClass0()
{
    return class_();
}

