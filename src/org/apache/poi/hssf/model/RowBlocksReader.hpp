// Generated from /POI/java/org/apache/poi/hssf/model/RowBlocksReader.java

#pragma once

#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/model/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/aggregates/fwd-POI.hpp>
#include <java/lang/Object.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace lang
    {
typedef ::SubArray< ::java::lang::Cloneable, ObjectArray > CloneableArray;
    } // lang
} // java

namespace poi
{
    namespace hssf
    {
        namespace record
        {
typedef ::SubArray< ::poi::hssf::record::RecordBase, ::java::lang::ObjectArray > RecordBaseArray;
typedef ::SubArray< ::poi::hssf::record::Record, RecordBaseArray > RecordArray;
typedef ::SubArray< ::poi::hssf::record::StandardRecord, RecordArray > StandardRecordArray;
typedef ::SubArray< ::poi::hssf::record::MergeCellsRecord, StandardRecordArray, ::java::lang::CloneableArray > MergeCellsRecordArray;
        } // record
    } // hssf
} // poi

struct default_init_tag;

class poi::hssf::model::RowBlocksReader final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    ::java::util::List* _plainRecords {  };
    ::poi::hssf::record::aggregates::SharedValueManager* _sfm {  };
    ::poi::hssf::record::MergeCellsRecordArray* _mergedCellsRecords {  };
protected:
    void ctor(RecordStream* rs);

public:
    ::poi::hssf::record::MergeCellsRecordArray* getLooseMergedCells();
    ::poi::hssf::record::aggregates::SharedValueManager* getSharedFormulaManager();
    RecordStream* getPlainRecordStream();

    // Generated
    RowBlocksReader(RecordStream* rs);
protected:
    RowBlocksReader(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
