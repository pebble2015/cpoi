// Generated from /POI/java/org/apache/poi/hssf/record/SharedValueRecordBase.java
#include <org/apache/poi/hssf/record/SharedValueRecordBase.hpp>

#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <org/apache/poi/hssf/util/CellRangeAddress8Bit.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::hssf::record::SharedValueRecordBase::SharedValueRecordBase(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::SharedValueRecordBase::SharedValueRecordBase(::poi::hssf::util::CellRangeAddress8Bit* range) 
    : SharedValueRecordBase(*static_cast< ::default_init_tag* >(0))
{
    ctor(range);
}

poi::hssf::record::SharedValueRecordBase::SharedValueRecordBase() 
    : SharedValueRecordBase(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::hssf::record::SharedValueRecordBase::SharedValueRecordBase(::poi::util::LittleEndianInput* in) 
    : SharedValueRecordBase(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

void poi::hssf::record::SharedValueRecordBase::ctor(::poi::hssf::util::CellRangeAddress8Bit* range)
{
    super::ctor();
    if(range == nullptr) {
        throw new ::java::lang::IllegalArgumentException(u"range must be supplied."_j);
    }
    _range = range;
}

void poi::hssf::record::SharedValueRecordBase::ctor()
{
    ctor(new ::poi::hssf::util::CellRangeAddress8Bit(int32_t(0), int32_t(0), int32_t(0), int32_t(0)));
}

void poi::hssf::record::SharedValueRecordBase::ctor(::poi::util::LittleEndianInput* in)
{
    super::ctor();
    _range = new ::poi::hssf::util::CellRangeAddress8Bit(in);
}

poi::hssf::util::CellRangeAddress8Bit* poi::hssf::record::SharedValueRecordBase::getRange()
{
    return _range;
}

int32_t poi::hssf::record::SharedValueRecordBase::getFirstRow()
{
    return npc(_range)->getFirstRow();
}

int32_t poi::hssf::record::SharedValueRecordBase::getLastRow()
{
    return npc(_range)->getLastRow();
}

int32_t poi::hssf::record::SharedValueRecordBase::getFirstColumn()
{
    return static_cast< int16_t >(npc(_range)->getFirstColumn());
}

int32_t poi::hssf::record::SharedValueRecordBase::getLastColumn()
{
    return static_cast< int16_t >(npc(_range)->getLastColumn());
}

int32_t poi::hssf::record::SharedValueRecordBase::getDataSize()
{
    return ::poi::hssf::util::CellRangeAddress8Bit::ENCODED_SIZE + getExtraDataSize();
}

void poi::hssf::record::SharedValueRecordBase::serialize(::poi::util::LittleEndianOutput* out)
{
    npc(_range)->serialize(out);
    serializeExtraData(out);
}

bool poi::hssf::record::SharedValueRecordBase::isInRange(int32_t rowIx, int32_t colIx)
{
    auto r = _range;
    return npc(r)->getFirstRow() <= rowIx && npc(r)->getLastRow() >= rowIx && npc(r)->getFirstColumn() <= colIx && npc(r)->getLastColumn() >= colIx;
}

bool poi::hssf::record::SharedValueRecordBase::isFirstCell(int32_t rowIx, int32_t colIx)
{
    auto r = getRange();
    return npc(r)->getFirstRow() == rowIx && npc(r)->getFirstColumn() == colIx;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::SharedValueRecordBase::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.SharedValueRecordBase", 48);
    return c;
}

int32_t poi::hssf::record::SharedValueRecordBase::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* poi::hssf::record::SharedValueRecordBase::serialize()
{
    return super::serialize();
}

java::lang::Class* poi::hssf::record::SharedValueRecordBase::getClass0()
{
    return class_();
}

