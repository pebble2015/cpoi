// Generated from /POI/java/org/apache/poi/hpsf/MutableProperty.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hpsf/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hpsf/Property.hpp>

struct default_init_tag;

class poi::hpsf::MutableProperty
    : public Property
{

public:
    typedef Property super;
protected:
    void ctor();
    void ctor(Property* p);
    void ctor(int64_t id, int64_t type, ::java::lang::Object* value);
    void ctor(int64_t id, ::int8_tArray* src, int64_t offset, int32_t length, int32_t codepage) /* throws(UnsupportedEncodingException) */;
    void ctor(int64_t id, ::poi::util::LittleEndianByteArrayInputStream* leis, int32_t length, int32_t codepage) /* throws(UnsupportedEncodingException) */;

    // Generated

public:
    MutableProperty();
    MutableProperty(Property* p);
    MutableProperty(int64_t id, int64_t type, ::java::lang::Object* value);
    MutableProperty(int64_t id, ::int8_tArray* src, int64_t offset, int32_t length, int32_t codepage);
    MutableProperty(int64_t id, ::poi::util::LittleEndianByteArrayInputStream* leis, int32_t length, int32_t codepage);
protected:
    MutableProperty(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
