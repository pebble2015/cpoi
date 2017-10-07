// Generated from /POI/java/org/apache/poi/hssf/eventusermodel/MissingRecordAwareHSSFListener.java
#include <org/apache/poi/hssf/eventusermodel/MissingRecordAwareHSSFListener.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Cloneable.hpp>
#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/hssf/eventusermodel/HSSFListener.hpp>
#include <org/apache/poi/hssf/eventusermodel/dummyrecord/LastCellOfRowDummyRecord.hpp>
#include <org/apache/poi/hssf/eventusermodel/dummyrecord/MissingCellDummyRecord.hpp>
#include <org/apache/poi/hssf/eventusermodel/dummyrecord/MissingRowDummyRecord.hpp>
#include <org/apache/poi/hssf/record/BOFRecord.hpp>
#include <org/apache/poi/hssf/record/BlankRecord.hpp>
#include <org/apache/poi/hssf/record/CellRecord.hpp>
#include <org/apache/poi/hssf/record/CellValueRecordInterface.hpp>
#include <org/apache/poi/hssf/record/MulBlankRecord.hpp>
#include <org/apache/poi/hssf/record/MulRKRecord.hpp>
#include <org/apache/poi/hssf/record/NoteRecord.hpp>
#include <org/apache/poi/hssf/record/NumberRecord.hpp>
#include <org/apache/poi/hssf/record/Record.hpp>
#include <org/apache/poi/hssf/record/RecordBase.hpp>
#include <org/apache/poi/hssf/record/RecordFactory.hpp>
#include <org/apache/poi/hssf/record/RowRecord.hpp>
#include <org/apache/poi/hssf/record/SharedFormulaRecord.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>
#include <org/apache/poi/hssf/record/StringRecord.hpp>
#include <SubArray.hpp>
#include <ObjectArray.hpp>

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
typedef ::SubArray< ::org::apache::poi::hssf::record::CellValueRecordInterface, ::java::lang::ObjectArray > CellValueRecordInterfaceArray;
typedef ::SubArray< ::org::apache::poi::hssf::record::BlankRecord, StandardRecordArray, CellValueRecordInterfaceArray, ::java::lang::CloneableArray > BlankRecordArray;
typedef ::SubArray< ::org::apache::poi::hssf::record::CellRecord, StandardRecordArray, CellValueRecordInterfaceArray > CellRecordArray;
typedef ::SubArray< ::org::apache::poi::hssf::record::NumberRecord, CellRecordArray, ::java::lang::CloneableArray > NumberRecordArray;
                } // record
            } // hssf
        } // poi
    } // apache
} // org

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

