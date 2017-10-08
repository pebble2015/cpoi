// Generated from /POI/java/org/apache/poi/hssf/record/aggregates/ColumnInfoRecordsAggregate.java
#include <org/apache/poi/hssf/record/aggregates/ColumnInfoRecordsAggregate.hpp>

#include <java/lang/Boolean.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/Math.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/Short.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/Collections.hpp>
#include <java/util/Comparator.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/List.hpp>
#include <org/apache/poi/hssf/model/RecordStream.hpp>
#include <org/apache/poi/hssf/record/ColumnInfoRecord.hpp>
#include <org/apache/poi/hssf/record/Record.hpp>
#include <org/apache/poi/hssf/record/aggregates/ColumnInfoRecordsAggregate_CIRComparator.hpp>
#include <org/apache/poi/hssf/record/aggregates/RecordAggregate_RecordVisitor.hpp>

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

poi::hssf::record::aggregates::ColumnInfoRecordsAggregate::ColumnInfoRecordsAggregate(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::aggregates::ColumnInfoRecordsAggregate::ColumnInfoRecordsAggregate() 
    : ColumnInfoRecordsAggregate(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::hssf::record::aggregates::ColumnInfoRecordsAggregate::ColumnInfoRecordsAggregate(::poi::hssf::model::RecordStream* rs) 
    : ColumnInfoRecordsAggregate(*static_cast< ::default_init_tag* >(0))
{
    ctor(rs);
}

void poi::hssf::record::aggregates::ColumnInfoRecordsAggregate::ctor()
{
    super::ctor();
    records = new ::java::util::ArrayList();
}

void poi::hssf::record::aggregates::ColumnInfoRecordsAggregate::ctor(::poi::hssf::model::RecordStream* rs)
{
    ctor();
    auto isInOrder = true;
    ::poi::hssf::record::ColumnInfoRecord* cirPrev = nullptr;
    while (static_cast< ::java::lang::Object* >(npc(rs)->peekNextClass()) == static_cast< ::java::lang::Object* >(::poi::hssf::record::ColumnInfoRecord::class_())) {
        auto cir = java_cast< ::poi::hssf::record::ColumnInfoRecord* >(npc(rs)->getNext());
        npc(records)->add(static_cast< ::java::lang::Object* >(cir));
        if(cirPrev != nullptr && ColumnInfoRecordsAggregate_CIRComparator::compareColInfos(cirPrev, cir) > 0) {
            isInOrder = false;
        }
        cirPrev = cir;
    }
    if(npc(records)->size() < 1) {
        throw new ::java::lang::RuntimeException(u"No column info records found"_j);
    }
    if(!isInOrder) {
        ::java::util::Collections::sort(records, ColumnInfoRecordsAggregate_CIRComparator::instance());
    }
}

poi::hssf::record::aggregates::ColumnInfoRecordsAggregate* poi::hssf::record::aggregates::ColumnInfoRecordsAggregate::clone()
{
    auto rec = new ColumnInfoRecordsAggregate();
    for (auto _i = npc(records)->iterator(); _i->hasNext(); ) {
        ::poi::hssf::record::ColumnInfoRecord* ci = java_cast< ::poi::hssf::record::ColumnInfoRecord* >(_i->next());
        {
            npc(npc(rec)->records)->add(static_cast< ::java::lang::Object* >(npc(ci)->clone()));
        }
    }
    return rec;
}

void poi::hssf::record::aggregates::ColumnInfoRecordsAggregate::insertColumn(::poi::hssf::record::ColumnInfoRecord* col)
{
    npc(records)->add(static_cast< ::java::lang::Object* >(col));
    ::java::util::Collections::sort(records, ColumnInfoRecordsAggregate_CIRComparator::instance());
}

void poi::hssf::record::aggregates::ColumnInfoRecordsAggregate::insertColumn(int32_t idx, ::poi::hssf::record::ColumnInfoRecord* col)
{
    npc(records)->add(idx, col);
}

int32_t poi::hssf::record::aggregates::ColumnInfoRecordsAggregate::getNumColumns()
{
    return npc(records)->size();
}

void poi::hssf::record::aggregates::ColumnInfoRecordsAggregate::visitContainedRecords(RecordAggregate_RecordVisitor* rv)
{
    auto nItems = npc(records)->size();
    if(nItems < 1) {
        return;
    }
    ::poi::hssf::record::ColumnInfoRecord* cirPrev = nullptr;
    for (auto i = int32_t(0); i < nItems; i++) {
        auto cir = java_cast< ::poi::hssf::record::ColumnInfoRecord* >(npc(records)->get(i));
        npc(rv)->visitRecord(cir);
        if(cirPrev != nullptr && ColumnInfoRecordsAggregate_CIRComparator::compareColInfos(cirPrev, cir) > 0) {
            throw new ::java::lang::RuntimeException(u"Column info records are out of order"_j);
        }
        cirPrev = cir;
    }
}

int32_t poi::hssf::record::aggregates::ColumnInfoRecordsAggregate::findStartOfColumnOutlineGroup(int32_t pIdx)
{
    auto columnInfo = java_cast< ::poi::hssf::record::ColumnInfoRecord* >(npc(records)->get(pIdx));
    auto level = npc(columnInfo)->getOutlineLevel();
    auto idx = pIdx;
    while (idx != 0) {
        auto prevColumnInfo = java_cast< ::poi::hssf::record::ColumnInfoRecord* >(npc(records)->get(idx - int32_t(1)));
        if(!npc(prevColumnInfo)->isAdjacentBefore(columnInfo)) {
            break;
        }
        if(npc(prevColumnInfo)->getOutlineLevel() < level) {
            break;
        }
        idx--;
        columnInfo = prevColumnInfo;
    }
    return idx;
}

int32_t poi::hssf::record::aggregates::ColumnInfoRecordsAggregate::findEndOfColumnOutlineGroup(int32_t colInfoIndex)
{
    auto columnInfo = java_cast< ::poi::hssf::record::ColumnInfoRecord* >(npc(records)->get(colInfoIndex));
    auto level = npc(columnInfo)->getOutlineLevel();
    auto idx = colInfoIndex;
    while (idx < npc(records)->size() - int32_t(1)) {
        auto nextColumnInfo = java_cast< ::poi::hssf::record::ColumnInfoRecord* >(npc(records)->get(idx + int32_t(1)));
        if(!npc(columnInfo)->isAdjacentBefore(nextColumnInfo)) {
            break;
        }
        if(npc(nextColumnInfo)->getOutlineLevel() < level) {
            break;
        }
        idx++;
        columnInfo = nextColumnInfo;
    }
    return idx;
}

poi::hssf::record::ColumnInfoRecord* poi::hssf::record::aggregates::ColumnInfoRecordsAggregate::getColInfo(int32_t idx)
{
    return java_cast< ::poi::hssf::record::ColumnInfoRecord* >(npc(records)->get(idx));
}

bool poi::hssf::record::aggregates::ColumnInfoRecordsAggregate::isColumnGroupCollapsed(int32_t idx)
{
    auto endOfOutlineGroupIdx = findEndOfColumnOutlineGroup(idx);
    auto nextColInfoIx = endOfOutlineGroupIdx + int32_t(1);
    if(nextColInfoIx >= npc(records)->size()) {
        return false;
    }
    auto nextColInfo = getColInfo(nextColInfoIx);
    if(!npc(getColInfo(endOfOutlineGroupIdx))->isAdjacentBefore(nextColInfo)) {
        return false;
    }
    return npc(nextColInfo)->getCollapsed();
}

bool poi::hssf::record::aggregates::ColumnInfoRecordsAggregate::isColumnGroupHiddenByParent(int32_t idx)
{
    auto endLevel = int32_t(0);
    auto endHidden = false;
    auto endOfOutlineGroupIdx = findEndOfColumnOutlineGroup(idx);
    if(endOfOutlineGroupIdx < npc(records)->size()) {
        auto nextInfo = getColInfo(endOfOutlineGroupIdx + int32_t(1));
        if(npc(getColInfo(endOfOutlineGroupIdx))->isAdjacentBefore(nextInfo)) {
            endLevel = npc(nextInfo)->getOutlineLevel();
            endHidden = npc(nextInfo)->getHidden();
        }
    }
    auto startLevel = int32_t(0);
    auto startHidden = false;
    auto startOfOutlineGroupIdx = findStartOfColumnOutlineGroup(idx);
    if(startOfOutlineGroupIdx > 0) {
        auto prevInfo = getColInfo(startOfOutlineGroupIdx - int32_t(1));
        if(npc(prevInfo)->isAdjacentBefore(getColInfo(startOfOutlineGroupIdx))) {
            startLevel = npc(prevInfo)->getOutlineLevel();
            startHidden = npc(prevInfo)->getHidden();
        }
    }
    if(endLevel > startLevel) {
        return endHidden;
    }
    return startHidden;
}

void poi::hssf::record::aggregates::ColumnInfoRecordsAggregate::collapseColumn(int32_t columnIndex)
{
    auto colInfoIx = findColInfoIdx(columnIndex, 0);
    if(colInfoIx == -int32_t(1)) {
        return;
    }
    auto groupStartColInfoIx = findStartOfColumnOutlineGroup(colInfoIx);
    auto columnInfo = getColInfo(groupStartColInfoIx);
    auto lastColIx = setGroupHidden(groupStartColInfoIx, npc(columnInfo)->getOutlineLevel(), true);
    setColumn(lastColIx + int32_t(1), nullptr, nullptr, nullptr, nullptr, ::java::lang::Boolean::TRUE());
}

int32_t poi::hssf::record::aggregates::ColumnInfoRecordsAggregate::setGroupHidden(int32_t pIdx, int32_t level, bool hidden)
{
    auto idx = pIdx;
    auto columnInfo = getColInfo(idx);
    while (idx < npc(records)->size()) {
        npc(columnInfo)->setHidden(hidden);
        if(idx + int32_t(1) < npc(records)->size()) {
            auto nextColumnInfo = getColInfo(idx + int32_t(1));
            if(!npc(columnInfo)->isAdjacentBefore(nextColumnInfo)) {
                break;
            }
            if(npc(nextColumnInfo)->getOutlineLevel() < level) {
                break;
            }
            columnInfo = nextColumnInfo;
        }
        idx++;
    }
    return npc(columnInfo)->getLastColumn();
}

void poi::hssf::record::aggregates::ColumnInfoRecordsAggregate::expandColumn(int32_t columnIndex)
{
    auto idx = findColInfoIdx(columnIndex, 0);
    if(idx == -int32_t(1)) {
        return;
    }
    if(!isColumnGroupCollapsed(idx)) {
        return;
    }
    auto startIdx = findStartOfColumnOutlineGroup(idx);
    auto endIdx = findEndOfColumnOutlineGroup(idx);
    auto columnInfo = getColInfo(endIdx);
    if(!isColumnGroupHiddenByParent(idx)) {
        auto outlineLevel = npc(columnInfo)->getOutlineLevel();
        for (auto i = startIdx; i <= endIdx; i++) {
            auto ci = getColInfo(i);
            if(outlineLevel == npc(ci)->getOutlineLevel())
                npc(ci)->setHidden(false);

        }
    }
    setColumn(npc(columnInfo)->getLastColumn() + int32_t(1), nullptr, nullptr, nullptr, nullptr, ::java::lang::Boolean::FALSE());
}

poi::hssf::record::ColumnInfoRecord* poi::hssf::record::aggregates::ColumnInfoRecordsAggregate::copyColInfo(::poi::hssf::record::ColumnInfoRecord* ci)
{
    clinit();
    return npc(ci)->clone();
}

void poi::hssf::record::aggregates::ColumnInfoRecordsAggregate::setColumn(int32_t targetColumnIx, ::java::lang::Short* xfIndex, ::java::lang::Integer* width, ::java::lang::Integer* level, ::java::lang::Boolean* hidden, ::java::lang::Boolean* collapsed)
{
    ::poi::hssf::record::ColumnInfoRecord* ci = nullptr;
    auto k = int32_t(0);
    for (k = 0; k < npc(records)->size(); k++) {
        auto tci = java_cast< ::poi::hssf::record::ColumnInfoRecord* >(npc(records)->get(k));
        if(npc(tci)->containsColumn(targetColumnIx)) {
            ci = tci;
            break;
        }
        if(npc(tci)->getFirstColumn() > targetColumnIx) {
            break;
        }
    }
    if(ci == nullptr) {
        auto nci = new ::poi::hssf::record::ColumnInfoRecord();
        npc(nci)->setFirstColumn(targetColumnIx);
        npc(nci)->setLastColumn(targetColumnIx);
        setColumnInfoFields(nci, xfIndex, width, level, hidden, collapsed);
        insertColumn(k, nci);
        attemptMergeColInfoRecords(k);
        return;
    }
    auto styleChanged = xfIndex != nullptr && npc(ci)->getXFIndex() != npc(xfIndex)->shortValue();
    auto widthChanged = width != nullptr && npc(ci)->getColumnWidth() != npc(width)->shortValue();
    auto levelChanged = level != nullptr && npc(ci)->getOutlineLevel() != npc(level)->intValue();
    auto hiddenChanged = hidden != nullptr && npc(ci)->getHidden() != npc(hidden)->booleanValue();
    auto collapsedChanged = collapsed != nullptr && npc(ci)->getCollapsed() != npc(collapsed)->booleanValue();
    auto columnChanged = styleChanged || widthChanged || levelChanged|| hiddenChanged|| collapsedChanged;
    if(!columnChanged) {
        return;
    }
    if(npc(ci)->getFirstColumn() == targetColumnIx && npc(ci)->getLastColumn() == targetColumnIx) {
        setColumnInfoFields(ci, xfIndex, width, level, hidden, collapsed);
        attemptMergeColInfoRecords(k);
        return;
    }
    if(npc(ci)->getFirstColumn() == targetColumnIx || npc(ci)->getLastColumn() == targetColumnIx) {
        if(npc(ci)->getFirstColumn() == targetColumnIx) {
            npc(ci)->setFirstColumn(targetColumnIx + int32_t(1));
        } else {
            npc(ci)->setLastColumn(targetColumnIx - int32_t(1));
            k++;
        }
        auto nci = copyColInfo(ci);
        npc(nci)->setFirstColumn(targetColumnIx);
        npc(nci)->setLastColumn(targetColumnIx);
        setColumnInfoFields(nci, xfIndex, width, level, hidden, collapsed);
        insertColumn(k, nci);
        attemptMergeColInfoRecords(k);
    } else {
        auto ciStart = ci;
        auto ciMid = copyColInfo(ci);
        auto ciEnd = copyColInfo(ci);
        auto lastcolumn = npc(ci)->getLastColumn();
        npc(ciStart)->setLastColumn(targetColumnIx - int32_t(1));
        npc(ciMid)->setFirstColumn(targetColumnIx);
        npc(ciMid)->setLastColumn(targetColumnIx);
        setColumnInfoFields(ciMid, xfIndex, width, level, hidden, collapsed);
        insertColumn(++k, ciMid);
        npc(ciEnd)->setFirstColumn(targetColumnIx + int32_t(1));
        npc(ciEnd)->setLastColumn(lastcolumn);
        insertColumn(++k, ciEnd);
    }
}

void poi::hssf::record::aggregates::ColumnInfoRecordsAggregate::setColumnInfoFields(::poi::hssf::record::ColumnInfoRecord* ci, ::java::lang::Short* xfStyle, ::java::lang::Integer* width, ::java::lang::Integer* level, ::java::lang::Boolean* hidden, ::java::lang::Boolean* collapsed)
{
    clinit();
    if(xfStyle != nullptr) {
        npc(ci)->setXFIndex(npc(xfStyle)->shortValue());
    }
    if(width != nullptr) {
        npc(ci)->setColumnWidth(npc(width)->intValue());
    }
    if(level != nullptr) {
        npc(ci)->setOutlineLevel(npc(level)->shortValue());
    }
    if(hidden != nullptr) {
        npc(ci)->setHidden(npc(hidden)->booleanValue());
    }
    if(collapsed != nullptr) {
        npc(ci)->setCollapsed(npc(collapsed)->booleanValue());
    }
}

int32_t poi::hssf::record::aggregates::ColumnInfoRecordsAggregate::findColInfoIdx(int32_t columnIx, int32_t fromColInfoIdx)
{
    if(columnIx < 0) {
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"column parameter out of range: "_j)->append(columnIx)->toString());
    }
    if(fromColInfoIdx < 0) {
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"fromIdx parameter out of range: "_j)->append(fromColInfoIdx)->toString());
    }
    for (auto k = fromColInfoIdx; k < npc(records)->size(); k++) {
        auto ci = getColInfo(k);
        if(npc(ci)->containsColumn(columnIx)) {
            return k;
        }
        if(npc(ci)->getFirstColumn() > columnIx) {
            break;
        }
    }
    return -int32_t(1);
}

