// Generated from /POI/java/org/apache/poi/hssf/record/FontRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>

struct default_init_tag;

class org::apache::poi::hssf::record::FontRecord final
    : public StandardRecord
{

public:
    typedef StandardRecord super;
    static constexpr int16_t sid { int16_t(49) };
    static constexpr int16_t SS_NONE { int16_t(0) };
    static constexpr int16_t SS_SUPER { int16_t(1) };
    static constexpr int16_t SS_SUB { int16_t(2) };
    static constexpr int8_t U_NONE { int8_t(0) };
    static constexpr int8_t U_SINGLE { int8_t(1) };
    static constexpr int8_t U_DOUBLE { int8_t(2) };
    static constexpr int8_t U_SINGLE_ACCOUNTING { int8_t(33) };
    static constexpr int8_t U_DOUBLE_ACCOUNTING { int8_t(34) };

private:
    int16_t field_1_font_height {  };
    int16_t field_2_attributes {  };
    static ::org::apache::poi::util::BitField* italic_;
    static ::org::apache::poi::util::BitField* strikeout_;
    static ::org::apache::poi::util::BitField* macoutline_;
    static ::org::apache::poi::util::BitField* macshadow_;
    int16_t field_3_color_palette_index {  };
    int16_t field_4_bold_weight {  };
    int16_t field_5_super_sub_script {  };
    int8_t field_6_underline {  };
    int8_t field_7_family {  };
    int8_t field_8_charset {  };
    int8_t field_9_zero {  };
    ::java::lang::String* field_11_font_name {  };
protected:
    void ctor();
    void ctor(RecordInputStream* in);

public:
    void setFontHeight(int16_t height);
    void setAttributes(int16_t attributes);
    void setItalic(bool italics);
    void setStrikeout(bool strike);
    void setMacoutline(bool mac);
    void setMacshadow(bool mac);
    void setColorPaletteIndex(int16_t cpi);
    void setBoldWeight(int16_t bw);
    void setSuperSubScript(int16_t sss);
    void setUnderline(int8_t u);
    void setFamily(int8_t f);
    void setCharset(int8_t charset);
    void setFontName(::java::lang::String* fn);
    int16_t getFontHeight();
    int16_t getAttributes();
    bool isItalic();
    bool isStruckout();
    bool isMacoutlined();
    bool isMacshadowed();
    int16_t getColorPaletteIndex();
    int16_t getBoldWeight();
    int16_t getSuperSubScript();
    int8_t getUnderline();
    int8_t getFamily();
    int8_t getCharset();
    ::java::lang::String* getFontName();
    ::java::lang::String* toString() override;
    void serialize(::org::apache::poi::util::LittleEndianOutput* out) override;

public: /* protected */
    int32_t getDataSize() override;

public:
    int16_t getSid() override;
    void cloneStyleFrom(FontRecord* source);
    int32_t hashCode() override;
    bool sameProperties(FontRecord* other);
    bool equals(::java::lang::Object* o) override;

private:
    static bool stringEquals(::java::lang::String* s1, ::java::lang::String* s2);

    // Generated

public:
    FontRecord();
    FontRecord(RecordInputStream* in);
protected:
    FontRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    void init();

public:
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    ::int8_tArray* serialize();

private:
    static ::org::apache::poi::util::BitField*& italic();
    static ::org::apache::poi::util::BitField*& strikeout();
    static ::org::apache::poi::util::BitField*& macoutline();
    static ::org::apache::poi::util::BitField*& macshadow();
    virtual ::java::lang::Class* getClass0();
};
