// Generated from /POI/java/org/apache/poi/hssf/record/ExternSheetRecord.java
#include <org/apache/poi/hssf/record/ExternSheetRecord.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/List.hpp>
#include <org/apache/poi/hssf/record/ExternSheetRecord_RefSubRecord.hpp>
#include <org/apache/poi/hssf/record/Record.hpp>
#include <org/apache/poi/hssf/record/RecordBase.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>
#include <Array.hpp>
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
typedef ::SubArray< ::poi::hssf::record::ExternSheetRecord, StandardRecordArray > ExternSheetRecordArray;
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

poi::hssf::record::ExternSheetRecord::ExternSheetRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::ExternSheetRecord::ExternSheetRecord() 
    : ExternSheetRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::hssf::record::ExternSheetRecord::ExternSheetRecord(RecordInputStream* in) 
    : ExternSheetRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t poi::hssf::record::ExternSheetRecord::sid;

void poi::hssf::record::ExternSheetRecord::ctor()
{
    super::ctor();
    _list = new ::java::util::ArrayList();
}

void poi::hssf::record::ExternSheetRecord::ctor(RecordInputStream* in)
{
    super::ctor();
    _list = new ::java::util::ArrayList();
    int32_t nItems = npc(in)->readShort();
    for (auto i = int32_t(0); i < nItems; ++i) {
        auto rec = new ExternSheetRecord_RefSubRecord(in);
        npc(_list)->add(static_cast< ::java::lang::Object* >(rec));
    }
}

int32_t poi::hssf::record::ExternSheetRecord::getNumOfRefs()
{
    return npc(_list)->size();
}

void poi::hssf::record::ExternSheetRecord::addREFRecord(ExternSheetRecord_RefSubRecord* rec)
{
    npc(_list)->add(static_cast< ::java::lang::Object* >(rec));
}

int32_t poi::hssf::record::ExternSheetRecord::getNumOfREFRecords()
{
    return npc(_list)->size();
}

java::lang::String* poi::hssf::record::ExternSheetRecord::toString()
{
    auto sb = new ::java::lang::StringBuffer();
    auto nItems = npc(_list)->size();
    npc(sb)->append(u"[EXTERNSHEET]\n"_j);
    npc(npc(npc(sb)->append(u"   numOfRefs     = "_j))->append(nItems))->append(u"\n"_j);
    for (auto i = int32_t(0); i < nItems; i++) {
        npc(npc(npc(sb)->append(u"refrec         #"_j))->append(i))->append(u": "_j);
        npc(sb)->append(static_cast< ::java::lang::Object* >(getRef(i)));
        npc(sb)->append(u'\u000a');
    }
    npc(sb)->append(u"[/EXTERNSHEET]\n"_j);
    return npc(sb)->toString();
}

int32_t poi::hssf::record::ExternSheetRecord::getDataSize()
{
    return int32_t(2) + npc(_list)->size() * ExternSheetRecord_RefSubRecord::ENCODED_SIZE;
}

void poi::hssf::record::ExternSheetRecord::serialize(::poi::util::LittleEndianOutput* out)
{
    auto nItems = npc(_list)->size();
    npc(out)->writeShort(nItems);
    for (auto i = int32_t(0); i < nItems; i++) {
        npc(getRef(i))->serialize(out);
    }
}

poi::hssf::record::ExternSheetRecord_RefSubRecord* poi::hssf::record::ExternSheetRecord::getRef(int32_t i)
{
    return java_cast< ExternSheetRecord_RefSubRecord* >(npc(_list)->get(i));
}

void poi::hssf::record::ExternSheetRecord::removeSheet(int32_t sheetIdx)
{
    auto nItems = npc(_list)->size();
    for (auto i = int32_t(0); i < nItems; i++) {
        auto refSubRecord = java_cast< ExternSheetRecord_RefSubRecord* >(npc(_list)->get(i));
        if(npc(refSubRecord)->getFirstSheetIndex() == sheetIdx && npc(refSubRecord)->getLastSheetIndex() == sheetIdx) {
            npc(_list)->set(i, new ExternSheetRecord_RefSubRecord(npc(refSubRecord)->getExtBookIndex(), -int32_t(1), -int32_t(1)));
        } else if(npc(refSubRecord)->getFirstSheetIndex() > sheetIdx && npc(refSubRecord)->getLastSheetIndex() > sheetIdx) {
            npc(_list)->set(i, new ExternSheetRecord_RefSubRecord(npc(refSubRecord)->getExtBookIndex(), npc(refSubRecord)->getFirstSheetIndex() - int32_t(1), npc(refSubRecord)->getLastSheetIndex() - int32_t(1)));
        }
    }
}

int16_t poi::hssf::record::ExternSheetRecord::getSid()
{
    return sid;
}

int32_t poi::hssf::record::ExternSheetRecord::getExtbookIndexFromRefIndex(int32_t refIndex)
{
    auto refRec = getRef(refIndex);
    return npc(refRec)->getExtBookIndex();
}

int32_t poi::hssf::record::ExternSheetRecord::findRefIndexFromExtBookIndex(int32_t extBookIndex)
{
    auto nItems = npc(_list)->size();
    for (auto i = int32_t(0); i < nItems; i++) {
        if(npc(getRef(i))->getExtBookIndex() == extBookIndex) {
            return i;
        }
    }
    return -int32_t(1);
}

int32_t poi::hssf::record::ExternSheetRecord::getFirstSheetIndexFromRefIndex(int32_t extRefIndex)
{
    return npc(getRef(extRefIndex))->getFirstSheetIndex();
}

int32_t poi::hssf::record::ExternSheetRecord::getLastSheetIndexFromRefIndex(int32_t extRefIndex)
{
    return npc(getRef(extRefIndex))->getLastSheetIndex();
}

int32_t poi::hssf::record::ExternSheetRecord::addRef(int32_t extBookIndex, int32_t firstSheetIndex, int32_t lastSheetIndex)
{
    npc(_list)->add(static_cast< ::java::lang::Object* >(new ExternSheetRecord_RefSubRecord(extBookIndex, firstSheetIndex, lastSheetIndex)));
    return npc(_list)->size() - int32_t(1);
}

int32_t poi::hssf::record::ExternSheetRecord::getRefIxForSheet(int32_t externalBookIndex, int32_t firstSheetIndex, int32_t lastSheetIndex)
{
    auto nItems = npc(_list)->size();
    for (auto i = int32_t(0); i < nItems; i++) {
        auto ref = getRef(i);
        if(npc(ref)->getExtBookIndex() != externalBookIndex) {
            continue;
        }
        if(npc(ref)->getFirstSheetIndex() == firstSheetIndex && npc(ref)->getLastSheetIndex() == lastSheetIndex) {
            return i;
        }
    }
    return -int32_t(1);
}

poi::hssf::record::ExternSheetRecord* poi::hssf::record::ExternSheetRecord::combine(ExternSheetRecordArray* esrs)
{
    clinit();
    auto result = new ExternSheetRecord();
    for(auto esr : *npc(esrs)) {
        auto nRefs = npc(esr)->getNumOfREFRecords();
        for (auto j = int32_t(0); j < nRefs; j++) {
            npc(result)->addREFRecord(npc(esr)->getRef(j));
        }
    }
    return result;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::ExternSheetRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.ExternSheetRecord", 44);
    return c;
}

int32_t poi::hssf::record::ExternSheetRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* poi::hssf::record::ExternSheetRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* poi::hssf::record::ExternSheetRecord::getClass0()
{
    return class_();
}

