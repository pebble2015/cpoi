// Generated from /POI/java/org/apache/poi/poifs/crypt/binaryrc4/BinaryRC4Encryptor.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <javax/crypto/fwd-POI.hpp>
#include <org/apache/poi/poifs/crypt/binaryrc4/fwd-POI.hpp>
#include <org/apache/poi/poifs/filesystem/fwd-POI.hpp>
#include <org/apache/poi/poifs/crypt/ChunkedCipherOutputStream.hpp>

struct default_init_tag;

class org::apache::poi::poifs::crypt::binaryrc4::BinaryRC4Encryptor_BinaryRC4CipherOutputStream
    : public ::org::apache::poi::poifs::crypt::ChunkedCipherOutputStream
{

public:
    typedef ::org::apache::poi::poifs::crypt::ChunkedCipherOutputStream super;
protected:
    void ctor(::java::io::OutputStream* stream) /* throws(IOException, GeneralSecurityException) */;
    void ctor(::org::apache::poi::poifs::filesystem::DirectoryNode* dir) /* throws(IOException, GeneralSecurityException) */;

public: /* protected */
    ::javax::crypto::Cipher* initCipherForBlock(::javax::crypto::Cipher* cipher, int32_t block, bool lastChunk) /* throws(GeneralSecurityException) */ override;
    void calculateChecksum(::java::io::File* file, int32_t i) override;
    void createEncryptionInfoEntry(::org::apache::poi::poifs::filesystem::DirectoryNode* dir, ::java::io::File* tmpFile) /* throws(IOException, GeneralSecurityException) */ override;

public:
    void flush() /* throws(IOException) */ override;

    // Generated
    BinaryRC4Encryptor_BinaryRC4CipherOutputStream(BinaryRC4Encryptor *BinaryRC4Encryptor_this, ::java::io::OutputStream* stream);
    BinaryRC4Encryptor_BinaryRC4CipherOutputStream(BinaryRC4Encryptor *BinaryRC4Encryptor_this, ::org::apache::poi::poifs::filesystem::DirectoryNode* dir);
protected:
    BinaryRC4Encryptor_BinaryRC4CipherOutputStream(BinaryRC4Encryptor *BinaryRC4Encryptor_this, const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    ::javax::crypto::Cipher* initCipherForBlock(int32_t block, bool lastChunk);
    BinaryRC4Encryptor *BinaryRC4Encryptor_this;

private:
    virtual ::java::lang::Class* getClass0();
    friend class BinaryRC4Encryptor;
    friend class BinaryRC4Encryptor_createEncryptionInfoEntry_1;
};
