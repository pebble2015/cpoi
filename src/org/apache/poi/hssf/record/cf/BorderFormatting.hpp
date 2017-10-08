// Generated from /POI/java/org/apache/poi/hssf/record/cf/BorderFormatting.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/cf/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/Cloneable.hpp>

struct default_init_tag;

class poi::hssf::record::cf::BorderFormatting final
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
    static ::poi::util::BitField* bordLeftLineStyle_;
    static ::poi::util::BitField* bordRightLineStyle_;
    static ::poi::util::BitField* bordTopLineStyle_;
    static ::poi::util::BitField* bordBottomLineStyle_;
    static ::poi::util::BitField* bordLeftLineColor_;
    static ::poi::util::BitField* bordRightLineColor_;
    static ::poi::util::BitField* bordTlBrLineOnOff_;
    static ::poi::util::BitField* bordBlTrtLineOnOff_;
    int32_t field_14_border_styles2 {  };
    static ::poi::util::BitField* bordTopLineColor_;
    static ::poi::util::BitField* bordBottomLineColor_;
    static ::poi::util::BitField* bordDiagLineColor_;
    static ::poi::util::BitField* bordDiagLineStyle_;
protected:
    void ctor();
    void ctor(::poi::util::LittleEndianInput* in);

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
    void serialize(::poi::util::LittleEndianOutput* out);

    // Generated
    BorderFormatting();
    BorderFormatting(::poi::util::LittleEndianInput* in);
protected:
    BorderFormatting(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static ::poi::util::BitField*& bordLeftLineStyle();
    static ::poi::util::BitField*& bordRightLineStyle();
    static ::poi::util::BitField*& bordTopLineStyle();
    static ::poi::util::BitField*& bordBottomLineStyle();
    static ::poi::util::BitField*& bordLeftLineColor();
    static ::poi::util::BitField*& bordRightLineColor();
    static ::poi::util::BitField*& bordTlBrLineOnOff();
    static ::poi::util::BitField*& bordBlTrtLineOnOff();
    static ::poi::util::BitField*& bordTopLineColor();
    static ::poi::util::BitField*& bordBottomLineColor();
    static ::poi::util::BitField*& bordDiagLineColor();
    static ::poi::util::BitField*& bordDiagLineStyle();
    virtual ::java::lang::Class* getClass0();
};
