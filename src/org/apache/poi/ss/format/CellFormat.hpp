// Generated from /POI/java/org/apache/poi/ss/format/CellFormat.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/util/regex/fwd-POI.hpp>
#include <javax/swing/fwd-POI.hpp>
#include <org/apache/poi/ss/format/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::ss::format::CellFormat
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    ::java::util::Locale* locale {  };
    ::java::lang::String* format {  };
    CellFormatPart* posNumFmt {  };
    CellFormatPart* zeroNumFmt {  };
    CellFormatPart* negNumFmt {  };
    CellFormatPart* textFmt {  };
    int32_t formatPartCount {  };
    static ::java::util::regex::Pattern* ONE_PART_;
    static ::java::lang::String* INVALID_VALUE_FOR_FORMAT_;
    static ::java::lang::String* QUOTE_;
    static CellFormat* GENERAL_FORMAT_;
    static CellFormat* createGeneralFormat(::java::util::Locale* locale);
    static ::java::util::Map* formatCache_;

public:
    static CellFormat* getInstance(::java::lang::String* format);
    static CellFormat* getInstance(::java::util::Locale* locale, ::java::lang::String* format);
protected:
    void ctor(::java::util::Locale* locale, ::java::lang::String* format);

public:
    virtual CellFormatResult* apply(::java::lang::Object* value);

private:
    CellFormatResult* apply(::java::util::Date* date, double numericValue);

public:
    virtual CellFormatResult* apply(::poi::ss::usermodel::Cell* c);
    virtual CellFormatResult* apply(::javax::swing::JLabel* label, ::java::lang::Object* value);

private:
    CellFormatResult* apply(::javax::swing::JLabel* label, ::java::util::Date* date, double numericValue);

public:
    virtual CellFormatResult* apply(::javax::swing::JLabel* label, ::poi::ss::usermodel::Cell* c);

private:
    CellFormatPart* getApplicableFormatPart(::java::lang::Object* value);

public:
    static int32_t ultimateType(::poi::ss::usermodel::Cell* cell);
    static ::poi::ss::usermodel::CellType* ultimateTypeEnum(::poi::ss::usermodel::Cell* cell);
    bool equals(::java::lang::Object* obj) override;
    int32_t hashCode() override;

    // Generated

private:
    CellFormat(::java::util::Locale* locale, ::java::lang::String* format);
protected:
    CellFormat(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static ::java::util::regex::Pattern*& ONE_PART();
    static ::java::lang::String*& INVALID_VALUE_FOR_FORMAT();
    static ::java::lang::String*& QUOTE();

public:
    static CellFormat*& GENERAL_FORMAT();

private:
    static ::java::util::Map*& formatCache();
    virtual ::java::lang::Class* getClass0();
    friend class CellFormat_createGeneralFormat_1;
};
