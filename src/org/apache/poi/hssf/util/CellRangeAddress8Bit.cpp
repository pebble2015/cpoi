// Generated from /POI/java/org/apache/poi/hssf/util/CellRangeAddress8Bit.java
#include <org/apache/poi/hssf/util/CellRangeAddress8Bit.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <org/apache/poi/util/LittleEndianInput.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::hssf::util::CellRangeAddress8Bit::CellRangeAddress8Bit(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::util::CellRangeAddress8Bit::CellRangeAddress8Bit(int32_t firstRow, int32_t lastRow, int32_t firstCol, int32_t lastCol) 
    : CellRangeAddress8Bit(*static_cast< ::default_init_tag* >(0))
{
    ctor(firstRow,lastRow,firstCol,lastCol);
}

org::apache::poi::hssf::util::CellRangeAddress8Bit::CellRangeAddress8Bit(::org::apache::poi::util::LittleEndianInput* in) 
    : CellRangeAddress8Bit(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int32_t org::apache::poi::hssf::util::CellRangeAddress8Bit::ENCODED_SIZE;

void org::apache::poi::hssf::util::CellRangeAddress8Bit::ctor(int32_t firstRow, int32_t lastRow, int32_t firstCol, int32_t lastCol)
{
    super::ctor(firstRow, lastRow, firstCol, lastCol);
}

void org::apache::poi::hssf::util::CellRangeAddress8Bit::ctor(::org::apache::poi::util::LittleEndianInput* in)
{
    super::ctor(readUShortAndCheck(in), npc(in)->readUShort(), npc(in)->readUByte(), npc(in)->readUByte());
}

int32_t org::apache::poi::hssf::util::CellRangeAddress8Bit::readUShortAndCheck(::org::apache::poi::util::LittleEndianInput* in)
{
    clinit();
    if(npc(in)->available() < ENCODED_SIZE) {
        throw new ::java::lang::RuntimeException(u"Ran out of data reading CellRangeAddress"_j);
    }
    return npc(in)->readUShort();
}

void org::apache::poi::hssf::util::CellRangeAddress8Bit::serialize(::org::apache::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(getFirstRow());
    npc(out)->writeShort(getLastRow());
    npc(out)->writeByte(getFirstColumn());
    npc(out)->writeByte(getLastColumn());
}

org::apache::poi::hssf::util::CellRangeAddress8Bit* org::apache::poi::hssf::util::CellRangeAddress8Bit::copy()
{
    return new CellRangeAddress8Bit(getFirstRow(), getLastRow(), getFirstColumn(), getLastColumn());
}

int32_t org::apache::poi::hssf::util::CellRangeAddress8Bit::getEncodedSize(int32_t numberOfItems)
{
    clinit();
    return numberOfItems * ENCODED_SIZE;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::util::CellRangeAddress8Bit::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.util.CellRangeAddress8Bit", 45);
    return c;
}

java::lang::Class* org::apache::poi::hssf::util::CellRangeAddress8Bit::getClass0()
{
    return class_();
}

