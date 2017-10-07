// Generated from /POI/java/org/apache/poi/poifs/eventfilesystem/POIFSReaderRegistry.java

#pragma once

#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/poifs/eventfilesystem/fwd-POI.hpp>
#include <org/apache/poi/poifs/filesystem/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::poi::poifs::eventfilesystem::POIFSReaderRegistry
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    ::java::util::Set* omnivorousListeners {  };
    ::java::util::Map* selectiveListeners {  };
    ::java::util::Map* chosenDocumentDescriptors {  };
protected:
    void ctor();

public: /* package */
    virtual void registerListener(POIFSReaderListener* listener, ::org::apache::poi::poifs::filesystem::POIFSDocumentPath* path, ::java::lang::String* documentName);
    virtual void registerListener(POIFSReaderListener* listener);
    virtual ::java::util::Iterator* getListeners(::org::apache::poi::poifs::filesystem::POIFSDocumentPath* path, ::java::lang::String* name);

private:
    void removeSelectiveListener(POIFSReaderListener* listener);
    void dropDocument(POIFSReaderListener* listener, ::org::apache::poi::poifs::filesystem::DocumentDescriptor* descriptor);

    // Generated

public: /* package */
    POIFSReaderRegistry();
protected:
    POIFSReaderRegistry(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
