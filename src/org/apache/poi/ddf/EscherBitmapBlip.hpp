// Generated from /POI/java/org/apache/poi/ddf/EscherBitmapBlip.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ddf/fwd-POI.hpp>
#include <org/apache/poi/ddf/EscherBlipRecord.hpp>

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

class poi::ddf::EscherBitmapBlip
    : public EscherBlipRecord
{

public:
    typedef EscherBlipRecord super;
    static constexpr int16_t RECORD_ID_JPEG { int16_t(-4067) };
    static constexpr int16_t RECORD_ID_PNG { int16_t(-4066) };
    static constexpr int16_t RECORD_ID_DIB { int16_t(-4065) };

private:
    static constexpr int32_t HEADER_SIZE { int32_t(8) };
    ::int8_tArray* field_1_UID {  };
    int8_t field_2_marker {  };

public:
    int32_t fillFields(::int8_tArray* data, int32_t offset, EscherRecordFactory* recordFactory) override;
    int32_t serialize(int32_t offset, ::int8_tArray* data, EscherSerializationListener* listener) override;
    int32_t getRecordSize() override;
    virtual ::int8_tArray* getUID();
    virtual void setUID(::int8_tArray* field_1_UID);
    virtual int8_t getMarker();
    virtual void setMarker(int8_t field_2_marker);

public: /* protected */
    ::java::lang::ObjectArrayArray* getAttributeMap() override;

    // Generated

public:
    EscherBitmapBlip();
protected:
    void ctor();
    EscherBitmapBlip(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    void init();

public: /* protected */
    virtual int32_t fillFields(::int8_tArray* data, EscherRecordFactory* f);

public:
    virtual ::int8_tArray* serialize();
    virtual int32_t serialize(int32_t offset, ::int8_tArray* data);

private:
    virtual ::java::lang::Class* getClass0();
};
