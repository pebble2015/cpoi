// Generated from /POI/java/org/apache/poi/ss/format/CellElapsedFormatter.java
#include <org/apache/poi/ss/format/CellElapsedFormatter_TimeSpec.hpp>

#include <java/lang/Math.hpp>
#include <cmath>

org::apache::poi::ss::format::CellElapsedFormatter_TimeSpec::CellElapsedFormatter_TimeSpec(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::format::CellElapsedFormatter_TimeSpec::CellElapsedFormatter_TimeSpec(char16_t type, int32_t pos, int32_t len, double factor) 
    : CellElapsedFormatter_TimeSpec(*static_cast< ::default_init_tag* >(0))
{
    ctor(type,pos,len,factor);
}

void org::apache::poi::ss::format::CellElapsedFormatter_TimeSpec::ctor(char16_t type, int32_t pos, int32_t len, double factor)
{
    super::ctor();
    this->type = type;
    this->pos = pos;
    this->len = len;
    this->factor = factor;
    modBy = 0;
}

int64_t org::apache::poi::ss::format::CellElapsedFormatter_TimeSpec::valueFor(double elapsed)
{
    double val;
    if(modBy == 0)
        val = elapsed / factor;
    else
        val = std::fmod(elapsed / factor, modBy);
    if(type == u'0')
        return ::java::lang::Math::round(val);
    else
        return static_cast< int64_t >(val);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::format::CellElapsedFormatter_TimeSpec::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.format.CellElapsedFormatter.TimeSpec", 54);
    return c;
}

java::lang::Class* org::apache::poi::ss::format::CellElapsedFormatter_TimeSpec::getClass0()
{
    return class_();
}

