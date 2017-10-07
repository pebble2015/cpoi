// Generated from /POI/java/org/apache/poi/util/Units.java
#include <org/apache/poi/util/Units.hpp>

#include <java/lang/Math.hpp>
#include <cmath>

org::apache::poi::util::Units::Units(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::util::Units::Units()
    : Units(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

constexpr int32_t org::apache::poi::util::Units::EMU_PER_PIXEL;

constexpr int32_t org::apache::poi::util::Units::EMU_PER_POINT;

constexpr int32_t org::apache::poi::util::Units::EMU_PER_CENTIMETER;

constexpr int32_t org::apache::poi::util::Units::MASTER_DPI;

constexpr int32_t org::apache::poi::util::Units::PIXEL_DPI;

constexpr int32_t org::apache::poi::util::Units::POINT_DPI;

constexpr float org::apache::poi::util::Units::DEFAULT_CHARACTER_WIDTH;

constexpr int32_t org::apache::poi::util::Units::EMU_PER_CHARACTER;

int32_t org::apache::poi::util::Units::toEMU(double points)
{
    clinit();
    return static_cast< int32_t >(::java::lang::Math::rint(EMU_PER_POINT * points));
}

int32_t org::apache::poi::util::Units::pixelToEMU(int32_t pixels)
{
    clinit();
    return pixels * EMU_PER_PIXEL;
}

double org::apache::poi::util::Units::toPoints(int64_t emu)
{
    clinit();
    return static_cast< double >(emu) / EMU_PER_POINT;
}

double org::apache::poi::util::Units::fixedPointToDouble(int32_t fixedPoint)
{
    clinit();
    auto i = (fixedPoint >> int32_t(16));
    auto f = fixedPoint & int32_t(65535);
    return (i + f / 65536.0);
}

int32_t org::apache::poi::util::Units::doubleToFixedPoint(double floatPoint)
{
    clinit();
    auto fractionalPart = std::fmod(floatPoint, 1.0);
    auto integralPart = floatPoint - fractionalPart;
    auto i = static_cast< int32_t >(::java::lang::Math::floor(integralPart));
    auto f = static_cast< int32_t >(::java::lang::Math::rint(fractionalPart * 65536.0));
    return (i << int32_t(16)) | (f & int32_t(65535));
}

double org::apache::poi::util::Units::masterToPoints(int32_t masterDPI)
{
    clinit();
    double points = masterDPI;
    points *= POINT_DPI;
    points /= MASTER_DPI;
    return points;
}

int32_t org::apache::poi::util::Units::pointsToMaster(double points)
{
    clinit();
    points *= MASTER_DPI;
    points /= POINT_DPI;
    return static_cast< int32_t >(::java::lang::Math::rint(points));
}

int32_t org::apache::poi::util::Units::pointsToPixel(double points)
{
    clinit();
    points *= PIXEL_DPI;
    points /= POINT_DPI;
    return static_cast< int32_t >(::java::lang::Math::rint(points));
}

double org::apache::poi::util::Units::pixelToPoints(int32_t pixel)
{
    clinit();
    double points = pixel;
    points *= POINT_DPI;
    points /= PIXEL_DPI;
    return points;
}

int32_t org::apache::poi::util::Units::charactersToEMU(double characters)
{
    clinit();
    return static_cast< int32_t >(characters) * EMU_PER_CHARACTER;
}

int32_t org::apache::poi::util::Units::columnWidthToEMU(int32_t columnWidth)
{
    clinit();
    return charactersToEMU(columnWidth / 256.0);
}

int32_t org::apache::poi::util::Units::TwipsToEMU(int16_t twips)
{
    clinit();
    return static_cast< int32_t >((twips / 20.0 * EMU_PER_POINT));
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::util::Units::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.util.Units", 25);
    return c;
}

java::lang::Class* org::apache::poi::util::Units::getClass0()
{
    return class_();
}

