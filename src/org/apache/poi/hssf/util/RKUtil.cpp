// Generated from /POI/java/org/apache/poi/hssf/util/RKUtil.java
#include <org/apache/poi/hssf/util/RKUtil.hpp>

#include <java/lang/Double.hpp>

poi::hssf::util::RKUtil::RKUtil(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::util::RKUtil::RKUtil() 
    : RKUtil(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void poi::hssf::util::RKUtil::ctor()
{
    super::ctor();
}

double poi::hssf::util::RKUtil::decodeNumber(int32_t number)
{
    clinit();
    int64_t raw_number = number;
    raw_number = raw_number >> int32_t(2);
    double rvalue = int32_t(0);
    if((number & int32_t(2)) == 2) {
        rvalue = raw_number;
    } else {
        rvalue = ::java::lang::Double::longBitsToDouble(raw_number << int32_t(34));
    }
    if((number & int32_t(1)) == 1) {
        rvalue /= 100;
    }
    return rvalue;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::util::RKUtil::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.util.RKUtil", 31);
    return c;
}

java::lang::Class* poi::hssf::util::RKUtil::getClass0()
{
    return class_();
}

