// Generated from /POI/java/org/apache/poi/ss/format/CellFormatPart.java

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/util/regex/fwd-POI.hpp>
#include <javax/swing/fwd-POI.hpp>
#include <org/apache/poi/ss/format/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::poi::ss::format::CellFormatPart
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    ::java::awt::Color* color {  };
    CellFormatCondition* condition {  };
    CellFormatter* format {  };
    CellFormatType* type {  };
    static ::java::util::Map* NAMED_COLORS_;
    static ::java::util::regex::Pattern* COLOR_PAT_;
    static ::java::util::regex::Pattern* CONDITION_PAT_;
    static ::java::util::regex::Pattern* SPECIFICATION_PAT_;
    static ::java::util::regex::Pattern* CURRENCY_PAT_;
    static ::java::util::regex::Pattern* FORMAT_PAT_;
    static int32_t COLOR_GROUP_;
    static int32_t CONDITION_OPERATOR_GROUP_;
    static int32_t CONDITION_VALUE_GROUP_;
    static int32_t SPECIFICATION_GROUP_;
protected:
    void ctor(::java::lang::String* desc);
    void ctor(::java::util::Locale* locale, ::java::lang::String* desc);

public:
    virtual bool applies(::java::lang::Object* valueObject);

private:
    static int32_t findGroup(::java::util::regex::Pattern* pat, ::java::lang::String* str, ::java::lang::String* marker);
    static ::java::awt::Color* getColor(::java::util::regex::Matcher* m);
    CellFormatCondition* getCondition(::java::util::regex::Matcher* m);
    CellFormatType* getCellFormatType(::java::util::regex::Matcher* matcher);
    CellFormatter* getFormatter(::java::util::Locale* locale, ::java::util::regex::Matcher* matcher);
    CellFormatType* formatType(::java::lang::String* fdesc);

public: /* package */
    static ::java::lang::String* quoteSpecial(::java::lang::String* repl, CellFormatType* type);

public:
    virtual CellFormatResult* apply(::java::lang::Object* value);
    virtual CellFormatResult* apply(::javax::swing::JLabel* label, ::java::lang::Object* value);

public: /* package */
    virtual CellFormatType* getCellFormatType();
    virtual bool hasCondition();

public:
    static ::java::lang::StringBuffer* parseFormat(::java::lang::String* fdesc, CellFormatType* type, CellFormatPart_PartHandler* partHandler);

public: /* package */
    static ::java::lang::String* expandChar(::java::lang::String* part);

public:
    static ::java::lang::String* group(::java::util::regex::Matcher* m, int32_t g);
    ::java::lang::String* toString() override;

    // Generated
    CellFormatPart(::java::lang::String* desc);
    CellFormatPart(::java::util::Locale* locale, ::java::lang::String* desc);
protected:
    CellFormatPart(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static ::java::util::Map*& NAMED_COLORS();

public:
    static ::java::util::regex::Pattern*& COLOR_PAT();
    static ::java::util::regex::Pattern*& CONDITION_PAT();
    static ::java::util::regex::Pattern*& SPECIFICATION_PAT();
    static ::java::util::regex::Pattern*& CURRENCY_PAT();
    static ::java::util::regex::Pattern*& FORMAT_PAT();
    static int32_t& COLOR_GROUP();
    static int32_t& CONDITION_OPERATOR_GROUP();
    static int32_t& CONDITION_VALUE_GROUP();
    static int32_t& SPECIFICATION_GROUP();

private:
    virtual ::java::lang::Class* getClass0();
    friend class CellFormatPart_PartHandler;
};
