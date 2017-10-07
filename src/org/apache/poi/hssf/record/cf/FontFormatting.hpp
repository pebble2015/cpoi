// Generated from /POI/java/org/apache/poi/hssf/record/cf/FontFormatting.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/cf/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/Cloneable.hpp>

struct default_init_tag;

class org::apache::poi::hssf::record::cf::FontFormatting final
    : public virtual ::java::lang::Object
    , public ::java::lang::Cloneable
{

public:
    typedef ::java::lang::Object super;

private:
    ::int8_tArray* _rawData {  };
    static constexpr int32_t OFFSET_FONT_NAME { int32_t(0) };
    static constexpr int32_t OFFSET_FONT_HEIGHT { int32_t(64) };
    static constexpr int32_t OFFSET_FONT_OPTIONS { int32_t(68) };
    static constexpr int32_t OFFSET_FONT_WEIGHT { int32_t(72) };
    static constexpr int32_t OFFSET_ESCAPEMENT_TYPE { int32_t(74) };
    static constexpr int32_t OFFSET_UNDERLINE_TYPE { int32_t(76) };
    static constexpr int32_t OFFSET_FONT_COLOR_INDEX { int32_t(80) };
    static constexpr int32_t OFFSET_OPTION_FLAGS { int32_t(88) };
    static constexpr int32_t OFFSET_ESCAPEMENT_TYPE_MODIFIED { int32_t(92) };
    static constexpr int32_t OFFSET_UNDERLINE_TYPE_MODIFIED { int32_t(96) };
    static constexpr int32_t OFFSET_FONT_WEIGHT_MODIFIED { int32_t(100) };
    static constexpr int32_t OFFSET_NOT_USED1 { int32_t(104) };
    static constexpr int32_t OFFSET_NOT_USED2 { int32_t(108) };
    static constexpr int32_t OFFSET_NOT_USED3 { int32_t(112) };
    static constexpr int32_t OFFSET_FONT_FORMATING_END { int32_t(116) };
    static constexpr int32_t RAW_DATA_SIZE { int32_t(118) };

public:
    static constexpr int32_t FONT_CELL_HEIGHT_PRESERVED { int32_t(-1) };

private:
    static ::org::apache::poi::util::BitField* posture_;
    static ::org::apache::poi::util::BitField* outline_;
    static ::org::apache::poi::util::BitField* shadow_;
    static ::org::apache::poi::util::BitField* cancellation_;
    static ::org::apache::poi::util::BitField* styleModified_;
    static ::org::apache::poi::util::BitField* outlineModified_;
    static ::org::apache::poi::util::BitField* shadowModified_;
    static ::org::apache::poi::util::BitField* cancellationModified_;

public:
    static constexpr int16_t SS_NONE { int16_t(0) };
    static constexpr int16_t SS_SUPER { int16_t(1) };
    static constexpr int16_t SS_SUB { int16_t(2) };
    static constexpr int8_t U_NONE { int8_t(0) };
    static constexpr int8_t U_SINGLE { int8_t(1) };
    static constexpr int8_t U_DOUBLE { int8_t(2) };
    static constexpr int8_t U_SINGLE_ACCOUNTING { int8_t(33) };
    static constexpr int8_t U_DOUBLE_ACCOUNTING { int8_t(34) };

private:
    static constexpr int16_t FONT_WEIGHT_NORMAL { int16_t(400) };
    static constexpr int16_t FONT_WEIGHT_BOLD { int16_t(700) };
protected:
    void ctor();
    void ctor(::org::apache::poi::hssf::record::RecordInputStream* in);

private:
    int16_t getShort(int32_t offset);
    void setShort(int32_t offset, int32_t value);
    int32_t getInt(int32_t offset);
    void setInt(int32_t offset, int32_t value);

public:
    ::int8_tArray* getRawRecord();
    int32_t getDataLength();
    void setFontHeight(int32_t height);
    int32_t getFontHeight();

private:
    void setFontOption(bool option, ::org::apache::poi::util::BitField* field);
    bool getFontOption(::org::apache::poi::util::BitField* field);

public:
    void setItalic(bool italic);
    bool isItalic();
    void setOutline(bool on);
    bool isOutlineOn();
    void setShadow(bool on);
    bool isShadowOn();
    void setStrikeout(bool strike);
    bool isStruckout();

private:
    void setFontWeight(int16_t pbw);

public:
    void setBold(bool bold);
    int16_t getFontWeight();
    bool isBold();
    int16_t getEscapementType();
    void setEscapementType(int16_t escapementType);
    int16_t getUnderlineType();
    void setUnderlineType(int16_t underlineType);
    int16_t getFontColorIndex();
    void setFontColorIndex(int16_t fci);

private:
    bool getOptionFlag(::org::apache::poi::util::BitField* field);
    void setOptionFlag(bool modified, ::org::apache::poi::util::BitField* field);

public:
    bool isFontStyleModified();
    void setFontStyleModified(bool modified);
    bool isFontOutlineModified();
    void setFontOutlineModified(bool modified);
    bool isFontShadowModified();
    void setFontShadowModified(bool modified);
    void setFontCancellationModified(bool modified);
    bool isFontCancellationModified();
    void setEscapementTypeModified(bool modified);
    bool isEscapementTypeModified();
    void setUnderlineTypeModified(bool modified);
    bool isUnderlineTypeModified();
    void setFontWieghtModified(bool modified);
    bool isFontWeightModified();
    ::java::lang::String* toString() override;
    FontFormatting* clone() override;

    // Generated
    FontFormatting();
    FontFormatting(::org::apache::poi::hssf::record::RecordInputStream* in);
protected:
    FontFormatting(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    void init();
    static ::org::apache::poi::util::BitField*& posture();
    static ::org::apache::poi::util::BitField*& outline();
    static ::org::apache::poi::util::BitField*& shadow();
    static ::org::apache::poi::util::BitField*& cancellation();
    static ::org::apache::poi::util::BitField*& styleModified();
    static ::org::apache::poi::util::BitField*& outlineModified();
    static ::org::apache::poi::util::BitField*& shadowModified();
    static ::org::apache::poi::util::BitField*& cancellationModified();
    virtual ::java::lang::Class* getClass0();
};
