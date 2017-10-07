// Generated from /POI/java/org/apache/poi/ddf/EscherContainerRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/ddf/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/ddf/EscherRecord.hpp>
#include <java/lang/Iterable.hpp>

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

struct default_init_tag;

class org::apache::poi::ddf::EscherContainerRecord final
    : public EscherRecord
    , public ::java::lang::Iterable
{

public:
    typedef EscherRecord super;
    static constexpr int16_t DGG_CONTAINER { int16_t(-4096) };
    static constexpr int16_t BSTORE_CONTAINER { int16_t(-4095) };
    static constexpr int16_t DG_CONTAINER { int16_t(-4094) };
    static constexpr int16_t SPGR_CONTAINER { int16_t(-4093) };
    static constexpr int16_t SP_CONTAINER { int16_t(-4092) };
    static constexpr int16_t SOLVER_CONTAINER { int16_t(-4091) };

private:
    static ::org::apache::poi::util::POILogger* log_;
    int32_t _remainingLength {  };
    ::java::util::List* _childRecords {  };

public:
    int32_t fillFields(::int8_tArray* data, int32_t pOffset, EscherRecordFactory* recordFactory) override;
    int32_t serialize(int32_t offset, ::int8_tArray* data, EscherSerializationListener* listener) override;
    int32_t getRecordSize() override;
    bool hasChildOfType(int16_t recordId);
    EscherRecord* getChild(int32_t index) override;
    ::java::util::List* getChildRecords() override;
    ::java::util::Iterator* getChildIterator();
    ::java::util::Iterator* iterator() override;
    void setChildRecords(::java::util::List* childRecords) override;
    bool removeChildRecord(EscherRecord* toBeRemoved);
    ::java::util::List* getChildContainers();
    ::java::lang::String* getRecordName() override;
    void display(::java::io::PrintWriter* w, int32_t indent) override;
    void addChildRecord(EscherRecord* record);
    void addChildBefore(EscherRecord* record, int32_t insertBeforeRecordId);
    /* <T extends EscherRecord> */EscherRecord* getChildById(int16_t recordId);
    void getRecordsById(int16_t recordId, ::java::util::List* out);

public: /* protected */
    ::java::lang::ObjectArrayArray* getAttributeMap() override;

    // Generated

public:
    EscherContainerRecord();
protected:
    void ctor();
    EscherContainerRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    void init();

public: /* protected */
    virtual int32_t fillFields(::int8_tArray* data, EscherRecordFactory* f);

public:
    virtual ::int8_tArray* serialize();
    virtual int32_t serialize(int32_t offset, ::int8_tArray* data);

private:
    static ::org::apache::poi::util::POILogger*& log();
    virtual ::java::lang::Class* getClass0();
};
