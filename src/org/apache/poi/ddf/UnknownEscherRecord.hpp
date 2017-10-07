// Generated from /POI/java/org/apache/poi/ddf/UnknownEscherRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/ddf/fwd-POI.hpp>
#include <org/apache/poi/ddf/EscherRecord.hpp>
#include <java/lang/Cloneable.hpp>

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

class org::apache::poi::ddf::UnknownEscherRecord final
    : public EscherRecord
    , public virtual ::java::lang::Cloneable
{

public:
    typedef EscherRecord super;

private:
    static ::int8_tArray* NO_BYTES_;
    ::int8_tArray* thedata {  };
    ::java::util::List* _childRecords {  };
protected:
    void ctor();

public:
    int32_t fillFields(::int8_tArray* data, int32_t offset, EscherRecordFactory* recordFactory) override;
    int32_t serialize(int32_t offset, ::int8_tArray* data, EscherSerializationListener* listener) override;
    ::int8_tArray* getData();
    int32_t getRecordSize() override;
    ::java::util::List* getChildRecords() override;
    void setChildRecords(::java::util::List* childRecords) override;
    UnknownEscherRecord* clone() override;
    ::java::lang::String* getRecordName() override;
    void addChildRecord(EscherRecord* childRecord);

public: /* protected */
    ::java::lang::ObjectArrayArray* getAttributeMap() override;

    // Generated

public:
    UnknownEscherRecord();
protected:
    UnknownEscherRecord(const ::default_init_tag&);


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
    static ::int8_tArray*& NO_BYTES();
    virtual ::java::lang::Class* getClass0();
};
