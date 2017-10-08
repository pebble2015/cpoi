// Generated from /POI/java/org/apache/poi/hssf/model/LinkTable.java
#include <org/apache/poi/hssf/model/LinkTable_CRNBlock.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/hssf/model/RecordStream.hpp>
#include <org/apache/poi/hssf/record/CRNCountRecord.hpp>
#include <org/apache/poi/hssf/record/CRNRecord.hpp>
#include <org/apache/poi/hssf/record/Record.hpp>
#include <org/apache/poi/hssf/record/RecordBase.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>
#include <ObjectArray.hpp>
#include <SubArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace poi
{
    namespace hssf
    {
        namespace record
        {
typedef ::SubArray< ::poi::hssf::record::RecordBase, ::java::lang::ObjectArray > RecordBaseArray;
typedef ::SubArray< ::poi::hssf::record::Record, RecordBaseArray > RecordArray;
typedef ::SubArray< ::poi::hssf::record::StandardRecord, RecordArray > StandardRecordArray;
typedef ::SubArray< ::poi::hssf::record::CRNRecord, StandardRecordArray > CRNRecordArray;
        } // record
    } // hssf
} // poi

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

poi::hssf::model::LinkTable_CRNBlock::LinkTable_CRNBlock(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::model::LinkTable_CRNBlock::LinkTable_CRNBlock(RecordStream* rs) 
    : LinkTable_CRNBlock(*static_cast< ::default_init_tag* >(0))
{
    ctor(rs);
}

void poi::hssf::model::LinkTable_CRNBlock::ctor(RecordStream* rs)
{
    super::ctor();
    _countRecord = java_cast< ::poi::hssf::record::CRNCountRecord* >(npc(rs)->getNext());
    auto nCRNs = npc(_countRecord)->getNumberOfCRNs();
    auto crns = new ::poi::hssf::record::CRNRecordArray(nCRNs);
    for (auto i = int32_t(0); i < npc(crns)->length; i++) {
        crns->set(i, java_cast< ::poi::hssf::record::CRNRecord* >(npc(rs)->getNext()));
    }
    _crns = crns;
}

poi::hssf::record::CRNRecordArray* poi::hssf::model::LinkTable_CRNBlock::getCrns()
{
    return npc(_crns)->clone();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::model::LinkTable_CRNBlock::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.model.LinkTable.CRNBlock", 44);
    return c;
}

java::lang::Class* poi::hssf::model::LinkTable_CRNBlock::getClass0()
{
    return class_();
}

