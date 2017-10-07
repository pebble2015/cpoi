// Generated from /POI/java/org/apache/poi/hssf/record/DBCellRecord.java
#include <org/apache/poi/hssf/record/DBCellRecord_Builder.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/System.hpp>
#include <org/apache/poi/hssf/record/DBCellRecord.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::hssf::record::DBCellRecord_Builder::DBCellRecord_Builder(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::DBCellRecord_Builder::DBCellRecord_Builder() 
    : DBCellRecord_Builder(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void org::apache::poi::hssf::record::DBCellRecord_Builder::ctor()
{
    super::ctor();
    _cellOffsets = new ::int16_tArray(int32_t(4));
}

void org::apache::poi::hssf::record::DBCellRecord_Builder::addCellOffset(int32_t cellRefOffset)
{
    if(npc(_cellOffsets)->length <= _nCellOffsets) {
        auto temp = new ::int16_tArray(_nCellOffsets * int32_t(2));
        ::java::lang::System::arraycopy(_cellOffsets, 0, temp, 0, _nCellOffsets);
        _cellOffsets = temp;
    }
    (*_cellOffsets)[_nCellOffsets] = static_cast< int16_t >(cellRefOffset);
    _nCellOffsets++;
}

org::apache::poi::hssf::record::DBCellRecord* org::apache::poi::hssf::record::DBCellRecord_Builder::build(int32_t rowOffset)
{
    auto cellOffsets = new ::int16_tArray(_nCellOffsets);
    ::java::lang::System::arraycopy(_cellOffsets, 0, cellOffsets, 0, _nCellOffsets);
    return new DBCellRecord(rowOffset, cellOffsets);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::DBCellRecord_Builder::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.DBCellRecord.Builder", 47);
    return c;
}

java::lang::Class* org::apache::poi::hssf::record::DBCellRecord_Builder::getClass0()
{
    return class_();
}

