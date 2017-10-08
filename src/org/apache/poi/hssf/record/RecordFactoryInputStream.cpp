// Generated from /POI/java/org/apache/poi/hssf/record/RecordFactoryInputStream.java
#include <org/apache/poi/hssf/record/RecordFactoryInputStream.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Cloneable.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/List.hpp>
#include <org/apache/poi/hssf/record/AbstractEscherHolderRecord.hpp>
#include <org/apache/poi/hssf/record/BOFRecord.hpp>
#include <org/apache/poi/hssf/record/CellRecord.hpp>
#include <org/apache/poi/hssf/record/CellValueRecordInterface.hpp>
#include <org/apache/poi/hssf/record/ContinueRecord.hpp>
#include <org/apache/poi/hssf/record/DBCellRecord.hpp>
#include <org/apache/poi/hssf/record/DrawingGroupRecord.hpp>
#include <org/apache/poi/hssf/record/DrawingRecord.hpp>
#include <org/apache/poi/hssf/record/EOFRecord.hpp>
#include <org/apache/poi/hssf/record/MulRKRecord.hpp>
#include <org/apache/poi/hssf/record/NumberRecord.hpp>
#include <org/apache/poi/hssf/record/ObjRecord.hpp>
#include <org/apache/poi/hssf/record/RKRecord.hpp>
#include <org/apache/poi/hssf/record/Record.hpp>
#include <org/apache/poi/hssf/record/RecordBase.hpp>
#include <org/apache/poi/hssf/record/RecordFactory.hpp>
#include <org/apache/poi/hssf/record/RecordFactoryInputStream_StreamEncryptionInfo.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>
#include <org/apache/poi/hssf/record/TextObjectRecord.hpp>
#include <org/apache/poi/hssf/record/UnknownRecord.hpp>
#include <org/apache/poi/util/RecordFormatException.hpp>
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

namespace poi
{
    namespace hssf
    {
        namespace record
        {
typedef ::SubArray< ::poi::hssf::record::RecordBase, ::java::lang::ObjectArray > RecordBaseArray;
typedef ::SubArray< ::poi::hssf::record::Record, RecordBaseArray > RecordArray;
typedef ::SubArray< ::poi::hssf::record::StandardRecord, RecordArray > StandardRecordArray;
typedef ::SubArray< ::poi::hssf::record::CellValueRecordInterface, ::java::lang::ObjectArray > CellValueRecordInterfaceArray;
typedef ::SubArray< ::poi::hssf::record::CellRecord, StandardRecordArray, CellValueRecordInterfaceArray > CellRecordArray;
typedef ::SubArray< ::poi::hssf::record::NumberRecord, CellRecordArray, ::java::lang::CloneableArray > NumberRecordArray;
        } // record
    } // hssf
} // poi

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

