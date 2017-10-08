// Generated from /POI/java/org/apache/poi/poifs/crypt/standard/EncryptionRecord.java

#pragma once

#include <org/apache/poi/poifs/crypt/standard/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct poi::poifs::crypt::standard::EncryptionRecord
    : public virtual ::java::lang::Object
{
    virtual void write(::poi::util::LittleEndianByteArrayOutputStream* os) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
