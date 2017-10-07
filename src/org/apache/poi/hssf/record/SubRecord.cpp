// Generated from /POI/java/org/apache/poi/hssf/record/SubRecord.java
#include <org/apache/poi/hssf/record/SubRecord.hpp>

#include <java/io/ByteArrayOutputStream.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <org/apache/poi/hssf/record/CommonObjectDataSubRecord.hpp>
#include <org/apache/poi/hssf/record/EmbeddedObjectRefSubRecord.hpp>
#include <org/apache/poi/hssf/record/EndSubRecord.hpp>
#include <org/apache/poi/hssf/record/FtCblsSubRecord.hpp>
#include <org/apache/poi/hssf/record/FtCfSubRecord.hpp>
#include <org/apache/poi/hssf/record/FtPioGrbitSubRecord.hpp>
#include <org/apache/poi/hssf/record/GroupMarkerSubRecord.hpp>
#include <org/apache/poi/hssf/record/LbsDataSubRecord.hpp>
#include <org/apache/poi/hssf/record/NoteStructureSubRecord.hpp>
#include <org/apache/poi/hssf/record/SubRecord_UnknownSubRecord.hpp>
#include <org/apache/poi/util/LittleEndianInput.hpp>
#include <org/apache/poi/util/LittleEndianOutputStream.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::hssf::record::SubRecord::SubRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::SubRecord::SubRecord() 
    : SubRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void org::apache::poi::hssf::record::SubRecord::ctor()
{
    super::ctor();
}

org::apache::poi::hssf::record::SubRecord* org::apache::poi::hssf::record::SubRecord::createSubRecord(::org::apache::poi::util::LittleEndianInput* in, int32_t cmoOt)
{
    clinit();
    auto sid = npc(in)->readUShort();
    auto secondUShort = npc(in)->readUShort();
    switch (sid) {
    case CommonObjectDataSubRecord::sid:
        return new CommonObjectDataSubRecord(in, secondUShort);
    case EmbeddedObjectRefSubRecord::sid:
        return new EmbeddedObjectRefSubRecord(in, secondUShort);
    case GroupMarkerSubRecord::sid:
        return new GroupMarkerSubRecord(in, secondUShort);
    case EndSubRecord::sid:
        return new EndSubRecord(in, secondUShort);
    case NoteStructureSubRecord::sid:
        return new NoteStructureSubRecord(in, secondUShort);
    case LbsDataSubRecord::sid:
        return new LbsDataSubRecord(in, secondUShort, cmoOt);
    case FtCblsSubRecord::sid:
        return new FtCblsSubRecord(in, secondUShort);
    case FtPioGrbitSubRecord::sid:
        return new FtPioGrbitSubRecord(in, secondUShort);
    case FtCfSubRecord::sid:
        return new FtCfSubRecord(in, secondUShort);
    }

    return new SubRecord_UnknownSubRecord(in, sid, secondUShort);
}

int8_tArray* org::apache::poi::hssf::record::SubRecord::serialize()
{
    auto size = getDataSize() + int32_t(4);
    auto baos = new ::java::io::ByteArrayOutputStream(size);
    serialize(new ::org::apache::poi::util::LittleEndianOutputStream(baos));
    if(npc(baos)->size() != size) {
        throw new ::java::lang::RuntimeException(u"write size mismatch"_j);
    }
    return npc(baos)->toByteArray_();
}

bool org::apache::poi::hssf::record::SubRecord::isTerminating()
{
    return false;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::SubRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.SubRecord", 36);
    return c;
}

java::lang::Class* org::apache::poi::hssf::record::SubRecord::getClass0()
{
    return class_();
}

