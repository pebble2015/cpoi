// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <javax/imageio/metadata/IIOMetadata.hpp>

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

extern void unimplemented_(const char16_t* name);
javax::imageio::metadata::IIOMetadata::IIOMetadata(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

javax::imageio::metadata::IIOMetadata::IIOMetadata()
    : IIOMetadata(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

javax::imageio::metadata::IIOMetadata::IIOMetadata(bool standardMetadataFormatSupported, ::java::lang::String* nativeMetadataFormatName, ::java::lang::String* nativeMetadataFormatClassName, ::java::lang::StringArray* extraMetadataFormatNames, ::java::lang::StringArray* extraMetadataFormatClassNames)
    : IIOMetadata(*static_cast< ::default_init_tag* >(0))
{
    ctor(standardMetadataFormatSupported, nativeMetadataFormatName, nativeMetadataFormatClassName, extraMetadataFormatNames, extraMetadataFormatClassNames);
}


void ::javax::imageio::metadata::IIOMetadata::ctor()
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::javax::imageio::metadata::IIOMetadata::ctor()");
}

void ::javax::imageio::metadata::IIOMetadata::ctor(bool standardMetadataFormatSupported, ::java::lang::String* nativeMetadataFormatName, ::java::lang::String* nativeMetadataFormatClassName, ::java::lang::StringArray* extraMetadataFormatNames, ::java::lang::StringArray* extraMetadataFormatClassNames)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::javax::imageio::metadata::IIOMetadata::ctor(bool standardMetadataFormatSupported, ::java::lang::String* nativeMetadataFormatName, ::java::lang::String* nativeMetadataFormatClassName, ::java::lang::StringArray* extraMetadataFormatNames, ::java::lang::StringArray* extraMetadataFormatClassNames)");
}

bool javax::imageio::metadata::IIOMetadata::activateController()
{ /* stub */
    unimplemented_(u"bool javax::imageio::metadata::IIOMetadata::activateController()");
    return 0;
}

/* private: void javax::imageio::metadata::IIOMetadata::append(IIOMetadataNode* root, IIOMetadataNode* node) */
javax::imageio::metadata::IIOMetadataController* javax::imageio::metadata::IIOMetadata::getController()
{ /* stub */
return controller ; /* getter */
}

javax::imageio::metadata::IIOMetadataController* javax::imageio::metadata::IIOMetadata::getDefaultController()
{ /* stub */
return defaultController ; /* getter */
}

java::lang::StringArray* javax::imageio::metadata::IIOMetadata::getExtraMetadataFormatNames()
{ /* stub */
return extraMetadataFormatNames ; /* getter */
}

javax::imageio::metadata::IIOMetadataFormat* javax::imageio::metadata::IIOMetadata::getMetadataFormat(::java::lang::String* formatName)
{ /* stub */
    unimplemented_(u"javax::imageio::metadata::IIOMetadataFormat* javax::imageio::metadata::IIOMetadata::getMetadataFormat(::java::lang::String* formatName)");
    return 0;
}

java::lang::StringArray* javax::imageio::metadata::IIOMetadata::getMetadataFormatNames()
{ /* stub */
    unimplemented_(u"java::lang::StringArray* javax::imageio::metadata::IIOMetadata::getMetadataFormatNames()");
    return 0;
}

java::lang::String* javax::imageio::metadata::IIOMetadata::getNativeMetadataFormatName()
{ /* stub */
return nativeMetadataFormatName ; /* getter */
}

javax::imageio::metadata::IIOMetadataNode* javax::imageio::metadata::IIOMetadata::getStandardChromaNode()
{ /* stub */
    unimplemented_(u"javax::imageio::metadata::IIOMetadataNode* javax::imageio::metadata::IIOMetadata::getStandardChromaNode()");
    return 0;
}

javax::imageio::metadata::IIOMetadataNode* javax::imageio::metadata::IIOMetadata::getStandardCompressionNode()
{ /* stub */
    unimplemented_(u"javax::imageio::metadata::IIOMetadataNode* javax::imageio::metadata::IIOMetadata::getStandardCompressionNode()");
    return 0;
}

javax::imageio::metadata::IIOMetadataNode* javax::imageio::metadata::IIOMetadata::getStandardDataNode()
{ /* stub */
    unimplemented_(u"javax::imageio::metadata::IIOMetadataNode* javax::imageio::metadata::IIOMetadata::getStandardDataNode()");
    return 0;
}

javax::imageio::metadata::IIOMetadataNode* javax::imageio::metadata::IIOMetadata::getStandardDimensionNode()
{ /* stub */
    unimplemented_(u"javax::imageio::metadata::IIOMetadataNode* javax::imageio::metadata::IIOMetadata::getStandardDimensionNode()");
    return 0;
}

javax::imageio::metadata::IIOMetadataNode* javax::imageio::metadata::IIOMetadata::getStandardDocumentNode()
{ /* stub */
    unimplemented_(u"javax::imageio::metadata::IIOMetadataNode* javax::imageio::metadata::IIOMetadata::getStandardDocumentNode()");
    return 0;
}

javax::imageio::metadata::IIOMetadataNode* javax::imageio::metadata::IIOMetadata::getStandardTextNode()
{ /* stub */
    unimplemented_(u"javax::imageio::metadata::IIOMetadataNode* javax::imageio::metadata::IIOMetadata::getStandardTextNode()");
    return 0;
}

javax::imageio::metadata::IIOMetadataNode* javax::imageio::metadata::IIOMetadata::getStandardTileNode()
{ /* stub */
    unimplemented_(u"javax::imageio::metadata::IIOMetadataNode* javax::imageio::metadata::IIOMetadata::getStandardTileNode()");
    return 0;
}

javax::imageio::metadata::IIOMetadataNode* javax::imageio::metadata::IIOMetadata::getStandardTransparencyNode()
{ /* stub */
    unimplemented_(u"javax::imageio::metadata::IIOMetadataNode* javax::imageio::metadata::IIOMetadata::getStandardTransparencyNode()");
    return 0;
}

javax::imageio::metadata::IIOMetadataNode* javax::imageio::metadata::IIOMetadata::getStandardTree()
{ /* stub */
    unimplemented_(u"javax::imageio::metadata::IIOMetadataNode* javax::imageio::metadata::IIOMetadata::getStandardTree()");
    return 0;
}

bool javax::imageio::metadata::IIOMetadata::hasController()
{ /* stub */
    unimplemented_(u"bool javax::imageio::metadata::IIOMetadata::hasController()");
    return 0;
}

bool javax::imageio::metadata::IIOMetadata::isStandardMetadataFormatSupported()
{ /* stub */
    unimplemented_(u"bool javax::imageio::metadata::IIOMetadata::isStandardMetadataFormatSupported()");
    return 0;
}

void javax::imageio::metadata::IIOMetadata::setController(IIOMetadataController* controller)
{ /* stub */
    this->controller = controller; /* setter */
}

void javax::imageio::metadata::IIOMetadata::setFromTree(::java::lang::String* formatName, ::org::w3c::dom::Node* root)
{ /* stub */
    unimplemented_(u"void javax::imageio::metadata::IIOMetadata::setFromTree(::java::lang::String* formatName, ::org::w3c::dom::Node* root)");
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* javax::imageio::metadata::IIOMetadata::class_()
{
    static ::java::lang::Class* c = ::class_(u"javax.imageio.metadata.IIOMetadata", 34);
    return c;
}

java::lang::Class* javax::imageio::metadata::IIOMetadata::getClass0()
{
    return class_();
}

