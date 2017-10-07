// Generated from /POI/java/org/apache/poi/hssf/record/IndexRecord.java
#include <org/apache/poi/hssf/record/IndexRecord.hpp>

#include <java/lang/Integer.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream.hpp>
#include <org/apache/poi/util/IntList.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>
#include <org/apache/poi/util/RecordFormatException.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::hssf::record::IndexRecord::IndexRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::IndexRecord::IndexRecord() 
    : IndexRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::hssf::record::IndexRecord::IndexRecord(RecordInputStream* in) 
    : IndexRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t org::apache::poi::hssf::record::IndexRecord::sid;

void org::apache::poi::hssf::record::IndexRecord::ctor()
{
    super::ctor();
}

void org::apache::poi::hssf::record::IndexRecord::ctor(RecordInputStream* in)
{
    super::ctor();
    auto field_1_zero = npc(in)->readInt();
    if(field_1_zero != 0) {
        throw new ::org::apache::poi::util::RecordFormatException(::java::lang::StringBuilder().append(u"Expected zero for field 1 but got "_j)->append(field_1_zero)->toString());
    }
    field_2_first_row = npc(in)->readInt();
    field_3_last_row_add1 = npc(in)->readInt();
    field_4_zero = npc(in)->readInt();
    auto nCells = npc(in)->remaining() / int32_t(4);
    field_5_dbcells = new ::org::apache::poi::util::IntList(nCells);
    for (auto i = int32_t(0); i < nCells; i++) {
        npc(field_5_dbcells)->add(npc(in)->readInt());
    }
}

void org::apache::poi::hssf::record::IndexRecord::setFirstRow(int32_t row)
{
    field_2_first_row = row;
}

void org::apache::poi::hssf::record::IndexRecord::setLastRowAdd1(int32_t row)
{
    field_3_last_row_add1 = row;
}

void org::apache::poi::hssf::record::IndexRecord::addDbcell(int32_t cell)
{
    if(field_5_dbcells == nullptr) {
        field_5_dbcells = new ::org::apache::poi::util::IntList();
    }
    npc(field_5_dbcells)->add(cell);
}

void org::apache::poi::hssf::record::IndexRecord::setDbcell(int32_t cell, int32_t value)
{
    npc(field_5_dbcells)->set(cell, value);
}

int32_t org::apache::poi::hssf::record::IndexRecord::getFirstRow()
{
    return field_2_first_row;
}

int32_t org::apache::poi::hssf::record::IndexRecord::getLastRowAdd1()
{
    return field_3_last_row_add1;
}

int32_t org::apache::poi::hssf::record::IndexRecord::getNumDbcells()
{
    if(field_5_dbcells == nullptr) {
        return 0;
    }
    return npc(field_5_dbcells)->size();
}

int32_t org::apache::poi::hssf::record::IndexRecord::getDbcellAt(int32_t cellnum)
{
    return npc(field_5_dbcells)->get(cellnum);
}

java::lang::String* org::apache::poi::hssf::record::IndexRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[INDEX]\n"_j);
    npc(npc(npc(buffer)->append(u"    .firstrow       = "_j))->append(::java::lang::Integer::toHexString(getFirstRow())))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"    .lastrowadd1    = "_j))->append(::java::lang::Integer::toHexString(getLastRowAdd1())))->append(u"\n"_j);
    for (auto k = int32_t(0); k < getNumDbcells(); k++) {
        npc(npc(npc(npc(npc(buffer)->append(u"    .dbcell_"_j))->append(k))->append(u" = "_j))->append(::java::lang::Integer::toHexString(getDbcellAt(k))))->append(u"\n"_j);
    }
    npc(buffer)->append(u"[/INDEX]\n"_j);
    return npc(buffer)->toString();
}

void org::apache::poi::hssf::record::IndexRecord::serialize(::org::apache::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeInt(0);
    npc(out)->writeInt(getFirstRow());
    npc(out)->writeInt(getLastRowAdd1());
    npc(out)->writeInt(field_4_zero);
    for (auto k = int32_t(0); k < getNumDbcells(); k++) {
        npc(out)->writeInt(getDbcellAt(k));
    }
}

int32_t org::apache::poi::hssf::record::IndexRecord::getDataSize()
{
    return int32_t(16) + getNumDbcells() * int32_t(4);
}

int32_t org::apache::poi::hssf::record::IndexRecord::getRecordSizeForBlockCount(int32_t blockCount)
{
    clinit();
    return int32_t(20) + int32_t(4) * blockCount;
}

int16_t org::apache::poi::hssf::record::IndexRecord::getSid()
{
    return sid;
}

org::apache::poi::hssf::record::IndexRecord* org::apache::poi::hssf::record::IndexRecord::clone()
{
    auto rec = new IndexRecord();
    npc(rec)->field_2_first_row = field_2_first_row;
    npc(rec)->field_3_last_row_add1 = field_3_last_row_add1;
    npc(rec)->field_4_zero = field_4_zero;
    npc(rec)->field_5_dbcells = new ::org::apache::poi::util::IntList();
    npc(npc(rec)->field_5_dbcells)->addAll(field_5_dbcells);
    return rec;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::IndexRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.IndexRecord", 38);
    return c;
}

int32_t org::apache::poi::hssf::record::IndexRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* org::apache::poi::hssf::record::IndexRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* org::apache::poi::hssf::record::IndexRecord::getClass0()
{
    return class_();
}

