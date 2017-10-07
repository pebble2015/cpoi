// Generated from /POI/java/org/apache/poi/ddf/EscherClientAnchorRecord.java

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

class org::apache::poi::ddf::EscherClientAnchorRecord
    : public EscherRecord
{

public:
    typedef EscherRecord super;
    static constexpr int16_t RECORD_ID { int16_t(-4080) };

private:
    static ::java::lang::String* RECORD_DESCRIPTION_;
    int16_t field_1_flag {  };
    int16_t field_2_col1 {  };
    int16_t field_3_dx1 {  };
    int16_t field_4_row1 {  };
    int16_t field_5_dy1 {  };
    int16_t field_6_col2 {  };
    int16_t field_7_dx2 {  };
    int16_t field_8_row2 {  };
    int16_t field_9_dy2 {  };
    ::int8_tArray* remainingData {  };
    bool shortRecord {  };

public:
    int32_t fillFields(::int8_tArray* data, int32_t offset, EscherRecordFactory* recordFactory) override;
    int32_t serialize(int32_t offset, ::int8_tArray* data, EscherSerializationListener* listener) override;
    int32_t getRecordSize() override;
    int16_t getRecordId() override;
    ::java::lang::String* getRecordName() override;
    virtual int16_t getFlag();
    virtual void setFlag(int16_t field_1_flag);
    virtual int16_t getCol1();
    virtual void setCol1(int16_t field_2_col1);
    virtual int16_t getDx1();
    virtual void setDx1(int16_t field_3_dx1);
    virtual int16_t getRow1();
    virtual void setRow1(int16_t field_4_row1);
    virtual int16_t getDy1();
    virtual void setDy1(int16_t field_5_dy1);
    virtual int16_t getCol2();
    virtual void setCol2(int16_t field_6_col2);
    virtual int16_t getDx2();
    virtual void setDx2(int16_t field_7_dx2);
    virtual int16_t getRow2();
    virtual void setRow2(int16_t field_8_row2);
    virtual int16_t getDy2();
    virtual void setDy2(int16_t field_9_dy2);
    virtual ::int8_tArray* getRemainingData();
    virtual void setRemainingData(::int8_tArray* remainingData);

public: /* protected */
    ::java::lang::ObjectArrayArray* getAttributeMap() override;

    // Generated

public:
    EscherClientAnchorRecord();
protected:
    void ctor();
    EscherClientAnchorRecord(const ::default_init_tag&);


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
