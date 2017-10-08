// Generated from /POI/java/org/apache/poi/ss/format/CellFormatPart.java
#include <org/apache/poi/ss/format/CellFormatPart.hpp>

#include <java/awt/Color.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Character.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Number.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/util/Collection.hpp>
#include <java/util/Comparator.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/Locale.hpp>
#include <java/util/Map.hpp>
#include <java/util/TreeMap.hpp>
#include <java/util/logging/Logger.hpp>
#include <java/util/regex/Matcher.hpp>
#include <java/util/regex/Pattern.hpp>
#include <javax/swing/JLabel.hpp>
#include <org/apache/poi/hssf/util/HSSFColor.hpp>
#include <org/apache/poi/ss/format/CellFormatCondition.hpp>
#include <org/apache/poi/ss/format/CellFormatPart_PartHandler.hpp>
#include <org/apache/poi/ss/format/CellFormatResult.hpp>
#include <org/apache/poi/ss/format/CellFormatType.hpp>
#include <org/apache/poi/ss/format/CellFormatter.hpp>
#include <org/apache/poi/util/LocaleUtil.hpp>
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

poi::ss::format::CellFormatPart::CellFormatPart(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::format::CellFormatPart::CellFormatPart(::java::lang::String* desc) 
    : CellFormatPart(*static_cast< ::default_init_tag* >(0))
{
    ctor(desc);
}

poi::ss::format::CellFormatPart::CellFormatPart(::java::util::Locale* locale, ::java::lang::String* desc) 
    : CellFormatPart(*static_cast< ::default_init_tag* >(0))
{
    ctor(locale,desc);
}

java::util::Map*& poi::ss::format::CellFormatPart::NAMED_COLORS()
{
    clinit();
    return NAMED_COLORS_;
}
java::util::Map* poi::ss::format::CellFormatPart::NAMED_COLORS_;

java::util::regex::Pattern*& poi::ss::format::CellFormatPart::COLOR_PAT()
{
    clinit();
    return COLOR_PAT_;
}
java::util::regex::Pattern* poi::ss::format::CellFormatPart::COLOR_PAT_;

java::util::regex::Pattern*& poi::ss::format::CellFormatPart::CONDITION_PAT()
{
    clinit();
    return CONDITION_PAT_;
}
java::util::regex::Pattern* poi::ss::format::CellFormatPart::CONDITION_PAT_;

java::util::regex::Pattern*& poi::ss::format::CellFormatPart::SPECIFICATION_PAT()
{
    clinit();
    return SPECIFICATION_PAT_;
}
java::util::regex::Pattern* poi::ss::format::CellFormatPart::SPECIFICATION_PAT_;

java::util::regex::Pattern*& poi::ss::format::CellFormatPart::CURRENCY_PAT()
{
    clinit();
    return CURRENCY_PAT_;
}
java::util::regex::Pattern* poi::ss::format::CellFormatPart::CURRENCY_PAT_;

java::util::regex::Pattern*& poi::ss::format::CellFormatPart::FORMAT_PAT()
{
    clinit();
    return FORMAT_PAT_;
}
java::util::regex::Pattern* poi::ss::format::CellFormatPart::FORMAT_PAT_;

int32_t& poi::ss::format::CellFormatPart::COLOR_GROUP()
{
    clinit();
    return COLOR_GROUP_;
}
int32_t poi::ss::format::CellFormatPart::COLOR_GROUP_;

int32_t& poi::ss::format::CellFormatPart::CONDITION_OPERATOR_GROUP()
{
    clinit();
    return CONDITION_OPERATOR_GROUP_;
}
int32_t poi::ss::format::CellFormatPart::CONDITION_OPERATOR_GROUP_;

int32_t& poi::ss::format::CellFormatPart::CONDITION_VALUE_GROUP()
{
    clinit();
    return CONDITION_VALUE_GROUP_;
}
int32_t poi::ss::format::CellFormatPart::CONDITION_VALUE_GROUP_;

int32_t& poi::ss::format::CellFormatPart::SPECIFICATION_GROUP()
{
    clinit();
    return SPECIFICATION_GROUP_;
}
int32_t poi::ss::format::CellFormatPart::SPECIFICATION_GROUP_;

void poi::ss::format::CellFormatPart::ctor(::java::lang::String* desc)
{
    ctor(::poi::util::LocaleUtil::getUserLocale(), desc);
}

void poi::ss::format::CellFormatPart::ctor(::java::util::Locale* locale, ::java::lang::String* desc)
{
    super::ctor();
    auto m = npc(FORMAT_PAT_)->matcher(desc);
    if(!npc(m)->matches()) {
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Unrecognized format: "_j)->append(CellFormatter::quote(desc))->toString());
    }
    color = getColor(m);
    condition = getCondition(m);
    type = getCellFormatType(m);
    format = getFormatter(locale, m);
}

bool poi::ss::format::CellFormatPart::applies(::java::lang::Object* valueObject)
{
    if(condition == nullptr || !(dynamic_cast< ::java::lang::Number* >(valueObject) != nullptr)) {
        if(valueObject == nullptr)
            throw new ::java::lang::NullPointerException(u"valueObject"_j);

        return true;
    } else {
        auto num = java_cast< ::java::lang::Number* >(valueObject);
        return npc(condition)->pass(npc(num)->doubleValue());
    }
}

int32_t poi::ss::format::CellFormatPart::findGroup(::java::util::regex::Pattern* pat, ::java::lang::String* str, ::java::lang::String* marker)
{
    clinit();
    auto m = npc(pat)->matcher(str);
    if(!npc(m)->find())
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Pattern \""_j)->append(npc(pat)->pattern())
            ->append(u"\" doesn't match \""_j)
            ->append(str)
            ->append(u"\""_j)->toString());

    for (auto i = int32_t(1); i <= npc(m)->groupCount(); i++) {
        auto grp = npc(m)->group(i);
        if(grp != nullptr && npc(grp)->equals(static_cast< ::java::lang::Object* >(marker)))
            return i;

    }
    throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"\""_j)->append(marker)
        ->append(u"\" not found in \""_j)
        ->append(npc(pat)->pattern())
        ->append(u"\""_j)->toString());
}

