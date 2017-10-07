// Generated from /POI/java/org/apache/poi/poifs/storage/ListManagedBlock.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/poifs/storage/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct org::apache::poi::poifs::storage::ListManagedBlock
    : public virtual ::java::lang::Object
{
    virtual ::int8_tArray* getData() /* throws(IOException) */ = 0;

    // Generated
    static ::java::lang::Class *class_();
};
