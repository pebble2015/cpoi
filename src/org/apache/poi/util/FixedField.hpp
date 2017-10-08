// Generated from /POI/java/org/apache/poi/util/FixedField.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct poi::util::FixedField
    : public virtual ::java::lang::Object
{
    virtual void readFromBytes(::int8_tArray* data) /* throws(ArrayIndexOutOfBoundsException) */ = 0;
    virtual void readFromStream(::java::io::InputStream* stream) /* throws(IOException) */ = 0;
    virtual void writeToBytes(::int8_tArray* data) /* throws(ArrayIndexOutOfBoundsException) */ = 0;
    /*virtual ::java::lang::String* toString(); (already declared) */

    // Generated
    static ::java::lang::Class *class_();
};
