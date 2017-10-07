// Generated from /POI/java/org/apache/poi/hssf/record/ExtendedFormatRecord.java
#include <org/apache/poi/hssf/record/ExtendedFormatRecord.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream.hpp>
#include <org/apache/poi/util/BitField.hpp>
#include <org/apache/poi/util/BitFieldFactory.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>
#include <Array.hpp>

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(nullptr);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::hssf::record::ExtendedFormatRecord::ExtendedFormatRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::ExtendedFormatRecord::ExtendedFormatRecord() 
    : ExtendedFormatRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::hssf::record::ExtendedFormatRecord::ExtendedFormatRecord(RecordInputStream* in) 
    : ExtendedFormatRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t org::apache::poi::hssf::record::ExtendedFormatRecord::sid;

constexpr int16_t org::apache::poi::hssf::record::ExtendedFormatRecord::NULL_;

constexpr int16_t org::apache::poi::hssf::record::ExtendedFormatRecord::XF_STYLE;

constexpr int16_t org::apache::poi::hssf::record::ExtendedFormatRecord::XF_CELL;

constexpr int16_t org::apache::poi::hssf::record::ExtendedFormatRecord::NONE;

constexpr int16_t org::apache::poi::hssf::record::ExtendedFormatRecord::THIN;

constexpr int16_t org::apache::poi::hssf::record::ExtendedFormatRecord::MEDIUM;

constexpr int16_t org::apache::poi::hssf::record::ExtendedFormatRecord::DASHED;

constexpr int16_t org::apache::poi::hssf::record::ExtendedFormatRecord::DOTTED;

constexpr int16_t org::apache::poi::hssf::record::ExtendedFormatRecord::THICK;

constexpr int16_t org::apache::poi::hssf::record::ExtendedFormatRecord::DOUBLE;

constexpr int16_t org::apache::poi::hssf::record::ExtendedFormatRecord::HAIR;

constexpr int16_t org::apache::poi::hssf::record::ExtendedFormatRecord::MEDIUM_DASHED;

constexpr int16_t org::apache::poi::hssf::record::ExtendedFormatRecord::DASH_DOT;

constexpr int16_t org::apache::poi::hssf::record::ExtendedFormatRecord::MEDIUM_DASH_DOT;

constexpr int16_t org::apache::poi::hssf::record::ExtendedFormatRecord::DASH_DOT_DOT;

constexpr int16_t org::apache::poi::hssf::record::ExtendedFormatRecord::MEDIUM_DASH_DOT_DOT;

constexpr int16_t org::apache::poi::hssf::record::ExtendedFormatRecord::SLANTED_DASH_DOT;

constexpr int16_t org::apache::poi::hssf::record::ExtendedFormatRecord::GENERAL;

constexpr int16_t org::apache::poi::hssf::record::ExtendedFormatRecord::LEFT;

constexpr int16_t org::apache::poi::hssf::record::ExtendedFormatRecord::CENTER;

constexpr int16_t org::apache::poi::hssf::record::ExtendedFormatRecord::RIGHT;

constexpr int16_t org::apache::poi::hssf::record::ExtendedFormatRecord::FILL;

constexpr int16_t org::apache::poi::hssf::record::ExtendedFormatRecord::JUSTIFY;

constexpr int16_t org::apache::poi::hssf::record::ExtendedFormatRecord::CENTER_SELECTION;

constexpr int16_t org::apache::poi::hssf::record::ExtendedFormatRecord::VERTICAL_TOP;

constexpr int16_t org::apache::poi::hssf::record::ExtendedFormatRecord::VERTICAL_CENTER;

constexpr int16_t org::apache::poi::hssf::record::ExtendedFormatRecord::VERTICAL_BOTTOM;

constexpr int16_t org::apache::poi::hssf::record::ExtendedFormatRecord::VERTICAL_JUSTIFY;

constexpr int16_t org::apache::poi::hssf::record::ExtendedFormatRecord::NO_FILL;

constexpr int16_t org::apache::poi::hssf::record::ExtendedFormatRecord::SOLID_FILL;

constexpr int16_t org::apache::poi::hssf::record::ExtendedFormatRecord::FINE_DOTS;

constexpr int16_t org::apache::poi::hssf::record::ExtendedFormatRecord::ALT_BARS;

constexpr int16_t org::apache::poi::hssf::record::ExtendedFormatRecord::SPARSE_DOTS;

constexpr int16_t org::apache::poi::hssf::record::ExtendedFormatRecord::THICK_HORZ_BANDS;

constexpr int16_t org::apache::poi::hssf::record::ExtendedFormatRecord::THICK_VERT_BANDS;

constexpr int16_t org::apache::poi::hssf::record::ExtendedFormatRecord::THICK_BACKWARD_DIAG;

constexpr int16_t org::apache::poi::hssf::record::ExtendedFormatRecord::THICK_FORWARD_DIAG;

constexpr int16_t org::apache::poi::hssf::record::ExtendedFormatRecord::BIG_SPOTS;

constexpr int16_t org::apache::poi::hssf::record::ExtendedFormatRecord::BRICKS;

constexpr int16_t org::apache::poi::hssf::record::ExtendedFormatRecord::THIN_HORZ_BANDS;

