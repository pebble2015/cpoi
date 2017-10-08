// Generated from /POI/java/org/apache/poi/poifs/crypt/EncryptionInfoBuilder.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/poifs/crypt/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct poi::poifs::crypt::EncryptionInfoBuilder
    : public virtual ::java::lang::Object
{
    virtual void initialize(EncryptionInfo* ei, ::poi::util::LittleEndianInput* dis) /* throws(IOException) */ = 0;
    virtual void initialize(EncryptionInfo* ei, CipherAlgorithm* cipherAlgorithm, HashAlgorithm* hashAlgorithm, int32_t keyBits, int32_t blockSize, ChainingMode* chainingMode) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
