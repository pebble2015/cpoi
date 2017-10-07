// Generated from /POI/java/org/apache/poi/poifs/filesystem/DocumentFactoryHelper.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/poifs/filesystem/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::poi::poifs::filesystem::DocumentFactoryHelper
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
    static ::java::io::InputStream* getDecryptedStream(NPOIFSFileSystem* fs, ::java::lang::String* password) /* throws(IOException) */;
    static bool hasOOXMLHeader(::java::io::InputStream* inp) /* throws(IOException) */;

    // Generated
    DocumentFactoryHelper();
protected:
    DocumentFactoryHelper(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class DocumentFactoryHelper_getDecryptedStream_1;
};
