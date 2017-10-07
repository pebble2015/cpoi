// Generated from /POI/java/org/apache/poi/hpsf/MutableProperty.java
#include <org/apache/poi/hpsf/MutableProperty.hpp>

org::apache::poi::hpsf::MutableProperty::MutableProperty(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hpsf::MutableProperty::MutableProperty() 
    : MutableProperty(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::hpsf::MutableProperty::MutableProperty(Property* p) 
    : MutableProperty(*static_cast< ::default_init_tag* >(0))
{
    ctor(p);
}

org::apache::poi::hpsf::MutableProperty::MutableProperty(int64_t id, int64_t type, ::java::lang::Object* value) 
    : MutableProperty(*static_cast< ::default_init_tag* >(0))
{
    ctor(id,type,value);
}

org::apache::poi::hpsf::MutableProperty::MutableProperty(int64_t id, ::int8_tArray* src, int64_t offset, int32_t length, int32_t codepage)  /* throws(UnsupportedEncodingException) */
    : MutableProperty(*static_cast< ::default_init_tag* >(0))
{
    ctor(id,src,offset,length,codepage);
}

org::apache::poi::hpsf::MutableProperty::MutableProperty(int64_t id, ::org::apache::poi::util::LittleEndianByteArrayInputStream* leis, int32_t length, int32_t codepage)  /* throws(UnsupportedEncodingException) */
    : MutableProperty(*static_cast< ::default_init_tag* >(0))
{
    ctor(id,leis,length,codepage);
}

void org::apache::poi::hpsf::MutableProperty::ctor()
{
    super::ctor();
}

void org::apache::poi::hpsf::MutableProperty::ctor(Property* p)
{
    super::ctor(p);
}

void org::apache::poi::hpsf::MutableProperty::ctor(int64_t id, int64_t type, ::java::lang::Object* value)
{
    super::ctor(id, type, value);
}

void org::apache::poi::hpsf::MutableProperty::ctor(int64_t id, ::int8_tArray* src, int64_t offset, int32_t length, int32_t codepage) /* throws(UnsupportedEncodingException) */
{
    super::ctor(id, src, offset, length, codepage);
}

void org::apache::poi::hpsf::MutableProperty::ctor(int64_t id, ::org::apache::poi::util::LittleEndianByteArrayInputStream* leis, int32_t length, int32_t codepage) /* throws(UnsupportedEncodingException) */
{
    super::ctor(id, leis, length, codepage);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hpsf::MutableProperty::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hpsf.MutableProperty", 35);
    return c;
}

java::lang::Class* org::apache::poi::hpsf::MutableProperty::getClass0()
{
    return class_();
}

