// Generated from /POI/java/org/apache/poi/hssf/record/cf/ColorGradientThreshold.java
#include <org/apache/poi/hssf/record/cf/ColorGradientThreshold.hpp>

#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/util/LittleEndianInput.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::hssf::record::cf::ColorGradientThreshold::ColorGradientThreshold(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::cf::ColorGradientThreshold::ColorGradientThreshold() 
    : ColorGradientThreshold(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::hssf::record::cf::ColorGradientThreshold::ColorGradientThreshold(::org::apache::poi::util::LittleEndianInput* in) 
    : ColorGradientThreshold(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

void org::apache::poi::hssf::record::cf::ColorGradientThreshold::ctor()
{
    super::ctor();
    position = 0.0;
}

void org::apache::poi::hssf::record::cf::ColorGradientThreshold::ctor(::org::apache::poi::util::LittleEndianInput* in)
{
    super::ctor(in);
    position = npc(in)->readDouble();
}

double org::apache::poi::hssf::record::cf::ColorGradientThreshold::getPosition()
{
    return position;
}

void org::apache::poi::hssf::record::cf::ColorGradientThreshold::setPosition(double position)
{
    this->position = position;
}

int32_t org::apache::poi::hssf::record::cf::ColorGradientThreshold::getDataLength()
{
    return super::getDataLength() + int32_t(8);
}

org::apache::poi::hssf::record::cf::ColorGradientThreshold* org::apache::poi::hssf::record::cf::ColorGradientThreshold::clone()
{
    auto rec = new ColorGradientThreshold();
    super::copyTo(rec);
    npc(rec)->position = position;
    return rec;
}

void org::apache::poi::hssf::record::cf::ColorGradientThreshold::serialize(::org::apache::poi::util::LittleEndianOutput* out)
{
    super::serialize(out);
    npc(out)->writeDouble(position);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::cf::ColorGradientThreshold::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.cf.ColorGradientThreshold", 52);
    return c;
}

java::lang::Class* org::apache::poi::hssf::record::cf::ColorGradientThreshold::getClass0()
{
    return class_();
}

