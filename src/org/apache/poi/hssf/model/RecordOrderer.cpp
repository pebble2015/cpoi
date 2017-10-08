// Generated from /POI/java/org/apache/poi/hssf/model/RecordOrderer.java
#include <org/apache/poi/hssf/model/RecordOrderer.hpp>

#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/IllegalStateException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/util/List.hpp>
#include <org/apache/poi/hssf/record/ArrayRecord.hpp>
#include <org/apache/poi/hssf/record/BOFRecord.hpp>
#include <org/apache/poi/hssf/record/BlankRecord.hpp>
#include <org/apache/poi/hssf/record/BoolErrRecord.hpp>
#include <org/apache/poi/hssf/record/CalcCountRecord.hpp>
#include <org/apache/poi/hssf/record/CalcModeRecord.hpp>
#include <org/apache/poi/hssf/record/ColumnInfoRecord.hpp>
#include <org/apache/poi/hssf/record/DVALRecord.hpp>
#include <org/apache/poi/hssf/record/DateWindow1904Record.hpp>
#include <org/apache/poi/hssf/record/DefaultColWidthRecord.hpp>
#include <org/apache/poi/hssf/record/DefaultRowHeightRecord.hpp>
#include <org/apache/poi/hssf/record/DeltaRecord.hpp>
#include <org/apache/poi/hssf/record/DimensionsRecord.hpp>
#include <org/apache/poi/hssf/record/DrawingRecord.hpp>
#include <org/apache/poi/hssf/record/DrawingSelectionRecord.hpp>
#include <org/apache/poi/hssf/record/EOFRecord.hpp>
#include <org/apache/poi/hssf/record/FeatRecord.hpp>
#include <org/apache/poi/hssf/record/FormulaRecord.hpp>
#include <org/apache/poi/hssf/record/GridsetRecord.hpp>
#include <org/apache/poi/hssf/record/GutsRecord.hpp>
#include <org/apache/poi/hssf/record/HyperlinkRecord.hpp>
#include <org/apache/poi/hssf/record/IndexRecord.hpp>
#include <org/apache/poi/hssf/record/IterationRecord.hpp>
#include <org/apache/poi/hssf/record/LabelRecord.hpp>
#include <org/apache/poi/hssf/record/LabelSSTRecord.hpp>
#include <org/apache/poi/hssf/record/NumberRecord.hpp>
#include <org/apache/poi/hssf/record/ObjRecord.hpp>
#include <org/apache/poi/hssf/record/PaneRecord.hpp>
#include <org/apache/poi/hssf/record/PrecisionRecord.hpp>
#include <org/apache/poi/hssf/record/PrintGridlinesRecord.hpp>
#include <org/apache/poi/hssf/record/PrintHeadersRecord.hpp>
#include <org/apache/poi/hssf/record/RKRecord.hpp>
#include <org/apache/poi/hssf/record/Record.hpp>
#include <org/apache/poi/hssf/record/RecordBase.hpp>
#include <org/apache/poi/hssf/record/RefModeRecord.hpp>
#include <org/apache/poi/hssf/record/RowRecord.hpp>
#include <org/apache/poi/hssf/record/SCLRecord.hpp>
#include <org/apache/poi/hssf/record/SaveRecalcRecord.hpp>
#include <org/apache/poi/hssf/record/SelectionRecord.hpp>
#include <org/apache/poi/hssf/record/SharedFormulaRecord.hpp>
#include <org/apache/poi/hssf/record/TableRecord.hpp>
#include <org/apache/poi/hssf/record/TextObjectRecord.hpp>
#include <org/apache/poi/hssf/record/UncalcedRecord.hpp>
#include <org/apache/poi/hssf/record/UnknownRecord.hpp>
#include <org/apache/poi/hssf/record/WindowOneRecord.hpp>
#include <org/apache/poi/hssf/record/WindowTwoRecord.hpp>
#include <org/apache/poi/hssf/record/aggregates/ColumnInfoRecordsAggregate.hpp>
#include <org/apache/poi/hssf/record/aggregates/ConditionalFormattingTable.hpp>
#include <org/apache/poi/hssf/record/aggregates/DataValidityTable.hpp>
#include <org/apache/poi/hssf/record/aggregates/MergedCellsTable.hpp>
#include <org/apache/poi/hssf/record/aggregates/PageSettingsBlock.hpp>
#include <org/apache/poi/hssf/record/aggregates/WorksheetProtectionBlock.hpp>
#include <org/apache/poi/hssf/record/pivottable/ViewDefinitionRecord.hpp>

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

