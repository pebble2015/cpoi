// Generated from /POI/java/org/apache/poi/ss/formula/functions/BaseNumberUtils.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::ss::formula::functions::BaseNumberUtils
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
    static double convertToDecimal(::java::lang::String* value, int32_t base, int32_t maxNumberOfPlaces) /* throws(IllegalArgumentException) */;

private:
    static double getTwoComplement(double base, double maxNumberOfPlaces, double decimalValue);

    // Generated

public:
    BaseNumberUtils();
protected:
    BaseNumberUtils(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
