// Generated from /POI/java/org/apache/poi/util/HexRead.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::poi::util::HexRead
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
    static ::int8_tArray* readData(::java::lang::String* filename) /* throws(IOException) */;
    static ::int8_tArray* readData(::java::io::InputStream* stream, ::java::lang::String* section) /* throws(IOException) */;
    static ::int8_tArray* readData(::java::lang::String* filename, ::java::lang::String* section) /* throws(IOException) */;
    static ::int8_tArray* readData(::java::io::InputStream* stream, int32_t eofChar) /* throws(IOException) */;
    static ::int8_tArray* readFromString(::java::lang::String* data);

private:
    static void readToEOL(::java::io::InputStream* stream) /* throws(IOException) */;

    // Generated

public:
    HexRead();
protected:
    HexRead(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
