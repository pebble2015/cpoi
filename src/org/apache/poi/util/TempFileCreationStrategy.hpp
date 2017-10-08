// Generated from /POI/java/org/apache/poi/util/TempFileCreationStrategy.java

#pragma once

#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct poi::util::TempFileCreationStrategy
    : public virtual ::java::lang::Object
{
    virtual ::java::io::File* createTempFile(::java::lang::String* prefix, ::java::lang::String* suffix) /* throws(IOException) */ = 0;
    virtual ::java::io::File* createTempDirectory(::java::lang::String* prefix) /* throws(IOException) */ = 0;

    // Generated
    static ::java::lang::Class *class_();
};
