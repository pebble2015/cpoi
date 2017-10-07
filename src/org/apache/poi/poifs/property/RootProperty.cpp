// Generated from /POI/java/org/apache/poi/poifs/property/RootProperty.java
#include <org/apache/poi/poifs/property/RootProperty.hpp>

#include <java/lang/String.hpp>
#include <org/apache/poi/poifs/common/POIFSConstants.hpp>
#include <org/apache/poi/poifs/property/PropertyConstants.hpp>
#include <org/apache/poi/poifs/storage/SmallDocumentBlock.hpp>

org::apache::poi::poifs::property::RootProperty::RootProperty(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::poifs::property::RootProperty::RootProperty() 
    : RootProperty(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::poifs::property::RootProperty::RootProperty(int32_t index, ::int8_tArray* array, int32_t offset) 
    : RootProperty(*static_cast< ::default_init_tag* >(0))
{
    ctor(index,array,offset);
}

java::lang::String*& org::apache::poi::poifs::property::RootProperty::NAME()
{
    clinit();
    return NAME_;
}
java::lang::String* org::apache::poi::poifs::property::RootProperty::NAME_;

void org::apache::poi::poifs::property::RootProperty::ctor()
{
    super::ctor(NAME_);
    setNodeColor(_NODE_BLACK);
    setPropertyType(PropertyConstants::ROOT_TYPE);
    setStartBlock(::org::apache::poi::poifs::common::POIFSConstants::END_OF_CHAIN);
}

void org::apache::poi::poifs::property::RootProperty::ctor(int32_t index, ::int8_tArray* array, int32_t offset)
{
    super::ctor(index, array, offset);
}

void org::apache::poi::poifs::property::RootProperty::setSize(int32_t size)
{
    super::setSize(::org::apache::poi::poifs::storage::SmallDocumentBlock::calcSize(size));
}

java::lang::String* org::apache::poi::poifs::property::RootProperty::getName()
{
    return NAME_;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::poifs::property::RootProperty::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.property.RootProperty", 42);
    return c;
}

void org::apache::poi::poifs::property::RootProperty::clinit()
{
struct string_init_ {
    string_init_() {
    NAME_ = u"Root Entry"_j;
    }
};

    static string_init_ string_init_instance;

    super::clinit();
}

java::lang::Class* org::apache::poi::poifs::property::RootProperty::getClass0()
{
    return class_();
}

