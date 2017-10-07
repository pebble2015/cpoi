// Generated from /POI/java/org/apache/poi/hssf/record/TabIdRecord.java
#include <org/apache/poi/hssf/record/TabIdRecord.hpp>

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

org::apache::poi::hssf::record::TabIdRecord::TabIdRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::TabIdRecord::TabIdRecord() 
    : TabIdRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::hssf::record::TabIdRecord::TabIdRecord(RecordInputStream* in) 
    : TabIdRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t org::apache::poi::hssf::record::TabIdRecord::sid;

int16_tArray*& org::apache::poi::hssf::record::TabIdRecord::EMPTY_SHORT_ARRAY()
{
    clinit();
    return EMPTY_SHORT_ARRAY_;
}
int16_tArray* org::apache::poi::hssf::record::TabIdRecord::EMPTY_SHORT_ARRAY_;

void org::apache::poi::hssf::record::TabIdRecord::ctor()
{
    super::ctor();
    _tabids = EMPTY_SHORT_ARRAY_;
}

void org::apache::poi::hssf::record::TabIdRecord::ctor(RecordInputStream* in)
{
    super::ctor();
    auto nTabs = npc(in)->remaining() / int32_t(2);
    _tabids = new ::int16_tArray(nTabs);
    for (auto i = int32_t(0); i < npc(_tabids)->length; i++) {
        (*_tabids)[i] = npc(in)->readShort();
    }
}

void org::apache::poi::hssf::record::TabIdRecord::setTabIdArray_(::int16_tArray* array)
{
    _tabids = npc(array)->clone();
}

java::lang::String* org::apache::poi::hssf::record::TabIdRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[TABID]\n"_j);
    npc(npc(npc(buffer)->append(u"    .elements        = "_j))->append(npc(_tabids)->length))->append(u"\n"_j);
    for (auto i = int32_t(0); i < npc(_tabids)->length; i++) {
        npc(npc(npc(npc(npc(buffer)->append(u"    .element_"_j))->append(i))->append(u" = "_j))->append(static_cast< int32_t >((*_tabids)[i])))->append(u"\n"_j);
    }
    npc(buffer)->append(u"[/TABID]\n"_j);
    return npc(buffer)->toString();
}

void org::apache::poi::hssf::record::TabIdRecord::serialize(::org::apache::poi::util::LittleEndianOutput* out)
{
    auto tabids = _tabids;
    for (auto i = int32_t(0); i < npc(tabids)->length; i++) {
        npc(out)->writeShort((*tabids)[i]);
    }
}

int32_t org::apache::poi::hssf::record::TabIdRecord::getDataSize()
{
    return npc(_tabids)->length * int32_t(2);
}

int16_t org::apache::poi::hssf::record::TabIdRecord::getSid()
{
    return sid;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::TabIdRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.TabIdRecord", 38);
    return c;
}

void org::apache::poi::hssf::record::TabIdRecord::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        EMPTY_SHORT_ARRAY_ = (new ::int16_tArray({}));
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

int32_t org::apache::poi::hssf::record::TabIdRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* org::apache::poi::hssf::record::TabIdRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* org::apache::poi::hssf::record::TabIdRecord::getClass0()
{
    return class_();
}

