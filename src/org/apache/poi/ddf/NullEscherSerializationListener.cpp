// Generated from /POI/java/org/apache/poi/ddf/NullEscherSerializationListener.java
#include <org/apache/poi/ddf/NullEscherSerializationListener.hpp>

org::apache::poi::ddf::NullEscherSerializationListener::NullEscherSerializationListener(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ddf::NullEscherSerializationListener::NullEscherSerializationListener()
    : NullEscherSerializationListener(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void org::apache::poi::ddf::NullEscherSerializationListener::beforeRecordSerialize(int32_t offset, int16_t recordId, EscherRecord* record)
{
}

void org::apache::poi::ddf::NullEscherSerializationListener::afterRecordSerialize(int32_t offset, int16_t recordId, int32_t size, EscherRecord* record)
{
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ddf::NullEscherSerializationListener::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ddf.NullEscherSerializationListener", 50);
    return c;
}

java::lang::Class* org::apache::poi::ddf::NullEscherSerializationListener::getClass0()
{
    return class_();
}