java::awt::Color* poi::ss::format::CellFormatPart::getColor(::java::util::regex::Matcher* m)
{
    clinit();
    auto cdesc = npc(m)->group(COLOR_GROUP_);
    if(cdesc == nullptr || npc(cdesc)->length() == 0)
        return nullptr;

    auto c = java_cast< ::java::awt::Color* >(npc(NAMED_COLORS_)->get(cdesc));
    if(c == nullptr)
        npc(CellFormatter::logger())->warning(::java::lang::StringBuilder().append(u"Unknown color: "_j)->append(CellFormatter::quote(cdesc))->toString());

    return c;
}

poi::ss::format::CellFormatCondition* poi::ss::format::CellFormatPart::getCondition(::java::util::regex::Matcher* m)
{
    auto mdesc = npc(m)->group(CONDITION_OPERATOR_GROUP_);
    if(mdesc == nullptr || npc(mdesc)->length() == 0)
        return nullptr;

    return CellFormatCondition::getInstance(npc(m)->group(CONDITION_OPERATOR_GROUP_), npc(m)->group(CONDITION_VALUE_GROUP_));
}

poi::ss::format::CellFormatType* poi::ss::format::CellFormatPart::getCellFormatType(::java::util::regex::Matcher* matcher)
{
    auto fdesc = npc(matcher)->group(SPECIFICATION_GROUP_);
    return formatType(fdesc);
}

poi::ss::format::CellFormatter* poi::ss::format::CellFormatPart::getFormatter(::java::util::Locale* locale, ::java::util::regex::Matcher* matcher)
{
    auto fdesc = npc(matcher)->group(SPECIFICATION_GROUP_);
    auto currencyM = npc(CURRENCY_PAT_)->matcher(fdesc);
    if(npc(currencyM)->find()) {
        auto currencyPart = npc(currencyM)->group(int32_t(1));
        ::java::lang::String* currencyRepl;
        if(npc(currencyPart)->startsWith(u"[$-"_j)) {
            currencyRepl = u"$"_j;
        } else {
            currencyRepl = npc(currencyPart)->substring(2, npc(currencyPart)->lastIndexOf(static_cast< int32_t >(u'-')));
        }
        fdesc = npc(fdesc)->replace(static_cast< ::java::lang::CharSequence* >(currencyPart), static_cast< ::java::lang::CharSequence* >(currencyRepl));
    }
    return npc(type)->formatter(locale, fdesc);
}