constexpr int16_t org::apache::poi::hssf::record::ExtendedFormatRecord::THIN_VERT_BANDS;

constexpr int16_t org::apache::poi::hssf::record::ExtendedFormatRecord::THIN_BACKWARD_DIAG;

constexpr int16_t org::apache::poi::hssf::record::ExtendedFormatRecord::THIN_FORWARD_DIAG;

constexpr int16_t org::apache::poi::hssf::record::ExtendedFormatRecord::SQUARES;

constexpr int16_t org::apache::poi::hssf::record::ExtendedFormatRecord::DIAMONDS;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::ExtendedFormatRecord::_locked()
{
    clinit();
    return _locked_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::ExtendedFormatRecord::_locked_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::ExtendedFormatRecord::_hidden()
{
    clinit();
    return _hidden_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::ExtendedFormatRecord::_hidden_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::ExtendedFormatRecord::_xf_type()
{
    clinit();
    return _xf_type_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::ExtendedFormatRecord::_xf_type_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::ExtendedFormatRecord::_123_prefix()
{
    clinit();
    return _123_prefix_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::ExtendedFormatRecord::_123_prefix_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::ExtendedFormatRecord::_parent_index()
{
    clinit();
    return _parent_index_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::ExtendedFormatRecord::_parent_index_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::ExtendedFormatRecord::_alignment()
{
    clinit();
    return _alignment_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::ExtendedFormatRecord::_alignment_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::ExtendedFormatRecord::_wrap_text()
{
    clinit();
    return _wrap_text_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::ExtendedFormatRecord::_wrap_text_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::ExtendedFormatRecord::_vertical_alignment()
{
    clinit();
    return _vertical_alignment_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::ExtendedFormatRecord::_vertical_alignment_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::ExtendedFormatRecord::_justify_last()
{
    clinit();
    return _justify_last_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::ExtendedFormatRecord::_justify_last_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::ExtendedFormatRecord::_rotation()
{
    clinit();
    return _rotation_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::ExtendedFormatRecord::_rotation_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::ExtendedFormatRecord::_indent()
{
    clinit();
    return _indent_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::ExtendedFormatRecord::_indent_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::ExtendedFormatRecord::_shrink_to_fit()
{
    clinit();
    return _shrink_to_fit_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::ExtendedFormatRecord::_shrink_to_fit_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::ExtendedFormatRecord::_merge_cells()
{
    clinit();
    return _merge_cells_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::ExtendedFormatRecord::_merge_cells_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::ExtendedFormatRecord::_reading_order()
{
    clinit();
    return _reading_order_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::ExtendedFormatRecord::_reading_order_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::ExtendedFormatRecord::_indent_not_parent_format()
{
    clinit();
    return _indent_not_parent_format_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::ExtendedFormatRecord::_indent_not_parent_format_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::ExtendedFormatRecord::_indent_not_parent_font()
{
    clinit();
    return _indent_not_parent_font_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::ExtendedFormatRecord::_indent_not_parent_font_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::ExtendedFormatRecord::_indent_not_parent_alignment()
{
    clinit();
    return _indent_not_parent_alignment_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::ExtendedFormatRecord::_indent_not_parent_alignment_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::ExtendedFormatRecord::_indent_not_parent_border()
{
    clinit();
    return _indent_not_parent_border_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::ExtendedFormatRecord::_indent_not_parent_border_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::ExtendedFormatRecord::_indent_not_parent_pattern()
{
    clinit();
    return _indent_not_parent_pattern_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::ExtendedFormatRecord::_indent_not_parent_pattern_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::ExtendedFormatRecord::_indent_not_parent_cell_options()
{
    clinit();
    return _indent_not_parent_cell_options_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::ExtendedFormatRecord::_indent_not_parent_cell_options_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::ExtendedFormatRecord::_border_left()
{
    clinit();
    return _border_left_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::ExtendedFormatRecord::_border_left_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::ExtendedFormatRecord::_border_right()
{
    clinit();
    return _border_right_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::ExtendedFormatRecord::_border_right_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::ExtendedFormatRecord::_border_top()
{
    clinit();
    return _border_top_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::ExtendedFormatRecord::_border_top_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::ExtendedFormatRecord::_border_bottom()
{
    clinit();
    return _border_bottom_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::ExtendedFormatRecord::_border_bottom_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::ExtendedFormatRecord::_left_border_palette_idx()
{
    clinit();
    return _left_border_palette_idx_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::ExtendedFormatRecord::_left_border_palette_idx_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::ExtendedFormatRecord::_right_border_palette_idx()
{
    clinit();
    return _right_border_palette_idx_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::ExtendedFormatRecord::_right_border_palette_idx_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::ExtendedFormatRecord::_diag()
{
    clinit();
    return _diag_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::ExtendedFormatRecord::_diag_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::ExtendedFormatRecord::_top_border_palette_idx()
{
    clinit();
    return _top_border_palette_idx_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::ExtendedFormatRecord::_top_border_palette_idx_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::ExtendedFormatRecord::_bottom_border_palette_idx()
{
    clinit();
    return _bottom_border_palette_idx_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::ExtendedFormatRecord::_bottom_border_palette_idx_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::ExtendedFormatRecord::_adtl_diag()
{
    clinit();
    return _adtl_diag_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::ExtendedFormatRecord::_adtl_diag_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::ExtendedFormatRecord::_adtl_diag_line_style()
{
    clinit();
    return _adtl_diag_line_style_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::ExtendedFormatRecord::_adtl_diag_line_style_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::ExtendedFormatRecord::_adtl_fill_pattern()
{
    clinit();
    return _adtl_fill_pattern_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::ExtendedFormatRecord::_adtl_fill_pattern_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::ExtendedFormatRecord::_fill_foreground()
{
    clinit();
    return _fill_foreground_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::ExtendedFormatRecord::_fill_foreground_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::ExtendedFormatRecord::_fill_background()
{
    clinit();
    return _fill_background_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::ExtendedFormatRecord::_fill_background_;

void org::apache::poi::hssf::record::ExtendedFormatRecord::ctor()
{
    super::ctor();
}

void org::apache::poi::hssf::record::ExtendedFormatRecord::ctor(RecordInputStream* in)
{
    super::ctor();
    field_1_font_index = npc(in)->readShort();
    field_2_format_index = npc(in)->readShort();
    field_3_cell_options = npc(in)->readShort();
    field_4_alignment_options = npc(in)->readShort();
    field_5_indention_options = npc(in)->readShort();
    field_6_border_options = npc(in)->readShort();
    field_7_palette_options = npc(in)->readShort();
    field_8_adtl_palette_options = npc(in)->readInt();
    field_9_fill_palette_options = npc(in)->readShort();
}

void org::apache::poi::hssf::record::ExtendedFormatRecord::setFontIndex(int16_t index)
{
    field_1_font_index = index;
}

void org::apache::poi::hssf::record::ExtendedFormatRecord::setFormatIndex(int16_t index)
{
    field_2_format_index = index;
}

void org::apache::poi::hssf::record::ExtendedFormatRecord::setCellOptions(int16_t options)
{
    field_3_cell_options = options;
}

void org::apache::poi::hssf::record::ExtendedFormatRecord::setLocked(bool locked)
{
    field_3_cell_options = npc(_locked_)->setShortBoolean(field_3_cell_options, locked);
}

void org::apache::poi::hssf::record::ExtendedFormatRecord::setHidden(bool hidden)
{
    field_3_cell_options = npc(_hidden_)->setShortBoolean(field_3_cell_options, hidden);
}

void org::apache::poi::hssf::record::ExtendedFormatRecord::setXFType(int16_t type)
{
    field_3_cell_options = npc(_xf_type_)->setShortValue(field_3_cell_options, type);
}

void org::apache::poi::hssf::record::ExtendedFormatRecord::set123Prefix(bool prefix)
{
    field_3_cell_options = npc(_123_prefix_)->setShortBoolean(field_3_cell_options, prefix);
}

void org::apache::poi::hssf::record::ExtendedFormatRecord::setParentIndex(int16_t parent)
{
    field_3_cell_options = npc(_parent_index_)->setShortValue(field_3_cell_options, parent);
}

void org::apache::poi::hssf::record::ExtendedFormatRecord::setAlignmentOptions(int16_t options)
{
    field_4_alignment_options = options;
}

void org::apache::poi::hssf::record::ExtendedFormatRecord::setAlignment(int16_t align)
{
    field_4_alignment_options = npc(_alignment_)->setShortValue(field_4_alignment_options, align);
}

void org::apache::poi::hssf::record::ExtendedFormatRecord::setWrapText(bool wrapped)
{
    field_4_alignment_options = npc(_wrap_text_)->setShortBoolean(field_4_alignment_options, wrapped);
}

void org::apache::poi::hssf::record::ExtendedFormatRecord::setVerticalAlignment(int16_t align)
{
    field_4_alignment_options = npc(_vertical_alignment_)->setShortValue(field_4_alignment_options, align);
}

void org::apache::poi::hssf::record::ExtendedFormatRecord::setJustifyLast(int16_t justify)
{
    field_4_alignment_options = npc(_justify_last_)->setShortValue(field_4_alignment_options, justify);
}

void org::apache::poi::hssf::record::ExtendedFormatRecord::setRotation(int16_t rotation)
{
    field_4_alignment_options = npc(_rotation_)->setShortValue(field_4_alignment_options, rotation);
}

void org::apache::poi::hssf::record::ExtendedFormatRecord::setIndentionOptions(int16_t options)
{
    field_5_indention_options = options;
}

void org::apache::poi::hssf::record::ExtendedFormatRecord::setIndent(int16_t indent)
{
    field_5_indention_options = npc(_indent_)->setShortValue(field_5_indention_options, indent);
}

void org::apache::poi::hssf::record::ExtendedFormatRecord::setShrinkToFit(bool shrink)
{
    field_5_indention_options = npc(_shrink_to_fit_)->setShortBoolean(field_5_indention_options, shrink);
}

void org::apache::poi::hssf::record::ExtendedFormatRecord::setMergeCells(bool merge)
{
    field_5_indention_options = npc(_merge_cells_)->setShortBoolean(field_5_indention_options, merge);
}

void org::apache::poi::hssf::record::ExtendedFormatRecord::setReadingOrder(int16_t order)
{
    field_5_indention_options = npc(_reading_order_)->setShortValue(field_5_indention_options, order);
}

void org::apache::poi::hssf::record::ExtendedFormatRecord::setIndentNotParentFormat(bool parent)
{
    field_5_indention_options = npc(_indent_not_parent_format_)->setShortBoolean(field_5_indention_options, parent);
}

void org::apache::poi::hssf::record::ExtendedFormatRecord::setIndentNotParentFont(bool font)
{
    field_5_indention_options = npc(_indent_not_parent_font_)->setShortBoolean(field_5_indention_options, font);
}

void org::apache::poi::hssf::record::ExtendedFormatRecord::setIndentNotParentAlignment(bool alignment)
{
    field_5_indention_options = npc(_indent_not_parent_alignment_)->setShortBoolean(field_5_indention_options, alignment);
}

void org::apache::poi::hssf::record::ExtendedFormatRecord::setIndentNotParentBorder(bool border)
{
    field_5_indention_options = npc(_indent_not_parent_border_)->setShortBoolean(field_5_indention_options, border);
}

void org::apache::poi::hssf::record::ExtendedFormatRecord::setIndentNotParentPattern(bool pattern)
{
    field_5_indention_options = npc(_indent_not_parent_pattern_)->setShortBoolean(field_5_indention_options, pattern);
}

void org::apache::poi::hssf::record::ExtendedFormatRecord::setIndentNotParentCellOptions(bool options)
{
    field_5_indention_options = npc(_indent_not_parent_cell_options_)->setShortBoolean(field_5_indention_options, options);
}

void org::apache::poi::hssf::record::ExtendedFormatRecord::setBorderOptions(int16_t options)
{
    field_6_border_options = options;
}

void org::apache::poi::hssf::record::ExtendedFormatRecord::setBorderLeft(int16_t border)
{
    field_6_border_options = npc(_border_left_)->setShortValue(field_6_border_options, border);
}

void org::apache::poi::hssf::record::ExtendedFormatRecord::setBorderRight(int16_t border)
{
    field_6_border_options = npc(_border_right_)->setShortValue(field_6_border_options, border);
}

void org::apache::poi::hssf::record::ExtendedFormatRecord::setBorderTop(int16_t border)
{
    field_6_border_options = npc(_border_top_)->setShortValue(field_6_border_options, border);
}

void org::apache::poi::hssf::record::ExtendedFormatRecord::setBorderBottom(int16_t border)
{
    field_6_border_options = npc(_border_bottom_)->setShortValue(field_6_border_options, border);
}

void org::apache::poi::hssf::record::ExtendedFormatRecord::setPaletteOptions(int16_t options)
{
    field_7_palette_options = options;
}

void org::apache::poi::hssf::record::ExtendedFormatRecord::setLeftBorderPaletteIdx(int16_t border)
{
    field_7_palette_options = npc(_left_border_palette_idx_)->setShortValue(field_7_palette_options, border);
}

void org::apache::poi::hssf::record::ExtendedFormatRecord::setRightBorderPaletteIdx(int16_t border)
{
    field_7_palette_options = npc(_right_border_palette_idx_)->setShortValue(field_7_palette_options, border);
}

void org::apache::poi::hssf::record::ExtendedFormatRecord::setDiag(int16_t diag)
{
    field_7_palette_options = npc(_diag_)->setShortValue(field_7_palette_options, diag);
}

void org::apache::poi::hssf::record::ExtendedFormatRecord::setAdtlPaletteOptions(int16_t options)
{
    field_8_adtl_palette_options = options;
}

void org::apache::poi::hssf::record::ExtendedFormatRecord::setTopBorderPaletteIdx(int16_t border)
{
    field_8_adtl_palette_options = npc(_top_border_palette_idx_)->setValue(field_8_adtl_palette_options, border);
}

void org::apache::poi::hssf::record::ExtendedFormatRecord::setBottomBorderPaletteIdx(int16_t border)
{
    field_8_adtl_palette_options = npc(_bottom_border_palette_idx_)->setValue(field_8_adtl_palette_options, border);
}

void org::apache::poi::hssf::record::ExtendedFormatRecord::setAdtlDiag(int16_t diag)
{
    field_8_adtl_palette_options = npc(_adtl_diag_)->setValue(field_8_adtl_palette_options, diag);
}

void org::apache::poi::hssf::record::ExtendedFormatRecord::setAdtlDiagLineStyle(int16_t diag)
{
    field_8_adtl_palette_options = npc(_adtl_diag_line_style_)->setValue(field_8_adtl_palette_options, diag);
}

void org::apache::poi::hssf::record::ExtendedFormatRecord::setAdtlFillPattern(int16_t fill)
{
    field_8_adtl_palette_options = npc(_adtl_fill_pattern_)->setValue(field_8_adtl_palette_options, fill);
}

void org::apache::poi::hssf::record::ExtendedFormatRecord::setFillPaletteOptions(int16_t options)
{
    field_9_fill_palette_options = options;
}

void org::apache::poi::hssf::record::ExtendedFormatRecord::setFillForeground(int16_t color)
{
    field_9_fill_palette_options = npc(_fill_foreground_)->setShortValue(field_9_fill_palette_options, color);
}

void org::apache::poi::hssf::record::ExtendedFormatRecord::setFillBackground(int16_t color)
{
    field_9_fill_palette_options = npc(_fill_background_)->setShortValue(field_9_fill_palette_options, color);
}

int16_t org::apache::poi::hssf::record::ExtendedFormatRecord::getFontIndex()
{
    return field_1_font_index;
}

int16_t org::apache::poi::hssf::record::ExtendedFormatRecord::getFormatIndex()
{
    return field_2_format_index;
}

int16_t org::apache::poi::hssf::record::ExtendedFormatRecord::getCellOptions()
{
    return field_3_cell_options;
}

bool org::apache::poi::hssf::record::ExtendedFormatRecord::isLocked()
{
    return npc(_locked_)->isSet(field_3_cell_options);
}

bool org::apache::poi::hssf::record::ExtendedFormatRecord::isHidden()
{
    return npc(_hidden_)->isSet(field_3_cell_options);
}

int16_t org::apache::poi::hssf::record::ExtendedFormatRecord::getXFType()
{
    return npc(_xf_type_)->getShortValue(field_3_cell_options);
}

bool org::apache::poi::hssf::record::ExtendedFormatRecord::get123Prefix()
{
    return npc(_123_prefix_)->isSet(field_3_cell_options);
}

int16_t org::apache::poi::hssf::record::ExtendedFormatRecord::getParentIndex()
{
    return npc(_parent_index_)->getShortValue(field_3_cell_options);
}

int16_t org::apache::poi::hssf::record::ExtendedFormatRecord::getAlignmentOptions()
{
    return field_4_alignment_options;
}

int16_t org::apache::poi::hssf::record::ExtendedFormatRecord::getAlignment()
{
    return npc(_alignment_)->getShortValue(field_4_alignment_options);
}

bool org::apache::poi::hssf::record::ExtendedFormatRecord::getWrapText()
{
    return npc(_wrap_text_)->isSet(field_4_alignment_options);
}

int16_t org::apache::poi::hssf::record::ExtendedFormatRecord::getVerticalAlignment()
{
    return npc(_vertical_alignment_)->getShortValue(field_4_alignment_options);
}

int16_t org::apache::poi::hssf::record::ExtendedFormatRecord::getJustifyLast()
{
    return npc(_justify_last_)->getShortValue(field_4_alignment_options);
}

int16_t org::apache::poi::hssf::record::ExtendedFormatRecord::getRotation()
{
    return npc(_rotation_)->getShortValue(field_4_alignment_options);
}

int16_t org::apache::poi::hssf::record::ExtendedFormatRecord::getIndentionOptions()
{
    return field_5_indention_options;
}

int16_t org::apache::poi::hssf::record::ExtendedFormatRecord::getIndent()
{
    return npc(_indent_)->getShortValue(field_5_indention_options);
}

bool org::apache::poi::hssf::record::ExtendedFormatRecord::getShrinkToFit()
{
    return npc(_shrink_to_fit_)->isSet(field_5_indention_options);
}

bool org::apache::poi::hssf::record::ExtendedFormatRecord::getMergeCells()
{
    return npc(_merge_cells_)->isSet(field_5_indention_options);
}

int16_t org::apache::poi::hssf::record::ExtendedFormatRecord::getReadingOrder()
{
    return npc(_reading_order_)->getShortValue(field_5_indention_options);
}

bool org::apache::poi::hssf::record::ExtendedFormatRecord::isIndentNotParentFormat()
{
    return npc(_indent_not_parent_format_)->isSet(field_5_indention_options);
}

bool org::apache::poi::hssf::record::ExtendedFormatRecord::isIndentNotParentFont()
{
    return npc(_indent_not_parent_font_)->isSet(field_5_indention_options);
}

bool org::apache::poi::hssf::record::ExtendedFormatRecord::isIndentNotParentAlignment()
{
    return npc(_indent_not_parent_alignment_)->isSet(field_5_indention_options);
}

bool org::apache::poi::hssf::record::ExtendedFormatRecord::isIndentNotParentBorder()
{
    return npc(_indent_not_parent_border_)->isSet(field_5_indention_options);
}

bool org::apache::poi::hssf::record::ExtendedFormatRecord::isIndentNotParentPattern()
{
    return npc(_indent_not_parent_pattern_)->isSet(field_5_indention_options);
}

bool org::apache::poi::hssf::record::ExtendedFormatRecord::isIndentNotParentCellOptions()
{
    return npc(_indent_not_parent_cell_options_)->isSet(field_5_indention_options);
}

int16_t org::apache::poi::hssf::record::ExtendedFormatRecord::getBorderOptions()
{
    return field_6_border_options;
}

int16_t org::apache::poi::hssf::record::ExtendedFormatRecord::getBorderLeft()
{
    return npc(_border_left_)->getShortValue(field_6_border_options);
}

int16_t org::apache::poi::hssf::record::ExtendedFormatRecord::getBorderRight()
{
    return npc(_border_right_)->getShortValue(field_6_border_options);
}

int16_t org::apache::poi::hssf::record::ExtendedFormatRecord::getBorderTop()
{
    return npc(_border_top_)->getShortValue(field_6_border_options);
}

int16_t org::apache::poi::hssf::record::ExtendedFormatRecord::getBorderBottom()
{
    return npc(_border_bottom_)->getShortValue(field_6_border_options);
}

int16_t org::apache::poi::hssf::record::ExtendedFormatRecord::getPaletteOptions()
{
    return field_7_palette_options;
}

int16_t org::apache::poi::hssf::record::ExtendedFormatRecord::getLeftBorderPaletteIdx()
{
    return npc(_left_border_palette_idx_)->getShortValue(field_7_palette_options);
}

int16_t org::apache::poi::hssf::record::ExtendedFormatRecord::getRightBorderPaletteIdx()
{
    return npc(_right_border_palette_idx_)->getShortValue(field_7_palette_options);
}

int16_t org::apache::poi::hssf::record::ExtendedFormatRecord::getDiag()
{
    return npc(_diag_)->getShortValue(field_7_palette_options);
}

int32_t org::apache::poi::hssf::record::ExtendedFormatRecord::getAdtlPaletteOptions()
{
    return field_8_adtl_palette_options;
}

int16_t org::apache::poi::hssf::record::ExtendedFormatRecord::getTopBorderPaletteIdx()
{
    return static_cast< int16_t >(npc(_top_border_palette_idx_)->getValue(field_8_adtl_palette_options));
}

int16_t org::apache::poi::hssf::record::ExtendedFormatRecord::getBottomBorderPaletteIdx()
{
    return static_cast< int16_t >(npc(_bottom_border_palette_idx_)->getValue(field_8_adtl_palette_options));
}

int16_t org::apache::poi::hssf::record::ExtendedFormatRecord::getAdtlDiag()
{
    return static_cast< int16_t >(npc(_adtl_diag_)->getValue(field_8_adtl_palette_options));
}

int16_t org::apache::poi::hssf::record::ExtendedFormatRecord::getAdtlDiagLineStyle()
{
    return static_cast< int16_t >(npc(_adtl_diag_line_style_)->getValue(field_8_adtl_palette_options));
}

int16_t org::apache::poi::hssf::record::ExtendedFormatRecord::getAdtlFillPattern()
{
    return static_cast< int16_t >(npc(_adtl_fill_pattern_)->getValue(field_8_adtl_palette_options));
}

int16_t org::apache::poi::hssf::record::ExtendedFormatRecord::getFillPaletteOptions()
{
    return field_9_fill_palette_options;
}

int16_t org::apache::poi::hssf::record::ExtendedFormatRecord::getFillForeground()
{
    return npc(_fill_foreground_)->getShortValue(field_9_fill_palette_options);
}

int16_t org::apache::poi::hssf::record::ExtendedFormatRecord::getFillBackground()
{
    return npc(_fill_background_)->getShortValue(field_9_fill_palette_options);
}

java::lang::String* org::apache::poi::hssf::record::ExtendedFormatRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[EXTENDEDFORMAT]\n"_j);
    if(getXFType() == XF_STYLE) {
        npc(buffer)->append(u" STYLE_RECORD_TYPE\n"_j);
    } else if(getXFType() == XF_CELL) {
        npc(buffer)->append(u" CELL_RECORD_TYPE\n"_j);
    }
    npc(npc(npc(buffer)->append(u"    .fontindex       = "_j))->append(::java::lang::Integer::toHexString(getFontIndex())))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"    .formatindex     = "_j))->append(::java::lang::Integer::toHexString(getFormatIndex())))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"    .celloptions     = "_j))->append(::java::lang::Integer::toHexString(getCellOptions())))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"          .islocked  = "_j))->append(isLocked()))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"          .ishidden  = "_j))->append(isHidden()))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"          .recordtype= "_j))->append(::java::lang::Integer::toHexString(getXFType())))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"          .parentidx = "_j))->append(::java::lang::Integer::toHexString(getParentIndex())))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"    .alignmentoptions= "_j))->append(::java::lang::Integer::toHexString(getAlignmentOptions())))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"          .alignment = "_j))->append(static_cast< int32_t >(getAlignment())))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"          .wraptext  = "_j))->append(getWrapText()))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"          .valignment= "_j))->append(::java::lang::Integer::toHexString(getVerticalAlignment())))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"          .justlast  = "_j))->append(::java::lang::Integer::toHexString(getJustifyLast())))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"          .rotation  = "_j))->append(::java::lang::Integer::toHexString(getRotation())))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"    .indentionoptions= "_j))->append(::java::lang::Integer::toHexString(getIndentionOptions())))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"          .indent    = "_j))->append(::java::lang::Integer::toHexString(getIndent())))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"          .shrinktoft= "_j))->append(getShrinkToFit()))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"          .mergecells= "_j))->append(getMergeCells()))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"          .readngordr= "_j))->append(::java::lang::Integer::toHexString(getReadingOrder())))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"          .formatflag= "_j))->append(isIndentNotParentFormat()))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"          .fontflag  = "_j))->append(isIndentNotParentFont()))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"          .prntalgnmt= "_j))->append(isIndentNotParentAlignment()))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"          .borderflag= "_j))->append(isIndentNotParentBorder()))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"          .paternflag= "_j))->append(isIndentNotParentPattern()))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"          .celloption= "_j))->append(isIndentNotParentCellOptions()))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"    .borderoptns     = "_j))->append(::java::lang::Integer::toHexString(getBorderOptions())))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"          .lftln     = "_j))->append(::java::lang::Integer::toHexString(getBorderLeft())))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"          .rgtln     = "_j))->append(::java::lang::Integer::toHexString(getBorderRight())))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"          .topln     = "_j))->append(::java::lang::Integer::toHexString(getBorderTop())))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"          .btmln     = "_j))->append(::java::lang::Integer::toHexString(getBorderBottom())))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"    .paleteoptns     = "_j))->append(::java::lang::Integer::toHexString(getPaletteOptions())))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"          .leftborder= "_j))->append(::java::lang::Integer::toHexString(getLeftBorderPaletteIdx())))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"          .rghtborder= "_j))->append(::java::lang::Integer::toHexString(getRightBorderPaletteIdx())))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"          .diag      = "_j))->append(::java::lang::Integer::toHexString(getDiag())))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"    .paleteoptn2     = "_j))->append(::java::lang::Integer::toHexString(getAdtlPaletteOptions())))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"          .topborder = "_j))->append(::java::lang::Integer::toHexString(getTopBorderPaletteIdx())))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"          .botmborder= "_j))->append(::java::lang::Integer::toHexString(getBottomBorderPaletteIdx())))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"          .adtldiag  = "_j))->append(::java::lang::Integer::toHexString(getAdtlDiag())))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"          .diaglnstyl= "_j))->append(::java::lang::Integer::toHexString(getAdtlDiagLineStyle())))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"          .fillpattrn= "_j))->append(::java::lang::Integer::toHexString(getAdtlFillPattern())))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"    .fillpaloptn     = "_j))->append(::java::lang::Integer::toHexString(getFillPaletteOptions())))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"          .foreground= "_j))->append(::java::lang::Integer::toHexString(getFillForeground())))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"          .background= "_j))->append(::java::lang::Integer::toHexString(getFillBackground())))->append(u"\n"_j);
    npc(buffer)->append(u"[/EXTENDEDFORMAT]\n"_j);
    return npc(buffer)->toString();
}

