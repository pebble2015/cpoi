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

namespace org
{
    namespace apache
    {
        namespace poi
        {
            namespace hssf
            {
                namespace record
                {
typedef ::SubArray< ::org::apache::poi::hssf::record::RecordBase, ::java::lang::ObjectArray > RecordBaseArray;
typedef ::SubArray< ::org::apache::poi::hssf::record::Record, RecordBaseArray > RecordArray;
typedef ::SubArray< ::org::apache::poi::hssf::record::StandardRecord, RecordArray > StandardRecordArray;
typedef ::SubArray< ::org::apache::poi::hssf::record::MergeCellsRecord, StandardRecordArray, ::java::lang::CloneableArray > MergeCellsRecordArray;
                } // record
            } // hssf
        } // poi
    } // apache
} // org

struct default_init_tag;

class org::apache::poi::hssf::model::RowBlocksReader final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    ::java::util::List* _plainRecords {  };
    ::org::apache::poi::hssf::record::aggregates::SharedValueManager* _sfm {  };
    ::org::apache::poi::hssf::record::MergeCellsRecordArray* _mergedCellsRecords {  };
protected:
    void ctor(RecordStream* rs);

public:
    ::org::apache::poi::hssf::record::MergeCellsRecordArray* getLooseMergedCells();
    ::org::apache::poi::hssf::record::aggregates::SharedValueManager* getSharedFormulaManager();
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
