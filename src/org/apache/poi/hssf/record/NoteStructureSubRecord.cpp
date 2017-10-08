// Generated from /POI/java/org/apache/poi/hssf/record/NoteStructureSubRecord.java
#include <org/apache/poi/hssf/record/NoteStructureSubRecord.hpp>

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

poi::hssf::record::NoteStructureSubRecord::NoteStructureSubRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::NoteStructureSubRecord::NoteStructureSubRecord() 
    : NoteStructureSubRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::hssf::record::NoteStructureSubRecord::NoteStructureSubRecord(::poi::util::LittleEndianInput* in, int32_t size) 
    : NoteStructureSubRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in,size);
}

constexpr int16_t poi::hssf::record::NoteStructureSubRecord::sid;

constexpr int32_t poi::hssf::record::NoteStructureSubRecord::ENCODED_SIZE;

void poi::hssf::record::NoteStructureSubRecord::ctor()
{
    super::ctor();
    reserved = new ::int8_tArray(ENCODED_SIZE);
}

void poi::hssf::record::NoteStructureSubRecord::ctor(::poi::util::LittleEndianInput* in, int32_t size)
{
    super::ctor();
    if(size != ENCODED_SIZE) {
        throw new ::poi::util::RecordFormatException(::java::lang::StringBuilder().append(u"Unexpected size ("_j)->append(size)
            ->append(u")"_j)->toString());
    }
    auto buf = new ::int8_tArray(size);
    npc(in)->readFully(buf);
    reserved = buf;
}

java::lang::String* poi::hssf::record::NoteStructureSubRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(npc(buffer)->append(u"[ftNts ]"_j))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"  size     = "_j))->append(getDataSize()))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"  reserved = "_j))->append(::poi::util::HexDump::toHex(reserved)))->append(u"\n"_j);
    npc(npc(buffer)->append(u"[/ftNts ]"_j))->append(u"\n"_j);
    return npc(buffer)->toString();
}

void poi::hssf::record::NoteStructureSubRecord::serialize(::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(sid);
    npc(out)->writeShort(npc(reserved)->length);
    npc(out)->write(reserved);
}

int32_t poi::hssf::record::NoteStructureSubRecord::getDataSize()
{
    return npc(reserved)->length;
}

int16_t poi::hssf::record::NoteStructureSubRecord::getSid()
{
    return sid;
}

poi::hssf::record::NoteStructureSubRecord* poi::hssf::record::NoteStructureSubRecord::clone()
{
    auto rec = new NoteStructureSubRecord();
    auto recdata = new ::int8_tArray(npc(reserved)->length);
    ::java::lang::System::arraycopy(reserved, 0, recdata, 0, npc(recdata)->length);
    npc(rec)->reserved = recdata;
    return rec;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::NoteStructureSubRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.NoteStructureSubRecord", 49);
    return c;
}

int8_tArray* poi::hssf::record::NoteStructureSubRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* poi::hssf::record::NoteStructureSubRecord::getClass0()
{
    return class_();
}

