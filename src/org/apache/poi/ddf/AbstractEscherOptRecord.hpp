// Generated from /POI/java/org/apache/poi/ddf/AbstractEscherOptRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
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

class org::apache::poi::ddf::AbstractEscherOptRecord
    : public EscherRecord
{

public:
    typedef EscherRecord super;

private:
    ::java::util::List* properties {  };

public:
    virtual void addEscherProperty(EscherProperty* prop);
    int32_t fillFields(::int8_tArray* data, int32_t offset, EscherRecordFactory* recordFactory) override;
    virtual ::java::util::List* getEscherProperties();
    virtual EscherProperty* getEscherProperty(int32_t index);

private:
    int32_t getPropertiesSize();

public:
    int32_t getRecordSize() override;
    virtual /* <T extends EscherProperty> */EscherProperty* lookup(int32_t propId);
    int32_t serialize(int32_t offset, ::int8_tArray* data, EscherSerializationListener* listener) override;
    virtual void sortProperties();
    virtual void setEscherProperty(EscherProperty* value);
    virtual void removeEscherProperty(int32_t num);

public: /* protected */
    ::java::lang::ObjectArrayArray* getAttributeMap() override;

    // Generated

public:
    AbstractEscherOptRecord();
protected:
    void ctor();
    AbstractEscherOptRecord(const ::default_init_tag&);


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
    friend class AbstractEscherOptRecord_sortProperties_1;
};
