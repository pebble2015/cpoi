// Generated from /POI/java/org/apache/poi/ddf/EscherBlipRecord.java

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

class poi::ddf::EscherBlipRecord
    : public EscherRecord
{

public:
    typedef EscherRecord super;
    static constexpr int16_t RECORD_ID_START { int16_t(-4072) };
    static constexpr int16_t RECORD_ID_END { int16_t(-3817) };

private:
    static ::java::lang::String* RECORD_DESCRIPTION_;
    static constexpr int32_t HEADER_SIZE { int32_t(8) };
    ::int8_tArray* field_pictureData {  };
protected:
    void ctor();

public:
    int32_t fillFields(::int8_tArray* data, int32_t offset, EscherRecordFactory* recordFactory) override;
    int32_t serialize(int32_t offset, ::int8_tArray* data, EscherSerializationListener* listener) override;
    int32_t getRecordSize() override;
    ::java::lang::String* getRecordName() override;
    virtual ::int8_tArray* getPicturedata();
    virtual void setPictureData(::int8_tArray* pictureData);
    virtual void setPictureData(::int8_tArray* pictureData, int32_t offset, int32_t length);

public: /* protected */
    ::java::lang::ObjectArrayArray* getAttributeMap() override;

    // Generated

public:
    EscherBlipRecord();
protected:
    EscherBlipRecord(const ::default_init_tag&);


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
