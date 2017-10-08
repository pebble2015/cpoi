// Generated from /POI/java/org/apache/poi/util/Units.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::util::Units
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
    static constexpr int32_t EMU_PER_PIXEL { int32_t(9525) };
    static constexpr int32_t EMU_PER_POINT { int32_t(12700) };
    static constexpr int32_t EMU_PER_CENTIMETER { int32_t(360000) };
    static constexpr int32_t MASTER_DPI { int32_t(576) };
    static constexpr int32_t PIXEL_DPI { int32_t(96) };
    static constexpr int32_t POINT_DPI { int32_t(72) };
    static constexpr float DEFAULT_CHARACTER_WIDTH { 7.0017f };
    static constexpr int32_t EMU_PER_CHARACTER { int32_t(66691) };
    static int32_t toEMU(double points);
    static int32_t pixelToEMU(int32_t pixels);
    static double toPoints(int64_t emu);
    static double fixedPointToDouble(int32_t fixedPoint);
    static int32_t doubleToFixedPoint(double floatPoint);
    static double masterToPoints(int32_t masterDPI);
    static int32_t pointsToMaster(double points);
    static int32_t pointsToPixel(double points);
    static double pixelToPoints(int32_t pixel);
    static int32_t charactersToEMU(double characters);
    static int32_t columnWidthToEMU(int32_t columnWidth);
    static int32_t TwipsToEMU(int16_t twips);

    // Generated
    Units();
protected:
    Units(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
