// Generated from /POI/java/org/apache/poi/ddf/EscherPropertyMetaData.java
#include <org/apache/poi/ddf/EscherPropertyMetaData.hpp>

#include <java/lang/String.hpp>

poi::ddf::EscherPropertyMetaData::EscherPropertyMetaData(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ddf::EscherPropertyMetaData::EscherPropertyMetaData(::java::lang::String* description) 
    : EscherPropertyMetaData(*static_cast< ::default_init_tag* >(0))
{
    ctor(description);
}

poi::ddf::EscherPropertyMetaData::EscherPropertyMetaData(::java::lang::String* description, int8_t type) 
    : EscherPropertyMetaData(*static_cast< ::default_init_tag* >(0))
{
    ctor(description,type);
}

constexpr int8_t poi::ddf::EscherPropertyMetaData::TYPE_UNKNOWN;

constexpr int8_t poi::ddf::EscherPropertyMetaData::TYPE_BOOLEAN;

constexpr int8_t poi::ddf::EscherPropertyMetaData::TYPE_RGB;

constexpr int8_t poi::ddf::EscherPropertyMetaData::TYPE_SHAPEPATH;

constexpr int8_t poi::ddf::EscherPropertyMetaData::TYPE_SIMPLE;

constexpr int8_t poi::ddf::EscherPropertyMetaData::TYPE_ARRAY;

void poi::ddf::EscherPropertyMetaData::ctor(::java::lang::String* description)
{
    super::ctor();
    this->description = description;
}

void poi::ddf::EscherPropertyMetaData::ctor(::java::lang::String* description, int8_t type)
{
    super::ctor();
    this->description = description;
    this->type = type;
}

java::lang::String* poi::ddf::EscherPropertyMetaData::getDescription()
{
    return description;
}

int8_t poi::ddf::EscherPropertyMetaData::getType()
{
    return type;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ddf::EscherPropertyMetaData::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ddf.EscherPropertyMetaData", 41);
    return c;
}

java::lang::Class* poi::ddf::EscherPropertyMetaData::getClass0()
{
    return class_();
}

