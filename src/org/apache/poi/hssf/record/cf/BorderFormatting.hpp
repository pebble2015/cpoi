// Generated from /POI/java/org/apache/poi/hssf/record/cf/BorderFormatting.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/cf/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/Cloneable.hpp>

struct default_init_tag;

class org::apache::poi::hssf::record::cf::BorderFormatting final
    : public virtual ::java::lang::Object
    , public ::java::lang::Cloneable
{

public:
    typedef ::java::lang::Object super;
    static constexpr int16_t BORDER_NONE { int16_t(0) };
    static constexpr int16_t BORDER_THIN { int16_t(1) };
    static constexpr int16_t BORDER_MEDIUM { int16_t(2) };
    static constexpr int16_t BORDER_DASHED { int16_t(3) };
    static constexpr int16_t BORDER_HAIR { int16_t(4) };
    static constexpr int16_t BORDER_THICK { int16_t(5) };
    static constexpr int16_t BORDER_DOUBLE { int16_t(6) };
    static constexpr int16_t BORDER_DOTTED { int16_t(7) };
    static constexpr int16_t BORDER_MEDIUM_DASHED { int16_t(8) };
    static constexpr int16_t BORDER_DASH_DOT { int16_t(9) };
    static constexpr int16_t BORDER_MEDIUM_DASH_DOT { int16_t(10) };
    static constexpr int16_t BORDER_DASH_DOT_DOT { int16_t(11) };
    static constexpr int16_t BORDER_MEDIUM_DASH_DOT_DOT { int16_t(12) };
    static constexpr int16_t BORDER_SLANTED_DASH_DOT { int16_t(13) };

private:
    int32_t field_13_border_styles1 {  };
    static ::org::apache::poi::util::BitField* bordLeftLineStyle_;
    static ::org::apache::poi::util::BitField* bordRightLineStyle_;
    static ::org::apache::poi::util::BitField* bordTopLineStyle_;
    static ::org::apache::poi::util::BitField* bordBottomLineStyle_;
    static ::org::apache::poi::util::BitField* bordLeftLineColor_;
    static ::org::apache::poi::util::BitField* bordRightLineColor_;
    static ::org::apache::poi::util::BitField* bordTlBrLineOnOff_;
    static ::org::apache::poi::util::BitField* bordBlTrtLineOnOff_;
    int32_t field_14_border_styles2 {  };
    static ::org::apache::poi::util::BitField* bordTopLineColor_;
    static ::org::apache::poi::util::BitField* bordBottomLineColor_;
    static ::org::apache::poi::util::BitField* bordDiagLineColor_;
    static ::org::apache::poi::util::BitField* bordDiagLineStyle_;
protected:
    void ctor();
    void ctor(::org::apache::poi::util::LittleEndianInput* in);

public:
    int32_t getDataLength();
    void setBorderLeft(int32_t border);
    int32_t getBorderLeft();
    void setBorderRight(int32_t border);
    int32_t getBorderRight();
    void setBorderTop(int32_t border);
    int32_t getBorderTop();
    void setBorderBottom(int32_t border);
    int32_t getBorderBottom();
    void setBorderDiagonal(int32_t border);
    int32_t getBorderDiagonal();
    void setLeftBorderColor(int32_t color);
    int32_t getLeftBorderColor();
    void setRightBorderColor(int32_t color);
    int32_t getRightBorderColor();
    void setTopBorderColor(int32_t color);
    int32_t getTopBorderColor();
    void setBottomBorderColor(int32_t color);
    int32_t getBottomBorderColor();
    void setDiagonalBorderColor(int32_t color);
    int32_t getDiagonalBorderColor();
    void setForwardDiagonalOn(bool on);
    void setBackwardDiagonalOn(bool on);
    bool isForwardDiagonalOn();
    bool isBackwardDiagonalOn();
    ::java::lang::String* toString() override;
    BorderFormatting* clone() override;
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    void serialize(::org::apache::poi::util::LittleEndianOutput* out);

    // Generated
    BorderFormatting();
    BorderFormatting(::org::apache::poi::util::LittleEndianInput* in);
protected:
    BorderFormatting(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static ::org::apache::poi::util::BitField*& bordLeftLineStyle();
    static ::org::apache::poi::util::BitField*& bordRightLineStyle();
    static ::org::apache::poi::util::BitField*& bordTopLineStyle();
    static ::org::apache::poi::util::BitField*& bordBottomLineStyle();
    static ::org::apache::poi::util::BitField*& bordLeftLineColor();
    static ::org::apache::poi::util::BitField*& bordRightLineColor();
    static ::org::apache::poi::util::BitField*& bordTlBrLineOnOff();
    static ::org::apache::poi::util::BitField*& bordBlTrtLineOnOff();
    static ::org::apache::poi::util::BitField*& bordTopLineColor();
    static ::org::apache::poi::util::BitField*& bordBottomLineColor();
    static ::org::apache::poi::util::BitField*& bordDiagLineColor();
    static ::org::apache::poi::util::BitField*& bordDiagLineStyle();
    virtual ::java::lang::Class* getClass0();
};
