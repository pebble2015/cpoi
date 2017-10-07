// Generated from /POI/java/org/apache/poi/POIDocument.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/fwd-POI.hpp>
#include <org/apache/poi/hpsf/fwd-POI.hpp>
#include <org/apache/poi/poifs/crypt/fwd-POI.hpp>
#include <org/apache/poi/poifs/filesystem/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/io/Closeable.hpp>

struct default_init_tag;

class org::apache::poi::POIDocument
    : public virtual ::java::lang::Object
    , public virtual ::java::io::Closeable
{

public:
    typedef ::java::lang::Object super;

private:
    ::org::apache::poi::hpsf::SummaryInformation* sInf {  };
    ::org::apache::poi::hpsf::DocumentSummaryInformation* dsInf {  };
    ::org::apache::poi::poifs::filesystem::DirectoryNode* directory {  };
    static ::org::apache::poi::util::POILogger* logger_;
    bool initialized {  };
protected:
    void ctor(::org::apache::poi::poifs::filesystem::DirectoryNode* dir);
    void ctor(::org::apache::poi::poifs::filesystem::OPOIFSFileSystem* fs);
    void ctor(::org::apache::poi::poifs::filesystem::NPOIFSFileSystem* fs);
    void ctor(::org::apache::poi::poifs::filesystem::POIFSFileSystem* fs);

public:
    virtual ::org::apache::poi::hpsf::DocumentSummaryInformation* getDocumentSummaryInformation();
    virtual ::org::apache::poi::hpsf::SummaryInformation* getSummaryInformation();
    virtual void createInformationProperties();

public: /* protected */
    virtual void readProperties();

private:
    /* <T> */::java::lang::Object* readPropertySet(::java::lang::Class* clazz, ::java::lang::String* name);

public: /* protected */
    virtual ::org::apache::poi::hpsf::PropertySet* getPropertySet(::java::lang::String* setName) /* throws(IOException) */;
    virtual ::org::apache::poi::hpsf::PropertySet* getPropertySet(::java::lang::String* setName, ::org::apache::poi::poifs::crypt::EncryptionInfo* encryptionInfo) /* throws(IOException) */;
    virtual void writeProperties() /* throws(IOException) */;
    virtual void writeProperties(::org::apache::poi::poifs::filesystem::NPOIFSFileSystem* outFS) /* throws(IOException) */;
    virtual void writeProperties(::org::apache::poi::poifs::filesystem::NPOIFSFileSystem* outFS, ::java::util::List* writtenEntries) /* throws(IOException) */;
    virtual void writePropertySet(::java::lang::String* name, ::org::apache::poi::hpsf::PropertySet* set, ::org::apache::poi::poifs::filesystem::NPOIFSFileSystem* outFS) /* throws(IOException) */;
    virtual void validateInPlaceWritePossible() /* throws(IllegalStateException) */;

public:
    virtual void write() /* throws(IOException) */ = 0;
    virtual void write(::java::io::File* newFile) /* throws(IOException) */ = 0;
    virtual void write(::java::io::OutputStream* out) /* throws(IOException) */ = 0;
    void close() /* throws(IOException) */ override;
    virtual ::org::apache::poi::poifs::filesystem::DirectoryNode* getDirectory();

public: /* protected */
    virtual void clearDirectory();
    virtual bool initDirectory();
    virtual ::org::apache::poi::poifs::filesystem::DirectoryNode* replaceDirectory(::org::apache::poi::poifs::filesystem::DirectoryNode* newDirectory);
    virtual ::java::lang::String* getEncryptedPropertyStreamName();

public:
    virtual ::org::apache::poi::poifs::crypt::EncryptionInfo* getEncryptionInfo() /* throws(IOException) */;

    // Generated

public: /* protected */
    POIDocument(::org::apache::poi::poifs::filesystem::DirectoryNode* dir);
    POIDocument(::org::apache::poi::poifs::filesystem::OPOIFSFileSystem* fs);
    POIDocument(::org::apache::poi::poifs::filesystem::NPOIFSFileSystem* fs);
    POIDocument(::org::apache::poi::poifs::filesystem::POIFSFileSystem* fs);
protected:
    POIDocument(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static ::org::apache::poi::util::POILogger*& logger();
    virtual ::java::lang::Class* getClass0();
};
