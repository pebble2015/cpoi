// Generated from /POI/java/org/apache/poi/hssf/record/SubRecord.java
#include <org/apache/poi/hssf/record/SubRecord_UnknownSubRecord.hpp>

#include <java/lang/Class.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/util/HexDump.hpp>
#include <org/apache/poi/util/LittleEndianInput.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::hssf::record::SubRecord_UnknownSubRecord::SubRecord_UnknownSubRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::SubRecord_UnknownSubRecord::SubRecord_UnknownSubRecord(::poi::util::LittleEndianInput* in, int32_t sid, int32_t size) 
    : SubRecord_UnknownSubRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in,sid,size);
}

void poi::hssf::record::SubRecord_UnknownSubRecord::ctor(::poi::util::LittleEndianInput* in, int32_t sid, int32_t size)
{
    super::ctor();
    _sid = sid;
    auto buf = new ::int8_tArray(size);
    npc(in)->readFully(buf);
    _data = buf;
}

int32_t poi::hssf::record::SubRecord_UnknownSubRecord::getDataSize()
{
    return npc(_data)->length;
}

void poi::hssf::record::SubRecord_UnknownSubRecord::serialize(::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(_sid);
    npc(out)->writeShort(npc(_data)->length);
    npc(out)->write(_data);
}

poi::hssf::record::SubRecord_UnknownSubRecord* poi::hssf::record::SubRecord_UnknownSubRecord::clone()
{
    return this;
}

java::lang::String* poi::hssf::record::SubRecord_UnknownSubRecord::toString()
{
    auto sb = new ::java::lang::StringBuilder(int32_t(64));
    npc(npc(sb)->append(npc(getClass())->getName()))->append(u" ["_j);
    npc(npc(sb)->append(u"sid="_j))->append(::poi::util::HexDump::shortToHex(_sid));
    npc(npc(sb)->append(u" size="_j))->append(npc(_data)->length);
    npc(npc(sb)->append(u" : "_j))->append(::poi::util::HexDump::toHex(_data));
    npc(sb)->append(u"]\n"_j);
    return npc(sb)->toString();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::SubRecord_UnknownSubRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.SubRecord.UnknownSubRecord", 53);
    return c;
}

int8_tArray* poi::hssf::record::SubRecord_UnknownSubRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* poi::hssf::record::SubRecord_UnknownSubRecord::getClass0()
{
    return class_();
}

