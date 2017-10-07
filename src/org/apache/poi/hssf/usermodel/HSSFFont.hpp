// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFFont.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/usermodel/fwd-POI.hpp>
#include <org/apache/poi/hssf/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/ss/usermodel/Font.hpp>

struct default_init_tag;

class org::apache::poi::hssf::usermodel::HSSFFont final
    : public virtual ::java::lang::Object
    , public ::org::apache::poi::ss::usermodel::Font
{

public:
    typedef ::java::lang::Object super;

public: /* package */
    static constexpr int16_t BOLDWEIGHT_NORMAL { int16_t(400) };
    static constexpr int16_t BOLDWEIGHT_BOLD { int16_t(700) };

private:
    static ::java::lang::String* FONT_ARIAL_;
    ::org::apache::poi::hssf::record::FontRecord* font {  };
    int16_t index {  };
protected:
    void ctor(int16_t index, ::org::apache::poi::hssf::record::FontRecord* rec);

public:
    void setFontName(::java::lang::String* name) override;
    ::java::lang::String* getFontName() override;
    int16_t getIndex() override;
    void setFontHeight(int16_t height) override;
    void setFontHeightInPoints(int16_t height) override;
    int16_t getFontHeight() override;
    int16_t getFontHeightInPoints() override;
    void setItalic(bool italic) override;
    bool getItalic() override;
    void setStrikeout(bool strikeout) override;
    bool getStrikeout() override;
    void setColor(int16_t color) override;
    int16_t getColor() override;
    ::org::apache::poi::hssf::util::HSSFColor* getHSSFColor(HSSFWorkbook* wb);
    void setBold(bool bold) override;
    bool getBold() override;
    void setTypeOffset(int16_t offset) override;
    int16_t getTypeOffset() override;
    void setUnderline(int8_t underline) override;
    int8_t getUnderline() override;
    int32_t getCharSet() override;
    void setCharSet(int32_t charset) override;
    void setCharSet(int8_t charset) override;
    ::java::lang::String* toString() override;
    int32_t hashCode() override;
    bool equals(::java::lang::Object* obj) override;

    // Generated

public: /* protected */
    HSSFFont(int16_t index, ::org::apache::poi::hssf::record::FontRecord* rec);
protected:
    HSSFFont(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    static ::java::lang::String*& FONT_ARIAL();

private:
    virtual ::java::lang::Class* getClass0();
};
