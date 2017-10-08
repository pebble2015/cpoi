// Generated from /POI/java/org/apache/poi/hssf/record/aggregates/ConditionalFormattingTable.java

#pragma once

#include <fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/model/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/aggregates/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/aggregates/RecordAggregate.hpp>

struct default_init_tag;

class poi::hssf::record::aggregates::ConditionalFormattingTable final
    : public RecordAggregate
{

public:
    typedef RecordAggregate super;

private:
    ::java::util::List* _cfHeaders {  };
protected:
    void ctor();
    void ctor(::poi::hssf::model::RecordStream* rs);

public:
    void visitContainedRecords(RecordAggregate_RecordVisitor* rv) override;
    int32_t add(CFRecordsAggregate* cfAggregate);
    int32_t size();
    CFRecordsAggregate* get(int32_t index);
    void remove(int32_t index);

private:
    void checkIndex(int32_t index);

public:
    void updateFormulasAfterCellShift(::poi::ss::formula::FormulaShifter* shifter, int32_t externSheetIndex);

    // Generated
    ConditionalFormattingTable();
    ConditionalFormattingTable(::poi::hssf::model::RecordStream* rs);
protected:
    ConditionalFormattingTable(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
