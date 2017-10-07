// Generated from /POI/java/org/apache/poi/ss/util/CellRangeAddress.java
#include <org/apache/poi/ss/util/CellRangeAddress.hpp>

#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream.hpp>
#include <org/apache/poi/ss/formula/SheetNameFormatter.hpp>
#include <org/apache/poi/ss/util/CellReference.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::ss::util::CellRangeAddress::CellRangeAddress(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::util::CellRangeAddress::CellRangeAddress(int32_t firstRow, int32_t lastRow, int32_t firstCol, int32_t lastCol) 
    : CellRangeAddress(*static_cast< ::default_init_tag* >(0))
{
    ctor(firstRow,lastRow,firstCol,lastCol);
}

org::apache::poi::ss::util::CellRangeAddress::CellRangeAddress(::org::apache::poi::hssf::record::RecordInputStream* in) 
    : CellRangeAddress(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int32_t org::apache::poi::ss::util::CellRangeAddress::ENCODED_SIZE;

void org::apache::poi::ss::util::CellRangeAddress::ctor(int32_t firstRow, int32_t lastRow, int32_t firstCol, int32_t lastCol)
{
    super::ctor(firstRow, lastRow, firstCol, lastCol);
    if(lastRow < firstRow || lastCol < firstCol) {
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(::java::lang::StringBuilder().append(u"Invalid cell range, having lastRow < firstRow || lastCol < firstCol, "_j)->append(u"had rows "_j)->toString())->append(lastRow)
            ->append(u" >= "_j)
            ->append(firstRow)
            ->append(u" or cells "_j)
            ->append(lastCol)
            ->append(u" >= "_j)
            ->append(firstCol)->toString());
    }
}

void org::apache::poi::ss::util::CellRangeAddress::serialize(::org::apache::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(getFirstRow());
    npc(out)->writeShort(getLastRow());
    npc(out)->writeShort(getFirstColumn());
    npc(out)->writeShort(getLastColumn());
}

void org::apache::poi::ss::util::CellRangeAddress::ctor(::org::apache::poi::hssf::record::RecordInputStream* in)
{
    super::ctor(readUShortAndCheck(in), npc(in)->readUShort(), npc(in)->readUShort(), npc(in)->readUShort());
}

int32_t org::apache::poi::ss::util::CellRangeAddress::readUShortAndCheck(::org::apache::poi::hssf::record::RecordInputStream* in)
{
    clinit();
    if(npc(in)->remaining() < ENCODED_SIZE) {
        throw new ::java::lang::RuntimeException(u"Ran out of data reading CellRangeAddress"_j);
    }
    return npc(in)->readUShort();
}

org::apache::poi::ss::util::CellRangeAddress* org::apache::poi::ss::util::CellRangeAddress::copy()
{
    return new CellRangeAddress(getFirstRow(), getLastRow(), getFirstColumn(), getLastColumn());
}

int32_t org::apache::poi::ss::util::CellRangeAddress::getEncodedSize(int32_t numberOfItems)
{
    clinit();
    return numberOfItems * ENCODED_SIZE;
}

java::lang::String* org::apache::poi::ss::util::CellRangeAddress::formatAsString()
{
    return formatAsString(nullptr, false);
}

java::lang::String* org::apache::poi::ss::util::CellRangeAddress::formatAsString(::java::lang::String* sheetName, bool useAbsoluteAddress)
{
    auto sb = new ::java::lang::StringBuilder();
    if(sheetName != nullptr) {
        npc(sb)->append(::org::apache::poi::ss::formula::SheetNameFormatter::format(sheetName));
        npc(sb)->append(u"!"_j);
    }
    auto cellRefFrom = new CellReference(getFirstRow(), getFirstColumn(), useAbsoluteAddress, useAbsoluteAddress);
    auto cellRefTo = new CellReference(getLastRow(), getLastColumn(), useAbsoluteAddress, useAbsoluteAddress);
    npc(sb)->append(npc(cellRefFrom)->formatAsString());
    if(!npc(cellRefFrom)->equals(static_cast< ::java::lang::Object* >(cellRefTo)) || isFullColumnRange() || isFullRowRange()) {
        npc(sb)->append(u':');
        npc(sb)->append(npc(cellRefTo)->formatAsString());
    }
    return npc(sb)->toString();
}

org::apache::poi::ss::util::CellRangeAddress* org::apache::poi::ss::util::CellRangeAddress::valueOf(::java::lang::String* ref)
{
    clinit();
    auto sep = npc(ref)->indexOf(u":"_j);
    CellReference* a;
    CellReference* b;
    if(sep == -int32_t(1)) {
        a = new CellReference(ref);
        b = a;
    } else {
        a = new CellReference(npc(ref)->substring(0, sep));
        b = new CellReference(npc(ref)->substring(sep + int32_t(1)));
    }
    return new CellRangeAddress(npc(a)->getRow(), npc(b)->getRow(), npc(a)->getCol(), npc(b)->getCol());
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::util::CellRangeAddress::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.util.CellRangeAddress", 39);
    return c;
}

java::lang::Class* org::apache::poi::ss::util::CellRangeAddress::getClass0()
{
    return class_();
}