poi::ss::format::CellFormatType* poi::ss::format::CellFormatPart::formatType(::java::lang::String* fdesc)
{
    fdesc = npc(fdesc)->trim();
    if(npc(fdesc)->equals(static_cast< ::java::lang::Object* >(u""_j)) || npc(fdesc)->equalsIgnoreCase(u"General"_j))
        return CellFormatType::GENERAL;

    auto m = npc(SPECIFICATION_PAT_)->matcher(fdesc);
    auto couldBeDate = false;
    auto seenZero = false;
    while (npc(m)->find()) {
        auto repl = npc(m)->group(int32_t(0));
        if(npc(repl)->length() > 0) {
            auto c1 = npc(repl)->charAt(int32_t(0));
            char16_t c2 = int32_t(0);
            if(npc(repl)->length() > 1)
                c2 = ::java::lang::Character::toLowerCase(npc(repl)->charAt(int32_t(1)));

            switch (c1) {
            case u'@':
                return CellFormatType::TEXT;
            case u'd':
            case u'D':
            case u'y':
            case u'Y':
                return CellFormatType::DATE;
            case u'h':
            case u'H':
            case u'm':
            case u'M':
            case u's':
            case u'S':
                couldBeDate = true;
                break;
            case u'0':
                seenZero = true;
                break;
            case u'[':
                if(c2 == u'h' || c2 == u'm' || c2 == u's') {
                    return CellFormatType::ELAPSED;
                }
                if(c2 == u'$') {
                    return CellFormatType::NUMBER;
                }
                throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Unsupported [] format block '"_j)->append(repl)
                    ->append(u"' in '"_j)
                    ->append(fdesc)
                    ->append(u"' with c2: "_j)
                    ->append(c2)->toString());
            case u'#':
            case u'?':
                return CellFormatType::NUMBER;
            }

        }
    }
    if(couldBeDate)
        return CellFormatType::DATE;

    if(seenZero)
        return CellFormatType::NUMBER;

    return CellFormatType::TEXT;
}

java::lang::String* poi::ss::format::CellFormatPart::quoteSpecial(::java::lang::String* repl, CellFormatType* type)
{
    clinit();
    auto sb = new ::java::lang::StringBuilder();
    for (auto i = int32_t(0); i < npc(repl)->length(); i++) {
        auto ch = npc(repl)->charAt(i);
        if(ch == u'\'' && npc(type)->isSpecial(u'\'')) {
            npc(sb)->append(char16_t(0x0000));
            continue;
        }
        auto special = npc(type)->isSpecial(ch);
        if(special)
            npc(sb)->append(u"'"_j);

        npc(sb)->append(ch);
        if(special)
            npc(sb)->append(u"'"_j);

    }
    return npc(sb)->toString();
}

poi::ss::format::CellFormatResult* poi::ss::format::CellFormatPart::apply(::java::lang::Object* value)
{
    auto applies = this->applies(value);
    ::java::lang::String* text;
    ::java::awt::Color* textColor;
    if(applies) {
        text = npc(format)->format(value);
        textColor = color;
    } else {
        text = npc(format)->simpleFormat(value);
        textColor = nullptr;
    }
    return new CellFormatResult(applies, text, textColor);
}

poi::ss::format::CellFormatResult* poi::ss::format::CellFormatPart::apply(::javax::swing::JLabel* label, ::java::lang::Object* value)
{
    auto result = apply(value);
    npc(label)->setText(npc(result)->text);
    if(npc(result)->textColor != nullptr) {
        npc(label)->setForeground(npc(result)->textColor);
    }
    return result;
}

poi::ss::format::CellFormatType* poi::ss::format::CellFormatPart::getCellFormatType()
{
    return type;
}

bool poi::ss::format::CellFormatPart::hasCondition()
{
    return condition != nullptr;
}

