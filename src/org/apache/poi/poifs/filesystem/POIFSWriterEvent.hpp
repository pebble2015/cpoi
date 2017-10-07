// Generated from /POI/java/org/apache/poi/poifs/filesystem/POIFSWriterEvent.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/poifs/filesystem/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::poi::poifs::filesystem::POIFSWriterEvent
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    DocumentOutputStream* stream {  };
    POIFSDocumentPath* path {  };
    ::java::lang::String* documentName {  };
    int32_t limit {  };
protected:
    void ctor(DocumentOutputStream* stream, POIFSDocumentPath* path, ::java::lang::String* documentName, int32_t limit);

public:
    virtual DocumentOutputStream* getStream();
    virtual POIFSDocumentPath* getPath();
    virtual ::java::lang::String* getName();
    virtual int32_t getLimit();

    // Generated

public: /* package */
    POIFSWriterEvent(DocumentOutputStream* stream, POIFSDocumentPath* path, ::java::lang::String* documentName, int32_t limit);
protected:
    POIFSWriterEvent(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
