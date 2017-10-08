// Generated from /POI/java/org/apache/poi/ss/formula/SheetNameFormatter.java
#include <org/apache/poi/ss/formula/SheetNameFormatter.hpp>

#include <java/lang/Character.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/util/regex/Matcher.hpp>
#include <java/util/regex/Pattern.hpp>
#include <org/apache/poi/ss/SpreadsheetVersion.hpp>
#include <org/apache/poi/ss/util/CellReference.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::ss::formula::SheetNameFormatter::SheetNameFormatter(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::SheetNameFormatter::SheetNameFormatter() 
    : SheetNameFormatter(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

constexpr char16_t poi::ss::formula::SheetNameFormatter::DELIMITER;

java::util::regex::Pattern*& poi::ss::formula::SheetNameFormatter::CELL_REF_PATTERN()
{
    clinit();
    return CELL_REF_PATTERN_;
}
java::util::regex::Pattern* poi::ss::formula::SheetNameFormatter::CELL_REF_PATTERN_;

void poi::ss::formula::SheetNameFormatter::ctor()
{
    super::ctor();
}

java::lang::String* poi::ss::formula::SheetNameFormatter::format(::java::lang::String* rawSheetName)
{
    clinit();
    auto sb = new ::java::lang::StringBuffer(npc(rawSheetName)->length() + int32_t(2));
    appendFormat(sb, rawSheetName);
    return npc(sb)->toString();
}

void poi::ss::formula::SheetNameFormatter::appendFormat(::java::lang::StringBuffer* out, ::java::lang::String* rawSheetName)
{
    clinit();
    auto needsQuotes = needsDelimiting(rawSheetName);
    if(needsQuotes) {
        npc(out)->append(DELIMITER);
        appendAndEscape(out, rawSheetName);
        npc(out)->append(DELIMITER);
    } else {
        npc(out)->append(rawSheetName);
    }
}

void poi::ss::formula::SheetNameFormatter::appendFormat(::java::lang::StringBuffer* out, ::java::lang::String* workbookName, ::java::lang::String* rawSheetName)
{
    clinit();
    auto needsQuotes = needsDelimiting(workbookName) || needsDelimiting(rawSheetName);
    if(needsQuotes) {
        npc(out)->append(DELIMITER);
        npc(out)->append(u'[');
        appendAndEscape(out, npc(npc(workbookName)->replace(u'[', u'('))->replace(u']', u')'));
        npc(out)->append(u']');
        appendAndEscape(out, rawSheetName);
        npc(out)->append(DELIMITER);
    } else {
        npc(out)->append(u'[');
        npc(out)->append(workbookName);
        npc(out)->append(u']');
        npc(out)->append(rawSheetName);
    }
}

void poi::ss::formula::SheetNameFormatter::appendAndEscape(::java::lang::StringBuffer* sb, ::java::lang::String* rawSheetName)
{
    clinit();
    auto len = npc(rawSheetName)->length();
    for (auto i = int32_t(0); i < len; i++) {
        auto ch = npc(rawSheetName)->charAt(i);
        if(ch == DELIMITER) {
            npc(sb)->append(DELIMITER);
        }
        npc(sb)->append(ch);
    }
}

bool poi::ss::formula::SheetNameFormatter::needsDelimiting(::java::lang::String* rawSheetName)
{
    clinit();
    auto len = npc(rawSheetName)->length();
    if(len < 1) {
        throw new ::java::lang::RuntimeException(u"Zero length string is an invalid sheet name"_j);
    }
    if(::java::lang::Character::isDigit(npc(rawSheetName)->charAt(int32_t(0)))) {
        return true;
    }
    for (auto i = int32_t(0); i < len; i++) {
        auto ch = npc(rawSheetName)->charAt(i);
        if(isSpecialChar(ch)) {
            return true;
        }
    }
    if(::java::lang::Character::isLetter(npc(rawSheetName)->charAt(int32_t(0))) && ::java::lang::Character::isDigit(npc(rawSheetName)->charAt(len - int32_t(1)))) {
        if(nameLooksLikePlainCellReference(rawSheetName)) {
            return true;
        }
    }
    if(nameLooksLikeBooleanLiteral(rawSheetName)) {
        return true;
    }
    return false;
}

bool poi::ss::formula::SheetNameFormatter::nameLooksLikeBooleanLiteral(::java::lang::String* rawSheetName)
{
    clinit();
    switch (npc(rawSheetName)->charAt(int32_t(0))) {
    case u'T':
    case u't':
        return npc(u"TRUE"_j)->equalsIgnoreCase(rawSheetName);
    case u'F':
    case u'f':
        return npc(u"FALSE"_j)->equalsIgnoreCase(rawSheetName);
    }

    return false;
}

bool poi::ss::formula::SheetNameFormatter::isSpecialChar(char16_t ch)
{
    clinit();
    if(::java::lang::Character::isLetterOrDigit(ch)) {
        return false;
    }
    switch (ch) {
    case u'.':
    case u'_':
        return false;
    case u'\u000a':
    case u'\u000d':
    case u'\u0009':
        throw new ::java::lang::RuntimeException(::java::lang::StringBuilder().append(u"Illegal character (0x"_j)->append(::java::lang::Integer::toHexString(ch))
            ->append(u") found in sheet name"_j)->toString());
    }

    return true;
}

bool poi::ss::formula::SheetNameFormatter::cellReferenceIsWithinRange(::java::lang::String* lettersPrefix, ::java::lang::String* numbersSuffix)
{
    clinit();
    return ::poi::ss::util::CellReference::cellReferenceIsWithinRange(lettersPrefix, numbersSuffix, ::poi::ss::SpreadsheetVersion::EXCEL97);
}

bool poi::ss::formula::SheetNameFormatter::nameLooksLikePlainCellReference(::java::lang::String* rawSheetName)
{
    clinit();
    auto matcher = npc(CELL_REF_PATTERN_)->matcher(rawSheetName);
    if(!npc(matcher)->matches()) {
        return false;
    }
    auto lettersPrefix = npc(matcher)->group(int32_t(1));
    auto numbersSuffix = npc(matcher)->group(int32_t(2));
    return cellReferenceIsWithinRange(lettersPrefix, numbersSuffix);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::SheetNameFormatter::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.SheetNameFormatter", 44);
    return c;
}

void poi::ss::formula::SheetNameFormatter::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        CELL_REF_PATTERN_ = ::java::util::regex::Pattern::compile(u"([A-Za-z]+)([0-9]+)"_j);
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* poi::ss::formula::SheetNameFormatter::getClass0()
{
    return class_();
}

