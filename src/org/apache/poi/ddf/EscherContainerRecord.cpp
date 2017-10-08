// Generated from /POI/java/org/apache/poi/ddf/EscherContainerRecord.java
#include <org/apache/poi/ddf/EscherContainerRecord.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Boolean.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Cloneable.hpp>
#include <java/lang/IllegalStateException.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/Collection.hpp>
#include <java/util/Collections.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/List.hpp>
#include <org/apache/poi/ddf/EscherRecord.hpp>
#include <org/apache/poi/ddf/EscherRecordFactory.hpp>
#include <org/apache/poi/ddf/EscherSerializationListener.hpp>
#include <org/apache/poi/util/HexDump.hpp>
#include <org/apache/poi/util/LittleEndian.hpp>
#include <org/apache/poi/util/POILogFactory.hpp>
#include <org/apache/poi/util/POILogger.hpp>
#include <Array.hpp>
#include <SubArray.hpp>
#include <ObjectArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace io
    {
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
    } // io

    namespace lang
    {
typedef ::SubArray< ::java::lang::Cloneable, ObjectArray > CloneableArray;
typedef ::SubArray< ::java::lang::ObjectArray, CloneableArray, ::java::io::SerializableArray > ObjectArrayArray;
    } // lang
} // java

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

poi::ddf::EscherContainerRecord::EscherContainerRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ddf::EscherContainerRecord::EscherContainerRecord()
    : EscherContainerRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void poi::ddf::EscherContainerRecord::ctor()
{
    super::ctor();
    init();
}

void poi::ddf::EscherContainerRecord::init()
{
    _childRecords = new ::java::util::ArrayList();
}

constexpr int16_t poi::ddf::EscherContainerRecord::DGG_CONTAINER;

constexpr int16_t poi::ddf::EscherContainerRecord::BSTORE_CONTAINER;

constexpr int16_t poi::ddf::EscherContainerRecord::DG_CONTAINER;

constexpr int16_t poi::ddf::EscherContainerRecord::SPGR_CONTAINER;

constexpr int16_t poi::ddf::EscherContainerRecord::SP_CONTAINER;

constexpr int16_t poi::ddf::EscherContainerRecord::SOLVER_CONTAINER;

poi::util::POILogger*& poi::ddf::EscherContainerRecord::log()
{
    clinit();
    return log_;
}
poi::util::POILogger* poi::ddf::EscherContainerRecord::log_;

int32_t poi::ddf::EscherContainerRecord::fillFields(::int8_tArray* data, int32_t pOffset, EscherRecordFactory* recordFactory)
{
    auto bytesRemaining = readHeader(data, pOffset);
    auto bytesWritten = int32_t(8);
    auto offset = pOffset + int32_t(8);
    while (bytesRemaining > 0 && offset < npc(data)->length) {
        auto child = npc(recordFactory)->createRecord(data, offset);
        auto childBytesWritten = npc(child)->fillFields(data, offset, recordFactory);
        bytesWritten += childBytesWritten;
        offset += childBytesWritten;
        bytesRemaining -= childBytesWritten;
        addChildRecord(child);
        if(offset >= npc(data)->length && bytesRemaining > 0) {
            _remainingLength = bytesRemaining;
            if(npc(log_)->check(::poi::util::POILogger::WARN)) {
                npc(log_)->log(::poi::util::POILogger::WARN, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(::java::lang::StringBuilder().append(u"Not enough Escher data: "_j)->append(bytesRemaining)
                    ->append(u" bytes remaining but no space left"_j)->toString())}));
            }
        }
    }
    return bytesWritten;
}