void poi::hssf::record::aggregates::ColumnInfoRecordsAggregate::attemptMergeColInfoRecords(int32_t colInfoIx)
{
    auto nRecords = npc(records)->size();
    if(colInfoIx < 0 || colInfoIx >= nRecords) {
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"colInfoIx "_j)->append(colInfoIx)
            ->append(u" is out of range (0.."_j)
            ->append((nRecords - int32_t(1)))
            ->append(u")"_j)->toString());
    }
    auto currentCol = getColInfo(colInfoIx);
    auto nextIx = colInfoIx + int32_t(1);
    if(nextIx < nRecords) {
        if(mergeColInfoRecords(currentCol, getColInfo(nextIx))) {
            npc(records)->remove(nextIx);
        }
    }
    if(colInfoIx > 0) {
        if(mergeColInfoRecords(getColInfo(colInfoIx - int32_t(1)), currentCol)) {
            npc(records)->remove(colInfoIx);
        }
    }
}

bool poi::hssf::record::aggregates::ColumnInfoRecordsAggregate::mergeColInfoRecords(::poi::hssf::record::ColumnInfoRecord* ciA, ::poi::hssf::record::ColumnInfoRecord* ciB)
{
    clinit();
    if(npc(ciA)->isAdjacentBefore(ciB) && npc(ciA)->formatMatches(ciB)) {
        npc(ciA)->setLastColumn(npc(ciB)->getLastColumn());
        return true;
    }
    return false;
}

