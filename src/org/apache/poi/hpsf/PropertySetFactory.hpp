// Generated from /POI/java/org/apache/poi/hpsf/PropertySetFactory.java

#pragma once

#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hpsf/fwd-POI.hpp>
#include <org/apache/poi/poifs/filesystem/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::poi::hpsf::PropertySetFactory
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
    static PropertySet* create(::org::apache::poi::poifs::filesystem::DirectoryEntry* dir, ::java::lang::String* name) /* throws(FileNotFoundException, NoPropertySetStreamException, IOException, UnsupportedEncodingException) */;
    static PropertySet* create(::java::io::InputStream* stream) /* throws(NoPropertySetStreamException, MarkUnsupportedException, UnsupportedEncodingException, IOException) */;
    static SummaryInformation* newSummaryInformation();
    static DocumentSummaryInformation* newDocumentSummaryInformation();

    // Generated
    PropertySetFactory();
protected:
    PropertySetFactory(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
