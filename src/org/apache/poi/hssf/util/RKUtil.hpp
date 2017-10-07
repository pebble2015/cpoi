// Generated from /POI/java/org/apache/poi/hssf/util/RKUtil.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/hssf/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::poi::hssf::util::RKUtil final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
protected:
    void ctor();

public:
    static double decodeNumber(int32_t number);

    // Generated

private:
    RKUtil();
protected:
    RKUtil(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