int32_t poi::ddf::EscherContainerRecord::serialize(int32_t offset, ::int8_tArray* data, EscherSerializationListener* listener)
{
    npc(listener)->beforeRecordSerialize(offset, getRecordId(), this);
    ::poi::util::LittleEndian::putShort(data, offset, getOptions());
    ::poi::util::LittleEndian::putShort(data, offset + int32_t(2), getRecordId());
    auto remainingBytes = int32_t(0);
    for (auto _i = this->iterator(); _i->hasNext(); ) {
        EscherRecord* r = java_cast< EscherRecord* >(_i->next());
        {
            remainingBytes += npc(r)->getRecordSize();
        }
    }
    remainingBytes += _remainingLength;
    ::poi::util::LittleEndian::putInt(data, offset + int32_t(4), remainingBytes);
    auto pos = offset + int32_t(8);
    for (auto _i = this->iterator(); _i->hasNext(); ) {
        EscherRecord* r = java_cast< EscherRecord* >(_i->next());
        {
            pos += npc(r)->serialize(pos, data, listener);
        }
    }
    npc(listener)->afterRecordSerialize(pos, getRecordId(), pos - offset, this);
    return pos - offset;
}

int32_t poi::ddf::EscherContainerRecord::getRecordSize()
{
    auto childRecordsSize = int32_t(0);
    for (auto _i = this->iterator(); _i->hasNext(); ) {
        EscherRecord* r = java_cast< EscherRecord* >(_i->next());
        {
            childRecordsSize += npc(r)->getRecordSize();
        }
    }
    return int32_t(8) + childRecordsSize;
}

bool poi::ddf::EscherContainerRecord::hasChildOfType(int16_t recordId)
{
    for (auto _i = this->iterator(); _i->hasNext(); ) {
        EscherRecord* r = java_cast< EscherRecord* >(_i->next());
        {
            if(npc(r)->getRecordId() == recordId) {
                return true;
            }
        }
    }
    return false;
}

poi::ddf::EscherRecord* poi::ddf::EscherContainerRecord::getChild(int32_t index)
{
    return java_cast< EscherRecord* >(npc(_childRecords)->get(index));
}

java::util::List* poi::ddf::EscherContainerRecord::getChildRecords()
{
    return new ::java::util::ArrayList(static_cast< ::java::util::Collection* >(_childRecords));
}

java::util::Iterator* poi::ddf::EscherContainerRecord::getChildIterator()
{
    return iterator();
}

java::util::Iterator* poi::ddf::EscherContainerRecord::iterator()
{
    return npc(::java::util::Collections::unmodifiableList(_childRecords))->iterator();
}

void poi::ddf::EscherContainerRecord::setChildRecords(::java::util::List* childRecords)
{
    if(childRecords == _childRecords) {
        throw new ::java::lang::IllegalStateException(u"Child records private data member has escaped"_j);
    }
    npc(_childRecords)->clear();
    npc(_childRecords)->addAll(static_cast< ::java::util::Collection* >(childRecords));
}

bool poi::ddf::EscherContainerRecord::removeChildRecord(EscherRecord* toBeRemoved)
{
    return npc(_childRecords)->remove(static_cast< ::java::lang::Object* >(toBeRemoved));
}

java::util::List* poi::ddf::EscherContainerRecord::getChildContainers()
{
    ::java::util::List* containers = new ::java::util::ArrayList();
    for (auto _i = this->iterator(); _i->hasNext(); ) {
        EscherRecord* r = java_cast< EscherRecord* >(_i->next());
        {
            if(dynamic_cast< EscherContainerRecord* >(r) != nullptr) {
                npc(containers)->add(static_cast< ::java::lang::Object* >(java_cast< EscherContainerRecord* >(r)));
            }
        }
    }
    return containers;
}

java::lang::String* poi::ddf::EscherContainerRecord::getRecordName()
{
    switch (getRecordId()) {
    case DGG_CONTAINER:
        return u"DggContainer"_j;
    case BSTORE_CONTAINER:
        return u"BStoreContainer"_j;
    case DG_CONTAINER:
        return u"DgContainer"_j;
    case SPGR_CONTAINER:
        return u"SpgrContainer"_j;
    case SP_CONTAINER:
        return u"SpContainer"_j;
    case SOLVER_CONTAINER:
        return u"SolverContainer"_j;
    default:
        return ::java::lang::StringBuilder().append(u"Container 0x"_j)->append(::poi::util::HexDump::toHex(getRecordId()))->toString();
    }

}

