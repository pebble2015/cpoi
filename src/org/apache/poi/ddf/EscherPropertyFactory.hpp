// Generated from /POI/java/org/apache/poi/ddf/EscherPropertyFactory.java

#pragma once

#include <fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/ddf/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::poi::ddf::EscherPropertyFactory final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
    ::java::util::List* createProperties(::int8_tArray* data, int32_t offset, int16_t numProperties);

    // Generated
    EscherPropertyFactory();
protected:
    EscherPropertyFactory(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
