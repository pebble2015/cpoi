// Generated from /POI/java/org/apache/poi/poifs/eventfilesystem/POIFSReaderEvent.java

#pragma once

#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/poifs/eventfilesystem/fwd-POI.hpp>
#include <org/apache/poi/poifs/filesystem/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::poi::poifs::eventfilesystem::POIFSReaderEvent
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    ::org::apache::poi::poifs::filesystem::DocumentInputStream* stream {  };
    ::org::apache::poi::poifs::filesystem::POIFSDocumentPath* path {  };
    ::java::lang::String* documentName {  };
protected:
    void ctor(::org::apache::poi::poifs::filesystem::DocumentInputStream* stream, ::org::apache::poi::poifs::filesystem::POIFSDocumentPath* path, ::java::lang::String* documentName);

public:
    virtual ::org::apache::poi::poifs::filesystem::DocumentInputStream* getStream();
    virtual ::org::apache::poi::poifs::filesystem::POIFSDocumentPath* getPath();
    virtual ::java::lang::String* getName();

    // Generated

public: /* package */
    POIFSReaderEvent(::org::apache::poi::poifs::filesystem::DocumentInputStream* stream, ::org::apache::poi::poifs::filesystem::POIFSDocumentPath* path, ::java::lang::String* documentName);
protected:
    POIFSReaderEvent(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
