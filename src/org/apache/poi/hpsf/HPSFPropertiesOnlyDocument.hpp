// Generated from /POI/java/org/apache/poi/hpsf/HPSFPropertiesOnlyDocument.java

#pragma once

#include <java/io/fwd-POI.hpp>
#include <org/apache/poi/hpsf/fwd-POI.hpp>
#include <org/apache/poi/poifs/filesystem/fwd-POI.hpp>
#include <org/apache/poi/POIDocument.hpp>

struct default_init_tag;

class org::apache::poi::hpsf::HPSFPropertiesOnlyDocument
    : public ::org::apache::poi::POIDocument
{

public:
    typedef ::org::apache::poi::POIDocument super;
protected:
    void ctor(::org::apache::poi::poifs::filesystem::NPOIFSFileSystem* fs);
    void ctor(::org::apache::poi::poifs::filesystem::OPOIFSFileSystem* fs);
    void ctor(::org::apache::poi::poifs::filesystem::POIFSFileSystem* fs);

public:
    void write() /* throws(IOException) */ override;
    void write(::java::io::File* newFile) /* throws(IOException) */ override;
    void write(::java::io::OutputStream* out) /* throws(IOException) */ override;

private:
    void write(::org::apache::poi::poifs::filesystem::NPOIFSFileSystem* fs) /* throws(IOException) */;

    // Generated

public:
    HPSFPropertiesOnlyDocument(::org::apache::poi::poifs::filesystem::NPOIFSFileSystem* fs);
    HPSFPropertiesOnlyDocument(::org::apache::poi::poifs::filesystem::OPOIFSFileSystem* fs);
    HPSFPropertiesOnlyDocument(::org::apache::poi::poifs::filesystem::POIFSFileSystem* fs);
protected:
    HPSFPropertiesOnlyDocument(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
