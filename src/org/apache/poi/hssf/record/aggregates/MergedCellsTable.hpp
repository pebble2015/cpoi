// Generated from /POI/java/org/apache/poi/hssf/record/aggregates/MergedCellsTable.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/model/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/aggregates/fwd-POI.hpp>
#include <org/apache/poi/ss/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/aggregates/RecordAggregate.hpp>

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

class org::apache::poi::hssf::record::aggregates::MergedCellsTable final
    : public RecordAggregate
{

public:
    typedef RecordAggregate super;

private:
    static int32_t MAX_MERGED_REGIONS_;
    ::java::util::List* _mergedRegions {  };
protected:
    void ctor();

public:
    void read(::org::apache::poi::hssf::model::RecordStream* rs);
    int32_t getRecordSize() override;
    void visitContainedRecords(RecordAggregate_RecordVisitor* rv) override;
    void addRecords(::org::apache::poi::hssf::record::MergeCellsRecordArray* mcrs);

private:
    void addMergeCellsRecord(::org::apache::poi::hssf::record::MergeCellsRecord* mcr);

public:
    ::org::apache::poi::ss::util::CellRangeAddress* get(int32_t index);
    void remove(int32_t index);

private:
    void checkIndex(int32_t index);

public:
    void addArea(int32_t rowFrom, int32_t colFrom, int32_t rowTo, int32_t colTo);
    int32_t getNumberOfMergedRegions();

    // Generated
    MergedCellsTable();
protected:
    MergedCellsTable(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static int32_t& MAX_MERGED_REGIONS();
    virtual ::java::lang::Class* getClass0();
};
