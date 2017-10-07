// Generated from /POI/java/org/apache/poi/hssf/record/ExtendedFormatRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>

struct default_init_tag;

class org::apache::poi::hssf::record::ExtendedFormatRecord final
    : public StandardRecord
{

public:
    typedef StandardRecord super;
    static constexpr int16_t sid { int16_t(224) };
    static constexpr int16_t NULL_ { int16_t(-16) };
    static constexpr int16_t XF_STYLE { int16_t(1) };
    static constexpr int16_t XF_CELL { int16_t(0) };
    static constexpr int16_t NONE { int16_t(0) };
    static constexpr int16_t THIN { int16_t(1) };
    static constexpr int16_t MEDIUM { int16_t(2) };
    static constexpr int16_t DASHED { int16_t(3) };
    static constexpr int16_t DOTTED { int16_t(4) };
    static constexpr int16_t THICK { int16_t(5) };
    static constexpr int16_t DOUBLE { int16_t(6) };
    static constexpr int16_t HAIR { int16_t(7) };
    static constexpr int16_t MEDIUM_DASHED { int16_t(8) };
    static constexpr int16_t DASH_DOT { int16_t(9) };
    static constexpr int16_t MEDIUM_DASH_DOT { int16_t(10) };
    static constexpr int16_t DASH_DOT_DOT { int16_t(11) };
    static constexpr int16_t MEDIUM_DASH_DOT_DOT { int16_t(12) };
    static constexpr int16_t SLANTED_DASH_DOT { int16_t(13) };
    static constexpr int16_t GENERAL { int16_t(0) };
    static constexpr int16_t LEFT { int16_t(1) };
    static constexpr int16_t CENTER { int16_t(2) };
    static constexpr int16_t RIGHT { int16_t(3) };
    static constexpr int16_t FILL { int16_t(4) };
    static constexpr int16_t JUSTIFY { int16_t(5) };
    static constexpr int16_t CENTER_SELECTION { int16_t(6) };
    static constexpr int16_t VERTICAL_TOP { int16_t(0) };
    static constexpr int16_t VERTICAL_CENTER { int16_t(1) };
    static constexpr int16_t VERTICAL_BOTTOM { int16_t(2) };
    static constexpr int16_t VERTICAL_JUSTIFY { int16_t(3) };
    static constexpr int16_t NO_FILL { int16_t(0) };
    static constexpr int16_t SOLID_FILL { int16_t(1) };
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

private:
    int16_t field_1_font_index {  };
    int16_t field_2_format_index {  };
    static ::org::apache::poi::util::BitField* _locked_;
    static ::org::apache::poi::util::BitField* _hidden_;
    static ::org::apache::poi::util::BitField* _xf_type_;
    static ::org::apache::poi::util::BitField* _123_prefix_;
    static ::org::apache::poi::util::BitField* _parent_index_;
    int16_t field_3_cell_options {  };
    static ::org::apache::poi::util::BitField* _alignment_;
    static ::org::apache::poi::util::BitField* _wrap_text_;
    static ::org::apache::poi::util::BitField* _vertical_alignment_;
    static ::org::apache::poi::util::BitField* _justify_last_;
    static ::org::apache::poi::util::BitField* _rotation_;
    int16_t field_4_alignment_options {  };
    static ::org::apache::poi::util::BitField* _indent_;
    static ::org::apache::poi::util::BitField* _shrink_to_fit_;
    static ::org::apache::poi::util::BitField* _merge_cells_;
    static ::org::apache::poi::util::BitField* _reading_order_;
    static ::org::apache::poi::util::BitField* _indent_not_parent_format_;
    static ::org::apache::poi::util::BitField* _indent_not_parent_font_;
    static ::org::apache::poi::util::BitField* _indent_not_parent_alignment_;
    static ::org::apache::poi::util::BitField* _indent_not_parent_border_;
    static ::org::apache::poi::util::BitField* _indent_not_parent_pattern_;
    static ::org::apache::poi::util::BitField* _indent_not_parent_cell_options_;
    int16_t field_5_indention_options {  };
    static ::org::apache::poi::util::BitField* _border_left_;
    static ::org::apache::poi::util::BitField* _border_right_;
    static ::org::apache::poi::util::BitField* _border_top_;
    static ::org::apache::poi::util::BitField* _border_bottom_;
    int16_t field_6_border_options {  };
    static ::org::apache::poi::util::BitField* _left_border_palette_idx_;
    static ::org::apache::poi::util::BitField* _right_border_palette_idx_;
    static ::org::apache::poi::util::BitField* _diag_;
    int16_t field_7_palette_options {  };
    static ::org::apache::poi::util::BitField* _top_border_palette_idx_;
    static ::org::apache::poi::util::BitField* _bottom_border_palette_idx_;
    static ::org::apache::poi::util::BitField* _adtl_diag_;
    static ::org::apache::poi::util::BitField* _adtl_diag_line_style_;
    static ::org::apache::poi::util::BitField* _adtl_fill_pattern_;
    int32_t field_8_adtl_palette_options {  };
    static ::org::apache::poi::util::BitField* _fill_foreground_;
    static ::org::apache::poi::util::BitField* _fill_background_;
    int16_t field_9_fill_palette_options {  };
protected:
    void ctor();
    void ctor(RecordInputStream* in);

public:
    void setFontIndex(int16_t index);
    void setFormatIndex(int16_t index);
    void setCellOptions(int16_t options);
    void setLocked(bool locked);
    void setHidden(bool hidden);
    void setXFType(int16_t type);
    void set123Prefix(bool prefix);
    void setParentIndex(int16_t parent);
    void setAlignmentOptions(int16_t options);
    void setAlignment(int16_t align);
    void setWrapText(bool wrapped);
    void setVerticalAlignment(int16_t align);
    void setJustifyLast(int16_t justify);
    void setRotation(int16_t rotation);
    void setIndentionOptions(int16_t options);
    void setIndent(int16_t indent);
    void setShrinkToFit(bool shrink);
    void setMergeCells(bool merge);
    void setReadingOrder(int16_t order);
    void setIndentNotParentFormat(bool parent);
    void setIndentNotParentFont(bool font);
    void setIndentNotParentAlignment(bool alignment);
    void setIndentNotParentBorder(bool border);
    void setIndentNotParentPattern(bool pattern);
    void setIndentNotParentCellOptions(bool options);
    void setBorderOptions(int16_t options);
    void setBorderLeft(int16_t border);
    void setBorderRight(int16_t border);
    void setBorderTop(int16_t border);
    void setBorderBottom(int16_t border);
    void setPaletteOptions(int16_t options);
    void setLeftBorderPaletteIdx(int16_t border);
    void setRightBorderPaletteIdx(int16_t border);
    void setDiag(int16_t diag);
    void setAdtlPaletteOptions(int16_t options);
    void setTopBorderPaletteIdx(int16_t border);
    void setBottomBorderPaletteIdx(int16_t border);
    void setAdtlDiag(int16_t diag);
    void setAdtlDiagLineStyle(int16_t diag);
    void setAdtlFillPattern(int16_t fill);
    void setFillPaletteOptions(int16_t options);
    void setFillForeground(int16_t color);
    void setFillBackground(int16_t color);
    int16_t getFontIndex();
    int16_t getFormatIndex();
    int16_t getCellOptions();
    bool isLocked();
    bool isHidden();
    int16_t getXFType();
    bool get123Prefix();
    int16_t getParentIndex();
    int16_t getAlignmentOptions();
    int16_t getAlignment();
    bool getWrapText();
    int16_t getVerticalAlignment();
    int16_t getJustifyLast();
    int16_t getRotation();
    int16_t getIndentionOptions();
    int16_t getIndent();
    bool getShrinkToFit();
    bool getMergeCells();
    int16_t getReadingOrder();
    bool isIndentNotParentFormat();
    bool isIndentNotParentFont();
    bool isIndentNotParentAlignment();
    bool isIndentNotParentBorder();
    bool isIndentNotParentPattern();
    bool isIndentNotParentCellOptions();
    int16_t getBorderOptions();
    int16_t getBorderLeft();
    int16_t getBorderRight();
    int16_t getBorderTop();
    int16_t getBorderBottom();
    int16_t getPaletteOptions();
    int16_t getLeftBorderPaletteIdx();
    int16_t getRightBorderPaletteIdx();
    int16_t getDiag();
    int32_t getAdtlPaletteOptions();
    int16_t getTopBorderPaletteIdx();
    int16_t getBottomBorderPaletteIdx();
    int16_t getAdtlDiag();
    int16_t getAdtlDiagLineStyle();
    int16_t getAdtlFillPattern();
    int16_t getFillPaletteOptions();
    int16_t getFillForeground();
    int16_t getFillBackground();
    ::java::lang::String* toString() override;
    void serialize(::org::apache::poi::util::LittleEndianOutput* out) override;

public: /* protected */
    int32_t getDataSize() override;

public:
    int16_t getSid() override;
    void cloneStyleFrom(ExtendedFormatRecord* source);
    int32_t hashCode() override;
    bool equals(::java::lang::Object* obj) override;
    ::int32_tArray* stateSummary();

    // Generated
    ExtendedFormatRecord();
    ExtendedFormatRecord(RecordInputStream* in);
protected:
    ExtendedFormatRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    ::int8_tArray* serialize();

private:
    static ::org::apache::poi::util::BitField*& _locked();
    static ::org::apache::poi::util::BitField*& _hidden();
    static ::org::apache::poi::util::BitField*& _xf_type();
    static ::org::apache::poi::util::BitField*& _123_prefix();
    static ::org::apache::poi::util::BitField*& _parent_index();
    static ::org::apache::poi::util::BitField*& _alignment();
    static ::org::apache::poi::util::BitField*& _wrap_text();
    static ::org::apache::poi::util::BitField*& _vertical_alignment();
    static ::org::apache::poi::util::BitField*& _justify_last();
    static ::org::apache::poi::util::BitField*& _rotation();
    static ::org::apache::poi::util::BitField*& _indent();
    static ::org::apache::poi::util::BitField*& _shrink_to_fit();
    static ::org::apache::poi::util::BitField*& _merge_cells();
    static ::org::apache::poi::util::BitField*& _reading_order();
    static ::org::apache::poi::util::BitField*& _indent_not_parent_format();
    static ::org::apache::poi::util::BitField*& _indent_not_parent_font();
    static ::org::apache::poi::util::BitField*& _indent_not_parent_alignment();
    static ::org::apache::poi::util::BitField*& _indent_not_parent_border();
    static ::org::apache::poi::util::BitField*& _indent_not_parent_pattern();
    static ::org::apache::poi::util::BitField*& _indent_not_parent_cell_options();
    static ::org::apache::poi::util::BitField*& _border_left();
    static ::org::apache::poi::util::BitField*& _border_right();
    static ::org::apache::poi::util::BitField*& _border_top();
    static ::org::apache::poi::util::BitField*& _border_bottom();
    static ::org::apache::poi::util::BitField*& _left_border_palette_idx();
    static ::org::apache::poi::util::BitField*& _right_border_palette_idx();
    static ::org::apache::poi::util::BitField*& _diag();
    static ::org::apache::poi::util::BitField*& _top_border_palette_idx();
    static ::org::apache::poi::util::BitField*& _bottom_border_palette_idx();
    static ::org::apache::poi::util::BitField*& _adtl_diag();
    static ::org::apache::poi::util::BitField*& _adtl_diag_line_style();
    static ::org::apache::poi::util::BitField*& _adtl_fill_pattern();
    static ::org::apache::poi::util::BitField*& _fill_foreground();
    static ::org::apache::poi::util::BitField*& _fill_background();
    virtual ::java::lang::Class* getClass0();
};
