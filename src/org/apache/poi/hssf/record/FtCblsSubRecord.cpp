// Generated from /POI/java/org/apache/poi/hssf/record/FtCblsSubRecord.java
#include <org/apache/poi/hssf/record/FtCblsSubRecord.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/System.hpp>
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

org::apache::poi::hssf::record::FtCblsSubRecord::FtCblsSubRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::FtCblsSubRecord::FtCblsSubRecord() 
    : FtCblsSubRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::hssf::record::FtCblsSubRecord::FtCblsSubRecord(::org::apache::poi::util::LittleEndianInput* in, int32_t size) 
    : FtCblsSubRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in,size);
}

constexpr int16_t org::apache::poi::hssf::record::FtCblsSubRecord::sid;

constexpr int32_t org::apache::poi::hssf::record::FtCblsSubRecord::ENCODED_SIZE;

void org::apache::poi::hssf::record::FtCblsSubRecord::ctor()
{
    super::ctor();
    reserved = new ::int8_tArray(ENCODED_SIZE);
}

void org::apache::poi::hssf::record::FtCblsSubRecord::ctor(::org::apache::poi::util::LittleEndianInput* in, int32_t size)
{
    super::ctor();
    if(size != ENCODED_SIZE) {
        throw new ::org::apache::poi::util::RecordFormatException(::java::lang::StringBuilder().append(u"Unexpected size ("_j)->append(size)
            ->append(u")"_j)->toString());
    }
    auto buf = new ::int8_tArray(size);
    npc(in)->readFully(buf);
    reserved = buf;
}

java::lang::String* org::apache::poi::hssf::record::FtCblsSubRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(npc(buffer)->append(u"[FtCbls ]"_j))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"  size     = "_j))->append(getDataSize()))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"  reserved = "_j))->append(::org::apache::poi::util::HexDump::toHex(reserved)))->append(u"\n"_j);
    npc(npc(buffer)->append(u"[/FtCbls ]"_j))->append(u"\n"_j);
    return npc(buffer)->toString();
}

void org::apache::poi::hssf::record::FtCblsSubRecord::serialize(::org::apache::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(sid);
    npc(out)->writeShort(npc(reserved)->length);
    npc(out)->write(reserved);
}

int32_t org::apache::poi::hssf::record::FtCblsSubRecord::getDataSize()
{
    return npc(reserved)->length;
}

int16_t org::apache::poi::hssf::record::FtCblsSubRecord::getSid()
{
    return sid;
}

org::apache::poi::hssf::record::FtCblsSubRecord* org::apache::poi::hssf::record::FtCblsSubRecord::clone()
{
    auto rec = new FtCblsSubRecord();
    auto recdata = new ::int8_tArray(npc(reserved)->length);
    ::java::lang::System::arraycopy(reserved, 0, recdata, 0, npc(recdata)->length);
    npc(rec)->reserved = recdata;
    return rec;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::FtCblsSubRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.FtCblsSubRecord", 42);
    return c;
}

int8_tArray* org::apache::poi::hssf::record::FtCblsSubRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* org::apache::poi::hssf::record::FtCblsSubRecord::getClass0()
{
    return class_();
}

