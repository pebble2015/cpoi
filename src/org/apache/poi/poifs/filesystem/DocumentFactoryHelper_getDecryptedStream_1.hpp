// Generated from /POI/java/org/apache/poi/poifs/filesystem/DocumentFactoryHelper.java

#pragma once

#include <java/io/fwd-POI.hpp>
#include <org/apache/poi/poifs/filesystem/fwd-POI.hpp>
#include <java/io/FilterInputStream.hpp>

struct default_init_tag;

class org::apache::poi::poifs::filesystem::DocumentFactoryHelper_getDecryptedStream_1
    : public ::java::io::FilterInputStream
{

public:
    typedef ::java::io::FilterInputStream super;
    void close() /* throws(IOException) */ override;

    // Generated

public: /* protected */
    DocumentFactoryHelper_getDecryptedStream_1(NPOIFSFileSystem* fs, ::java::io::InputStream* in);

public:
    static ::java::lang::Class *class_();
    NPOIFSFileSystem* fs;

private:
    virtual ::java::lang::Class* getClass0();
    friend class DocumentFactoryHelper;
};