poi::hssf::model::RecordOrderer::RecordOrderer(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::model::RecordOrderer::RecordOrderer() 
    : RecordOrderer(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void poi::hssf::model::RecordOrderer::ctor()
{
    super::ctor();
}

void poi::hssf::model::RecordOrderer::addNewSheetRecord(::java::util::List* sheetRecords, ::poi::hssf::record::RecordBase* newRecord)
{
    clinit();
    auto index = findSheetInsertPos(sheetRecords, npc(newRecord)->getClass());
    npc(sheetRecords)->add(index, newRecord);
}

int32_t poi::hssf::model::RecordOrderer::findSheetInsertPos(::java::util::List* records, ::java::lang::Class* recClass)
{
    clinit();
    if(static_cast< ::java::lang::Object* >(recClass) == static_cast< ::java::lang::Object* >(::poi::hssf::record::aggregates::DataValidityTable::class_())) {
        return findDataValidationTableInsertPos(records);
    }
    if(static_cast< ::java::lang::Object* >(recClass) == static_cast< ::java::lang::Object* >(::poi::hssf::record::aggregates::MergedCellsTable::class_())) {
        return findInsertPosForNewMergedRecordTable(records);
    }
    if(static_cast< ::java::lang::Object* >(recClass) == static_cast< ::java::lang::Object* >(::poi::hssf::record::aggregates::ConditionalFormattingTable::class_())) {
        return findInsertPosForNewCondFormatTable(records);
    }
    if(static_cast< ::java::lang::Object* >(recClass) == static_cast< ::java::lang::Object* >(::poi::hssf::record::GutsRecord::class_())) {
        return getGutsRecordInsertPos(records);
    }
    if(static_cast< ::java::lang::Object* >(recClass) == static_cast< ::java::lang::Object* >(::poi::hssf::record::aggregates::PageSettingsBlock::class_())) {
        return getPageBreakRecordInsertPos(records);
    }
    if(static_cast< ::java::lang::Object* >(recClass) == static_cast< ::java::lang::Object* >(::poi::hssf::record::aggregates::WorksheetProtectionBlock::class_())) {
        return getWorksheetProtectionBlockInsertPos(records);
    }
    throw new ::java::lang::RuntimeException(::java::lang::StringBuilder().append(u"Unexpected record class ("_j)->append(npc(recClass)->getName())
        ->append(u")"_j)->toString());
}

int32_t poi::hssf::model::RecordOrderer::getWorksheetProtectionBlockInsertPos(::java::util::List* records)
{
    clinit();
    auto i = getDimensionsIndex(records);
    while (i > 0) {
        i--;
        ::java::lang::Object* rb = java_cast< ::poi::hssf::record::RecordBase* >(npc(records)->get(i));
        if(!isProtectionSubsequentRecord(rb)) {
            return i + int32_t(1);
        }
    }
    throw new ::java::lang::IllegalStateException(u"did not find insert pos for protection block"_j);
}

bool poi::hssf::model::RecordOrderer::isProtectionSubsequentRecord(::java::lang::Object* rb)
{
    clinit();
    if(dynamic_cast< ::poi::hssf::record::aggregates::ColumnInfoRecordsAggregate* >(rb) != nullptr) {
        return true;
    }
    if(dynamic_cast< ::poi::hssf::record::Record* >(rb) != nullptr) {
        auto record = java_cast< ::poi::hssf::record::Record* >(rb);
        switch (npc(record)->getSid()) {
        case ::poi::hssf::record::DefaultColWidthRecord::sid:
        case ::poi::hssf::record::UnknownRecord::SORT_0090:
            return true;
        }

    }
    return false;
}

int32_t poi::hssf::model::RecordOrderer::getPageBreakRecordInsertPos(::java::util::List* records)
{
    clinit();
    auto dimensionsIndex = getDimensionsIndex(records);
    auto i = dimensionsIndex - int32_t(1);
    while (i > 0) {
        i--;
        ::java::lang::Object* rb = java_cast< ::poi::hssf::record::RecordBase* >(npc(records)->get(i));
        if(isPageBreakPriorRecord(rb)) {
            return i + int32_t(1);
        }
    }
    throw new ::java::lang::RuntimeException(u"Did not find insert point for GUTS"_j);
}

bool poi::hssf::model::RecordOrderer::isPageBreakPriorRecord(::java::lang::Object* rb)
{
    clinit();
    if(dynamic_cast< ::poi::hssf::record::Record* >(rb) != nullptr) {
        auto record = java_cast< ::poi::hssf::record::Record* >(rb);
        switch (npc(record)->getSid()) {
        case ::poi::hssf::record::BOFRecord::sid:
        case ::poi::hssf::record::IndexRecord::sid:
        case ::poi::hssf::record::UncalcedRecord::sid:
        case ::poi::hssf::record::CalcCountRecord::sid:
        case ::poi::hssf::record::CalcModeRecord::sid:
        case ::poi::hssf::record::PrecisionRecord::sid:
        case ::poi::hssf::record::RefModeRecord::sid:
        case ::poi::hssf::record::DeltaRecord::sid:
        case ::poi::hssf::record::IterationRecord::sid:
        case ::poi::hssf::record::DateWindow1904Record::sid:
        case ::poi::hssf::record::SaveRecalcRecord::sid:
        case ::poi::hssf::record::PrintHeadersRecord::sid:
        case ::poi::hssf::record::PrintGridlinesRecord::sid:
        case ::poi::hssf::record::GridsetRecord::sid:
        case ::poi::hssf::record::DefaultRowHeightRecord::sid:
        case ::poi::hssf::record::UnknownRecord::SHEETPR_0081:
            return true;
        }

    }
    return false;
}

int32_t poi::hssf::model::RecordOrderer::findInsertPosForNewCondFormatTable(::java::util::List* records)
{
    clinit();
    for (auto i = npc(records)->size() - int32_t(2); i >= 0; i--) {
        ::java::lang::Object* rb = java_cast< ::poi::hssf::record::RecordBase* >(npc(records)->get(i));
        if(dynamic_cast< ::poi::hssf::record::aggregates::MergedCellsTable* >(rb) != nullptr) {
            return i + int32_t(1);
        }
        if(dynamic_cast< ::poi::hssf::record::aggregates::DataValidityTable* >(rb) != nullptr) {
            continue;
        }
        auto rec = java_cast< ::poi::hssf::record::Record* >(rb);
        switch (npc(rec)->getSid()) {
        case ::poi::hssf::record::WindowTwoRecord::sid:
        case ::poi::hssf::record::SCLRecord::sid:
        case ::poi::hssf::record::PaneRecord::sid:
        case ::poi::hssf::record::SelectionRecord::sid:
        case ::poi::hssf::record::UnknownRecord::STANDARDWIDTH_0099:
        case ::poi::hssf::record::UnknownRecord::LABELRANGES_015F:
        case ::poi::hssf::record::UnknownRecord::PHONETICPR_00EF:
            return i + int32_t(1);
        }

    }
    throw new ::java::lang::RuntimeException(u"Did not find Window2 record"_j);
}

int32_t poi::hssf::model::RecordOrderer::findInsertPosForNewMergedRecordTable(::java::util::List* records)
{
    clinit();
    for (auto i = npc(records)->size() - int32_t(2); i >= 0; i--) {
        ::java::lang::Object* rb = java_cast< ::poi::hssf::record::RecordBase* >(npc(records)->get(i));
        if(!(dynamic_cast< ::poi::hssf::record::Record* >(rb) != nullptr)) {
            continue;
        }
        auto rec = java_cast< ::poi::hssf::record::Record* >(rb);
        switch (npc(rec)->getSid()) {
        case ::poi::hssf::record::WindowTwoRecord::sid:
        case ::poi::hssf::record::SCLRecord::sid:
        case ::poi::hssf::record::PaneRecord::sid:
        case ::poi::hssf::record::SelectionRecord::sid:
        case ::poi::hssf::record::UnknownRecord::STANDARDWIDTH_0099:
            return i + int32_t(1);
        }

    }
    throw new ::java::lang::RuntimeException(u"Did not find Window2 record"_j);
}

int32_t poi::hssf::model::RecordOrderer::findDataValidationTableInsertPos(::java::util::List* records)
{
    clinit();
    auto i = npc(records)->size() - int32_t(1);
    if(!(dynamic_cast< ::poi::hssf::record::EOFRecord* >(java_cast< ::poi::hssf::record::RecordBase* >(npc(records)->get(i))) != nullptr)) {
        throw new ::java::lang::IllegalStateException(u"Last sheet record should be EOFRecord"_j);
    }
    while (i > 0) {
        i--;
        auto rb = java_cast< ::poi::hssf::record::RecordBase* >(npc(records)->get(i));
        if(isDVTPriorRecord(rb)) {
            auto nextRec = java_cast< ::poi::hssf::record::Record* >(java_cast< ::poi::hssf::record::RecordBase* >(npc(records)->get(i + int32_t(1))));
            if(!isDVTSubsequentRecord(npc(nextRec)->getSid())) {
                throw new ::java::lang::IllegalStateException(::java::lang::StringBuilder().append(u"Unexpected ("_j)->append(npc(npc(nextRec)->getClass())->getName())
                    ->append(u") found after ("_j)
                    ->append(npc(npc(rb)->getClass())->getName())
                    ->append(u")"_j)->toString());
            }
            return i + int32_t(1);
        }
        auto rec = java_cast< ::poi::hssf::record::Record* >(rb);
        if(!isDVTSubsequentRecord(npc(rec)->getSid())) {
            throw new ::java::lang::IllegalStateException(::java::lang::StringBuilder().append(u"Unexpected ("_j)->append(npc(npc(rec)->getClass())->getName())
                ->append(u") while looking for DV Table insert pos"_j)->toString());
        }
    }
    return 0;
}

bool poi::hssf::model::RecordOrderer::isDVTPriorRecord(::poi::hssf::record::RecordBase* rb)
{
    clinit();
    if(dynamic_cast< ::poi::hssf::record::aggregates::MergedCellsTable* >(rb) != nullptr || dynamic_cast< ::poi::hssf::record::aggregates::ConditionalFormattingTable* >(rb) != nullptr) {
        return true;
    }
    auto sid = npc((java_cast< ::poi::hssf::record::Record* >(rb)))->getSid();
    switch (sid) {
    case ::poi::hssf::record::WindowTwoRecord::sid:
    case ::poi::hssf::record::UnknownRecord::SCL_00A0:
    case ::poi::hssf::record::PaneRecord::sid:
    case ::poi::hssf::record::SelectionRecord::sid:
    case ::poi::hssf::record::UnknownRecord::STANDARDWIDTH_0099:
    case ::poi::hssf::record::UnknownRecord::LABELRANGES_015F:
    case ::poi::hssf::record::UnknownRecord::PHONETICPR_00EF:
    case ::poi::hssf::record::HyperlinkRecord::sid:
    case ::poi::hssf::record::UnknownRecord::QUICKTIP_0800:
    case ::poi::hssf::record::UnknownRecord::CODENAME_1BA:
        return true;
    }

    return false;
}

bool poi::hssf::model::RecordOrderer::isDVTSubsequentRecord(int16_t sid)
{
    clinit();
    switch (sid) {
    case ::poi::hssf::record::UnknownRecord::SHEETEXT_0862:
    case ::poi::hssf::record::UnknownRecord::SHEETPROTECTION_0867:
    case ::poi::hssf::record::UnknownRecord::PLV_MAC:
    case ::poi::hssf::record::FeatRecord::sid:
    case ::poi::hssf::record::EOFRecord::sid:
        return true;
    }

    return false;
}

int32_t poi::hssf::model::RecordOrderer::getDimensionsIndex(::java::util::List* records)
{
    clinit();
    auto nRecs = npc(records)->size();
    for (auto i = int32_t(0); i < nRecs; i++) {
        if(dynamic_cast< ::poi::hssf::record::DimensionsRecord* >(java_cast< ::poi::hssf::record::RecordBase* >(npc(records)->get(i))) != nullptr) {
            return i;
        }
    }
    throw new ::java::lang::RuntimeException(u"DimensionsRecord not found"_j);
}

int32_t poi::hssf::model::RecordOrderer::getGutsRecordInsertPos(::java::util::List* records)
{
    clinit();
    auto dimensionsIndex = getDimensionsIndex(records);
    auto i = dimensionsIndex - int32_t(1);
    while (i > 0) {
        i--;
        auto rb = java_cast< ::poi::hssf::record::RecordBase* >(npc(records)->get(i));
        if(isGutsPriorRecord(rb)) {
            return i + int32_t(1);
        }
    }
    throw new ::java::lang::RuntimeException(u"Did not find insert point for GUTS"_j);
}

bool poi::hssf::model::RecordOrderer::isGutsPriorRecord(::poi::hssf::record::RecordBase* rb)
{
    clinit();
    if(dynamic_cast< ::poi::hssf::record::Record* >(rb) != nullptr) {
        auto record = java_cast< ::poi::hssf::record::Record* >(rb);
        switch (npc(record)->getSid()) {
        case ::poi::hssf::record::BOFRecord::sid:
        case ::poi::hssf::record::IndexRecord::sid:
        case ::poi::hssf::record::UncalcedRecord::sid:
        case ::poi::hssf::record::CalcCountRecord::sid:
        case ::poi::hssf::record::CalcModeRecord::sid:
        case ::poi::hssf::record::PrecisionRecord::sid:
        case ::poi::hssf::record::RefModeRecord::sid:
        case ::poi::hssf::record::DeltaRecord::sid:
        case ::poi::hssf::record::IterationRecord::sid:
        case ::poi::hssf::record::DateWindow1904Record::sid:
        case ::poi::hssf::record::SaveRecalcRecord::sid:
        case ::poi::hssf::record::PrintHeadersRecord::sid:
        case ::poi::hssf::record::PrintGridlinesRecord::sid:
        case ::poi::hssf::record::GridsetRecord::sid:
            return true;
        }

    }
    return false;
}

bool poi::hssf::model::RecordOrderer::isEndOfRowBlock(int32_t sid)
{
    clinit();
    switch (sid) {
    case ::poi::hssf::record::pivottable::ViewDefinitionRecord::sid:
    case ::poi::hssf::record::DrawingRecord::sid:
    case ::poi::hssf::record::DrawingSelectionRecord::sid:
    case ::poi::hssf::record::ObjRecord::sid:
    case ::poi::hssf::record::TextObjectRecord::sid:
    case ::poi::hssf::record::ColumnInfoRecord::sid:
    case ::poi::hssf::record::GutsRecord::sid:
    case ::poi::hssf::record::WindowOneRecord::sid:
    case ::poi::hssf::record::WindowTwoRecord::sid:
        return true;
    case ::poi::hssf::record::DVALRecord::sid:
        return true;
    case ::poi::hssf::record::EOFRecord::sid:
        throw new ::java::lang::RuntimeException(u"Found EOFRecord before WindowTwoRecord was encountered"_j);
    }

    return ::poi::hssf::record::aggregates::PageSettingsBlock::isComponentRecord(sid);
}

bool poi::hssf::model::RecordOrderer::isRowBlockRecord(int32_t sid)
{
    clinit();
    switch (sid) {
    case ::poi::hssf::record::RowRecord::sid:
    case ::poi::hssf::record::BlankRecord::sid:
    case ::poi::hssf::record::BoolErrRecord::sid:
    case ::poi::hssf::record::FormulaRecord::sid:
    case ::poi::hssf::record::LabelRecord::sid:
    case ::poi::hssf::record::LabelSSTRecord::sid:
    case ::poi::hssf::record::NumberRecord::sid:
    case ::poi::hssf::record::RKRecord::sid:
    case ::poi::hssf::record::ArrayRecord::sid:
    case ::poi::hssf::record::SharedFormulaRecord::sid:
    case ::poi::hssf::record::TableRecord::sid:
        return true;
    }

    return false;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::model::RecordOrderer::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.model.RecordOrderer", 39);
    return c;
}

java::lang::Class* poi::hssf::model::RecordOrderer::getClass0()
{
    return class_();
}

