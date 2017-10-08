// Generated from /POI/java/org/apache/poi/hpsf/UnicodeString.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hpsf/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::hpsf::UnicodeString
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static ::poi::util::POILogger* LOG_;
    ::int8_tArray* _value {  };
protected:
    void ctor();

public: /* package */
    virtual void read(::poi::util::LittleEndianByteArrayInputStream* lei);
    virtual ::int8_tArray* getValue();
    virtual ::java::lang::String* toJavaString();
    virtual void setJavaValue(::java::lang::String* string) /* throws(UnsupportedEncodingException) */;
    virtual int32_t write(::java::io::OutputStream* out) /* throws(IOException) */;

    // Generated
    UnicodeString();
protected:
    UnicodeString(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static ::poi::util::POILogger*& LOG();
    virtual ::java::lang::Class* getClass0();
};
