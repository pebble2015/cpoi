// Generated from /POI/java/org/apache/poi/ddf/EscherBSERecord.java

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

class org::apache::poi::ddf::EscherBSERecord final
    : public EscherRecord
{

public:
    typedef EscherRecord super;
    static constexpr int16_t RECORD_ID { int16_t(-4089) };

private:
    static ::java::lang::String* RECORD_DESCRIPTION_;

public:
    static constexpr int8_t BT_ERROR { int8_t(0) };
    static constexpr int8_t BT_UNKNOWN { int8_t(1) };
    static constexpr int8_t BT_EMF { int8_t(2) };
    static constexpr int8_t BT_WMF { int8_t(3) };
    static constexpr int8_t BT_PICT { int8_t(4) };
    static constexpr int8_t BT_JPEG { int8_t(5) };
    static constexpr int8_t BT_PNG { int8_t(6) };
    static constexpr int8_t BT_DIB { int8_t(7) };

private:
    int8_t field_1_blipTypeWin32 {  };
    int8_t field_2_blipTypeMacOS {  };
    ::int8_tArray* field_3_uid {  };
    int16_t field_4_tag {  };
    int32_t field_5_size {  };
    int32_t field_6_ref {  };
    int32_t field_7_offset {  };
    int8_t field_8_usage {  };
    int8_t field_9_name {  };
    int8_t field_10_unused2 {  };
    int8_t field_11_unused3 {  };
    EscherBlipRecord* field_12_blipRecord {  };
    ::int8_tArray* _remainingData {  };
protected:
    void ctor();

public:
    int32_t fillFields(::int8_tArray* data, int32_t offset, EscherRecordFactory* recordFactory) override;
    int32_t serialize(int32_t offset, ::int8_tArray* data, EscherSerializationListener* listener) override;
    int32_t getRecordSize() override;
    ::java::lang::String* getRecordName() override;
    int8_t getBlipTypeWin32();
    void setBlipTypeWin32(int8_t blipTypeWin32);
    int8_t getBlipTypeMacOS();
    void setBlipTypeMacOS(int8_t blipTypeMacOS);
    ::int8_tArray* getUid();
    void setUid(::int8_tArray* uid);
    int16_t getTag();
    void setTag(int16_t tag);
    int32_t getSize();
    void setSize(int32_t size);
    int32_t getRef();
    void setRef(int32_t ref);
    int32_t getOffset();
    void setOffset(int32_t offset);
    int8_t getUsage();
    void setUsage(int8_t usage);
    int8_t getName();
    void setName(int8_t name);
    int8_t getUnused2();
    void setUnused2(int8_t unused2);
    int8_t getUnused3();
    void setUnused3(int8_t unused3);
    EscherBlipRecord* getBlipRecord();
    void setBlipRecord(EscherBlipRecord* blipRecord);
    ::int8_tArray* getRemainingData();
    void setRemainingData(::int8_tArray* remainingData);
    static ::java::lang::String* getBlipType(int8_t b);

public: /* protected */
    ::java::lang::ObjectArrayArray* getAttributeMap() override;

    // Generated

public:
    EscherBSERecord();
protected:
    EscherBSERecord(const ::default_init_tag&);


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
    static ::java::lang::String*& RECORD_DESCRIPTION();

private:
    virtual ::java::lang::Class* getClass0();
};
