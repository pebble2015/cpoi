// Generated from /POI/java/org/apache/poi/ddf/EscherClientDataRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ddf/fwd-POI.hpp>
#include <org/apache/poi/ddf/EscherRecord.hpp>

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

class poi::ddf::EscherClientDataRecord
    : public EscherRecord
{

public:
    typedef EscherRecord super;
    static constexpr int16_t RECORD_ID { int16_t(-4079) };

private:
    static ::java::lang::String* RECORD_DESCRIPTION_;
    ::int8_tArray* remainingData {  };

public:
    int32_t fillFields(::int8_tArray* data, int32_t offset, EscherRecordFactory* recordFactory) override;
    int32_t serialize(int32_t offset, ::int8_tArray* data, EscherSerializationListener* listener) override;
    int32_t getRecordSize() override;
    int16_t getRecordId() override;
    ::java::lang::String* getRecordName() override;
    virtual ::int8_tArray* getRemainingData();
    virtual void setRemainingData(::int8_tArray* remainingData);

public: /* protected */
    ::java::lang::ObjectArrayArray* getAttributeMap() override;

    // Generated

public:
    EscherClientDataRecord();
protected:
    EscherClientDataRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

public: /* protected */
    virtual int32_t fillFields(::int8_tArray* data, EscherRecordFactory* f);

public:
    virtual ::int8_tArray* serialize();
    virtual int32_t serialize(int32_t offset, ::int8_tArray* data);
    static ::java::lang::String*& RECORD_DESCRIPTION();

private:
    virtual ::java::lang::Class* getClass0();
};
