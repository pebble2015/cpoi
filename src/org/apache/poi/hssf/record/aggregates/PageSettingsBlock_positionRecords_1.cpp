// Generated from /POI/java/org/apache/poi/hssf/record/aggregates/PageSettingsBlock.java
#include <org/apache/poi/hssf/record/aggregates/PageSettingsBlock_positionRecords_1.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/List.hpp>
#include <java/util/Map.hpp>
#include <org/apache/poi/hssf/record/HeaderFooterRecord.hpp>
#include <org/apache/poi/hssf/record/Record.hpp>
#include <org/apache/poi/hssf/record/UserSViewBegin.hpp>
#include <org/apache/poi/hssf/record/aggregates/CustomViewSettingsRecordAggregate.hpp>
#include <org/apache/poi/hssf/record/aggregates/PageSettingsBlock.hpp>
#include <org/apache/poi/util/HexDump.hpp>

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

org::apache::poi::hssf::record::aggregates::PageSettingsBlock_positionRecords_1::PageSettingsBlock_positionRecords_1(PageSettingsBlock *PageSettingsBlock_this, ::java::util::Map* hfGuidMap, CustomViewSettingsRecordAggregate* cv)
    : super(*static_cast< ::default_init_tag* >(0))
    , PageSettingsBlock_this(PageSettingsBlock_this)
    , hfGuidMap(hfGuidMap)
    , cv(cv)
{
    clinit();
    ctor();
}

void org::apache::poi::hssf::record::aggregates::PageSettingsBlock_positionRecords_1::visitRecord(::org::apache::poi::hssf::record::Record* r)
{
    if(npc(r)->getSid() == ::org::apache::poi::hssf::record::UserSViewBegin::sid) {
        auto guid = ::org::apache::poi::util::HexDump::toHex(npc((java_cast< ::org::apache::poi::hssf::record::UserSViewBegin* >(r)))->getGuid());
        auto hf = java_cast< ::org::apache::poi::hssf::record::HeaderFooterRecord* >(npc(hfGuidMap)->get(guid));
        if(hf != nullptr) {
            npc(cv)->append(hf);
            npc(PageSettingsBlock_this->_sviewHeaderFooters)->remove(static_cast< ::java::lang::Object* >(hf));
        }
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::aggregates::PageSettingsBlock_positionRecords_1::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

java::lang::Class* org::apache::poi::hssf::record::aggregates::PageSettingsBlock_positionRecords_1::getClass0()
{
    return class_();
}

