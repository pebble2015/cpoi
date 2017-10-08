// Generated from /POI/java/org/apache/poi/poifs/filesystem/DocumentDescriptor.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/poifs/filesystem/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::poifs::filesystem::DocumentDescriptor
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    POIFSDocumentPath* path {  };
    ::java::lang::String* name {  };
    int32_t hashcode {  };
protected:
    void ctor(POIFSDocumentPath* path, ::java::lang::String* name);

public:
    bool equals(::java::lang::Object* o) override;
    int32_t hashCode() override;
    ::java::lang::String* toString() override;

    // Generated
    DocumentDescriptor(POIFSDocumentPath* path, ::java::lang::String* name);
protected:
    DocumentDescriptor(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    void init();
    virtual ::java::lang::Class* getClass0();
};
