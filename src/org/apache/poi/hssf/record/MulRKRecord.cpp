// Generated from /POI/java/org/apache/poi/hssf/record/MulRKRecord.java
#include <org/apache/poi/hssf/record/MulRKRecord.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <org/apache/poi/hssf/record/MulRKRecord_RkRec.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream.hpp>
#include <org/apache/poi/hssf/util/RKUtil.hpp>
#include <org/apache/poi/util/HexDump.hpp>
#include <org/apache/poi/util/RecordFormatException.hpp>
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
            namespace hssf
            {
                namespace record
                {
typedef ::SubArray< ::org::apache::poi::hssf::record::MulRKRecord_RkRec, ::java::lang::ObjectArray > MulRKRecord_RkRecArray;
                } // record
            } // hssf
        } // poi
    } // apache
} // org

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::hssf::record::MulRKRecord::MulRKRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::MulRKRecord::MulRKRecord(RecordInputStream* in) 
    : MulRKRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t org::apache::poi::hssf::record::MulRKRecord::sid;

int32_t org::apache::poi::hssf::record::MulRKRecord::getRow()
{
    return field_1_row;
}

int16_t org::apache::poi::hssf::record::MulRKRecord::getFirstColumn()
{
    return field_2_first_col;
}

int16_t org::apache::poi::hssf::record::MulRKRecord::getLastColumn()
{
    return field_4_last_col;
}

int32_t org::apache::poi::hssf::record::MulRKRecord::getNumColumns()
{
    return field_4_last_col - field_2_first_col + int32_t(1);
}

int16_t org::apache::poi::hssf::record::MulRKRecord::getXFAt(int32_t coffset)
{
    return npc((*field_3_rks)[coffset])->xf;
}

double org::apache::poi::hssf::record::MulRKRecord::getRKNumberAt(int32_t coffset)
{
    return ::org::apache::poi::hssf::util::RKUtil::decodeNumber(npc((*field_3_rks)[coffset])->rk);
}

void org::apache::poi::hssf::record::MulRKRecord::ctor(RecordInputStream* in)
{
    super::ctor();
    field_1_row = npc(in)->readUShort();
    field_2_first_col = npc(in)->readShort();
    field_3_rks = MulRKRecord_RkRec::parseRKs(in);
    field_4_last_col = npc(in)->readShort();
}

java::lang::String* org::apache::poi::hssf::record::MulRKRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[MULRK]\n"_j);
    npc(npc(npc(buffer)->append(u"	.row	 = "_j))->append(::org::apache::poi::util::HexDump::shortToHex(getRow())))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"	.firstcol= "_j))->append(::org::apache::poi::util::HexDump::shortToHex(getFirstColumn())))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"	.lastcol = "_j))->append(::org::apache::poi::util::HexDump::shortToHex(getLastColumn())))->append(u"\n"_j);
    for (auto k = int32_t(0); k < getNumColumns(); k++) {
        npc(npc(npc(npc(npc(buffer)->append(u"	xf["_j))->append(k))->append(u"] = "_j))->append(::org::apache::poi::util::HexDump::shortToHex(getXFAt(k))))->append(u"\n"_j);
        npc(npc(npc(npc(npc(buffer)->append(u"	rk["_j))->append(k))->append(u"] = "_j))->append(getRKNumberAt(k)))->append(u"\n"_j);
    }
    npc(buffer)->append(u"[/MULRK]\n"_j);
    return npc(buffer)->toString();
}

int16_t org::apache::poi::hssf::record::MulRKRecord::getSid()
{
    return sid;
}

void org::apache::poi::hssf::record::MulRKRecord::serialize(::org::apache::poi::util::LittleEndianOutput* out)
{
    throw new ::org::apache::poi::util::RecordFormatException(u"Sorry, you can't serialize MulRK in this release"_j);
}

int32_t org::apache::poi::hssf::record::MulRKRecord::getDataSize()
{
    throw new ::org::apache::poi::util::RecordFormatException(u"Sorry, you can't serialize MulRK in this release"_j);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::MulRKRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.MulRKRecord", 38);
    return c;
}

int32_t org::apache::poi::hssf::record::MulRKRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* org::apache::poi::hssf::record::MulRKRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* org::apache::poi::hssf::record::MulRKRecord::getClass0()
{
    return class_();
}

