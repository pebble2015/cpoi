// Generated from /POI/java/org/apache/poi/hssf/record/RefreshAllRecord.java
#include <org/apache/poi/hssf/record/RefreshAllRecord.hpp>

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

poi::hssf::record::RefreshAllRecord::RefreshAllRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::RefreshAllRecord::RefreshAllRecord(int32_t options) 
    : RefreshAllRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(options);
}

poi::hssf::record::RefreshAllRecord::RefreshAllRecord(RecordInputStream* in) 
    : RefreshAllRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

poi::hssf::record::RefreshAllRecord::RefreshAllRecord(bool refreshAll) 
    : RefreshAllRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(refreshAll);
}

constexpr int16_t poi::hssf::record::RefreshAllRecord::sid;

poi::util::BitField*& poi::hssf::record::RefreshAllRecord::refreshFlag()
{
    clinit();
    return refreshFlag_;
}
poi::util::BitField* poi::hssf::record::RefreshAllRecord::refreshFlag_;

void poi::hssf::record::RefreshAllRecord::ctor(int32_t options)
{
    super::ctor();
    _options = options;
}

void poi::hssf::record::RefreshAllRecord::ctor(RecordInputStream* in)
{
    ctor(npc(in)->readUShort());
}

void poi::hssf::record::RefreshAllRecord::ctor(bool refreshAll)
{
    ctor(int32_t(0));
    setRefreshAll(refreshAll);
}

void poi::hssf::record::RefreshAllRecord::setRefreshAll(bool refreshAll)
{
    _options = npc(refreshFlag_)->setBoolean(_options, refreshAll);
}

bool poi::hssf::record::RefreshAllRecord::getRefreshAll()
{
    return npc(refreshFlag_)->isSet(_options);
}

java::lang::String* poi::hssf::record::RefreshAllRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[REFRESHALL]\n"_j);
    npc(npc(npc(buffer)->append(u"    .options      = "_j))->append(::poi::util::HexDump::shortToHex(_options)))->append(u"\n"_j);
    npc(buffer)->append(u"[/REFRESHALL]\n"_j);
    return npc(buffer)->toString();
}

void poi::hssf::record::RefreshAllRecord::serialize(::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(_options);
}

int32_t poi::hssf::record::RefreshAllRecord::getDataSize()
{
    return 2;
}

int16_t poi::hssf::record::RefreshAllRecord::getSid()
{
    return sid;
}

java::lang::Object* poi::hssf::record::RefreshAllRecord::clone()
{
    return new RefreshAllRecord(_options);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::RefreshAllRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.RefreshAllRecord", 43);
    return c;
}

void poi::hssf::record::RefreshAllRecord::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        refreshFlag_ = ::poi::util::BitFieldFactory::getInstance(1);
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

int32_t poi::hssf::record::RefreshAllRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* poi::hssf::record::RefreshAllRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* poi::hssf::record::RefreshAllRecord::getClass0()
{
    return class_();
}