void poi::ddf::EscherContainerRecord::display(::java::io::PrintWriter* w, int32_t indent)
{
    super::display(w, indent);
    for (auto _i = this->iterator(); _i->hasNext(); ) {
        EscherRecord* escherRecord = java_cast< EscherRecord* >(_i->next());
        {
            npc(escherRecord)->display(w, indent + int32_t(1));
        }
    }
}

void poi::ddf::EscherContainerRecord::addChildRecord(EscherRecord* record)
{
    npc(_childRecords)->add(static_cast< ::java::lang::Object* >(record));
}

void poi::ddf::EscherContainerRecord::addChildBefore(EscherRecord* record, int32_t insertBeforeRecordId)
{
    auto idx = int32_t(0);
    for (auto _i = this->iterator(); _i->hasNext(); ) {
        EscherRecord* rec = java_cast< EscherRecord* >(_i->next());
        {
            if(npc(rec)->getRecordId() == static_cast< int16_t >(insertBeforeRecordId)) {
                break;
            }
            idx++;
        }
    }
    npc(_childRecords)->add(idx, record);
}

/* <T extends EscherRecord> */poi::ddf::EscherRecord* poi::ddf::EscherContainerRecord::getChildById(int16_t recordId)
{
    for (auto _i = this->iterator(); _i->hasNext(); ) {
        EscherRecord* childRecord = java_cast< EscherRecord* >(_i->next());
        {
            if(npc(childRecord)->getRecordId() == recordId) {
                auto const result = java_cast< EscherRecord* >(childRecord);
                return result;
            }
        }
    }
    return nullptr;
}

void poi::ddf::EscherContainerRecord::getRecordsById(int16_t recordId, ::java::util::List* out)
{
    for (auto _i = this->iterator(); _i->hasNext(); ) {
        EscherRecord* r = java_cast< EscherRecord* >(_i->next());
        {
            if(dynamic_cast< EscherContainerRecord* >(r) != nullptr) {
                auto c = java_cast< EscherContainerRecord* >(r);
                npc(c)->getRecordsById(recordId, out);
            } else if(npc(r)->getRecordId() == recordId) {
                npc(out)->add(static_cast< ::java::lang::Object* >(r));
            }
        }
    }
}

java::lang::ObjectArrayArray* poi::ddf::EscherContainerRecord::getAttributeMap()
{
    ::java::util::List* chList = new ::java::util::ArrayList(npc(_childRecords)->size() * int32_t(2) + int32_t(2));
    npc(chList)->add(static_cast< ::java::lang::Object* >(u"children"_j));
    npc(chList)->add(::java::lang::Integer::valueOf(npc(_childRecords)->size()));
    auto count = int32_t(0);
    for (auto _i = this->iterator(); _i->hasNext(); ) {
        EscherRecord* record = java_cast< EscherRecord* >(_i->next());
        {
            npc(chList)->add(static_cast< ::java::lang::Object* >(::java::lang::StringBuilder().append(u"Child "_j)->append(count)->toString()));
            npc(chList)->add(static_cast< ::java::lang::Object* >(record));
            count++;
        }
    }
    return new ::java::lang::ObjectArrayArray({
        (new ::java::lang::ObjectArray({
        static_cast< ::java::lang::Object* >(u"isContainer"_j)
        , static_cast< ::java::lang::Object* >(::java::lang::Boolean::valueOf(isContainerRecord()))
    }))
        , npc(chList)->toArray_()
    });
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ddf::EscherContainerRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ddf.EscherContainerRecord", 40);
    return c;
}

void poi::ddf::EscherContainerRecord::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        log_ = ::poi::util::POILogFactory::getLogger(static_cast< ::java::lang::Class* >(EscherContainerRecord::class_()));
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

int32_t poi::ddf::EscherContainerRecord::fillFields(::int8_tArray* data, EscherRecordFactory* f)
{
    return super::fillFields(data, f);
}

int8_tArray* poi::ddf::EscherContainerRecord::serialize()
{
    return super::serialize();
}

int32_t poi::ddf::EscherContainerRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

java::lang::Class* poi::ddf::EscherContainerRecord::getClass0()
{
    return class_();
}

