// Generated from /POI/java/org/apache/poi/hssf/record/AbstractEscherHolderRecord.java
#include <org/apache/poi/hssf/record/AbstractEscherHolderRecord.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/SecurityException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/System.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/List.hpp>
#include <org/apache/poi/ddf/DefaultEscherRecordFactory.hpp>
#include <org/apache/poi/ddf/EscherContainerRecord.hpp>
#include <org/apache/poi/ddf/EscherRecord.hpp>
#include <org/apache/poi/ddf/EscherRecordFactory.hpp>
#include <org/apache/poi/ddf/NullEscherSerializationListener.hpp>
#include <org/apache/poi/hssf/record/Record.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream.hpp>
#include <org/apache/poi/hssf/util/LazilyConcatenatedByteArray_.hpp>
#include <org/apache/poi/util/LittleEndian.hpp>
#include <Array.hpp>

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

org::apache::poi::hssf::record::AbstractEscherHolderRecord::AbstractEscherHolderRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::AbstractEscherHolderRecord::AbstractEscherHolderRecord() 
    : AbstractEscherHolderRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::hssf::record::AbstractEscherHolderRecord::AbstractEscherHolderRecord(RecordInputStream* in) 
    : AbstractEscherHolderRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

void org::apache::poi::hssf::record::AbstractEscherHolderRecord::init()
{
    rawDataContainer = new ::org::apache::poi::hssf::util::LazilyConcatenatedByteArray_();
}

bool& org::apache::poi::hssf::record::AbstractEscherHolderRecord::DESERIALISE()
{
    clinit();
    return DESERIALISE_;
}
bool org::apache::poi::hssf::record::AbstractEscherHolderRecord::DESERIALISE_;

void org::apache::poi::hssf::record::AbstractEscherHolderRecord::ctor()
{
    super::ctor();
    init();
    escherRecords = new ::java::util::ArrayList();
}

void org::apache::poi::hssf::record::AbstractEscherHolderRecord::ctor(RecordInputStream* in)
{
    super::ctor();
    init();
    escherRecords = new ::java::util::ArrayList();
    if(!DESERIALISE_) {
        npc(rawDataContainer)->concatenate(npc(in)->readRemainder());
    } else {
        auto data = npc(in)->readAllContinuedRemainder();
        convertToEscherRecords(0, npc(data)->length, data);
    }
}

void org::apache::poi::hssf::record::AbstractEscherHolderRecord::convertRawBytesToEscherRecords()
{
    if(!DESERIALISE_) {
        auto rawData = getRawData();
        convertToEscherRecords(0, npc(rawData)->length, rawData);
    }
}

void org::apache::poi::hssf::record::AbstractEscherHolderRecord::convertToEscherRecords(int32_t offset, int32_t size, ::int8_tArray* data)
{
    npc(escherRecords)->clear();
    ::org::apache::poi::ddf::EscherRecordFactory* recordFactory = new ::org::apache::poi::ddf::DefaultEscherRecordFactory();
    auto pos = offset;
    while (pos < offset + size) {
        auto r = npc(recordFactory)->createRecord(data, pos);
        auto bytesRead = npc(r)->fillFields(data, pos, recordFactory);
        npc(escherRecords)->add(static_cast< ::java::lang::Object* >(r));
        pos += bytesRead;
    }
}

java::lang::String* org::apache::poi::hssf::record::AbstractEscherHolderRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    auto const nl = ::java::lang::System::getProperty(u"line.separator"_j);
    npc(buffer)->append(::java::lang::StringBuilder().append(u'[')->append(getRecordName())
        ->append(u']')
        ->append(nl)->toString());
    if(npc(escherRecords)->size() == 0)
        npc(buffer)->append(::java::lang::StringBuilder().append(u"No Escher Records Decoded"_j)->append(nl)->toString());

    for (auto _i = npc(escherRecords)->iterator(); _i->hasNext(); ) {
        ::org::apache::poi::ddf::EscherRecord* r = java_cast< ::org::apache::poi::ddf::EscherRecord* >(_i->next());
        {
            npc(buffer)->append(static_cast< ::java::lang::Object* >(r));
        }
    }
    npc(buffer)->append(::java::lang::StringBuilder().append(u"[/"_j)->append(getRecordName())
        ->append(u']')
        ->append(nl)->toString());
    return npc(buffer)->toString();
}

int32_t org::apache::poi::hssf::record::AbstractEscherHolderRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    ::org::apache::poi::util::LittleEndian::putShort(data, int32_t(0) + offset, getSid());
    ::org::apache::poi::util::LittleEndian::putShort(data, int32_t(2) + offset, static_cast< int16_t >((getRecordSize() - int32_t(4))));
    auto rawData = getRawData();
    if(npc(escherRecords)->size() == 0 && rawData != nullptr) {
        ::org::apache::poi::util::LittleEndian::putShort(data, int32_t(0) + offset, getSid());
        ::org::apache::poi::util::LittleEndian::putShort(data, int32_t(2) + offset, static_cast< int16_t >((getRecordSize() - int32_t(4))));
        ::java::lang::System::arraycopy(rawData, 0, data, int32_t(4) + offset, npc(rawData)->length);
        return npc(rawData)->length + int32_t(4);
    }
    ::org::apache::poi::util::LittleEndian::putShort(data, int32_t(0) + offset, getSid());
    ::org::apache::poi::util::LittleEndian::putShort(data, int32_t(2) + offset, static_cast< int16_t >((getRecordSize() - int32_t(4))));
    auto pos = offset + int32_t(4);
    for (auto _i = npc(escherRecords)->iterator(); _i->hasNext(); ) {
        ::org::apache::poi::ddf::EscherRecord* r = java_cast< ::org::apache::poi::ddf::EscherRecord* >(_i->next());
        {
            pos += npc(r)->serialize(pos, data, new ::org::apache::poi::ddf::NullEscherSerializationListener());
        }
    }
    return getRecordSize();
}

