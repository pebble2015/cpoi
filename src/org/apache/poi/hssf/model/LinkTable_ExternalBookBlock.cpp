// Generated from /POI/java/org/apache/poi/hssf/model/LinkTable.java
#include <org/apache/poi/hssf/model/LinkTable_ExternalBookBlock.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/System.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/List.hpp>
#include <org/apache/poi/hssf/model/LinkTable_CRNBlock.hpp>
#include <org/apache/poi/hssf/model/RecordStream.hpp>
#include <org/apache/poi/hssf/record/CRNCountRecord.hpp>
#include <org/apache/poi/hssf/record/ExternalNameRecord.hpp>
#include <org/apache/poi/hssf/record/Record.hpp>
#include <org/apache/poi/hssf/record/RecordBase.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>
#include <org/apache/poi/hssf/record/SupBookRecord.hpp>
#include <ObjectArray.hpp>
#include <SubArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace io
    {
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
    } // io

    namespace lang
    {
typedef ::SubArray< ::java::lang::CharSequence, ObjectArray > CharSequenceArray;
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::String, ObjectArray, ::java::io::SerializableArray, ComparableArray, CharSequenceArray > StringArray;
    } // lang
} // java

namespace poi
{
    namespace hssf
    {
        namespace model
        {
typedef ::SubArray< ::poi::hssf::model::LinkTable_CRNBlock, ::java::lang::ObjectArray > LinkTable_CRNBlockArray;
        } // model

        namespace record
        {
typedef ::SubArray< ::poi::hssf::record::RecordBase, ::java::lang::ObjectArray > RecordBaseArray;
typedef ::SubArray< ::poi::hssf::record::Record, RecordBaseArray > RecordArray;
typedef ::SubArray< ::poi::hssf::record::StandardRecord, RecordArray > StandardRecordArray;
typedef ::SubArray< ::poi::hssf::record::ExternalNameRecord, StandardRecordArray > ExternalNameRecordArray;
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

poi::hssf::model::LinkTable_ExternalBookBlock::LinkTable_ExternalBookBlock(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::model::LinkTable_ExternalBookBlock::LinkTable_ExternalBookBlock(RecordStream* rs) 
    : LinkTable_ExternalBookBlock(*static_cast< ::default_init_tag* >(0))
{
    ctor(rs);
}

poi::hssf::model::LinkTable_ExternalBookBlock::LinkTable_ExternalBookBlock(::java::lang::String* url, ::java::lang::StringArray* sheetNames) 
    : LinkTable_ExternalBookBlock(*static_cast< ::default_init_tag* >(0))
{
    ctor(url,sheetNames);
}

poi::hssf::model::LinkTable_ExternalBookBlock::LinkTable_ExternalBookBlock(int32_t numberOfSheets) 
    : LinkTable_ExternalBookBlock(*static_cast< ::default_init_tag* >(0))
{
    ctor(numberOfSheets);
}

poi::hssf::model::LinkTable_ExternalBookBlock::LinkTable_ExternalBookBlock() 
    : LinkTable_ExternalBookBlock(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void poi::hssf::model::LinkTable_ExternalBookBlock::ctor(RecordStream* rs)
{
    super::ctor();
    _externalBookRecord = java_cast< ::poi::hssf::record::SupBookRecord* >(npc(rs)->getNext());
    ::java::util::List* temp = new ::java::util::ArrayList();
    while (static_cast< ::java::lang::Object* >(npc(rs)->peekNextClass()) == static_cast< ::java::lang::Object* >(::poi::hssf::record::ExternalNameRecord::class_())) {
        npc(temp)->add(static_cast< ::java::lang::Object* >(npc(rs)->getNext()));
    }
    _externalNameRecords = new ::poi::hssf::record::ExternalNameRecordArray(npc(temp)->size());
    npc(temp)->toArray_(static_cast< ::java::lang::ObjectArray* >(_externalNameRecords));
    npc(temp)->clear();
    while (static_cast< ::java::lang::Object* >(npc(rs)->peekNextClass()) == static_cast< ::java::lang::Object* >(::poi::hssf::record::CRNCountRecord::class_())) {
        npc(temp)->add(static_cast< ::java::lang::Object* >(new LinkTable_CRNBlock(rs)));
    }
    _crnBlocks = new LinkTable_CRNBlockArray(npc(temp)->size());
    npc(temp)->toArray_(static_cast< ::java::lang::ObjectArray* >(_crnBlocks));
}

void poi::hssf::model::LinkTable_ExternalBookBlock::ctor(::java::lang::String* url, ::java::lang::StringArray* sheetNames)
{
    super::ctor();
    _externalBookRecord = ::poi::hssf::record::SupBookRecord::createExternalReferences(url, sheetNames);
    _crnBlocks = new LinkTable_CRNBlockArray(int32_t(0));
}

void poi::hssf::model::LinkTable_ExternalBookBlock::ctor(int32_t numberOfSheets)
{
    super::ctor();
    _externalBookRecord = ::poi::hssf::record::SupBookRecord::createInternalReferences(static_cast< int16_t >(numberOfSheets));
    _externalNameRecords = new ::poi::hssf::record::ExternalNameRecordArray(int32_t(0));
    _crnBlocks = new LinkTable_CRNBlockArray(int32_t(0));
}

void poi::hssf::model::LinkTable_ExternalBookBlock::ctor()
{
    super::ctor();
    _externalBookRecord = ::poi::hssf::record::SupBookRecord::createAddInFunctions();
    _externalNameRecords = new ::poi::hssf::record::ExternalNameRecordArray(int32_t(0));
    _crnBlocks = new LinkTable_CRNBlockArray(int32_t(0));
}

poi::hssf::record::SupBookRecord* poi::hssf::model::LinkTable_ExternalBookBlock::getExternalBookRecord()
{
    return _externalBookRecord;
}

java::lang::String* poi::hssf::model::LinkTable_ExternalBookBlock::getNameText(int32_t definedNameIndex)
{
    return npc((*_externalNameRecords)[definedNameIndex])->getText();
}

int32_t poi::hssf::model::LinkTable_ExternalBookBlock::getNameIx(int32_t definedNameIndex)
{
    return npc((*_externalNameRecords)[definedNameIndex])->getIx();
}

int32_t poi::hssf::model::LinkTable_ExternalBookBlock::getIndexOfName(::java::lang::String* name)
{
    for (auto i = int32_t(0); i < npc(_externalNameRecords)->length; i++) {
        if(npc(npc((*_externalNameRecords)[i])->getText())->equalsIgnoreCase(name)) {
            return i;
        }
    }
    return -int32_t(1);
}

int32_t poi::hssf::model::LinkTable_ExternalBookBlock::getNumberOfNames()
{
    return npc(_externalNameRecords)->length;
}

int32_t poi::hssf::model::LinkTable_ExternalBookBlock::addExternalName(::poi::hssf::record::ExternalNameRecord* rec)
{
    auto tmp = new ::poi::hssf::record::ExternalNameRecordArray(npc(_externalNameRecords)->length + int32_t(1));
    ::java::lang::System::arraycopy(_externalNameRecords, 0, tmp, 0, npc(_externalNameRecords)->length);
    tmp->set(npc(tmp)->length - int32_t(1), rec);
    _externalNameRecords = tmp;
    return npc(_externalNameRecords)->length - int32_t(1);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::model::LinkTable_ExternalBookBlock::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.model.LinkTable.ExternalBookBlock", 53);
    return c;
}

java::lang::Class* poi::hssf::model::LinkTable_ExternalBookBlock::getClass0()
{
    return class_();
}

