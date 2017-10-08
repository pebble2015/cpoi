// Generated from /POI/java/org/apache/poi/hssf/model/RecordOrderer.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/model/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::hssf::model::RecordOrderer final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
protected:
    void ctor();

public:
    static void addNewSheetRecord(::java::util::List* sheetRecords, ::poi::hssf::record::RecordBase* newRecord);

private:
    static int32_t findSheetInsertPos(::java::util::List* records, ::java::lang::Class* recClass);
    static int32_t getWorksheetProtectionBlockInsertPos(::java::util::List* records);
    static bool isProtectionSubsequentRecord(::java::lang::Object* rb);
    static int32_t getPageBreakRecordInsertPos(::java::util::List* records);
    static bool isPageBreakPriorRecord(::java::lang::Object* rb);
    static int32_t findInsertPosForNewCondFormatTable(::java::util::List* records);
    static int32_t findInsertPosForNewMergedRecordTable(::java::util::List* records);
    static int32_t findDataValidationTableInsertPos(::java::util::List* records);
    static bool isDVTPriorRecord(::poi::hssf::record::RecordBase* rb);
    static bool isDVTSubsequentRecord(int16_t sid);
    static int32_t getDimensionsIndex(::java::util::List* records);
    static int32_t getGutsRecordInsertPos(::java::util::List* records);
    static bool isGutsPriorRecord(::poi::hssf::record::RecordBase* rb);

public:
    static bool isEndOfRowBlock(int32_t sid);
    static bool isRowBlockRecord(int32_t sid);

    // Generated

private:
    RecordOrderer();
protected:
    RecordOrderer(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
