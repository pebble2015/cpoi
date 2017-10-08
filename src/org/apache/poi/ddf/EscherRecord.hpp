// Generated from /POI/java/org/apache/poi/ddf/EscherRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/ddf/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>
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

class poi::ddf::EscherRecord
    : public virtual ::java::lang::Object
    , public virtual ::java::lang::Cloneable
{

public:
    typedef ::java::lang::Object super;

private:
    static ::poi::util::BitField* fInstance_;
    static ::poi::util::BitField* fVersion_;
    int16_t _options {  };
    int16_t _recordId {  };
protected:
    void ctor();

public: /* protected */
    virtual int32_t fillFields(::int8_tArray* data, EscherRecordFactory* f);

public:
    virtual int32_t fillFields(::int8_tArray* data, int32_t offset, EscherRecordFactory* recordFactory) = 0;

public: /* protected */
    virtual int32_t readHeader(::int8_tArray* data, int32_t offset);
    static int16_t readInstance(::int8_tArray* data, int32_t offset);

public:
    virtual bool isContainerRecord();
    virtual int16_t getOptions();
    virtual void setOptions(int16_t options);
    virtual ::int8_tArray* serialize();
    virtual int32_t serialize(int32_t offset, ::int8_tArray* data);
    virtual int32_t serialize(int32_t offset, ::int8_tArray* data, EscherSerializationListener* listener) = 0;
    virtual int32_t getRecordSize() = 0;
    virtual int16_t getRecordId();
    virtual void setRecordId(int16_t recordId);
    virtual ::java::util::List* getChildRecords();
    virtual void setChildRecords(::java::util::List* childRecords);
    EscherRecord* clone() /* throws(CloneNotSupportedException) */ override;
    virtual EscherRecord* getChild(int32_t index);
    virtual void display(::java::io::PrintWriter* w, int32_t indent);
    virtual ::java::lang::String* getRecordName() = 0;
    virtual int16_t getInstance();
    virtual void setInstance(int16_t value);
    virtual int16_t getVersion();
    virtual void setVersion(int16_t value);
    virtual ::java::lang::String* toXml();
    ::java::lang::String* toXml(::java::lang::String* tab);
    ::java::lang::String* toString() override;

private:
    static bool appendValue(::java::lang::StringBuilder* sb, ::java::lang::Object* value, bool toXML, ::java::lang::String* childTab);

public: /* protected */
    virtual ::java::lang::ObjectArrayArray* getAttributeMap() = 0;

private:
    static ::java::lang::String* capitalizeAndTrim(::java::lang::String* str);
    static void escapeXML(::java::lang::String* s, ::java::lang::StringBuilder* out);

    // Generated

public:
    EscherRecord();
protected:
    EscherRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static ::poi::util::BitField*& fInstance();
    static ::poi::util::BitField*& fVersion();
    virtual ::java::lang::Class* getClass0();
};
