// Generated from /POI/java/org/apache/poi/ss/usermodel/PatternFormatting.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct org::apache::poi::ss::usermodel::PatternFormatting
    : public virtual ::java::lang::Object
{
    static constexpr int16_t NO_FILL { int16_t(0) };
    static constexpr int16_t SOLID_FOREGROUND { int16_t(1) };
    static constexpr int16_t FINE_DOTS { int16_t(2) };
    static constexpr int16_t ALT_BARS { int16_t(3) };
    static constexpr int16_t SPARSE_DOTS { int16_t(4) };
    static constexpr int16_t THICK_HORZ_BANDS { int16_t(5) };
    static constexpr int16_t THICK_VERT_BANDS { int16_t(6) };
    static constexpr int16_t THICK_BACKWARD_DIAG { int16_t(7) };
    static constexpr int16_t THICK_FORWARD_DIAG { int16_t(8) };
    static constexpr int16_t BIG_SPOTS { int16_t(9) };
    static constexpr int16_t BRICKS { int16_t(10) };
    static constexpr int16_t THIN_HORZ_BANDS { int16_t(11) };
    static constexpr int16_t THIN_VERT_BANDS { int16_t(12) };
    static constexpr int16_t THIN_BACKWARD_DIAG { int16_t(13) };
    static constexpr int16_t THIN_FORWARD_DIAG { int16_t(14) };
    static constexpr int16_t SQUARES { int16_t(15) };
    static constexpr int16_t DIAMONDS { int16_t(16) };
    static constexpr int16_t LESS_DOTS { int16_t(17) };
    static constexpr int16_t LEAST_DOTS { int16_t(18) };
    virtual int16_t getFillBackgroundColor() = 0;
    virtual int16_t getFillForegroundColor() = 0;
    virtual Color* getFillBackgroundColorColor() = 0;
    virtual Color* getFillForegroundColorColor() = 0;
    virtual int16_t getFillPattern() = 0;
    virtual void setFillBackgroundColor(int16_t bg) = 0;
    virtual void setFillForegroundColor(int16_t fg) = 0;
    virtual void setFillBackgroundColor(Color* bg) = 0;
    virtual void setFillForegroundColor(Color* fg) = 0;
    virtual void setFillPattern(int16_t fp) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
