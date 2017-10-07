// Generated from /POI/java/org/apache/poi/hssf/record/DateWindow1904Record.java
#include <org/apache/poi/hssf/record/DateWindow1904Record.hpp>

#include <java/lang/Integer.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::hssf::record::DateWindow1904Record::DateWindow1904Record(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::DateWindow1904Record::DateWindow1904Record() 
    : DateWindow1904Record(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::hssf::record::DateWindow1904Record::DateWindow1904Record(RecordInputStream* in) 
    : DateWindow1904Record(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t org::apache::poi::hssf::record::DateWindow1904Record::sid;

void org::apache::poi::hssf::record::DateWindow1904Record::ctor()
{
    super::ctor();
}

void org::apache::poi::hssf::record::DateWindow1904Record::ctor(RecordInputStream* in)
{
    super::ctor();
    field_1_window = npc(in)->readShort();
}

void org::apache::poi::hssf::record::DateWindow1904Record::setWindowing(int16_t window)
{
    field_1_window = window;
}

int16_t org::apache::poi::hssf::record::DateWindow1904Record::getWindowing()
{
    return field_1_window;
}

java::lang::String* org::apache::poi::hssf::record::DateWindow1904Record::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[1904]\n"_j);
    npc(npc(npc(buffer)->append(u"    .is1904          = "_j))->append(::java::lang::Integer::toHexString(getWindowing())))->append(u"\n"_j);
    npc(buffer)->append(u"[/1904]\n"_j);
    return npc(buffer)->toString();
}

void org::apache::poi::hssf::record::DateWindow1904Record::serialize(::org::apache::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(getWindowing());
}

int32_t org::apache::poi::hssf::record::DateWindow1904Record::getDataSize()
{
    return 2;
}

int16_t org::apache::poi::hssf::record::DateWindow1904Record::getSid()
{
    return sid;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::DateWindow1904Record::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.DateWindow1904Record", 47);
    return c;
}

int32_t org::apache::poi::hssf::record::DateWindow1904Record::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* org::apache::poi::hssf::record::DateWindow1904Record::serialize()
{
    return super::serialize();
}

java::lang::Class* org::apache::poi::hssf::record::DateWindow1904Record::getClass0()
{
    return class_();
}

