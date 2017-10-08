// Generated from /POI/java/org/apache/poi/poifs/eventfilesystem/POIFSReader.java

#pragma once

#include <org/apache/poi/poifs/eventfilesystem/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/poifs/eventfilesystem/POIFSReaderListener.hpp>

struct default_init_tag;

class poi::poifs::eventfilesystem::POIFSReader_SampleListener
    : public virtual ::java::lang::Object
    , public virtual POIFSReaderListener
{

public:
    typedef ::java::lang::Object super;
protected:
    void ctor();

public:
    void processPOIFSReaderEvent(POIFSReaderEvent* event) override;

    // Generated

public: /* package */
    POIFSReader_SampleListener();
protected:
    POIFSReader_SampleListener(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class POIFSReader;
};
