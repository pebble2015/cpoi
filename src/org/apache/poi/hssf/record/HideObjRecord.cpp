// Generated from /POI/java/org/apache/poi/hssf/record/HideObjRecord.java
#include <org/apache/poi/hssf/record/HideObjRecord.hpp>

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

poi::hssf::record::HideObjRecord::HideObjRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::HideObjRecord::HideObjRecord() 
    : HideObjRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::hssf::record::HideObjRecord::HideObjRecord(RecordInputStream* in) 
    : HideObjRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t poi::hssf::record::HideObjRecord::sid;

constexpr int16_t poi::hssf::record::HideObjRecord::HIDE_ALL;

constexpr int16_t poi::hssf::record::HideObjRecord::SHOW_PLACEHOLDERS;

constexpr int16_t poi::hssf::record::HideObjRecord::SHOW_ALL;

void poi::hssf::record::HideObjRecord::ctor()
{
    super::ctor();
}

void poi::hssf::record::HideObjRecord::ctor(RecordInputStream* in)
{
    super::ctor();
    field_1_hide_obj = npc(in)->readShort();
}

void poi::hssf::record::HideObjRecord::setHideObj(int16_t hide)
{
    field_1_hide_obj = hide;
}

int16_t poi::hssf::record::HideObjRecord::getHideObj()
{
    return field_1_hide_obj;
}

java::lang::String* poi::hssf::record::HideObjRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[HIDEOBJ]\n"_j);
    npc(npc(npc(buffer)->append(u"    .hideobj         = "_j))->append(::java::lang::Integer::toHexString(getHideObj())))->append(u"\n"_j);
    npc(buffer)->append(u"[/HIDEOBJ]\n"_j);
    return npc(buffer)->toString();
}

void poi::hssf::record::HideObjRecord::serialize(::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(getHideObj());
}

int32_t poi::hssf::record::HideObjRecord::getDataSize()
{
    return 2;
}

int16_t poi::hssf::record::HideObjRecord::getSid()
{
    return sid;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::HideObjRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.HideObjRecord", 40);
    return c;
}

int32_t poi::hssf::record::HideObjRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* poi::hssf::record::HideObjRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* poi::hssf::record::HideObjRecord::getClass0()
{
    return class_();
}

