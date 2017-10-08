// Generated from /POI/java/org/apache/poi/poifs/filesystem/NPOIFSDocument.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/poifs/filesystem/fwd-POI.hpp>
#include <org/apache/poi/poifs/property/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/poifs/dev/POIFSViewable.hpp>

struct default_init_tag;

class poi::poifs::filesystem::NPOIFSDocument final
    : public virtual ::java::lang::Object
    , public ::poi::poifs::dev::POIFSViewable
{

public:
    typedef ::java::lang::Object super;

private:
    ::poi::poifs::property::DocumentProperty* _property {  };
    NPOIFSFileSystem* _filesystem {  };
    NPOIFSStream* _stream {  };
    int32_t _block_size {  };
protected:
    void ctor(DocumentNode* document) /* throws(IOException) */;
    void ctor(::poi::poifs::property::DocumentProperty* property, NPOIFSFileSystem* filesystem) /* throws(IOException) */;
    void ctor(::java::lang::String* name, NPOIFSFileSystem* filesystem, ::java::io::InputStream* stream) /* throws(IOException) */;
    void ctor(::java::lang::String* name, int32_t size, NPOIFSFileSystem* filesystem, POIFSWriterListener* writer) /* throws(IOException) */;

private:
    int32_t store(::java::io::InputStream* stream) /* throws(IOException) */;

public: /* package */
    void free() /* throws(IOException) */;
    NPOIFSFileSystem* getFileSystem();
    int32_t getDocumentBlockSize();
    ::java::util::Iterator* getBlockIterator();

public:
    int32_t getSize();
    void replaceContents(::java::io::InputStream* stream) /* throws(IOException) */;

public: /* package */
    ::poi::poifs::property::DocumentProperty* getDocumentProperty();

public:
    ::java::lang::ObjectArray* getViewableArray_() override;
    ::java::util::Iterator* getViewableIterator() override;
    bool preferArray_() override;
    ::java::lang::String* getShortDescription() override;

    // Generated
    NPOIFSDocument(DocumentNode* document);
    NPOIFSDocument(::poi::poifs::property::DocumentProperty* property, NPOIFSFileSystem* filesystem);
    NPOIFSDocument(::java::lang::String* name, NPOIFSFileSystem* filesystem, ::java::io::InputStream* stream);
    NPOIFSDocument(::java::lang::String* name, int32_t size, NPOIFSFileSystem* filesystem, POIFSWriterListener* writer);
protected:
    NPOIFSDocument(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