void poi::hssf::record::aggregates::ColumnInfoRecordsAggregate::groupColumnRange(int32_t fromColumnIx, int32_t toColumnIx, bool indent)
{
    auto colInfoSearchStartIdx = int32_t(0);
    for (auto i = fromColumnIx; i <= toColumnIx; i++) {
        auto level = int32_t(1);
        auto colInfoIdx = findColInfoIdx(i, colInfoSearchStartIdx);
        if(colInfoIdx != -int32_t(1)) {
            level = npc(getColInfo(colInfoIdx))->getOutlineLevel();
            if(indent) {
                level++;
            } else {
                level--;
            }
            level = ::java::lang::Math::max(int32_t(0), level);
            level = ::java::lang::Math::min(int32_t(7), level);
            colInfoSearchStartIdx = ::java::lang::Math::max(int32_t(0), colInfoIdx - int32_t(1));
        }
        setColumn(i, nullptr, nullptr, ::java::lang::Integer::valueOf(level), nullptr, nullptr);
    }
}

poi::hssf::record::ColumnInfoRecord* poi::hssf::record::aggregates::ColumnInfoRecordsAggregate::findColumnInfo(int32_t columnIndex)
{
    auto nInfos = npc(records)->size();
    for (auto i = int32_t(0); i < nInfos; i++) {
        auto ci = getColInfo(i);
        if(npc(ci)->containsColumn(columnIndex)) {
            return ci;
        }
    }
    return nullptr;
}

int32_t poi::hssf::record::aggregates::ColumnInfoRecordsAggregate::getMaxOutlineLevel()
{
    auto result = int32_t(0);
    auto count = npc(records)->size();
    for (auto i = int32_t(0); i < count; i++) {
        auto columnInfoRecord = getColInfo(i);
        result = ::java::lang::Math::max(npc(columnInfoRecord)->getOutlineLevel(), result);
    }
    return result;
}

int32_t poi::hssf::record::aggregates::ColumnInfoRecordsAggregate::getOutlineLevel(int32_t columnIndex)
{
    auto ci = findColumnInfo(columnIndex);
    if(ci != nullptr) {
        return npc(ci)->getOutlineLevel();
    } else {
        return 0;
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::aggregates::ColumnInfoRecordsAggregate::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.aggregates.ColumnInfoRecordsAggregate", 64);
    return c;
}

java::lang::Class* poi::hssf::record::aggregates::ColumnInfoRecordsAggregate::getClass0()
{
    return class_();
}