void org::apache::poi::hssf::record::ExtendedFormatRecord::serialize(::org::apache::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(getFontIndex());
    npc(out)->writeShort(getFormatIndex());
    npc(out)->writeShort(getCellOptions());
    npc(out)->writeShort(getAlignmentOptions());
    npc(out)->writeShort(getIndentionOptions());
    npc(out)->writeShort(getBorderOptions());
    npc(out)->writeShort(getPaletteOptions());
    npc(out)->writeInt(getAdtlPaletteOptions());
    npc(out)->writeShort(getFillPaletteOptions());
}

int32_t org::apache::poi::hssf::record::ExtendedFormatRecord::getDataSize()
{
    return 20;
}

int16_t org::apache::poi::hssf::record::ExtendedFormatRecord::getSid()
{
    return sid;
}

void org::apache::poi::hssf::record::ExtendedFormatRecord::cloneStyleFrom(ExtendedFormatRecord* source)
{
    field_1_font_index = npc(source)->field_1_font_index;
    field_2_format_index = npc(source)->field_2_format_index;
    field_3_cell_options = npc(source)->field_3_cell_options;
    field_4_alignment_options = npc(source)->field_4_alignment_options;
    field_5_indention_options = npc(source)->field_5_indention_options;
    field_6_border_options = npc(source)->field_6_border_options;
    field_7_palette_options = npc(source)->field_7_palette_options;
    field_8_adtl_palette_options = npc(source)->field_8_adtl_palette_options;
    field_9_fill_palette_options = npc(source)->field_9_fill_palette_options;
}

