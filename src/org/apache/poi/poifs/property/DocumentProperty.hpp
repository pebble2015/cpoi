// Generated from /POI/java/org/apache/poi/poifs/property/DocumentProperty.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/poifs/filesystem/fwd-POI.hpp>
#include <org/apache/poi/poifs/property/fwd-POI.hpp>
#include <org/apache/poi/poifs/property/Property.hpp>

struct default_init_tag;

class poi::poifs::property::DocumentProperty
    : public Property
{

public:
    typedef Property super;

private:
    ::poi::poifs::filesystem::OPOIFSDocument* _document {  };
protected:
    void ctor(::java::lang::String* name, int32_t size);
    void ctor(int32_t index, ::int8_tArray* array, int32_t offset);

public:
    virtual void setDocument(::poi::poifs::filesystem::OPOIFSDocument* doc);
    virtual ::poi::poifs::filesystem::OPOIFSDocument* getDocument();
    bool shouldUseSmallBlocks() override;
    bool isDirectory() override;

public: /* protected */
    void preWrite() override;

public:
    virtual void updateSize(int32_t size);

    // Generated
    DocumentProperty(::java::lang::String* name, int32_t size);

public: /* protected */
    DocumentProperty(int32_t index, ::int8_tArray* array, int32_t offset);
protected:
    DocumentProperty(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
