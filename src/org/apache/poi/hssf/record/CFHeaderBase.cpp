// Generated from /POI/java/org/apache/poi/hssf/record/CFHeaderBase.java
#include <org/apache/poi/hssf/record/CFHeaderBase.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream.hpp>
#include <org/apache/poi/ss/util/CellRangeAddress.hpp>
#include <org/apache/poi/ss/util/CellRangeAddressBase.hpp>
#include <org/apache/poi/ss/util/CellRangeAddressList.hpp>
#include <org/apache/poi/ss/util/CellRangeUtil.hpp>
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

org::apache::poi::hssf::record::CFHeaderBase::CFHeaderBase(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::CFHeaderBase::CFHeaderBase() 
    : CFHeaderBase(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::hssf::record::CFHeaderBase::CFHeaderBase(::org::apache::poi::ss::util::CellRangeAddressArray* regions, int32_t nRules) 
    : CFHeaderBase(*static_cast< ::default_init_tag* >(0))
{
    ctor(regions,nRules);
}

void org::apache::poi::hssf::record::CFHeaderBase::ctor()
{
    super::ctor();
}

void org::apache::poi::hssf::record::CFHeaderBase::ctor(::org::apache::poi::ss::util::CellRangeAddressArray* regions, int32_t nRules)
{
    super::ctor();
    auto unmergedRanges = regions;
    auto mergeCellRanges = ::org::apache::poi::ss::util::CellRangeUtil::mergeCellRanges(unmergedRanges);
    setCellRanges(mergeCellRanges);
    field_1_numcf = nRules;
}

void org::apache::poi::hssf::record::CFHeaderBase::createEmpty()
{
    field_3_enclosing_cell_range = new ::org::apache::poi::ss::util::CellRangeAddress(int32_t(0), int32_t(0), int32_t(0), int32_t(0));
    field_4_cell_ranges = new ::org::apache::poi::ss::util::CellRangeAddressList();
}

void org::apache::poi::hssf::record::CFHeaderBase::read(RecordInputStream* in)
{
    field_1_numcf = npc(in)->readShort();
    field_2_need_recalculation_and_id = npc(in)->readShort();
    field_3_enclosing_cell_range = new ::org::apache::poi::ss::util::CellRangeAddress(in);
    field_4_cell_ranges = new ::org::apache::poi::ss::util::CellRangeAddressList(in);
}

int32_t org::apache::poi::hssf::record::CFHeaderBase::getNumberOfConditionalFormats()
{
    return field_1_numcf;
}

void org::apache::poi::hssf::record::CFHeaderBase::setNumberOfConditionalFormats(int32_t n)
{
    field_1_numcf = n;
}

bool org::apache::poi::hssf::record::CFHeaderBase::getNeedRecalculation()
{
    return (field_2_need_recalculation_and_id & int32_t(1)) == 1;
}

void org::apache::poi::hssf::record::CFHeaderBase::setNeedRecalculation(bool b)
{
    if(b == getNeedRecalculation()) {
        return;
    } else if(b) {
        field_2_need_recalculation_and_id++;
    } else {
        field_2_need_recalculation_and_id--;
    }
}

int32_t org::apache::poi::hssf::record::CFHeaderBase::getID()
{
    return field_2_need_recalculation_and_id >> int32_t(1);
}

void org::apache::poi::hssf::record::CFHeaderBase::setID(int32_t id)
{
    auto needsRecalc = getNeedRecalculation();
    field_2_need_recalculation_and_id = (id << int32_t(1));
    if(needsRecalc) {
        field_2_need_recalculation_and_id++;
    }
}

org::apache::poi::ss::util::CellRangeAddress* org::apache::poi::hssf::record::CFHeaderBase::getEnclosingCellRange()
{
    return field_3_enclosing_cell_range;
}

void org::apache::poi::hssf::record::CFHeaderBase::setEnclosingCellRange(::org::apache::poi::ss::util::CellRangeAddress* cr)
{
    field_3_enclosing_cell_range = cr;
}

void org::apache::poi::hssf::record::CFHeaderBase::setCellRanges(::org::apache::poi::ss::util::CellRangeAddressArray* cellRanges)
{
    if(cellRanges == nullptr) {
        throw new ::java::lang::IllegalArgumentException(u"cellRanges must not be null"_j);
    }
    auto cral = new ::org::apache::poi::ss::util::CellRangeAddressList();
    ::org::apache::poi::ss::util::CellRangeAddress* enclosingRange = nullptr;
    for (auto i = int32_t(0); i < npc(cellRanges)->length; i++) {
        auto cr = (*cellRanges)[i];
        enclosingRange = ::org::apache::poi::ss::util::CellRangeUtil::createEnclosingCellRange(cr, enclosingRange);
        npc(cral)->addCellRangeAddress(cr);
    }
    field_3_enclosing_cell_range = enclosingRange;
    field_4_cell_ranges = cral;
}

org::apache::poi::ss::util::CellRangeAddressArray* org::apache::poi::hssf::record::CFHeaderBase::getCellRanges()
{
    return npc(field_4_cell_ranges)->getCellRangeAddresses();
}

java::lang::String* org::apache::poi::hssf::record::CFHeaderBase::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(npc(npc(buffer)->append(u"["_j))->append(getRecordName()))->append(u"]\n"_j);
    npc(npc(npc(buffer)->append(u"\t.numCF             = "_j))->append(getNumberOfConditionalFormats()))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"\t.needRecalc        = "_j))->append(getNeedRecalculation()))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"\t.id                = "_j))->append(getID()))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"\t.enclosingCellRange= "_j))->append(static_cast< ::java::lang::Object* >(getEnclosingCellRange())))->append(u"\n"_j);
    npc(buffer)->append(u"\t.cfranges=["_j);
    for (auto i = int32_t(0); i < npc(field_4_cell_ranges)->countRanges(); i++) {
        npc(npc(buffer)->append(i == 0 ? u""_j : u","_j))->append(static_cast< ::java::lang::Object* >(npc(field_4_cell_ranges)->getCellRangeAddress(i)));
    }
    npc(buffer)->append(u"]\n"_j);
    npc(npc(npc(buffer)->append(u"[/"_j))->append(getRecordName()))->append(u"]\n"_j);
    return npc(buffer)->toString();
}

int32_t org::apache::poi::hssf::record::CFHeaderBase::getDataSize()
{
    return int32_t(4) + ::org::apache::poi::ss::util::CellRangeAddress::ENCODED_SIZE + npc(field_4_cell_ranges)->getSize();
}

void org::apache::poi::hssf::record::CFHeaderBase::serialize(::org::apache::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(field_1_numcf);
    npc(out)->writeShort(field_2_need_recalculation_and_id);
    npc(field_3_enclosing_cell_range)->serialize(out);
    npc(field_4_cell_ranges)->serialize(out);
}

void org::apache::poi::hssf::record::CFHeaderBase::copyTo(CFHeaderBase* result)
{
    npc(result)->field_1_numcf = field_1_numcf;
    npc(result)->field_2_need_recalculation_and_id = field_2_need_recalculation_and_id;
    npc(result)->field_3_enclosing_cell_range = npc(field_3_enclosing_cell_range)->copy();
    npc(result)->field_4_cell_ranges = npc(field_4_cell_ranges)->copy();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::CFHeaderBase::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.CFHeaderBase", 39);
    return c;
}

int32_t org::apache::poi::hssf::record::CFHeaderBase::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* org::apache::poi::hssf::record::CFHeaderBase::serialize()
{
    return super::serialize();
}

java::lang::Class* org::apache::poi::hssf::record::CFHeaderBase::getClass0()
{
    return class_();
}

