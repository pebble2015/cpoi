// Generated from /POI/java/org/apache/poi/hssf/record/UseSelFSRecord.java
#include <org/apache/poi/hssf/record/UseSelFSRecord.hpp>

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

org::apache::poi::hssf::record::UseSelFSRecord::UseSelFSRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::UseSelFSRecord::UseSelFSRecord(int32_t options) 
    : UseSelFSRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(options);
}

org::apache::poi::hssf::record::UseSelFSRecord::UseSelFSRecord(RecordInputStream* in) 
    : UseSelFSRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

org::apache::poi::hssf::record::UseSelFSRecord::UseSelFSRecord(bool b) 
    : UseSelFSRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(b);
}

constexpr int16_t org::apache::poi::hssf::record::UseSelFSRecord::sid;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::UseSelFSRecord::useNaturalLanguageFormulasFlag()
{
    clinit();
    return useNaturalLanguageFormulasFlag_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::UseSelFSRecord::useNaturalLanguageFormulasFlag_;

void org::apache::poi::hssf::record::UseSelFSRecord::ctor(int32_t options)
{
    super::ctor();
    _options = options;
}

void org::apache::poi::hssf::record::UseSelFSRecord::ctor(RecordInputStream* in)
{
    ctor(npc(in)->readUShort());
}

void org::apache::poi::hssf::record::UseSelFSRecord::ctor(bool b)
{
    ctor(int32_t(0));
    _options = npc(useNaturalLanguageFormulasFlag_)->setBoolean(_options, b);
}

java::lang::String* org::apache::poi::hssf::record::UseSelFSRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[USESELFS]\n"_j);
    npc(npc(npc(buffer)->append(u"    .options = "_j))->append(::org::apache::poi::util::HexDump::shortToHex(_options)))->append(u"\n"_j);
    npc(buffer)->append(u"[/USESELFS]\n"_j);
    return npc(buffer)->toString();
}

void org::apache::poi::hssf::record::UseSelFSRecord::serialize(::org::apache::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(_options);
}

int32_t org::apache::poi::hssf::record::UseSelFSRecord::getDataSize()
{
    return 2;
}

int16_t org::apache::poi::hssf::record::UseSelFSRecord::getSid()
{
    return sid;
}

java::lang::Object* org::apache::poi::hssf::record::UseSelFSRecord::clone()
{
    return new UseSelFSRecord(_options);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::UseSelFSRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.UseSelFSRecord", 41);
    return c;
}

void org::apache::poi::hssf::record::UseSelFSRecord::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        useNaturalLanguageFormulasFlag_ = ::org::apache::poi::util::BitFieldFactory::getInstance(1);
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

int32_t org::apache::poi::hssf::record::UseSelFSRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* org::apache::poi::hssf::record::UseSelFSRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* org::apache::poi::hssf::record::UseSelFSRecord::getClass0()
{
    return class_();
}

