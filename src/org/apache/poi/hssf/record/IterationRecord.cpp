// Generated from /POI/java/org/apache/poi/hssf/record/IterationRecord.java
#include <org/apache/poi/hssf/record/IterationRecord.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream.hpp>
#include <org/apache/poi/util/BitField.hpp>
#include <org/apache/poi/util/BitFieldFactory.hpp>
#include <org/apache/poi/util/HexDump.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::hssf::record::IterationRecord::IterationRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::IterationRecord::IterationRecord(bool iterateOn) 
    : IterationRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(iterateOn);
}

poi::hssf::record::IterationRecord::IterationRecord(RecordInputStream* in) 
    : IterationRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t poi::hssf::record::IterationRecord::sid;

poi::util::BitField*& poi::hssf::record::IterationRecord::iterationOn()
{
    clinit();
    return iterationOn_;
}
poi::util::BitField* poi::hssf::record::IterationRecord::iterationOn_;

void poi::hssf::record::IterationRecord::ctor(bool iterateOn)
{
    super::ctor();
    _flags = npc(iterationOn_)->setBoolean(0, iterateOn);
}

void poi::hssf::record::IterationRecord::ctor(RecordInputStream* in)
{
    super::ctor();
    _flags = npc(in)->readShort();
}

void poi::hssf::record::IterationRecord::setIteration(bool iterate)
{
    _flags = npc(iterationOn_)->setBoolean(_flags, iterate);
}

bool poi::hssf::record::IterationRecord::getIteration()
{
    return npc(iterationOn_)->isSet(_flags);
}

java::lang::String* poi::hssf::record::IterationRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[ITERATION]\n"_j);
    npc(npc(npc(buffer)->append(u"    .flags      = "_j))->append(::poi::util::HexDump::shortToHex(_flags)))->append(u"\n"_j);
    npc(buffer)->append(u"[/ITERATION]\n"_j);
    return npc(buffer)->toString();
}

void poi::hssf::record::IterationRecord::serialize(::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(_flags);
}

int32_t poi::hssf::record::IterationRecord::getDataSize()
{
    return 2;
}

int16_t poi::hssf::record::IterationRecord::getSid()
{
    return sid;
}

poi::hssf::record::IterationRecord* poi::hssf::record::IterationRecord::clone()
{
    return new IterationRecord(getIteration());
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::IterationRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.IterationRecord", 42);
    return c;
}

void poi::hssf::record::IterationRecord::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        iterationOn_ = ::poi::util::BitFieldFactory::getInstance(1);
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

int32_t poi::hssf::record::IterationRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* poi::hssf::record::IterationRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* poi::hssf::record::IterationRecord::getClass0()
{
    return class_();
}

