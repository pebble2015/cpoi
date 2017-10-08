// Generated from /POI/java/org/apache/poi/ddf/EscherSpRecord.java

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

class poi::ddf::EscherSpRecord
    : public EscherRecord
{

public:
    typedef EscherRecord super;
    static constexpr int16_t RECORD_ID { int16_t(-4086) };

private:
    static ::java::lang::String* RECORD_DESCRIPTION_;

public:
    static constexpr int32_t FLAG_GROUP { int32_t(1) };
    static constexpr int32_t FLAG_CHILD { int32_t(2) };
    static constexpr int32_t FLAG_PATRIARCH { int32_t(4) };
    static constexpr int32_t FLAG_DELETED { int32_t(8) };
    static constexpr int32_t FLAG_OLESHAPE { int32_t(16) };
    static constexpr int32_t FLAG_HAVEMASTER { int32_t(32) };
    static constexpr int32_t FLAG_FLIPHORIZ { int32_t(64) };
    static constexpr int32_t FLAG_FLIPVERT { int32_t(128) };
    static constexpr int32_t FLAG_CONNECTOR { int32_t(256) };
    static constexpr int32_t FLAG_HAVEANCHOR { int32_t(512) };
    static constexpr int32_t FLAG_BACKGROUND { int32_t(1024) };
    static constexpr int32_t FLAG_HASSHAPETYPE { int32_t(2048) };

private:
    int32_t field_1_shapeId {  };
    int32_t field_2_flags {  };

public:
    int32_t fillFields(::int8_tArray* data, int32_t offset, EscherRecordFactory* recordFactory) override;
    int32_t serialize(int32_t offset, ::int8_tArray* data, EscherSerializationListener* listener) override;
    int32_t getRecordSize() override;
    int16_t getRecordId() override;
    ::java::lang::String* getRecordName() override;

private:
    ::java::lang::String* decodeFlags(int32_t flags);

public:
    virtual int32_t getShapeId();
    virtual void setShapeId(int32_t field_1_shapeId);
    virtual int32_t getFlags();
    virtual void setFlags(int32_t field_2_flags);
    virtual int16_t getShapeType();
    virtual void setShapeType(int16_t value);

public: /* protected */
    ::java::lang::ObjectArrayArray* getAttributeMap() override;

    // Generated

public:
    EscherSpRecord();
protected:
    EscherSpRecord(const ::default_init_tag&);


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
