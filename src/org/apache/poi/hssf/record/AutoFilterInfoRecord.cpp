// Generated from /POI/java/org/apache/poi/hssf/record/AutoFilterInfoRecord.java
#include <org/apache/poi/hssf/record/AutoFilterInfoRecord.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <org/apache/poi/hssf/record/Record.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>
#include <Array.hpp>

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(nullptr);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::hssf::record::AutoFilterInfoRecord::AutoFilterInfoRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::AutoFilterInfoRecord::AutoFilterInfoRecord() 
    : AutoFilterInfoRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::hssf::record::AutoFilterInfoRecord::AutoFilterInfoRecord(RecordInputStream* in) 
    : AutoFilterInfoRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t poi::hssf::record::AutoFilterInfoRecord::sid;

void poi::hssf::record::AutoFilterInfoRecord::ctor()
{
    super::ctor();
}

void poi::hssf::record::AutoFilterInfoRecord::ctor(RecordInputStream* in)
{
    super::ctor();
    _cEntries = npc(in)->readShort();
}

void poi::hssf::record::AutoFilterInfoRecord::setNumEntries(int16_t num)
{
    _cEntries = num;
}

int16_t poi::hssf::record::AutoFilterInfoRecord::getNumEntries()
{
    return _cEntries;
}

java::lang::String* poi::hssf::record::AutoFilterInfoRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[AUTOFILTERINFO]\n"_j);
    npc(npc(npc(buffer)->append(u"    .numEntries          = "_j))->append(static_cast< int32_t >(_cEntries)))->append(u"\n"_j);
    npc(buffer)->append(u"[/AUTOFILTERINFO]\n"_j);
    return npc(buffer)->toString();
}

void poi::hssf::record::AutoFilterInfoRecord::serialize(::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(_cEntries);
}

int32_t poi::hssf::record::AutoFilterInfoRecord::getDataSize()
{
    return 2;
}

int16_t poi::hssf::record::AutoFilterInfoRecord::getSid()
{
    return sid;
}

poi::hssf::record::AutoFilterInfoRecord* poi::hssf::record::AutoFilterInfoRecord::clone()
{
    return java_cast< AutoFilterInfoRecord* >(cloneViaReserialise());
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::AutoFilterInfoRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.AutoFilterInfoRecord", 47);
    return c;
}

int32_t poi::hssf::record::AutoFilterInfoRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* poi::hssf::record::AutoFilterInfoRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* poi::hssf::record::AutoFilterInfoRecord::getClass0()
{
    return class_();
}

