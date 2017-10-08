// Generated from /POI/java/org/apache/poi/hpsf/Property.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hpsf/fwd-POI.hpp>
#include <org/apache/poi/hpsf/wellknown/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::hpsf::Property
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
    static constexpr int32_t DEFAULT_CODEPAGE { int32_t(1252) };

private:
    static ::poi::util::POILogger* LOG_;
    int64_t id {  };
    int64_t type {  };
    ::java::lang::Object* value {  };
protected:
    void ctor();
    void ctor(Property* p);
    void ctor(int64_t id, int64_t type, ::java::lang::Object* value);
    void ctor(int64_t id, ::int8_tArray* src, int64_t offset, int32_t length, int32_t codepage) /* throws(UnsupportedEncodingException) */;
    void ctor(int64_t id, ::poi::util::LittleEndianByteArrayInputStream* leis, int32_t length, int32_t codepage) /* throws(UnsupportedEncodingException) */;

public:
    virtual int64_t getID();
    virtual void setID(int64_t id);
    virtual int64_t getType();
    virtual void setType(int64_t type);
    virtual ::java::lang::Object* getValue();
    virtual void setValue(::java::lang::Object* value);

public: /* protected */
    virtual int32_t getSize(int32_t codepage) /* throws(WritingNotSupportedException) */;

public:
    bool equals(::java::lang::Object* o) override;

private:
    static int32_t unpaddedLength(::int8_tArray* buf);
    bool typesAreEqual(int64_t t1, int64_t t2);

public:
    int32_t hashCode() override;
    ::java::lang::String* toString() override;
    virtual ::java::lang::String* toString(int32_t codepage, ::poi::hpsf::wellknown::PropertyIDMap* idMap);

private:
    ::java::lang::String* getVariantName();
    ::java::lang::String* decodeValueFromID();

public:
    virtual int32_t write(::java::io::OutputStream* out, int32_t codepage) /* throws(IOException, WritingNotSupportedException) */;

    // Generated
    Property();
    Property(Property* p);
    Property(int64_t id, int64_t type, ::java::lang::Object* value);
    Property(int64_t id, ::int8_tArray* src, int64_t offset, int32_t length, int32_t codepage);
    Property(int64_t id, ::poi::util::LittleEndianByteArrayInputStream* leis, int32_t length, int32_t codepage);
protected:
    Property(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static ::poi::util::POILogger*& LOG();
    virtual ::java::lang::Class* getClass0();
};