poi::hssf::record::RecordFactoryInputStream::RecordFactoryInputStream(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::RecordFactoryInputStream::RecordFactoryInputStream(::java::io::InputStream* in, bool shouldIncludeContinueRecords) 
    : RecordFactoryInputStream(*static_cast< ::default_init_tag* >(0))
{
    ctor(in,shouldIncludeContinueRecords);
}

void poi::hssf::record::RecordFactoryInputStream::init()
{
    _unreadRecordIndex = -int32_t(1);
    _lastRecord = nullptr;
    _lastDrawingRecord = new DrawingRecord();
}

void poi::hssf::record::RecordFactoryInputStream::ctor(::java::io::InputStream* in, bool shouldIncludeContinueRecords)
{
    super::ctor();
    init();
    auto rs = new RecordInputStream(in);
    ::java::util::List* records = new ::java::util::ArrayList();
    auto sei = new RecordFactoryInputStream_StreamEncryptionInfo(rs, records);
    if(npc(sei)->hasEncryption()) {
        rs = npc(sei)->createDecryptingStream(in);
    } else {
    }
    if(!npc(records)->isEmpty()) {
        _unreadRecordBuffer = new RecordArray(npc(records)->size());
        npc(records)->toArray_(static_cast< ::java::lang::ObjectArray* >(_unreadRecordBuffer));
        _unreadRecordIndex = 0;
    }
    _recStream = rs;
    _shouldIncludeContinueRecords = shouldIncludeContinueRecords;
    _lastRecord = npc(sei)->getLastRecord();
    _bofDepth = npc(sei)->hasBOFRecord() ? int32_t(1) : int32_t(0);
    _lastRecordWasEOFLevelZero = false;
}

poi::hssf::record::Record* poi::hssf::record::RecordFactoryInputStream::nextRecord()
{
    Record* r;
    r = getNextUnreadRecord();
    if(r != nullptr) {
        return r;
    }
    while (true) {
        if(!npc(_recStream)->hasNextRecord()) {
            return nullptr;
        }
        if(_lastRecordWasEOFLevelZero) {
            if(npc(_recStream)->getNextSid() != BOFRecord::sid) {
                return nullptr;
            }
        }
        npc(_recStream)->nextRecord();
        r = readNextRecord();
        if(r == nullptr) {
            continue;
        }
        return r;
    }
}

poi::hssf::record::Record* poi::hssf::record::RecordFactoryInputStream::getNextUnreadRecord()
{
    if(_unreadRecordBuffer != nullptr) {
        auto ix = _unreadRecordIndex;
        if(ix < npc(_unreadRecordBuffer)->length) {
            auto result = (*_unreadRecordBuffer)[ix];
            _unreadRecordIndex = ix + int32_t(1);
            return result;
        }
        _unreadRecordIndex = -int32_t(1);
        _unreadRecordBuffer = nullptr;
    }
    return nullptr;
}

poi::hssf::record::Record* poi::hssf::record::RecordFactoryInputStream::readNextRecord()
{
    auto record = RecordFactory::createSingleRecord(_recStream);
    _lastRecordWasEOFLevelZero = false;
    if(dynamic_cast< BOFRecord* >(record) != nullptr) {
        _bofDepth++;
        return record;
    }
    if(dynamic_cast< EOFRecord* >(record) != nullptr) {
        _bofDepth--;
        if(_bofDepth < 1) {
            _lastRecordWasEOFLevelZero = true;
        }
        return record;
    }
    if(dynamic_cast< DBCellRecord* >(record) != nullptr) {
        return nullptr;
    }
    if(dynamic_cast< RKRecord* >(record) != nullptr) {
        return RecordFactory::convertToNumberRecord(java_cast< RKRecord* >(record));
    }
    if(dynamic_cast< MulRKRecord* >(record) != nullptr) {
        RecordArray* records = RecordFactory::convertRKRecords(java_cast< MulRKRecord* >(record));
        _unreadRecordBuffer = records;
        _unreadRecordIndex = 1;
        return (*records)[int32_t(0)];
    }
    if(npc(record)->getSid() == DrawingGroupRecord::sid && dynamic_cast< DrawingGroupRecord* >(_lastRecord) != nullptr) {
        auto lastDGRecord = java_cast< DrawingGroupRecord* >(_lastRecord);
        npc(lastDGRecord)->join(java_cast< AbstractEscherHolderRecord* >(record));
        return nullptr;
    }
    if(npc(record)->getSid() == ContinueRecord::sid) {
        auto contRec = java_cast< ContinueRecord* >(record);
        if(dynamic_cast< ObjRecord* >(_lastRecord) != nullptr || dynamic_cast< TextObjectRecord* >(_lastRecord) != nullptr) {
            npc(_lastDrawingRecord)->processContinueRecord(npc(contRec)->getData());
            if(_shouldIncludeContinueRecords) {
                return record;
            }
            return nullptr;
        }
        if(dynamic_cast< DrawingGroupRecord* >(_lastRecord) != nullptr) {
            npc((java_cast< DrawingGroupRecord* >(_lastRecord)))->processContinueRecord(npc(contRec)->getData());
            return nullptr;
        }
        if(dynamic_cast< DrawingRecord* >(_lastRecord) != nullptr) {
            return contRec;
        }
        if(dynamic_cast< UnknownRecord* >(_lastRecord) != nullptr) {
            return record;
        }
        if(dynamic_cast< EOFRecord* >(_lastRecord) != nullptr) {
            return record;
        }
        throw new ::poi::util::RecordFormatException(::java::lang::StringBuilder().append(u"Unhandled Continue Record followining "_j)->append(static_cast< ::java::lang::Object* >(npc(_lastRecord)->getClass()))->toString());
    }
    _lastRecord = record;
    if(dynamic_cast< DrawingRecord* >(record) != nullptr) {
        _lastDrawingRecord = java_cast< DrawingRecord* >(record);
    }
    return record;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::RecordFactoryInputStream::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.RecordFactoryInputStream", 51);
    return c;
}

java::lang::Class* poi::hssf::record::RecordFactoryInputStream::getClass0()
{
    return class_();
}

