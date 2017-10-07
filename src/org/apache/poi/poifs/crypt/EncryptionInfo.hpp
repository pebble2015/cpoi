// Generated from /POI/java/org/apache/poi/poifs/crypt/EncryptionInfo.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/poifs/crypt/fwd-POI.hpp>
#include <org/apache/poi/poifs/filesystem/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/Cloneable.hpp>

struct default_init_tag;

class org::apache::poi::poifs::crypt::EncryptionInfo
    : public virtual ::java::lang::Object
    , public virtual ::java::lang::Cloneable
{

public:
    typedef ::java::lang::Object super;

private:
    EncryptionMode* encryptionMode {  };
    int32_t versionMajor {  };
    int32_t versionMinor {  };
    int32_t encryptionFlags {  };
    EncryptionHeader* header {  };
    EncryptionVerifier* verifier {  };
    Decryptor* decryptor {  };
    Encryptor* encryptor {  };
    static ::org::apache::poi::util::BitField* flagCryptoAPI_;
    static ::org::apache::poi::util::BitField* flagDocProps_;
    static ::org::apache::poi::util::BitField* flagExternal_;
    static ::org::apache::poi::util::BitField* flagAES_;
protected:
    void ctor(::org::apache::poi::poifs::filesystem::POIFSFileSystem* fs) /* throws(IOException) */;
    void ctor(::org::apache::poi::poifs::filesystem::OPOIFSFileSystem* fs) /* throws(IOException) */;
    void ctor(::org::apache::poi::poifs::filesystem::NPOIFSFileSystem* fs) /* throws(IOException) */;
    void ctor(::org::apache::poi::poifs::filesystem::DirectoryNode* dir) /* throws(IOException) */;
    void ctor(::org::apache::poi::util::LittleEndianInput* dis, EncryptionMode* preferredEncryptionMode) /* throws(IOException) */;
    void ctor(EncryptionMode* encryptionMode);
    void ctor(EncryptionMode* encryptionMode, CipherAlgorithm* cipherAlgorithm, HashAlgorithm* hashAlgorithm, int32_t keyBits, int32_t blockSize, ChainingMode* chainingMode);

public: /* protected */
    static EncryptionInfoBuilder* getBuilder(EncryptionMode* encryptionMode) /* throws(ClassNotFoundException, IllegalAccessException, InstantiationException) */;

public:
    virtual int32_t getVersionMajor();
    virtual int32_t getVersionMinor();
    virtual int32_t getEncryptionFlags();
    virtual EncryptionHeader* getHeader();
    virtual EncryptionVerifier* getVerifier();
    virtual Decryptor* getDecryptor();
    virtual Encryptor* getEncryptor();
    virtual void setHeader(EncryptionHeader* header);
    virtual void setVerifier(EncryptionVerifier* verifier);
    virtual void setDecryptor(Decryptor* decryptor);
    virtual void setEncryptor(Encryptor* encryptor);
    virtual EncryptionMode* getEncryptionMode();
    virtual bool isDocPropsEncrypted();
    EncryptionInfo* clone() /* throws(CloneNotSupportedException) */ override;

    // Generated
    EncryptionInfo(::org::apache::poi::poifs::filesystem::POIFSFileSystem* fs);
    EncryptionInfo(::org::apache::poi::poifs::filesystem::OPOIFSFileSystem* fs);
    EncryptionInfo(::org::apache::poi::poifs::filesystem::NPOIFSFileSystem* fs);
    EncryptionInfo(::org::apache::poi::poifs::filesystem::DirectoryNode* dir);
    EncryptionInfo(::org::apache::poi::util::LittleEndianInput* dis, EncryptionMode* preferredEncryptionMode);
    EncryptionInfo(EncryptionMode* encryptionMode);
    EncryptionInfo(EncryptionMode* encryptionMode, CipherAlgorithm* cipherAlgorithm, HashAlgorithm* hashAlgorithm, int32_t keyBits, int32_t blockSize, ChainingMode* chainingMode);
protected:
    EncryptionInfo(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    static ::org::apache::poi::util::BitField*& flagCryptoAPI();
    static ::org::apache::poi::util::BitField*& flagDocProps();
    static ::org::apache::poi::util::BitField*& flagExternal();
    static ::org::apache::poi::util::BitField*& flagAES();

private:
    virtual ::java::lang::Class* getClass0();
};
