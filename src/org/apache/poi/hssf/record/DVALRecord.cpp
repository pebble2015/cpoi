// Generated from /POI/java/org/apache/poi/hssf/record/DVALRecord.java
#include <org/apache/poi/hssf/record/DVALRecord.hpp>

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

org::apache::poi::hssf::record::DVALRecord::DVALRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::DVALRecord::DVALRecord() 
    : DVALRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::hssf::record::DVALRecord::DVALRecord(RecordInputStream* in) 
    : DVALRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t org::apache::poi::hssf::record::DVALRecord::sid;

void org::apache::poi::hssf::record::DVALRecord::ctor()
{
    super::ctor();
    field_cbo_id = -1;
    field_5_dv_no = 0;
}

void org::apache::poi::hssf::record::DVALRecord::ctor(RecordInputStream* in)
{
    super::ctor();
    field_1_options = npc(in)->readShort();
    field_2_horiz_pos = npc(in)->readInt();
    field_3_vert_pos = npc(in)->readInt();
    field_cbo_id = npc(in)->readInt();
    field_5_dv_no = npc(in)->readInt();
}

void org::apache::poi::hssf::record::DVALRecord::setOptions(int16_t options)
{
    field_1_options = options;
}

void org::apache::poi::hssf::record::DVALRecord::setHorizontalPos(int32_t horiz_pos)
{
    field_2_horiz_pos = horiz_pos;
}

void org::apache::poi::hssf::record::DVALRecord::setVerticalPos(int32_t vert_pos)
{
    field_3_vert_pos = vert_pos;
}

void org::apache::poi::hssf::record::DVALRecord::setObjectID(int32_t cboID)
{
    field_cbo_id = cboID;
}

void org::apache::poi::hssf::record::DVALRecord::setDVRecNo(int32_t dvNo)
{
    field_5_dv_no = dvNo;
}

int16_t org::apache::poi::hssf::record::DVALRecord::getOptions()
{
    return field_1_options;
}

int32_t org::apache::poi::hssf::record::DVALRecord::getHorizontalPos()
{
    return field_2_horiz_pos;
}

int32_t org::apache::poi::hssf::record::DVALRecord::getVerticalPos()
{
    return field_3_vert_pos;
}

int32_t org::apache::poi::hssf::record::DVALRecord::getObjectID()
{
    return field_cbo_id;
}

int32_t org::apache::poi::hssf::record::DVALRecord::getDVRecNo()
{
    return field_5_dv_no;
}

java::lang::String* org::apache::poi::hssf::record::DVALRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[DVAL]\n"_j);
    npc(npc(npc(buffer)->append(u"    .options      = "_j))->append(static_cast< int32_t >(getOptions())))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"    .horizPos     = "_j))->append(getHorizontalPos()))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"    .vertPos      = "_j))->append(getVerticalPos()))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"    .comboObjectID   = "_j))->append(::java::lang::Integer::toHexString(getObjectID())))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"    .DVRecordsNumber = "_j))->append(::java::lang::Integer::toHexString(getDVRecNo())))->append(u"\n"_j);
    npc(buffer)->append(u"[/DVAL]\n"_j);
    return npc(buffer)->toString();
}

void org::apache::poi::hssf::record::DVALRecord::serialize(::org::apache::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(getOptions());
    npc(out)->writeInt(getHorizontalPos());
    npc(out)->writeInt(getVerticalPos());
    npc(out)->writeInt(getObjectID());
    npc(out)->writeInt(getDVRecNo());
}

int32_t org::apache::poi::hssf::record::DVALRecord::getDataSize()
{
    return 18;
}

int16_t org::apache::poi::hssf::record::DVALRecord::getSid()
{
    return sid;
}

org::apache::poi::hssf::record::DVALRecord* org::apache::poi::hssf::record::DVALRecord::clone()
{
    auto rec = new DVALRecord();
    npc(rec)->field_1_options = field_1_options;
    npc(rec)->field_2_horiz_pos = field_2_horiz_pos;
    npc(rec)->field_3_vert_pos = field_3_vert_pos;
    npc(rec)->field_cbo_id = field_cbo_id;
    npc(rec)->field_5_dv_no = field_5_dv_no;
    return rec;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::DVALRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.DVALRecord", 37);
    return c;
}

int32_t org::apache::poi::hssf::record::DVALRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* org::apache::poi::hssf::record::DVALRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* org::apache::poi::hssf::record::DVALRecord::getClass0()
{
    return class_();
}