int32_t org::apache::poi::hssf::record::AbstractEscherHolderRecord::getRecordSize()
{
    auto rawData = getRawData();
    if(npc(escherRecords)->size() == 0 && rawData != nullptr) {
        return npc(rawData)->length;
    }
    auto size = int32_t(0);
    for (auto _i = npc(escherRecords)->iterator(); _i->hasNext(); ) {
        ::org::apache::poi::ddf::EscherRecord* r = java_cast< ::org::apache::poi::ddf::EscherRecord* >(_i->next());
        {
            size += npc(r)->getRecordSize();
        }
    }
    return size;
}

org::apache::poi::hssf::record::AbstractEscherHolderRecord* org::apache::poi::hssf::record::AbstractEscherHolderRecord::clone()
{
    return java_cast< AbstractEscherHolderRecord* >(cloneViaReserialise());
}

void org::apache::poi::hssf::record::AbstractEscherHolderRecord::addEscherRecord(int32_t index, ::org::apache::poi::ddf::EscherRecord* element)
{
    npc(escherRecords)->add(index, element);
}

bool org::apache::poi::hssf::record::AbstractEscherHolderRecord::addEscherRecord(::org::apache::poi::ddf::EscherRecord* element)
{
    return npc(escherRecords)->add(static_cast< ::java::lang::Object* >(element));
}

java::util::List* org::apache::poi::hssf::record::AbstractEscherHolderRecord::getEscherRecords()
{
    return escherRecords;
}

void org::apache::poi::hssf::record::AbstractEscherHolderRecord::clearEscherRecords()
{
    npc(escherRecords)->clear();
}

org::apache::poi::ddf::EscherContainerRecord* org::apache::poi::hssf::record::AbstractEscherHolderRecord::getEscherContainer()
{
    for (auto _i = npc(escherRecords)->iterator(); _i->hasNext(); ) {
        ::org::apache::poi::ddf::EscherRecord* er = java_cast< ::org::apache::poi::ddf::EscherRecord* >(_i->next());
        {
            if(dynamic_cast< ::org::apache::poi::ddf::EscherContainerRecord* >(er) != nullptr) {
                return java_cast< ::org::apache::poi::ddf::EscherContainerRecord* >(er);
            }
        }
    }
    return nullptr;
}

org::apache::poi::ddf::EscherRecord* org::apache::poi::hssf::record::AbstractEscherHolderRecord::findFirstWithId(int16_t id)
{
    return findFirstWithId(id, getEscherRecords());
}

org::apache::poi::ddf::EscherRecord* org::apache::poi::hssf::record::AbstractEscherHolderRecord::findFirstWithId(int16_t id, ::java::util::List* records)
{
    for (auto _i = npc(records)->iterator(); _i->hasNext(); ) {
        ::org::apache::poi::ddf::EscherRecord* r = java_cast< ::org::apache::poi::ddf::EscherRecord* >(_i->next());
        {
            if(npc(r)->getRecordId() == id) {
                return r;
            }
        }
    }
    for (auto _i = npc(records)->iterator(); _i->hasNext(); ) {
        ::org::apache::poi::ddf::EscherRecord* r = java_cast< ::org::apache::poi::ddf::EscherRecord* >(_i->next());
        {
            if(npc(r)->isContainerRecord()) {
                auto found = findFirstWithId(id, npc(r)->getChildRecords());
                if(found != nullptr) {
                    return found;
                }
            }
        }
    }
    return nullptr;
}

org::apache::poi::ddf::EscherRecord* org::apache::poi::hssf::record::AbstractEscherHolderRecord::getEscherRecord(int32_t index)
{
    return java_cast< ::org::apache::poi::ddf::EscherRecord* >(npc(escherRecords)->get(index));
}

void org::apache::poi::hssf::record::AbstractEscherHolderRecord::join(AbstractEscherHolderRecord* record)
{
    npc(rawDataContainer)->concatenate(npc(record)->getRawData());
}

void org::apache::poi::hssf::record::AbstractEscherHolderRecord::processContinueRecord(::int8_tArray* record)
{
    npc(rawDataContainer)->concatenate(record);
}

int8_tArray* org::apache::poi::hssf::record::AbstractEscherHolderRecord::getRawData()
{
    return npc(rawDataContainer)->toArray_();
}

void org::apache::poi::hssf::record::AbstractEscherHolderRecord::setRawData(::int8_tArray* rawData)
{
    npc(rawDataContainer)->clear();
    npc(rawDataContainer)->concatenate(rawData);
}

void org::apache::poi::hssf::record::AbstractEscherHolderRecord::decode()
{
    if(nullptr == escherRecords || 0 == npc(escherRecords)->size()) {
        auto rawData = getRawData();
        convertToEscherRecords(0, npc(rawData)->length, rawData);
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::AbstractEscherHolderRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.AbstractEscherHolderRecord", 53);
    return c;
}

void org::apache::poi::hssf::record::AbstractEscherHolderRecord::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        {
            try {
                DESERIALISE_ = (::java::lang::System::getProperty(u"poi.deserialize.escher"_j) != nullptr);
            } catch (::java::lang::SecurityException* e) {
                DESERIALISE_ = false;
            }
        }
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

int8_tArray* org::apache::poi::hssf::record::AbstractEscherHolderRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* org::apache::poi::hssf::record::AbstractEscherHolderRecord::getClass0()
{
    return class_();
}

