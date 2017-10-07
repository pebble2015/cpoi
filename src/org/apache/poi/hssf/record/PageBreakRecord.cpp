// Generated from /POI/java/org/apache/poi/hssf/record/PageBreakRecord.java
#include <org/apache/poi/hssf/record/PageBreakRecord.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/HashMap.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/List.hpp>
#include <java/util/Map.hpp>
#include <org/apache/poi/hssf/record/HorizontalPageBreakRecord.hpp>
#include <org/apache/poi/hssf/record/PageBreakRecord_Break.hpp>
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

org::apache::poi::hssf::record::PageBreakRecord::PageBreakRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::PageBreakRecord::PageBreakRecord() 
    : PageBreakRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::hssf::record::PageBreakRecord::PageBreakRecord(RecordInputStream* in) 
    : PageBreakRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

int32_tArray*& org::apache::poi::hssf::record::PageBreakRecord::EMPTY_INT_ARRAY()
{
    clinit();
    return EMPTY_INT_ARRAY_;
}
int32_tArray* org::apache::poi::hssf::record::PageBreakRecord::EMPTY_INT_ARRAY_;

void org::apache::poi::hssf::record::PageBreakRecord::ctor()
{
    super::ctor();
    _breaks = new ::java::util::ArrayList();
    _breakMap = new ::java::util::HashMap();
}

void org::apache::poi::hssf::record::PageBreakRecord::ctor(RecordInputStream* in)
{
    super::ctor();
    int32_t nBreaks = npc(in)->readShort();
    _breaks = new ::java::util::ArrayList(nBreaks + int32_t(2));
    _breakMap = new ::java::util::HashMap();
    for (auto k = int32_t(0); k < nBreaks; k++) {
        auto br = new PageBreakRecord_Break(in);
        npc(_breaks)->add(static_cast< ::java::lang::Object* >(br));
        npc(_breakMap)->put(::java::lang::Integer::valueOf(npc(br)->main), br);
    }
}

bool org::apache::poi::hssf::record::PageBreakRecord::isEmpty()
{
    return npc(_breaks)->isEmpty();
}

int32_t org::apache::poi::hssf::record::PageBreakRecord::getDataSize()
{
    return int32_t(2) + npc(_breaks)->size() * PageBreakRecord_Break::ENCODED_SIZE;
}

void org::apache::poi::hssf::record::PageBreakRecord::serialize(::org::apache::poi::util::LittleEndianOutput* out)
{
    auto nBreaks = npc(_breaks)->size();
    npc(out)->writeShort(nBreaks);
    for (auto i = int32_t(0); i < nBreaks; i++) {
        npc(java_cast< PageBreakRecord_Break* >(npc(_breaks)->get(i)))->serialize(out);
    }
}

int32_t org::apache::poi::hssf::record::PageBreakRecord::getNumBreaks()
{
    return npc(_breaks)->size();
}

java::util::Iterator* org::apache::poi::hssf::record::PageBreakRecord::getBreaksIterator()
{
    return npc(_breaks)->iterator();
}

java::lang::String* org::apache::poi::hssf::record::PageBreakRecord::toString()
{
    auto retval = new ::java::lang::StringBuffer();
    ::java::lang::String* label;
    ::java::lang::String* mainLabel;
    ::java::lang::String* subLabel;
    if(getSid() == HorizontalPageBreakRecord::sid) {
        label = u"HORIZONTALPAGEBREAK"_j;
        mainLabel = u"row"_j;
        subLabel = u"col"_j;
    } else {
        label = u"VERTICALPAGEBREAK"_j;
        mainLabel = u"column"_j;
        subLabel = u"row"_j;
    }
    npc(npc(retval)->append(::java::lang::StringBuilder().append(u"["_j)->append(label)
        ->append(u"]"_j)->toString()))->append(u"\n"_j);
    npc(npc(npc(retval)->append(u"     .sid        ="_j))->append(static_cast< int32_t >(getSid())))->append(u"\n"_j);
    npc(npc(npc(retval)->append(u"     .numbreaks ="_j))->append(getNumBreaks()))->append(u"\n"_j);
    auto iterator = getBreaksIterator();
    for (auto k = int32_t(0); k < getNumBreaks(); k++) {
        auto region = java_cast< PageBreakRecord_Break* >(npc(iterator)->next());
        npc(npc(npc(npc(npc(retval)->append(u"     ."_j))->append(mainLabel))->append(u" (zero-based) ="_j))->append(npc(region)->main))->append(u"\n"_j);
        npc(npc(npc(npc(npc(retval)->append(u"     ."_j))->append(subLabel))->append(u"From    ="_j))->append(npc(region)->subFrom))->append(u"\n"_j);
        npc(npc(npc(npc(npc(retval)->append(u"     ."_j))->append(subLabel))->append(u"To      ="_j))->append(npc(region)->subTo))->append(u"\n"_j);
    }
    npc(npc(retval)->append(::java::lang::StringBuilder().append(u"["_j)->append(label)
        ->append(u"]"_j)->toString()))->append(u"\n"_j);
    return npc(retval)->toString();
}

void org::apache::poi::hssf::record::PageBreakRecord::addBreak(int32_t main, int32_t subFrom, int32_t subTo)
{
    auto key = ::java::lang::Integer::valueOf(main);
    auto region = java_cast< PageBreakRecord_Break* >(npc(_breakMap)->get(key));
    if(region == nullptr) {
        region = new PageBreakRecord_Break(main, subFrom, subTo);
        npc(_breakMap)->put(key, region);
        npc(_breaks)->add(static_cast< ::java::lang::Object* >(region));
    } else {
        npc(region)->main = main;
        npc(region)->subFrom = subFrom;
        npc(region)->subTo = subTo;
    }
}

void org::apache::poi::hssf::record::PageBreakRecord::removeBreak(int32_t main)
{
    auto rowKey = ::java::lang::Integer::valueOf(main);
    auto region = java_cast< PageBreakRecord_Break* >(npc(_breakMap)->get(rowKey));
    npc(_breaks)->remove(static_cast< ::java::lang::Object* >(region));
    npc(_breakMap)->remove(rowKey);
}

org::apache::poi::hssf::record::PageBreakRecord_Break* org::apache::poi::hssf::record::PageBreakRecord::getBreak(int32_t main)
{
    auto rowKey = ::java::lang::Integer::valueOf(main);
    return java_cast< PageBreakRecord_Break* >(npc(_breakMap)->get(rowKey));
}

int32_tArray* org::apache::poi::hssf::record::PageBreakRecord::getBreaks()
{
    auto count = getNumBreaks();
    if(count < 1) {
        return EMPTY_INT_ARRAY_;
    }
    auto result = new ::int32_tArray(count);
    for (auto i = int32_t(0); i < count; i++) {
        auto breakItem = java_cast< PageBreakRecord_Break* >(npc(_breaks)->get(i));
        (*result)[i] = npc(breakItem)->main;
    }
    return result;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::PageBreakRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.PageBreakRecord", 42);
    return c;
}

void org::apache::poi::hssf::record::PageBreakRecord::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        EMPTY_INT_ARRAY_ = (new ::int32_tArray({}));
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

int32_t org::apache::poi::hssf::record::PageBreakRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* org::apache::poi::hssf::record::PageBreakRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* org::apache::poi::hssf::record::PageBreakRecord::getClass0()
{
    return class_();
}

