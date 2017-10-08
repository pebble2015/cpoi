// Generated from /POI/java/org/apache/poi/hssf/record/ExternSheetRecord.java
#include <org/apache/poi/hssf/record/ExternSheetRecord_RefSubRecord.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::hssf::record::ExternSheetRecord_RefSubRecord::ExternSheetRecord_RefSubRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::ExternSheetRecord_RefSubRecord::ExternSheetRecord_RefSubRecord(int32_t extBookIndex, int32_t firstSheetIndex, int32_t lastSheetIndex) 
    : ExternSheetRecord_RefSubRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(extBookIndex,firstSheetIndex,lastSheetIndex);
}

poi::hssf::record::ExternSheetRecord_RefSubRecord::ExternSheetRecord_RefSubRecord(RecordInputStream* in) 
    : ExternSheetRecord_RefSubRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int32_t poi::hssf::record::ExternSheetRecord_RefSubRecord::ENCODED_SIZE;

void poi::hssf::record::ExternSheetRecord_RefSubRecord::adjustIndex(int32_t offset)
{
    _firstSheetIndex += offset;
    _lastSheetIndex += offset;
}

void poi::hssf::record::ExternSheetRecord_RefSubRecord::ctor(int32_t extBookIndex, int32_t firstSheetIndex, int32_t lastSheetIndex)
{
    super::ctor();
    _extBookIndex = extBookIndex;
    _firstSheetIndex = firstSheetIndex;
    _lastSheetIndex = lastSheetIndex;
}

void poi::hssf::record::ExternSheetRecord_RefSubRecord::ctor(RecordInputStream* in)
{
    ctor(npc(in)->readShort(), npc(in)->readShort(), npc(in)->readShort());
}

int32_t poi::hssf::record::ExternSheetRecord_RefSubRecord::getExtBookIndex()
{
    return _extBookIndex;
}

int32_t poi::hssf::record::ExternSheetRecord_RefSubRecord::getFirstSheetIndex()
{
    return _firstSheetIndex;
}

int32_t poi::hssf::record::ExternSheetRecord_RefSubRecord::getLastSheetIndex()
{
    return _lastSheetIndex;
}

java::lang::String* poi::hssf::record::ExternSheetRecord_RefSubRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(npc(buffer)->append(u"extBook="_j))->append(_extBookIndex);
    npc(npc(buffer)->append(u" firstSheet="_j))->append(_firstSheetIndex);
    npc(npc(buffer)->append(u" lastSheet="_j))->append(_lastSheetIndex);
    return npc(buffer)->toString();
}

void poi::hssf::record::ExternSheetRecord_RefSubRecord::serialize(::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(_extBookIndex);
    npc(out)->writeShort(_firstSheetIndex);
    npc(out)->writeShort(_lastSheetIndex);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::ExternSheetRecord_RefSubRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.ExternSheetRecord.RefSubRecord", 57);
    return c;
}

java::lang::Class* poi::hssf::record::ExternSheetRecord_RefSubRecord::getClass0()
{
    return class_();
}

