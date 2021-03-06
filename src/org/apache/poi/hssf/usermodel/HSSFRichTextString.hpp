// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFRichTextString.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/model/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/common/fwd-POI.hpp>
#include <org/apache/poi/hssf/usermodel/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/Comparable.hpp>
#include <org/apache/poi/ss/usermodel/RichTextString.hpp>

struct default_init_tag;

class poi::hssf::usermodel::HSSFRichTextString final
    : public virtual ::java::lang::Object
    , public ::java::lang::Comparable
    , public ::poi::ss::usermodel::RichTextString
{

public:
    typedef ::java::lang::Object super;
    static constexpr int16_t NO_FONT { int16_t(0) };

private:
    ::poi::hssf::record::common::UnicodeString* _string {  };
    ::poi::hssf::model::InternalWorkbook* _book {  };
    ::poi::hssf::record::LabelSSTRecord* _record {  };
protected:
    void ctor();
    void ctor(::java::lang::String* string);
    void ctor(::poi::hssf::model::InternalWorkbook* book, ::poi::hssf::record::LabelSSTRecord* record);

public: /* package */
    void setWorkbookReferences(::poi::hssf::model::InternalWorkbook* book, ::poi::hssf::record::LabelSSTRecord* record);

private:
    ::poi::hssf::record::common::UnicodeString* cloneStringIfRequired();
    void addToSSTIfRequired();

public:
    void applyFont(int32_t startIndex, int32_t endIndex, int16_t fontIndex) override;
    void applyFont(int32_t startIndex, int32_t endIndex, ::poi::ss::usermodel::Font* font) override;
    void applyFont(::poi::ss::usermodel::Font* font) override;
    void clearFormatting() override;
    ::java::lang::String* getString() override;

public: /* package */
    ::poi::hssf::record::common::UnicodeString* getUnicodeString();
    ::poi::hssf::record::common::UnicodeString* getRawUnicodeString();
    void setUnicodeString(::poi::hssf::record::common::UnicodeString* str);

public:
    int32_t length() override;
    int16_t getFontAtIndex(int32_t index);
    int32_t numFormattingRuns() override;
    int32_t getIndexOfFormattingRun(int32_t index) override;
    int16_t getFontOfFormattingRun(int32_t index);
    int32_t compareTo(HSSFRichTextString* r);
    bool equals(::java::lang::Object* o) override;
    int32_t hashCode() override;
    ::java::lang::String* toString() override;
    void applyFont(int16_t fontIndex) override;

    // Generated
    HSSFRichTextString();
    HSSFRichTextString(::java::lang::String* string);

public: /* package */
    HSSFRichTextString(::poi::hssf::model::InternalWorkbook* book, ::poi::hssf::record::LabelSSTRecord* record);
protected:
    HSSFRichTextString(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual int32_t compareTo(::java::lang::Object* o) override;

private:
    virtual ::java::lang::Class* getClass0();
};
