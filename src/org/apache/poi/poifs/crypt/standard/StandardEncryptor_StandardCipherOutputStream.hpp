// Generated from /POI/java/org/apache/poi/poifs/crypt/standard/StandardEncryptor.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <org/apache/poi/poifs/crypt/standard/fwd-POI.hpp>
#include <org/apache/poi/poifs/filesystem/fwd-POI.hpp>
#include <java/io/FilterOutputStream.hpp>
#include <org/apache/poi/poifs/filesystem/POIFSWriterListener.hpp>

struct default_init_tag;

class org::apache::poi::poifs::crypt::standard::StandardEncryptor_StandardCipherOutputStream
    : public ::java::io::FilterOutputStream
    , public virtual ::org::apache::poi::poifs::filesystem::POIFSWriterListener
{

public:
    typedef ::java::io::FilterOutputStream super;

public: /* protected */
    int64_t countBytes {  };
    ::java::io::File* fileOut {  };
    ::org::apache::poi::poifs::filesystem::DirectoryNode* dir {  };
protected:
    void ctor(::org::apache::poi::poifs::filesystem::DirectoryNode* dir, ::java::io::File* fileOut) /* throws(IOException) */;
    void ctor(::org::apache::poi::poifs::filesystem::DirectoryNode* dir) /* throws(IOException) */;

public:
    void write(::int8_tArray* b, int32_t off, int32_t len) /* throws(IOException) */ override;
    void write(int32_t b) /* throws(IOException) */ override;
    void close() /* throws(IOException) */ override;

public: /* package */
    virtual void writeToPOIFS() /* throws(IOException) */;

public:
    void processPOIFSWriterEvent(::org::apache::poi::poifs::filesystem::POIFSWriterEvent* event) override;

    // Generated

private:
    StandardEncryptor_StandardCipherOutputStream(StandardEncryptor *StandardEncryptor_this, ::org::apache::poi::poifs::filesystem::DirectoryNode* dir, ::java::io::File* fileOut);

public: /* protected */
    StandardEncryptor_StandardCipherOutputStream(StandardEncryptor *StandardEncryptor_this, ::org::apache::poi::poifs::filesystem::DirectoryNode* dir);
protected:
    StandardEncryptor_StandardCipherOutputStream(StandardEncryptor *StandardEncryptor_this, const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    void write(::int8_tArray* b);
    StandardEncryptor *StandardEncryptor_this;

private:
    virtual ::java::lang::Class* getClass0();
    friend class StandardEncryptor;
    friend class StandardEncryptor_createEncryptionInfoEntry_1;
};