org::apache::poi::hssf::eventusermodel::MissingRecordAwareHSSFListener::MissingRecordAwareHSSFListener(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::eventusermodel::MissingRecordAwareHSSFListener::MissingRecordAwareHSSFListener(HSSFListener* listener) 
    : MissingRecordAwareHSSFListener(*static_cast< ::default_init_tag* >(0))
{
    ctor(listener);
}

void org::apache::poi::hssf::eventusermodel::MissingRecordAwareHSSFListener::ctor(HSSFListener* listener)
{
    super::ctor();
    resetCounts();
    childListener = listener;
}

void org::apache::poi::hssf::eventusermodel::MissingRecordAwareHSSFListener::processRecord(::org::apache::poi::hssf::record::Record* record)
{
    int32_t thisRow;
    int32_t thisColumn;
    ::org::apache::poi::hssf::record::CellValueRecordInterfaceArray* expandedRecords = nullptr;
    if(dynamic_cast< ::org::apache::poi::hssf::record::CellValueRecordInterface* >(record) != nullptr) {
        auto valueRec = java_cast< ::org::apache::poi::hssf::record::CellValueRecordInterface* >(record);
        thisRow = npc(valueRec)->getRow();
        thisColumn = npc(valueRec)->getColumn();
    } else {
        if(dynamic_cast< ::org::apache::poi::hssf::record::StringRecord* >(record) != nullptr) {
            npc(childListener)->processRecord(record);
            return;
        }
        thisRow = -int32_t(1);
        thisColumn = -int32_t(1);
        {
            ::org::apache::poi::hssf::record::BOFRecord* bof;
            ::org::apache::poi::hssf::record::RowRecord* rowrec;
            ::org::apache::poi::hssf::record::MulBlankRecord* mbr;
            ::org::apache::poi::hssf::record::MulRKRecord* mrk;
            ::org::apache::poi::hssf::record::NoteRecord* nrec;
            switch (npc(record)->getSid()) {
            case ::org::apache::poi::hssf::record::BOFRecord::sid:
                bof = java_cast< ::org::apache::poi::hssf::record::BOFRecord* >(record);
                if(npc(bof)->getType() == ::org::apache::poi::hssf::record::BOFRecord::TYPE_WORKBOOK || npc(bof)->getType() == ::org::apache::poi::hssf::record::BOFRecord::TYPE_WORKSHEET) {
                    resetCounts();
                }
                break;
            case ::org::apache::poi::hssf::record::RowRecord::sid:
                rowrec = java_cast< ::org::apache::poi::hssf::record::RowRecord* >(record);
                if(lastRowRow + int32_t(1) < npc(rowrec)->getRowNumber()) {
                    for (auto i = (lastRowRow + int32_t(1)); i < npc(rowrec)->getRowNumber(); i++) {
                        auto dr = new ::org::apache::poi::hssf::eventusermodel::dummyrecord::MissingRowDummyRecord(i);
                        npc(childListener)->processRecord(dr);
                    }
                }
                lastRowRow = npc(rowrec)->getRowNumber();
                lastCellColumn = -int32_t(1);
                break;
            case ::org::apache::poi::hssf::record::SharedFormulaRecord::sid:
                npc(childListener)->processRecord(record);
                return;
            case ::org::apache::poi::hssf::record::MulBlankRecord::sid:
                mbr = java_cast< ::org::apache::poi::hssf::record::MulBlankRecord* >(record);
                expandedRecords = ::org::apache::poi::hssf::record::RecordFactory::convertBlankRecords(mbr);
                break;
            case ::org::apache::poi::hssf::record::MulRKRecord::sid:
                mrk = java_cast< ::org::apache::poi::hssf::record::MulRKRecord* >(record);
                expandedRecords = ::org::apache::poi::hssf::record::RecordFactory::convertRKRecords(mrk);
                break;
            case ::org::apache::poi::hssf::record::NoteRecord::sid:
                nrec = java_cast< ::org::apache::poi::hssf::record::NoteRecord* >(record);
                thisRow = npc(nrec)->getRow();
                thisColumn = npc(nrec)->getColumn();
                break;
            default:
                break;
            }
        }

    }
    if(expandedRecords != nullptr && npc(expandedRecords)->length > 0) {
        thisRow = npc((*expandedRecords)[int32_t(0)])->getRow();
        thisColumn = npc((*expandedRecords)[int32_t(0)])->getColumn();
    }
    if(thisRow != lastCellRow && thisRow > 0) {
        if(lastCellRow == -int32_t(1))
            lastCellRow = 0;

        for (auto i = lastCellRow; i < thisRow; i++) {
            auto cols = -int32_t(1);
            if(i == lastCellRow) {
                cols = lastCellColumn;
            }
            npc(childListener)->processRecord(new ::org::apache::poi::hssf::eventusermodel::dummyrecord::LastCellOfRowDummyRecord(i, cols));
        }
    }
    if(lastCellRow != -int32_t(1) && lastCellColumn != -int32_t(1) && thisRow == -int32_t(1)) {
        npc(childListener)->processRecord(new ::org::apache::poi::hssf::eventusermodel::dummyrecord::LastCellOfRowDummyRecord(lastCellRow, lastCellColumn));
        lastCellRow = -int32_t(1);
        lastCellColumn = -int32_t(1);
    }
    if(thisRow != lastCellRow) {
        lastCellColumn = -int32_t(1);
    }
    if(lastCellColumn != thisColumn - int32_t(1)) {
        for (auto i = lastCellColumn + int32_t(1); i < thisColumn; i++) {
            npc(childListener)->processRecord(new ::org::apache::poi::hssf::eventusermodel::dummyrecord::MissingCellDummyRecord(thisRow, i));
        }
    }
    if(expandedRecords != nullptr && npc(expandedRecords)->length > 0) {
        thisColumn = npc((*expandedRecords)[npc(expandedRecords)->length - int32_t(1)])->getColumn();
    }
    if(thisColumn != -int32_t(1)) {
        lastCellColumn = thisColumn;
        lastCellRow = thisRow;
    }
    if(expandedRecords != nullptr && npc(expandedRecords)->length > 0) {
        for(auto r : *npc(expandedRecords)) {
            npc(childListener)->processRecord(java_cast< ::org::apache::poi::hssf::record::Record* >(r));
        }
    } else {
        npc(childListener)->processRecord(record);
    }
}

void org::apache::poi::hssf::eventusermodel::MissingRecordAwareHSSFListener::resetCounts()
{
    lastRowRow = -int32_t(1);
    lastCellRow = -int32_t(1);
    lastCellColumn = -int32_t(1);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::eventusermodel::MissingRecordAwareHSSFListener::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.eventusermodel.MissingRecordAwareHSSFListener", 65);
    return c;
}

java::lang::Class* org::apache::poi::hssf::eventusermodel::MissingRecordAwareHSSFListener::getClass0()
{
    return class_();
}

