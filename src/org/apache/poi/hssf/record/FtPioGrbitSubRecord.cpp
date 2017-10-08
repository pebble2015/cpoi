// Generated from /POI/java/org/apache/poi/hssf/record/FtPioGrbitSubRecord.java
#include <org/apache/poi/hssf/record/FtPioGrbitSubRecord.hpp>

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

poi::hssf::record::FtPioGrbitSubRecord::FtPioGrbitSubRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::FtPioGrbitSubRecord::FtPioGrbitSubRecord() 
    : FtPioGrbitSubRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::hssf::record::FtPioGrbitSubRecord::FtPioGrbitSubRecord(::poi::util::LittleEndianInput* in, int32_t size) 
    : FtPioGrbitSubRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in,size);
}

void poi::hssf::record::FtPioGrbitSubRecord::init()
{
    flags = int32_t(0);
}

constexpr int16_t poi::hssf::record::FtPioGrbitSubRecord::sid;

constexpr int16_t poi::hssf::record::FtPioGrbitSubRecord::length;

constexpr int32_t poi::hssf::record::FtPioGrbitSubRecord::AUTO_PICT_BIT;

constexpr int32_t poi::hssf::record::FtPioGrbitSubRecord::DDE_BIT;

constexpr int32_t poi::hssf::record::FtPioGrbitSubRecord::PRINT_CALC_BIT;

constexpr int32_t poi::hssf::record::FtPioGrbitSubRecord::ICON_BIT;

constexpr int32_t poi::hssf::record::FtPioGrbitSubRecord::CTL_BIT;

constexpr int32_t poi::hssf::record::FtPioGrbitSubRecord::PRSTM_BIT;

constexpr int32_t poi::hssf::record::FtPioGrbitSubRecord::CAMERA_BIT;

constexpr int32_t poi::hssf::record::FtPioGrbitSubRecord::DEFAULT_SIZE_BIT;

constexpr int32_t poi::hssf::record::FtPioGrbitSubRecord::AUTO_LOAD_BIT;

void poi::hssf::record::FtPioGrbitSubRecord::ctor()
{
    super::ctor();
    init();
}

void poi::hssf::record::FtPioGrbitSubRecord::ctor(::poi::util::LittleEndianInput* in, int32_t size)
{
    super::ctor();
    init();
    if(size != length) {
        throw new ::poi::util::RecordFormatException(::java::lang::StringBuilder().append(u"Unexpected size ("_j)->append(size)
            ->append(u")"_j)->toString());
    }
    flags = npc(in)->readShort();
}

void poi::hssf::record::FtPioGrbitSubRecord::setFlagByBit(int32_t bitmask, bool enabled)
{
    if(enabled) {
        flags |= bitmask;
    } else {
        flags &= (int32_t(65535) ^ bitmask);
    }
}

bool poi::hssf::record::FtPioGrbitSubRecord::getFlagByBit(int32_t bitmask)
{
    return ((flags & bitmask) != 0);
}

java::lang::String* poi::hssf::record::FtPioGrbitSubRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[FtPioGrbit ]\n"_j);
    npc(npc(npc(buffer)->append(u"  size     = "_j))->append(static_cast< int32_t >(length)))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"  flags    = "_j))->append(::poi::util::HexDump::toHex(flags)))->append(u"\n"_j);
    npc(buffer)->append(u"[/FtPioGrbit ]\n"_j);
    return npc(buffer)->toString();
}

void poi::hssf::record::FtPioGrbitSubRecord::serialize(::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(sid);
    npc(out)->writeShort(length);
    npc(out)->writeShort(flags);
}

int32_t poi::hssf::record::FtPioGrbitSubRecord::getDataSize()
{
    return length;
}

int16_t poi::hssf::record::FtPioGrbitSubRecord::getSid()
{
    return sid;
}

poi::hssf::record::FtPioGrbitSubRecord* poi::hssf::record::FtPioGrbitSubRecord::clone()
{
    auto rec = new FtPioGrbitSubRecord();
    npc(rec)->flags = this->flags;
    return rec;
}

int16_t poi::hssf::record::FtPioGrbitSubRecord::getFlags()
{
    return flags;
}

void poi::hssf::record::FtPioGrbitSubRecord::setFlags(int16_t flags)
{
    this->flags = flags;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::FtPioGrbitSubRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.FtPioGrbitSubRecord", 46);
    return c;
}

int8_tArray* poi::hssf::record::FtPioGrbitSubRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* poi::hssf::record::FtPioGrbitSubRecord::getClass0()
{
    return class_();
}

