// Generated from /POI/java/org/apache/poi/hssf/model/LinkTable.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/model/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <java/lang/Object.hpp>

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

struct default_init_tag;

class poi::hssf::model::LinkTable_ExternalBookBlock final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    ::poi::hssf::record::SupBookRecord* _externalBookRecord {  };
    ::poi::hssf::record::ExternalNameRecordArray* _externalNameRecords {  };
    LinkTable_CRNBlockArray* _crnBlocks {  };
protected:
    void ctor(RecordStream* rs);
    void ctor(::java::lang::String* url, ::java::lang::StringArray* sheetNames);
    void ctor(int32_t numberOfSheets);
    void ctor();

public:
    ::poi::hssf::record::SupBookRecord* getExternalBookRecord();
    ::java::lang::String* getNameText(int32_t definedNameIndex);
    int32_t getNameIx(int32_t definedNameIndex);
    int32_t getIndexOfName(::java::lang::String* name);
    int32_t getNumberOfNames();
    int32_t addExternalName(::poi::hssf::record::ExternalNameRecord* rec);

    // Generated
    LinkTable_ExternalBookBlock(RecordStream* rs);
    LinkTable_ExternalBookBlock(::java::lang::String* url, ::java::lang::StringArray* sheetNames);
    LinkTable_ExternalBookBlock(int32_t numberOfSheets);
    LinkTable_ExternalBookBlock();
protected:
    LinkTable_ExternalBookBlock(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class LinkTable;
    friend class LinkTable_CRNBlock;
};
