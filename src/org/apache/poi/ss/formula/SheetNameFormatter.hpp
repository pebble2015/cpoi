// Generated from /POI/java/org/apache/poi/ss/formula/SheetNameFormatter.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/regex/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::poi::ss::formula::SheetNameFormatter final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static constexpr char16_t DELIMITER { u'\'' };
    static ::java::util::regex::Pattern* CELL_REF_PATTERN_;
protected:
    void ctor();

public:
    static ::java::lang::String* format(::java::lang::String* rawSheetName);
    static void appendFormat(::java::lang::StringBuffer* out, ::java::lang::String* rawSheetName);
    static void appendFormat(::java::lang::StringBuffer* out, ::java::lang::String* workbookName, ::java::lang::String* rawSheetName);

private:
    static void appendAndEscape(::java::lang::StringBuffer* sb, ::java::lang::String* rawSheetName);
    static bool needsDelimiting(::java::lang::String* rawSheetName);
    static bool nameLooksLikeBooleanLiteral(::java::lang::String* rawSheetName);

public: /* package */
    static bool isSpecialChar(char16_t ch);
    static bool cellReferenceIsWithinRange(::java::lang::String* lettersPrefix, ::java::lang::String* numbersSuffix);
    static bool nameLooksLikePlainCellReference(::java::lang::String* rawSheetName);

    // Generated

private:
    SheetNameFormatter();
protected:
    SheetNameFormatter(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static ::java::util::regex::Pattern*& CELL_REF_PATTERN();
    virtual ::java::lang::Class* getClass0();
};
