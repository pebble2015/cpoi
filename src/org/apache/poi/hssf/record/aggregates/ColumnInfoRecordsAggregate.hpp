// Generated from /POI/java/org/apache/poi/hssf/record/aggregates/ColumnInfoRecordsAggregate.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/model/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/aggregates/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/aggregates/RecordAggregate.hpp>
#include <java/lang/Cloneable.hpp>

struct default_init_tag;

class poi::hssf::record::aggregates::ColumnInfoRecordsAggregate final
    : public RecordAggregate
    , public ::java::lang::Cloneable
{

public:
    typedef RecordAggregate super;

private:
    ::java::util::List* records {  };
protected:
    void ctor();
    void ctor(::poi::hssf::model::RecordStream* rs);

public:
    ColumnInfoRecordsAggregate* clone() override;
    void insertColumn(::poi::hssf::record::ColumnInfoRecord* col);

private:
    void insertColumn(int32_t idx, ::poi::hssf::record::ColumnInfoRecord* col);

public: /* package */
    int32_t getNumColumns();

public:
    void visitContainedRecords(RecordAggregate_RecordVisitor* rv) override;

private:
    int32_t findStartOfColumnOutlineGroup(int32_t pIdx);
    int32_t findEndOfColumnOutlineGroup(int32_t colInfoIndex);
    ::poi::hssf::record::ColumnInfoRecord* getColInfo(int32_t idx);
    bool isColumnGroupCollapsed(int32_t idx);
    bool isColumnGroupHiddenByParent(int32_t idx);

public:
    void collapseColumn(int32_t columnIndex);

private:
    int32_t setGroupHidden(int32_t pIdx, int32_t level, bool hidden);

public:
    void expandColumn(int32_t columnIndex);

private:
    static ::poi::hssf::record::ColumnInfoRecord* copyColInfo(::poi::hssf::record::ColumnInfoRecord* ci);

public:
    void setColumn(int32_t targetColumnIx, ::java::lang::Short* xfIndex, ::java::lang::Integer* width, ::java::lang::Integer* level, ::java::lang::Boolean* hidden, ::java::lang::Boolean* collapsed);

private:
    static void setColumnInfoFields(::poi::hssf::record::ColumnInfoRecord* ci, ::java::lang::Short* xfStyle, ::java::lang::Integer* width, ::java::lang::Integer* level, ::java::lang::Boolean* hidden, ::java::lang::Boolean* collapsed);
    int32_t findColInfoIdx(int32_t columnIx, int32_t fromColInfoIdx);
    void attemptMergeColInfoRecords(int32_t colInfoIx);
    static bool mergeColInfoRecords(::poi::hssf::record::ColumnInfoRecord* ciA, ::poi::hssf::record::ColumnInfoRecord* ciB);

public:
    void groupColumnRange(int32_t fromColumnIx, int32_t toColumnIx, bool indent);
    ::poi::hssf::record::ColumnInfoRecord* findColumnInfo(int32_t columnIndex);
    int32_t getMaxOutlineLevel();
    int32_t getOutlineLevel(int32_t columnIndex);

    // Generated
    ColumnInfoRecordsAggregate();
    ColumnInfoRecordsAggregate(::poi::hssf::model::RecordStream* rs);
protected:
    ColumnInfoRecordsAggregate(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class ColumnInfoRecordsAggregate_CIRComparator;
};
