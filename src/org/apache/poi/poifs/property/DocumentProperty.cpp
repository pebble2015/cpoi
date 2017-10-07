// Generated from /POI/java/org/apache/poi/poifs/property/DocumentProperty.java
#include <org/apache/poi/poifs/property/DocumentProperty.hpp>

#include <org/apache/poi/poifs/filesystem/OPOIFSDocument.hpp>
#include <org/apache/poi/poifs/property/PropertyConstants.hpp>

org::apache::poi::poifs::property::DocumentProperty::DocumentProperty(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::poifs::property::DocumentProperty::DocumentProperty(::java::lang::String* name, int32_t size) 
    : DocumentProperty(*static_cast< ::default_init_tag* >(0))
{
    ctor(name,size);
}

org::apache::poi::poifs::property::DocumentProperty::DocumentProperty(int32_t index, ::int8_tArray* array, int32_t offset) 
    : DocumentProperty(*static_cast< ::default_init_tag* >(0))
{
    ctor(index,array,offset);
}

void org::apache::poi::poifs::property::DocumentProperty::ctor(::java::lang::String* name, int32_t size)
{
    super::ctor();
    _document = nullptr;
    setName(name);
    setSize(size);
    setNodeColor(_NODE_BLACK);
    setPropertyType(PropertyConstants::DOCUMENT_TYPE);
}

void org::apache::poi::poifs::property::DocumentProperty::ctor(int32_t index, ::int8_tArray* array, int32_t offset)
{
    super::ctor(index, array, offset);
    _document = nullptr;
}

void org::apache::poi::poifs::property::DocumentProperty::setDocument(::org::apache::poi::poifs::filesystem::OPOIFSDocument* doc)
{
    _document = doc;
}

org::apache::poi::poifs::filesystem::OPOIFSDocument* org::apache::poi::poifs::property::DocumentProperty::getDocument()
{
    return _document;
}

bool org::apache::poi::poifs::property::DocumentProperty::shouldUseSmallBlocks()
{
    return super::shouldUseSmallBlocks();
}

bool org::apache::poi::poifs::property::DocumentProperty::isDirectory()
{
    return false;
}

void org::apache::poi::poifs::property::DocumentProperty::preWrite()
{
}

void org::apache::poi::poifs::property::DocumentProperty::updateSize(int32_t size)
{
    setSize(size);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::poifs::property::DocumentProperty::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.property.DocumentProperty", 46);
    return c;
}

java::lang::Class* org::apache::poi::poifs::property::DocumentProperty::getClass0()
{
    return class_();
}