int32_t org::apache::poi::hssf::record::ExtendedFormatRecord::hashCode()
{
    auto const prime = int32_t(31);
    auto result = int32_t(1);
    result = prime * result + field_1_font_index;
    result = prime * result + field_2_format_index;
    result = prime * result + field_3_cell_options;
    result = prime * result + field_4_alignment_options;
    result = prime * result + field_5_indention_options;
    result = prime * result + field_6_border_options;
    result = prime * result + field_7_palette_options;
    result = prime * result + field_8_adtl_palette_options;
    result = prime * result + field_9_fill_palette_options;
    return result;
}

bool org::apache::poi::hssf::record::ExtendedFormatRecord::equals(::java::lang::Object* obj)
{
    if(static_cast< ::java::lang::Object* >(this) == obj)
        return true;

    if(obj == nullptr)
        return false;

    if(dynamic_cast< ExtendedFormatRecord* >(obj) != nullptr) {
        auto const other = java_cast< ExtendedFormatRecord* >(obj);
        if(field_1_font_index != npc(other)->field_1_font_index)
            return false;

        if(field_2_format_index != npc(other)->field_2_format_index)
            return false;

        if(field_3_cell_options != npc(other)->field_3_cell_options)
            return false;

        if(field_4_alignment_options != npc(other)->field_4_alignment_options)
            return false;

        if(field_5_indention_options != npc(other)->field_5_indention_options)
            return false;

        if(field_6_border_options != npc(other)->field_6_border_options)
            return false;

        if(field_7_palette_options != npc(other)->field_7_palette_options)
            return false;

        if(field_8_adtl_palette_options != npc(other)->field_8_adtl_palette_options)
            return false;

        if(field_9_fill_palette_options != npc(other)->field_9_fill_palette_options)
            return false;

        return true;
    }
    return false;
}

