// Generated from /POI/java/org/apache/poi/hssf/record/GroupMarkerSubRecord.java
#include <org/apache/poi/hssf/record/GroupMarkerSubRecord.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/System.hpp>
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

org::apache::poi::hssf::record::GroupMarkerSubRecord::GroupMarkerSubRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::GroupMarkerSubRecord::GroupMarkerSubRecord() 
    : GroupMarkerSubRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::hssf::record::GroupMarkerSubRecord::GroupMarkerSubRecord(::org::apache::poi::util::LittleEndianInput* in, int32_t size) 
    : GroupMarkerSubRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in,size);
}

constexpr int16_t org::apache::poi::hssf::record::GroupMarkerSubRecord::sid;

int8_tArray*& org::apache::poi::hssf::record::GroupMarkerSubRecord::EMPTY_BYTE_ARRAY()
{
    clinit();
    return EMPTY_BYTE_ARRAY_;
}
int8_tArray* org::apache::poi::hssf::record::GroupMarkerSubRecord::EMPTY_BYTE_ARRAY_;

void org::apache::poi::hssf::record::GroupMarkerSubRecord::ctor()
{
    super::ctor();
    reserved = EMPTY_BYTE_ARRAY_;
}

void org::apache::poi::hssf::record::GroupMarkerSubRecord::ctor(::org::apache::poi::util::LittleEndianInput* in, int32_t size)
{
    super::ctor();
    auto buf = new ::int8_tArray(size);
    npc(in)->readFully(buf);
    reserved = buf;
}

java::lang::String* org::apache::poi::hssf::record::GroupMarkerSubRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    auto nl = ::java::lang::System::getProperty(u"line.separator"_j);
    npc(buffer)->append(::java::lang::StringBuilder().append(u"[ftGmo]"_j)->append(nl)->toString());
    npc(npc(npc(buffer)->append(u"  reserved = "_j))->append(::org::apache::poi::util::HexDump::toHex(reserved)))->append(nl);
    npc(buffer)->append(::java::lang::StringBuilder().append(u"[/ftGmo]"_j)->append(nl)->toString());
    return npc(buffer)->toString();
}

void org::apache::poi::hssf::record::GroupMarkerSubRecord::serialize(::org::apache::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(sid);
    npc(out)->writeShort(npc(reserved)->length);
    npc(out)->write(reserved);
}

int32_t org::apache::poi::hssf::record::GroupMarkerSubRecord::getDataSize()
{
    return npc(reserved)->length;
}

int16_t org::apache::poi::hssf::record::GroupMarkerSubRecord::getSid()
{
    return sid;
}

org::apache::poi::hssf::record::GroupMarkerSubRecord* org::apache::poi::hssf::record::GroupMarkerSubRecord::clone()
{
    auto rec = new GroupMarkerSubRecord();
    npc(rec)->reserved = new ::int8_tArray(npc(reserved)->length);
    for (auto i = int32_t(0); i < npc(reserved)->length; i++) 
                (*npc(rec)->reserved)[i] = (*reserved)[i];

    return rec;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::GroupMarkerSubRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.GroupMarkerSubRecord", 47);
    return c;
}

void org::apache::poi::hssf::record::GroupMarkerSubRecord::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        EMPTY_BYTE_ARRAY_ = (new ::int8_tArray({}));
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

int8_tArray* org::apache::poi::hssf::record::GroupMarkerSubRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* org::apache::poi::hssf::record::GroupMarkerSubRecord::getClass0()
{
    return class_();
}