java::lang::StringBuffer* poi::ss::format::CellFormatPart::parseFormat(::java::lang::String* fdesc, CellFormatType* type, CellFormatPart_PartHandler* partHandler)
{
    clinit();
    auto m = npc(SPECIFICATION_PAT_)->matcher(fdesc);
    auto fmt = new ::java::lang::StringBuffer();
    while (npc(m)->find()) {
        auto part = group(m, 0);
        if(npc(part)->length() > 0) {
            auto repl = npc(partHandler)->handlePart(m, part, type, fmt);
            if(repl == nullptr) {
                switch (npc(part)->charAt(int32_t(0))) {
                case u'"':
                    repl = quoteSpecial(npc(part)->substring(1, npc(part)->length() - int32_t(1)), type);
                    break;
                case u'\\':
                    repl = quoteSpecial(npc(part)->substring(1), type);
                    break;
                case u'_':
                    repl = u" "_j;
                    break;
                case u'*':
                    repl = expandChar(part);
                    break;
                default:
                    repl = part;
                    break;
                }

            }
            npc(m)->appendReplacement(fmt, ::java::util::regex::Matcher::quoteReplacement(repl));
        }
    }
    npc(m)->appendTail(fmt);
    if(npc(type)->isSpecial(u'\'')) {
        auto pos = int32_t(0);
        while ((pos = npc(fmt)->indexOf(u"''"_j, pos)) >= 0) {
            npc(fmt)->delete_(pos, pos + int32_t(2));
        }
        pos = 0;
        while ((pos = npc(fmt)->indexOf(u"\u0000"_j, pos)) >= 0) {
            npc(fmt)->replace(pos, pos + int32_t(1), u"''"_j);
        }
    }
    return fmt;
}

java::lang::String* poi::ss::format::CellFormatPart::expandChar(::java::lang::String* part)
{
    clinit();
    ::java::lang::String* repl;
    auto ch = npc(part)->charAt(int32_t(1));
    repl = ::java::lang::StringBuilder().append(u""_j)->append(ch)
        ->append(ch)
        ->append(ch)->toString();
    return repl;
}

java::lang::String* poi::ss::format::CellFormatPart::group(::java::util::regex::Matcher* m, int32_t g)
{
    clinit();
    auto str = npc(m)->group(g);
    return (str == nullptr ? u""_j : str);
}

java::lang::String* poi::ss::format::CellFormatPart::toString()
{
    return npc(format)->format_;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::format::CellFormatPart::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.format.CellFormatPart", 39);
    return c;
}

