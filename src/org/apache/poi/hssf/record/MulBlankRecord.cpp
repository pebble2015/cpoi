// Generated from /POI/java/org/apache/poi/hssf/record/MulBlankRecord.java
#include <org/apache/poi/hssf/record/MulBlankRecord.hpp>

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

poi::hssf::record::MulBlankRecord::MulBlankRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::MulBlankRecord::MulBlankRecord(int32_t row, int32_t firstCol, ::int16_tArray* xfs) 
    : MulBlankRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(row,firstCol,xfs);
}

poi::hssf::record::MulBlankRecord::MulBlankRecord(RecordInputStream* in) 
    : MulBlankRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t poi::hssf::record::MulBlankRecord::sid;

void poi::hssf::record::MulBlankRecord::ctor(int32_t row, int32_t firstCol, ::int16_tArray* xfs)
{
    super::ctor();
    _row = row;
    _firstCol = firstCol;
    _xfs = xfs;
    _lastCol = firstCol + npc(xfs)->length - int32_t(1);
}

int32_t poi::hssf::record::MulBlankRecord::getRow()
{
    return _row;
}

int32_t poi::hssf::record::MulBlankRecord::getFirstColumn()
{
    return _firstCol;
}

int32_t poi::hssf::record::MulBlankRecord::getLastColumn()
{
    return _lastCol;
}

int32_t poi::hssf::record::MulBlankRecord::getNumColumns()
{
    return _lastCol - _firstCol + int32_t(1);
}

int16_t poi::hssf::record::MulBlankRecord::getXFAt(int32_t coffset)
{
    return (*_xfs)[coffset];
}

void poi::hssf::record::MulBlankRecord::ctor(RecordInputStream* in)
{
    super::ctor();
    _row = npc(in)->readUShort();
    _firstCol = npc(in)->readShort();
    _xfs = parseXFs(in);
    _lastCol = npc(in)->readShort();
}

int16_tArray* poi::hssf::record::MulBlankRecord::parseXFs(RecordInputStream* in)
{
    clinit();
    auto retval = new ::int16_tArray((npc(in)->remaining() - int32_t(2)) / int32_t(2));
    for (auto idx = int32_t(0); idx < npc(retval)->length; idx++) {
        (*retval)[idx] = npc(in)->readShort();
    }
    return retval;
}

java::lang::String* poi::hssf::record::MulBlankRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[MULBLANK]\n"_j);
    npc(npc(npc(buffer)->append(u"row  = "_j))->append(::java::lang::Integer::toHexString(getRow())))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"firstcol  = "_j))->append(::java::lang::Integer::toHexString(getFirstColumn())))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u" lastcol  = "_j))->append(::java::lang::Integer::toHexString(_lastCol)))->append(u"\n"_j);
    for (auto k = int32_t(0); k < getNumColumns(); k++) {
        npc(npc(npc(npc(npc(buffer)->append(u"xf"_j))->append(k))->append(u"		= "_j))->append(::java::lang::Integer::toHexString(getXFAt(k))))->append(u"\n"_j);
    }
    npc(buffer)->append(u"[/MULBLANK]\n"_j);
    return npc(buffer)->toString();
}

int16_t poi::hssf::record::MulBlankRecord::getSid()
{
    return sid;
}

void poi::hssf::record::MulBlankRecord::serialize(::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(_row);
    npc(out)->writeShort(_firstCol);
    auto nItems = npc(_xfs)->length;
    for (auto i = int32_t(0); i < nItems; i++) {
        npc(out)->writeShort((*_xfs)[i]);
    }
    npc(out)->writeShort(_lastCol);
}

int32_t poi::hssf::record::MulBlankRecord::getDataSize()
{
    return int32_t(6) + npc(_xfs)->length * int32_t(2);
}

poi::hssf::record::MulBlankRecord* poi::hssf::record::MulBlankRecord::clone()
{
    return this;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::MulBlankRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.MulBlankRecord", 41);
    return c;
}

int32_t poi::hssf::record::MulBlankRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* poi::hssf::record::MulBlankRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* poi::hssf::record::MulBlankRecord::getClass0()
{
    return class_();
}

