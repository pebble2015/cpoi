// Generated from /POI/java/org/apache/poi/hssf/model/LinkTable.java

#pragma once

#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/model/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <java/lang/Object.hpp>

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

struct default_init_tag;

class poi::hssf::model::LinkTable_CRNBlock final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    ::poi::hssf::record::CRNCountRecord* _countRecord {  };
    ::poi::hssf::record::CRNRecordArray* _crns {  };
protected:
    void ctor(RecordStream* rs);

public:
    ::poi::hssf::record::CRNRecordArray* getCrns();

    // Generated
    LinkTable_CRNBlock(RecordStream* rs);
protected:
    LinkTable_CRNBlock(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class LinkTable;
    friend class LinkTable_ExternalBookBlock;
};
