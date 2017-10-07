// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <javax/imageio/metadata/fwd-POI.hpp>
#include <org/w3c/dom/fwd-POI.hpp>
#include <java/lang/Object.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace io
    {
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
    } // io

    namespace lang
    {
typedef ::SubArray< ::java::lang::CharSequence, ObjectArray > CharSequenceArray;
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::String, ObjectArray, ::java::io::SerializableArray, ComparableArray, CharSequenceArray > StringArray;
    } // lang
} // java

struct default_init_tag;

class javax::imageio::metadata::IIOMetadata
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

public: /* protected */
    IIOMetadataController* controller {  };
    IIOMetadataController* defaultController {  };
    ::java::lang::StringArray* extraMetadataFormatClassNames {  };
    ::java::lang::StringArray* extraMetadataFormatNames {  };
    ::java::lang::String* nativeMetadataFormatClassName {  };
    ::java::lang::String* nativeMetadataFormatName {  };
    bool standardFormatSupported {  };

protected:
    void ctor();
    void ctor(bool standardMetadataFormatSupported, ::java::lang::String* nativeMetadataFormatName, ::java::lang::String* nativeMetadataFormatClassName, ::java::lang::StringArray* extraMetadataFormatNames, ::java::lang::StringArray* extraMetadataFormatClassNames);

public:
    virtual bool activateController();
    /*void append(IIOMetadataNode* root, IIOMetadataNode* node); (private) */
    virtual ::org::w3c::dom::Node* getAsTree(::java::lang::String* formatName) = 0;
    virtual IIOMetadataController* getController();
    virtual IIOMetadataController* getDefaultController();
    virtual ::java::lang::StringArray* getExtraMetadataFormatNames();
    virtual IIOMetadataFormat* getMetadataFormat(::java::lang::String* formatName);
    virtual ::java::lang::StringArray* getMetadataFormatNames();
    virtual ::java::lang::String* getNativeMetadataFormatName();

public: /* protected */
    virtual IIOMetadataNode* getStandardChromaNode();
    virtual IIOMetadataNode* getStandardCompressionNode();
    virtual IIOMetadataNode* getStandardDataNode();
    virtual IIOMetadataNode* getStandardDimensionNode();
    virtual IIOMetadataNode* getStandardDocumentNode();
    virtual IIOMetadataNode* getStandardTextNode();
    virtual IIOMetadataNode* getStandardTileNode();
    virtual IIOMetadataNode* getStandardTransparencyNode();
    IIOMetadataNode* getStandardTree();

public:
    virtual bool hasController();
    virtual bool isReadOnly() = 0;
    virtual bool isStandardMetadataFormatSupported();
    virtual void mergeTree(::java::lang::String* formatName, ::org::w3c::dom::Node* root) = 0;
    virtual void reset() = 0;
    virtual void setController(IIOMetadataController* controller);
    virtual void setFromTree(::java::lang::String* formatName, ::org::w3c::dom::Node* root);

    // Generated

public: /* protected */
    IIOMetadata();
    IIOMetadata(bool standardMetadataFormatSupported, ::java::lang::String* nativeMetadataFormatName, ::java::lang::String* nativeMetadataFormatClassName, ::java::lang::StringArray* extraMetadataFormatNames, ::java::lang::StringArray* extraMetadataFormatClassNames);
protected:
    IIOMetadata(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
