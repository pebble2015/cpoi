// Generated from /POI/java/org/apache/poi/hssf/record/MergeCellsRecord.java
#include <org/apache/poi/hssf/record/MergeCellsRecord.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream.hpp>
#include <org/apache/poi/ss/util/CellRangeAddress.hpp>
#include <org/apache/poi/ss/util/CellRangeAddressBase.hpp>
#include <org/apache/poi/ss/util/CellRangeAddressList.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>
#include <Array.hpp>
#include <ObjectArray.hpp>
#include <SubArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace org
{
    namespace apache
    {
        namespace poi
        {
            namespace ss
            {
                namespace util
                {
typedef ::SubArray< ::org::apache::poi::ss::util::CellRangeAddressBase, ::java::lang::ObjectArray > CellRangeAddressBaseArray;
typedef ::SubArray< ::org::apache::poi::ss::util::CellRangeAddress, CellRangeAddressBaseArray > CellRangeAddressArray;
                } // util
            } // ss
        } // poi
    } // apache
} // org

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::hssf::record::MergeCellsRecord::MergeCellsRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::MergeCellsRecord::MergeCellsRecord(::org::apache::poi::ss::util::CellRangeAddressArray* regions, int32_t startIndex, int32_t numberOfRegions) 
    : MergeCellsRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(regions,startIndex,numberOfRegions);
}

org::apache::poi::hssf::record::MergeCellsRecord::MergeCellsRecord(RecordInputStream* in) 
    : MergeCellsRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t org::apache::poi::hssf::record::MergeCellsRecord::sid;

void org::apache::poi::hssf::record::MergeCellsRecord::ctor(::org::apache::poi::ss::util::CellRangeAddressArray* regions, int32_t startIndex, int32_t numberOfRegions)
{
    super::ctor();
    _regions = regions;
    _startIndex = startIndex;
    _numberOfRegions = numberOfRegions;
}

void org::apache::poi::hssf::record::MergeCellsRecord::ctor(RecordInputStream* in)
{
    super::ctor();
    auto nRegions = npc(in)->readUShort();
    auto cras = new ::org::apache::poi::ss::util::CellRangeAddressArray(nRegions);
    for (auto i = int32_t(0); i < nRegions; i++) {
        cras->set(i, new ::org::apache::poi::ss::util::CellRangeAddress(in));
    }
    _numberOfRegions = nRegions;
    _startIndex = 0;
    _regions = cras;
}

int16_t org::apache::poi::hssf::record::MergeCellsRecord::getNumAreas()
{
    return static_cast< int16_t >(_numberOfRegions);
}

org::apache::poi::ss::util::CellRangeAddress* org::apache::poi::hssf::record::MergeCellsRecord::getAreaAt(int32_t index)
{
    return (*_regions)[_startIndex + index];
}

int32_t org::apache::poi::hssf::record::MergeCellsRecord::getDataSize()
{
    return ::org::apache::poi::ss::util::CellRangeAddressList::getEncodedSize(_numberOfRegions);
}

int16_t org::apache::poi::hssf::record::MergeCellsRecord::getSid()
{
    return sid;
}

void org::apache::poi::hssf::record::MergeCellsRecord::serialize(::org::apache::poi::util::LittleEndianOutput* out)
{
    auto nItems = _numberOfRegions;
    npc(out)->writeShort(nItems);
    for (auto i = int32_t(0); i < _numberOfRegions; i++) {
        npc((*_regions)[_startIndex + i])->serialize(out);
    }
}

java::lang::String* org::apache::poi::hssf::record::MergeCellsRecord::toString()
{
    auto retval = new ::java::lang::StringBuffer();
    npc(npc(retval)->append(u"[MERGEDCELLS]"_j))->append(u"\n"_j);
    npc(npc(npc(retval)->append(u"     .numregions ="_j))->append(static_cast< int32_t >(getNumAreas())))->append(u"\n"_j);
    for (auto k = int32_t(0); k < _numberOfRegions; k++) {
        auto r = (*_regions)[_startIndex + k];
        npc(npc(npc(retval)->append(u"     .rowfrom ="_j))->append(npc(r)->getFirstRow()))->append(u"\n"_j);
        npc(npc(npc(retval)->append(u"     .rowto   ="_j))->append(npc(r)->getLastRow()))->append(u"\n"_j);
        npc(npc(npc(retval)->append(u"     .colfrom ="_j))->append(npc(r)->getFirstColumn()))->append(u"\n"_j);
        npc(npc(npc(retval)->append(u"     .colto   ="_j))->append(npc(r)->getLastColumn()))->append(u"\n"_j);
    }
    npc(npc(retval)->append(u"[MERGEDCELLS]"_j))->append(u"\n"_j);
    return npc(retval)->toString();
}

org::apache::poi::hssf::record::MergeCellsRecord* org::apache::poi::hssf::record::MergeCellsRecord::clone()
{
    auto nRegions = _numberOfRegions;
    auto clonedRegions = new ::org::apache::poi::ss::util::CellRangeAddressArray(nRegions);
    for (auto i = int32_t(0); i < npc(clonedRegions)->length; i++) {
        clonedRegions->set(i, npc((*_regions)[_startIndex + i])->copy());
    }
    return new MergeCellsRecord(clonedRegions, int32_t(0), nRegions);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::MergeCellsRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.MergeCellsRecord", 43);
    return c;
}

int32_t org::apache::poi::hssf::record::MergeCellsRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* org::apache::poi::hssf::record::MergeCellsRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* org::apache::poi::hssf::record::MergeCellsRecord::getClass0()
{
    return class_();
}

