// Generated from /POI/java/org/apache/poi/hpsf/HPSFPropertiesOnlyDocument.java

#pragma once

#include <java/io/fwd-POI.hpp>
#include <org/apache/poi/hpsf/fwd-POI.hpp>
#include <org/apache/poi/poifs/filesystem/fwd-POI.hpp>
#include <org/apache/poi/POIDocument.hpp>

struct default_init_tag;

class poi::hpsf::HPSFPropertiesOnlyDocument
    : public ::poi::POIDocument
{

public:
    typedef ::poi::POIDocument super;
protected:
    void ctor(::poi::poifs::filesystem::NPOIFSFileSystem* fs);
    void ctor(::poi::poifs::filesystem::OPOIFSFileSystem* fs);
    void ctor(::poi::poifs::filesystem::POIFSFileSystem* fs);

public:
    void write() /* throws(IOException) */ override;
    void write(::java::io::File* newFile) /* throws(IOException) */ override;
    void write(::java::io::OutputStream* out) /* throws(IOException) */ override;

private:
    void write(::poi::poifs::filesystem::NPOIFSFileSystem* fs) /* throws(IOException) */;

    // Generated

public:
    HPSFPropertiesOnlyDocument(::poi::poifs::filesystem::NPOIFSFileSystem* fs);
    HPSFPropertiesOnlyDocument(::poi::poifs::filesystem::OPOIFSFileSystem* fs);
    HPSFPropertiesOnlyDocument(::poi::poifs::filesystem::POIFSFileSystem* fs);
protected:
    HPSFPropertiesOnlyDocument(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
