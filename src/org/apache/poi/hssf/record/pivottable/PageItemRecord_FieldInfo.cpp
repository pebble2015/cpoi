// Generated from /POI/java/org/apache/poi/hssf/record/pivottable/PageItemRecord.java
#include <org/apache/poi/hssf/record/pivottable/PageItemRecord_FieldInfo.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream.hpp>
#include <org/apache/poi/util/HexDump.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::hssf::record::pivottable::PageItemRecord_FieldInfo::PageItemRecord_FieldInfo(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::pivottable::PageItemRecord_FieldInfo::PageItemRecord_FieldInfo(::poi::hssf::record::RecordInputStream* in) 
    : PageItemRecord_FieldInfo(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int32_t poi::hssf::record::pivottable::PageItemRecord_FieldInfo::ENCODED_SIZE;

void poi::hssf::record::pivottable::PageItemRecord_FieldInfo::ctor(::poi::hssf::record::RecordInputStream* in)
{
    super::ctor();
    _isxvi = npc(in)->readShort();
    _isxvd = npc(in)->readShort();
    _idObj = npc(in)->readShort();
}

void poi::hssf::record::pivottable::PageItemRecord_FieldInfo::serialize(::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(_isxvi);
    npc(out)->writeShort(_isxvd);
    npc(out)->writeShort(_idObj);
}

void poi::hssf::record::pivottable::PageItemRecord_FieldInfo::appendDebugInfo(::java::lang::StringBuffer* sb)
{
    npc(sb)->append(u'(');
    npc(npc(sb)->append(u"isxvi="_j))->append(::poi::util::HexDump::shortToHex(_isxvi));
    npc(npc(sb)->append(u" isxvd="_j))->append(::poi::util::HexDump::shortToHex(_isxvd));
    npc(npc(sb)->append(u" idObj="_j))->append(::poi::util::HexDump::shortToHex(_idObj));
    npc(sb)->append(u')');
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::pivottable::PageItemRecord_FieldInfo::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.pivottable.PageItemRecord.FieldInfo", 62);
    return c;
}

java::lang::Class* poi::hssf::record::pivottable::PageItemRecord_FieldInfo::getClass0()
{
    return class_();
}

