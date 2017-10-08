// Generated from /POI/java/org/apache/poi/hssf/record/pivottable/PageItemRecord.java
#include <org/apache/poi/hssf/record/pivottable/PageItemRecord.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream.hpp>
#include <org/apache/poi/hssf/record/pivottable/PageItemRecord_FieldInfo.hpp>
#include <org/apache/poi/util/RecordFormatException.hpp>
#include <Array.hpp>
#include <ObjectArray.hpp>
#include <SubArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace poi
{
    namespace hssf
    {
        namespace record
        {
            namespace pivottable
            {
typedef ::SubArray< ::poi::hssf::record::pivottable::PageItemRecord_FieldInfo, ::java::lang::ObjectArray > PageItemRecord_FieldInfoArray;
            } // pivottable
        } // record
    } // hssf
} // poi

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::hssf::record::pivottable::PageItemRecord::PageItemRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::pivottable::PageItemRecord::PageItemRecord(::poi::hssf::record::RecordInputStream* in) 
    : PageItemRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t poi::hssf::record::pivottable::PageItemRecord::sid;

void poi::hssf::record::pivottable::PageItemRecord::ctor(::poi::hssf::record::RecordInputStream* in)
{
    super::ctor();
    auto dataSize = npc(in)->remaining();
    if(dataSize % PageItemRecord_FieldInfo::ENCODED_SIZE != 0) {
        throw new ::poi::util::RecordFormatException(::java::lang::StringBuilder().append(u"Bad data size "_j)->append(dataSize)->toString());
    }
    auto nItems = dataSize / PageItemRecord_FieldInfo::ENCODED_SIZE;
    auto fis = new PageItemRecord_FieldInfoArray(nItems);
    for (auto i = int32_t(0); i < npc(fis)->length; i++) {
        fis->set(i, new PageItemRecord_FieldInfo(in));
    }
    _fieldInfos = fis;
}

void poi::hssf::record::pivottable::PageItemRecord::serialize(::poi::util::LittleEndianOutput* out)
{
    for (auto i = int32_t(0); i < npc(_fieldInfos)->length; i++) {
        npc((*_fieldInfos)[i])->serialize(out);
    }
}

int32_t poi::hssf::record::pivottable::PageItemRecord::getDataSize()
{
    return npc(_fieldInfos)->length * PageItemRecord_FieldInfo::ENCODED_SIZE;
}

int16_t poi::hssf::record::pivottable::PageItemRecord::getSid()
{
    return sid;
}

java::lang::String* poi::hssf::record::pivottable::PageItemRecord::toString()
{
    auto sb = new ::java::lang::StringBuffer();
    npc(sb)->append(u"[SXPI]\n"_j);
    for (auto i = int32_t(0); i < npc(_fieldInfos)->length; i++) {
        npc(npc(npc(sb)->append(u"    item["_j))->append(i))->append(u"]="_j);
        npc((*_fieldInfos)[i])->appendDebugInfo(sb);
        npc(sb)->append(u'\u000a');
    }
    npc(sb)->append(u"[/SXPI]\n"_j);
    return npc(sb)->toString();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::pivottable::PageItemRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.pivottable.PageItemRecord", 52);
    return c;
}

int32_t poi::hssf::record::pivottable::PageItemRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* poi::hssf::record::pivottable::PageItemRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* poi::hssf::record::pivottable::PageItemRecord::getClass0()
{
    return class_();
}

