// Generated from /POI/java/org/apache/poi/hpsf/Currency.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/hpsf/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::hpsf::Currency
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static constexpr int32_t SIZE { int32_t(8) };
    ::int8_tArray* _value {  };
protected:
    void ctor();

public: /* package */
    virtual void read(::poi::util::LittleEndianByteArrayInputStream* lei);

    // Generated
    Currency();
protected:
    Currency(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    void init();
    virtual ::java::lang::Class* getClass0();
};