void poi::ss::format::CellFormatPart::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        {
            NAMED_COLORS_ = new ::java::util::TreeMap(static_cast< ::java::util::Comparator* >(::java::lang::String::CASE_INSENSITIVE_ORDER()));
            auto colors = ::poi::hssf::util::HSSFColor::getIndexHash();
            for (auto _i = npc(npc(colors)->values())->iterator(); _i->hasNext(); ) {
                ::poi::hssf::util::HSSFColor* color = java_cast< ::poi::hssf::util::HSSFColor* >(_i->next());
                {
                    auto type = npc(color)->getClass();
                    auto name = npc(type)->getSimpleName();
                    if(npc(name)->equals(static_cast< ::java::lang::Object* >(npc(name)->toUpperCase(::java::util::Locale::ROOT())))) {
                        auto rgb = npc(color)->getTriplet();
                        auto c = new ::java::awt::Color(static_cast< int32_t >((*rgb)[int32_t(0)]), static_cast< int32_t >((*rgb)[int32_t(1)]), static_cast< int32_t >((*rgb)[int32_t(2)]));
                        npc(NAMED_COLORS_)->put(name, c);
                        if(npc(name)->indexOf(static_cast< int32_t >(u'_')) > 0)
                            npc(NAMED_COLORS_)->put(npc(name)->replace(u'_', u' '), c);

                        if(npc(name)->indexOf(u"_PERCENT"_j) > 0)
                            npc(NAMED_COLORS_)->put(npc(npc(name)->replace(static_cast< ::java::lang::CharSequence* >(u"_PERCENT"_j), static_cast< ::java::lang::CharSequence* >(u"%"_j)))->replace(u'_', u' '), c);

                    }
                }
            }
        }
        {
            auto condition = ::java::lang::StringBuilder().append(u"([<>=]=?|!=|<>)    # The operator\n"_j)->append(u"  \\s*([0-9]+(?:\\.[0-9]*)?)\\s*  # The constant to test against\n"_j)->toString();
            auto currency = u"(\\[\\$.{0,3}-[0-9a-f]{3}\\])"_j;
            auto color = u"\\[(black|blue|cyan|green|magenta|red|white|yellow|color [0-9]+)\\]"_j;
            auto part = ::java::lang::StringBuilder().append(::java::lang::StringBuilder().append(u"\\\\.                 # Quoted single character\n"_j)->append(u"|\"([^\\\\\"]|\\\\.)*\"         # Quoted string of characters (handles escaped quotes like \\\") \n"_j)
                ->append(u"|"_j)->toString())->append(currency)
                ->append(u"                   # Currency symbol in a given locale\n"_j)
                ->append(u"|_.                             # Space as wide as a given character\n"_j)
                ->append(u"|\\*.                           # Repeating fill character\n"_j)
                ->append(u"|@                              # Text: cell text\n"_j)
                ->append(u"|([0?\\#](?:[0?\\#,]*))         # Number: digit + other digits and commas\n"_j)
                ->append(u"|e[-+]                          # Number: Scientific: Exponent\n"_j)
                ->append(u"|m{1,5}                         # Date: month or minute spec\n"_j)
                ->append(u"|d{1,4}                         # Date: day/date spec\n"_j)
                ->append(u"|y{2,4}                         # Date: year spec\n"_j)
                ->append(u"|h{1,2}                         # Date: hour spec\n"_j)
                ->append(u"|s{1,2}                         # Date: second spec\n"_j)
                ->append(u"|am?/pm?                        # Date: am/pm spec\n"_j)
                ->append(u"|\\[h{1,2}\\]                   # Elapsed time: hour spec\n"_j)
                ->append(u"|\\[m{1,2}\\]                   # Elapsed time: minute spec\n"_j)
                ->append(u"|\\[s{1,2}\\]                   # Elapsed time: second spec\n"_j)
                ->append(u"|[^;]                           # A character\n"_j)
                ->append(u""_j)->toString();
            auto format = ::java::lang::StringBuilder().append(u"(?:"_j)->append(color)
                ->append(u")?                 # Text color\n"_j)
                ->append(u"(?:\\["_j)
                ->append(condition)
                ->append(u"\\])?               # Condition\n"_j)
                ->append(u"(?:\\[\\$-[0-9a-fA-F]+\\])?                # Optional locale id, ignored currently\n"_j)
                ->append(u"((?:"_j)
                ->append(part)
                ->append(u")+)                        # Format spec\n"_j)->toString();
            auto flags = ::java::util::regex::Pattern::COMMENTS | ::java::util::regex::Pattern::CASE_INSENSITIVE;
            COLOR_PAT_ = ::java::util::regex::Pattern::compile(color, flags);
            CONDITION_PAT_ = ::java::util::regex::Pattern::compile(condition, flags);
            SPECIFICATION_PAT_ = ::java::util::regex::Pattern::compile(part, flags);
            CURRENCY_PAT_ = ::java::util::regex::Pattern::compile(currency, flags);
            FORMAT_PAT_ = ::java::util::regex::Pattern::compile(format, flags);
            COLOR_GROUP_ = findGroup(FORMAT_PAT_, u"[Blue]@"_j, u"Blue"_j);
            CONDITION_OPERATOR_GROUP_ = findGroup(FORMAT_PAT_, u"[>=1]@"_j, u">="_j);
            CONDITION_VALUE_GROUP_ = findGroup(FORMAT_PAT_, u"[>=1]@"_j, u"1"_j);
            SPECIFICATION_GROUP_ = findGroup(FORMAT_PAT_, u"[Blue][>1]\\a ?"_j, u"\\a ?"_j);
        }
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* poi::ss::format::CellFormatPart::getClass0()
{
    return class_();
}

