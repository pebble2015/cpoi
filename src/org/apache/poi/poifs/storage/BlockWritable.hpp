// Generated from /POI/java/org/apache/poi/poifs/storage/BlockWritable.java

#pragma once

#include <java/io/fwd-POI.hpp>
#include <org/apache/poi/poifs/storage/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct poi::poifs::storage::BlockWritable
    : public virtual ::java::lang::Object
{
    virtual void writeBlocks(::java::io::OutputStream* stream) /* throws(IOException) */ = 0;

    // Generated
    static ::java::lang::Class *class_();
};