int32_tArray* org::apache::poi::hssf::record::ExtendedFormatRecord::stateSummary()
{
    return new ::int32_tArray({
        static_cast< int32_t >(field_1_font_index)
        , static_cast< int32_t >(field_2_format_index)
        , static_cast< int32_t >(field_3_cell_options)
        , static_cast< int32_t >(field_4_alignment_options)
        , static_cast< int32_t >(field_5_indention_options)
        , static_cast< int32_t >(field_6_border_options)
        , static_cast< int32_t >(field_7_palette_options)
        , field_8_adtl_palette_options
        , static_cast< int32_t >(field_9_fill_palette_options)
    });
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::ExtendedFormatRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.ExtendedFormatRecord", 47);
    return c;
}

void org::apache::poi::hssf::record::ExtendedFormatRecord::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        _locked_ = ::org::apache::poi::util::BitFieldFactory::getInstance(1);
        _hidden_ = ::org::apache::poi::util::BitFieldFactory::getInstance(2);
        _xf_type_ = ::org::apache::poi::util::BitFieldFactory::getInstance(4);
        _123_prefix_ = ::org::apache::poi::util::BitFieldFactory::getInstance(8);
        _parent_index_ = ::org::apache::poi::util::BitFieldFactory::getInstance(65520);
        _alignment_ = ::org::apache::poi::util::BitFieldFactory::getInstance(7);
        _wrap_text_ = ::org::apache::poi::util::BitFieldFactory::getInstance(8);
        _vertical_alignment_ = ::org::apache::poi::util::BitFieldFactory::getInstance(112);
        _justify_last_ = ::org::apache::poi::util::BitFieldFactory::getInstance(128);
        _rotation_ = ::org::apache::poi::util::BitFieldFactory::getInstance(65280);
        _indent_ = ::org::apache::poi::util::BitFieldFactory::getInstance(15);
        _shrink_to_fit_ = ::org::apache::poi::util::BitFieldFactory::getInstance(16);
        _merge_cells_ = ::org::apache::poi::util::BitFieldFactory::getInstance(32);
        _reading_order_ = ::org::apache::poi::util::BitFieldFactory::getInstance(192);
        _indent_not_parent_format_ = ::org::apache::poi::util::BitFieldFactory::getInstance(1024);
        _indent_not_parent_font_ = ::org::apache::poi::util::BitFieldFactory::getInstance(2048);
        _indent_not_parent_alignment_ = ::org::apache::poi::util::BitFieldFactory::getInstance(4096);
        _indent_not_parent_border_ = ::org::apache::poi::util::BitFieldFactory::getInstance(8192);
        _indent_not_parent_pattern_ = ::org::apache::poi::util::BitFieldFactory::getInstance(16384);
        _indent_not_parent_cell_options_ = ::org::apache::poi::util::BitFieldFactory::getInstance(32768);
        _border_left_ = ::org::apache::poi::util::BitFieldFactory::getInstance(15);
        _border_right_ = ::org::apache::poi::util::BitFieldFactory::getInstance(240);
        _border_top_ = ::org::apache::poi::util::BitFieldFactory::getInstance(3840);
        _border_bottom_ = ::org::apache::poi::util::BitFieldFactory::getInstance(61440);
        _left_border_palette_idx_ = ::org::apache::poi::util::BitFieldFactory::getInstance(127);
        _right_border_palette_idx_ = ::org::apache::poi::util::BitFieldFactory::getInstance(16256);
        _diag_ = ::org::apache::poi::util::BitFieldFactory::getInstance(49152);
        _top_border_palette_idx_ = ::org::apache::poi::util::BitFieldFactory::getInstance(127);
        _bottom_border_palette_idx_ = ::org::apache::poi::util::BitFieldFactory::getInstance(16256);
        _adtl_diag_ = ::org::apache::poi::util::BitFieldFactory::getInstance(2080768);
        _adtl_diag_line_style_ = ::org::apache::poi::util::BitFieldFactory::getInstance(31457280);
        _adtl_fill_pattern_ = ::org::apache::poi::util::BitFieldFactory::getInstance(-67108864);
        _fill_foreground_ = ::org::apache::poi::util::BitFieldFactory::getInstance(127);
        _fill_background_ = ::org::apache::poi::util::BitFieldFactory::getInstance(16256);
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

int32_t org::apache::poi::hssf::record::ExtendedFormatRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* org::apache::poi::hssf::record::ExtendedFormatRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* org::apache::poi::hssf::record::ExtendedFormatRecord::getClass0()
{
    return class_();
}

