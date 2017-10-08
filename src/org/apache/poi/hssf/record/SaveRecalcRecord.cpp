// Generated from /POI/java/org/apache/poi/hssf/record/SaveRecalcRecord.java
#include <org/apache/poi/hssf/record/SaveRecalcRecord.hpp>

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

poi::hssf::record::SaveRecalcRecord::SaveRecalcRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::SaveRecalcRecord::SaveRecalcRecord() 
    : SaveRecalcRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::hssf::record::SaveRecalcRecord::SaveRecalcRecord(RecordInputStream* in) 
    : SaveRecalcRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t poi::hssf::record::SaveRecalcRecord::sid;

void poi::hssf::record::SaveRecalcRecord::ctor()
{
    super::ctor();
}

void poi::hssf::record::SaveRecalcRecord::ctor(RecordInputStream* in)
{
    super::ctor();
    field_1_recalc = npc(in)->readShort();
}

void poi::hssf::record::SaveRecalcRecord::setRecalc(bool recalc)
{
    field_1_recalc = static_cast< int16_t >(((recalc == true) ? int32_t(1) : int32_t(0)));
}

bool poi::hssf::record::SaveRecalcRecord::getRecalc()
{
    return (field_1_recalc == 1);
}

java::lang::String* poi::hssf::record::SaveRecalcRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[SAVERECALC]\n"_j);
    npc(npc(npc(buffer)->append(u"    .recalc         = "_j))->append(getRecalc()))->append(u"\n"_j);
    npc(buffer)->append(u"[/SAVERECALC]\n"_j);
    return npc(buffer)->toString();
}

void poi::hssf::record::SaveRecalcRecord::serialize(::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(field_1_recalc);
}

int32_t poi::hssf::record::SaveRecalcRecord::getDataSize()
{
    return 2;
}

int16_t poi::hssf::record::SaveRecalcRecord::getSid()
{
    return sid;
}

java::lang::Object* poi::hssf::record::SaveRecalcRecord::clone()
{
    auto rec = new SaveRecalcRecord();
    npc(rec)->field_1_recalc = field_1_recalc;
    return rec;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::SaveRecalcRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.SaveRecalcRecord", 43);
    return c;
}

int32_t poi::hssf::record::SaveRecalcRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* poi::hssf::record::SaveRecalcRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* poi::hssf::record::SaveRecalcRecord::getClass0()
{
    return class_();
}

