// Generated from /POI/java/org/apache/poi/hssf/record/cf/PatternFormatting.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/cf/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/Cloneable.hpp>

struct default_init_tag;

class org::apache::poi::hssf::record::cf::PatternFormatting final
    : public virtual ::java::lang::Object
    , public ::java::lang::Cloneable
{

public:
    typedef ::java::lang::Object super;
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

private:
    int32_t field_15_pattern_style {  };
    static ::org::apache::poi::util::BitField* fillPatternStyle_;
    int32_t field_16_pattern_color_indexes {  };
    static ::org::apache::poi::util::BitField* patternColorIndex_;
    static ::org::apache::poi::util::BitField* patternBackgroundColorIndex_;
protected:
    void ctor();
    void ctor(::org::apache::poi::util::LittleEndianInput* in);

public:
    int32_t getDataLength();
    void setFillPattern(int32_t fp);
    int32_t getFillPattern();
    void setFillBackgroundColor(int32_t bg);
    int32_t getFillBackgroundColor();
    void setFillForegroundColor(int32_t fg);
    int32_t getFillForegroundColor();
    ::java::lang::String* toString() override;
    ::java::lang::Object* clone() override;
    void serialize(::org::apache::poi::util::LittleEndianOutput* out);

    // Generated
    PatternFormatting();
    PatternFormatting(::org::apache::poi::util::LittleEndianInput* in);
protected:
    PatternFormatting(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static ::org::apache::poi::util::BitField*& fillPatternStyle();
    static ::org::apache::poi::util::BitField*& patternColorIndex();
    static ::org::apache::poi::util::BitField*& patternBackgroundColorIndex();
    virtual ::java::lang::Class* getClass0();
};
