// Generated from /POI/java/org/apache/poi/hpsf/CodePageString.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hpsf/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::poi::hpsf::CodePageString
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static ::org::apache::poi::util::POILogger* LOG_;
    ::int8_tArray* _value {  };
protected:
    void ctor();

public: /* package */
    virtual void read(::org::apache::poi::util::LittleEndianByteArrayInputStream* lei);
    virtual ::java::lang::String* getJavaValue(int32_t codepage) /* throws(UnsupportedEncodingException) */;
    virtual int32_t getSize();
    virtual void setJavaValue(::java::lang::String* string, int32_t codepage) /* throws(UnsupportedEncodingException) */;
    virtual int32_t write(::java::io::OutputStream* out) /* throws(IOException) */;

    // Generated
    CodePageString();
protected:
    CodePageString(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static ::org::apache::poi::util::POILogger*& LOG();
    virtual ::java::lang::Class* getClass0();
};
