// Generated from /POI/java/org/apache/poi/ddf/EscherSplitMenuColorsRecord.java

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

class poi::ddf::EscherSplitMenuColorsRecord
    : public EscherRecord
{

public:
    typedef EscherRecord super;
    static constexpr int16_t RECORD_ID { int16_t(-3810) };

private:
    static ::java::lang::String* RECORD_DESCRIPTION_;
    int32_t field_1_color1 {  };
    int32_t field_2_color2 {  };
    int32_t field_3_color3 {  };
    int32_t field_4_color4 {  };

public:
    int32_t fillFields(::int8_tArray* data, int32_t offset, EscherRecordFactory* recordFactory) override;
    int32_t serialize(int32_t offset, ::int8_tArray* data, EscherSerializationListener* listener) override;
    int32_t getRecordSize() override;
    int16_t getRecordId() override;
    ::java::lang::String* getRecordName() override;
    virtual int32_t getColor1();
    virtual void setColor1(int32_t field_1_color1);
    virtual int32_t getColor2();
    virtual void setColor2(int32_t field_2_color2);
    virtual int32_t getColor3();
    virtual void setColor3(int32_t field_3_color3);
    virtual int32_t getColor4();
    virtual void setColor4(int32_t field_4_color4);

public: /* protected */
    ::java::lang::ObjectArrayArray* getAttributeMap() override;

    // Generated

public:
    EscherSplitMenuColorsRecord();
protected:
    EscherSplitMenuColorsRecord(const ::default_init_tag&);


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
