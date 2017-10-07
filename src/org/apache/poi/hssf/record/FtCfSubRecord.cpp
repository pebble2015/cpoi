// Generated from /POI/java/org/apache/poi/hssf/record/FtCfSubRecord.java
#include <org/apache/poi/hssf/record/FtCfSubRecord.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/util/HexDump.hpp>
#include <org/apache/poi/util/LittleEndianInput.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>
#include <org/apache/poi/util/RecordFormatException.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::hssf::record::FtCfSubRecord::FtCfSubRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::FtCfSubRecord::FtCfSubRecord() 
    : FtCfSubRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::hssf::record::FtCfSubRecord::FtCfSubRecord(::org::apache::poi::util::LittleEndianInput* in, int32_t size) 
    : FtCfSubRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in,size);
}

void org::apache::poi::hssf::record::FtCfSubRecord::init()
{
    flags = int32_t(0);
}

constexpr int16_t org::apache::poi::hssf::record::FtCfSubRecord::sid;

constexpr int16_t org::apache::poi::hssf::record::FtCfSubRecord::length;

constexpr int16_t org::apache::poi::hssf::record::FtCfSubRecord::METAFILE_BIT;

constexpr int16_t org::apache::poi::hssf::record::FtCfSubRecord::BITMAP_BIT;

constexpr int16_t org::apache::poi::hssf::record::FtCfSubRecord::UNSPECIFIED_BIT;

void org::apache::poi::hssf::record::FtCfSubRecord::ctor()
{
    super::ctor();
    init();
}

void org::apache::poi::hssf::record::FtCfSubRecord::ctor(::org::apache::poi::util::LittleEndianInput* in, int32_t size)
{
    super::ctor();
    init();
    if(size != length) {
        throw new ::org::apache::poi::util::RecordFormatException(::java::lang::StringBuilder().append(u"Unexpected size ("_j)->append(size)
            ->append(u")"_j)->toString());
    }
    flags = npc(in)->readShort();
}

java::lang::String* org::apache::poi::hssf::record::FtCfSubRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[FtCf ]\n"_j);
    npc(npc(npc(buffer)->append(u"  size     = "_j))->append(static_cast< int32_t >(length)))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"  flags    = "_j))->append(::org::apache::poi::util::HexDump::toHex(flags)))->append(u"\n"_j);
    npc(buffer)->append(u"[/FtCf ]\n"_j);
    return npc(buffer)->toString();
}

void org::apache::poi::hssf::record::FtCfSubRecord::serialize(::org::apache::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(sid);
    npc(out)->writeShort(length);
    npc(out)->writeShort(flags);
}

int32_t org::apache::poi::hssf::record::FtCfSubRecord::getDataSize()
{
    return length;
}

int16_t org::apache::poi::hssf::record::FtCfSubRecord::getSid()
{
    return sid;
}

org::apache::poi::hssf::record::FtCfSubRecord* org::apache::poi::hssf::record::FtCfSubRecord::clone()
{
    auto rec = new FtCfSubRecord();
    npc(rec)->flags = this->flags;
    return rec;
}

int16_t org::apache::poi::hssf::record::FtCfSubRecord::getFlags()
{
    return flags;
}

void org::apache::poi::hssf::record::FtCfSubRecord::setFlags(int16_t flags)
{
    this->flags = flags;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::FtCfSubRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.FtCfSubRecord", 40);
    return c;
}

int8_tArray* org::apache::poi::hssf::record::FtCfSubRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* org::apache::poi::hssf::record::FtCfSubRecord::getClass0()
{
    return class_();
}

