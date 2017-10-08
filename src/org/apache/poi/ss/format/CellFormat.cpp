// Generated from /POI/java/org/apache/poi/ss/format/CellFormat.java
#include <org/apache/poi/ss/format/CellFormat.hpp>

#include <java/awt/Color.hpp>
#include <java/lang/Boolean.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Double.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Number.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/Throwable.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/Date.hpp>
#include <java/util/List.hpp>
#include <java/util/Locale.hpp>
#include <java/util/Map.hpp>
#include <java/util/WeakHashMap.hpp>
#include <java/util/logging/Level.hpp>
#include <java/util/logging/Logger.hpp>
#include <java/util/regex/Matcher.hpp>
#include <java/util/regex/Pattern.hpp>
#include <javax/swing/JLabel.hpp>
#include <org/apache/poi/ss/format/CellFormat_createGeneralFormat_1.hpp>
#include <org/apache/poi/ss/format/CellFormatPart.hpp>
#include <org/apache/poi/ss/format/CellFormatResult.hpp>
#include <org/apache/poi/ss/format/CellFormatType.hpp>
#include <org/apache/poi/ss/format/CellFormatter.hpp>
#include <org/apache/poi/ss/usermodel/Cell.hpp>
#include <org/apache/poi/ss/usermodel/CellType.hpp>
#include <org/apache/poi/ss/usermodel/DateUtil.hpp>
#include <org/apache/poi/util/LocaleUtil.hpp>

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

poi::ss::format::CellFormat::CellFormat(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::format::CellFormat::CellFormat(::java::util::Locale* locale, ::java::lang::String* format) 
    : CellFormat(*static_cast< ::default_init_tag* >(0))
{
    ctor(locale,format);
}

java::util::regex::Pattern*& poi::ss::format::CellFormat::ONE_PART()
{
    clinit();
    return ONE_PART_;
}
java::util::regex::Pattern* poi::ss::format::CellFormat::ONE_PART_;

java::lang::String*& poi::ss::format::CellFormat::INVALID_VALUE_FOR_FORMAT()
{
    clinit();
    return INVALID_VALUE_FOR_FORMAT_;
}
java::lang::String* poi::ss::format::CellFormat::INVALID_VALUE_FOR_FORMAT_;

java::lang::String*& poi::ss::format::CellFormat::QUOTE()
{
    clinit();
    return QUOTE_;
}
java::lang::String* poi::ss::format::CellFormat::QUOTE_;

poi::ss::format::CellFormat*& poi::ss::format::CellFormat::GENERAL_FORMAT()
{
    clinit();
    return GENERAL_FORMAT_;
}
poi::ss::format::CellFormat* poi::ss::format::CellFormat::GENERAL_FORMAT_;

poi::ss::format::CellFormat* poi::ss::format::CellFormat::createGeneralFormat(::java::util::Locale* locale)
{
    clinit();
    return new CellFormat_createGeneralFormat_1(locale, locale, u"General"_j);
}

java::util::Map*& poi::ss::format::CellFormat::formatCache()
{
    clinit();
    return formatCache_;
}
java::util::Map* poi::ss::format::CellFormat::formatCache_;

poi::ss::format::CellFormat* poi::ss::format::CellFormat::getInstance(::java::lang::String* format)
{
    clinit();
    return getInstance(::poi::util::LocaleUtil::getUserLocale(), format);
}

poi::ss::format::CellFormat* poi::ss::format::CellFormat::getInstance(::java::util::Locale* locale, ::java::lang::String* format)
{
    clinit();
    auto formatMap = java_cast< ::java::util::Map* >(npc(formatCache_)->get(locale));
    if(formatMap == nullptr) {
        formatMap = new ::java::util::WeakHashMap();
        npc(formatCache_)->put(locale, formatMap);
    }
    auto fmt = java_cast< CellFormat* >(npc(formatMap)->get(format));
    if(fmt == nullptr) {
        if(npc(format)->equals(static_cast< ::java::lang::Object* >(u"General"_j)) || npc(format)->equals(static_cast< ::java::lang::Object* >(u"@"_j)))
            fmt = createGeneralFormat(locale);
        else
            fmt = new CellFormat(locale, format);
        npc(formatMap)->put(format, fmt);
    }
    return fmt;
}

void poi::ss::format::CellFormat::ctor(::java::util::Locale* locale, ::java::lang::String* format)
{
    super::ctor();
    this->locale = locale;
    this->format = format;
    auto defaultTextFormat = new CellFormatPart(locale, u"@"_j);
    auto m = npc(ONE_PART_)->matcher(format);
    ::java::util::List* parts = new ::java::util::ArrayList();
    while (npc(m)->find()) {
        try {
            auto valueDesc = npc(m)->group();
            if(npc(valueDesc)->endsWith(u";"_j))
                valueDesc = npc(valueDesc)->substring(0, npc(valueDesc)->length() - int32_t(1));

            npc(parts)->add(static_cast< ::java::lang::Object* >(new CellFormatPart(locale, valueDesc)));
        } catch (::java::lang::RuntimeException* e) {
            npc(CellFormatter::logger())->log(::java::util::logging::Level::WARNING(), ::java::lang::StringBuilder().append(u"Invalid format: "_j)->append(CellFormatter::quote(npc(m)->group()))->toString(), static_cast< ::java::lang::Throwable* >(e));
            npc(parts)->add(static_cast< ::java::lang::Object* >(nullptr));
        }
    }
    formatPartCount = npc(parts)->size();
    switch (formatPartCount) {
    case int32_t(1):
        posNumFmt = java_cast< CellFormatPart* >(npc(parts)->get(0));
        negNumFmt = nullptr;
        zeroNumFmt = nullptr;
        textFmt = defaultTextFormat;
        break;
    case int32_t(2):
        posNumFmt = java_cast< CellFormatPart* >(npc(parts)->get(0));
        negNumFmt = java_cast< CellFormatPart* >(npc(parts)->get(1));
        zeroNumFmt = nullptr;
        textFmt = defaultTextFormat;
        break;
    case int32_t(3):
        posNumFmt = java_cast< CellFormatPart* >(npc(parts)->get(0));
        negNumFmt = java_cast< CellFormatPart* >(npc(parts)->get(1));
        zeroNumFmt = java_cast< CellFormatPart* >(npc(parts)->get(2));
        textFmt = defaultTextFormat;
        break;
    case int32_t(4):
    default:
        posNumFmt = java_cast< CellFormatPart* >(npc(parts)->get(0));
        negNumFmt = java_cast< CellFormatPart* >(npc(parts)->get(1));
        zeroNumFmt = java_cast< CellFormatPart* >(npc(parts)->get(2));
        textFmt = java_cast< CellFormatPart* >(npc(parts)->get(3));
        break;
    }

}

poi::ss::format::CellFormatResult* poi::ss::format::CellFormat::apply(::java::lang::Object* value)
{
    if(dynamic_cast< ::java::lang::Number* >(value) != nullptr) {
        auto num = java_cast< ::java::lang::Number* >(value);
        auto val = npc(num)->doubleValue();
        if(val < 0 && ((formatPartCount == 2 && !npc(posNumFmt)->hasCondition() && !npc(negNumFmt)->hasCondition()) || (formatPartCount == 3 && !npc(negNumFmt)->hasCondition()) || (formatPartCount == 4 && !npc(negNumFmt)->hasCondition()))) {
            return npc(negNumFmt)->apply(::java::lang::Double::valueOf(-val));
        } else {
            return npc(getApplicableFormatPart(::java::lang::Double::valueOf(val)))->apply(::java::lang::Double::valueOf(val));
        }
    } else if(dynamic_cast< ::java::util::Date* >(value) != nullptr) {
        ::java::lang::Double* numericValue = ::java::lang::Double::valueOf(::poi::ss::usermodel::DateUtil::getExcelDate(java_cast< ::java::util::Date* >(value)));
        if(::poi::ss::usermodel::DateUtil::isValidExcelDate((npc(numericValue))->doubleValue())) {
            return npc(getApplicableFormatPart(numericValue))->apply(value);
        } else {
            throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"value "_j)->append(static_cast< ::java::lang::Object* >(numericValue))
                ->append(u" of date "_j)
                ->append(static_cast< ::java::lang::Object* >(value))
                ->append(u" is not a valid Excel date"_j)->toString());
        }
    } else {
        return npc(textFmt)->apply(value);
    }
}

poi::ss::format::CellFormatResult* poi::ss::format::CellFormat::apply(::java::util::Date* date, double numericValue)
{
    return npc(getApplicableFormatPart(::java::lang::Double::valueOf(numericValue)))->apply(date);
}

poi::ss::format::CellFormatResult* poi::ss::format::CellFormat::apply(::poi::ss::usermodel::Cell* c)
{
    {
        ::java::lang::Double* value;
        {
            auto v = ultimateTypeEnum(c);
            if((v == ::poi::ss::usermodel::CellType::BLANK)) {
                return apply(static_cast< ::java::lang::Object* >(u""_j));
            }
            if((v == ::poi::ss::usermodel::CellType::BOOLEAN)) {
                return apply(::java::lang::Boolean::valueOf(npc(c)->getBooleanCellValue()));
            }
            if((v == ::poi::ss::usermodel::CellType::NUMERIC)) {
                ::java::lang::Double* value = ::java::lang::Double::valueOf(npc(c)->getNumericCellValue());
                if(npc(getApplicableFormatPart(value))->getCellFormatType() == CellFormatType::DATE) {
                    if(::poi::ss::usermodel::DateUtil::isValidExcelDate((npc(value))->doubleValue())) {
                        return apply(npc(c)->getDateCellValue(), (npc(value))->doubleValue());
                    } else {
                        return apply(static_cast< ::java::lang::Object* >(INVALID_VALUE_FOR_FORMAT_));
                    }
                } else {
                    return apply(static_cast< ::java::lang::Object* >(value));
                }
            }
            if((v == ::poi::ss::usermodel::CellType::NUMERIC) || (v == ::poi::ss::usermodel::CellType::STRING)) {
                return apply(static_cast< ::java::lang::Object* >(npc(c)->getStringCellValue()));
            }
            if((((v != ::poi::ss::usermodel::CellType::BLANK) && (v != ::poi::ss::usermodel::CellType::BOOLEAN) && (v != ::poi::ss::usermodel::CellType::NUMERIC) && (v != ::poi::ss::usermodel::CellType::STRING)))) {
                return apply(static_cast< ::java::lang::Object* >(u"?"_j));
            }
end_switch0:;
        }
    }

}

poi::ss::format::CellFormatResult* poi::ss::format::CellFormat::apply(::javax::swing::JLabel* label, ::java::lang::Object* value)
{
    auto result = apply(value);
    npc(label)->setText(npc(result)->text);
    if(npc(result)->textColor != nullptr) {
        npc(label)->setForeground(npc(result)->textColor);
    }
    return result;
}

poi::ss::format::CellFormatResult* poi::ss::format::CellFormat::apply(::javax::swing::JLabel* label, ::java::util::Date* date, double numericValue)
{
    auto result = apply(date, numericValue);
    npc(label)->setText(npc(result)->text);
    if(npc(result)->textColor != nullptr) {
        npc(label)->setForeground(npc(result)->textColor);
    }
    return result;
}

poi::ss::format::CellFormatResult* poi::ss::format::CellFormat::apply(::javax::swing::JLabel* label, ::poi::ss::usermodel::Cell* c)
{
    {
        ::java::lang::Double* value;
        {
            auto v = ultimateTypeEnum(c);
            if((v == ::poi::ss::usermodel::CellType::BLANK)) {
                return apply(label, static_cast< ::java::lang::Object* >(u""_j));
            }
            if((v == ::poi::ss::usermodel::CellType::BOOLEAN)) {
                return apply(label, ::java::lang::Boolean::valueOf(npc(c)->getBooleanCellValue()));
            }
            if((v == ::poi::ss::usermodel::CellType::NUMERIC)) {
                ::java::lang::Double* value = ::java::lang::Double::valueOf(npc(c)->getNumericCellValue());
                if(npc(getApplicableFormatPart(value))->getCellFormatType() == CellFormatType::DATE) {
                    if(::poi::ss::usermodel::DateUtil::isValidExcelDate((npc(value))->doubleValue())) {
                        return apply(label, npc(c)->getDateCellValue(), (npc(value))->doubleValue());
                    } else {
                        return apply(label, static_cast< ::java::lang::Object* >(INVALID_VALUE_FOR_FORMAT_));
                    }
                } else {
                    return apply(label, static_cast< ::java::lang::Object* >(value));
                }
            }
            if((v == ::poi::ss::usermodel::CellType::NUMERIC) || (v == ::poi::ss::usermodel::CellType::STRING)) {
                return apply(label, static_cast< ::java::lang::Object* >(npc(c)->getStringCellValue()));
            }
            if((((v != ::poi::ss::usermodel::CellType::BLANK) && (v != ::poi::ss::usermodel::CellType::BOOLEAN) && (v != ::poi::ss::usermodel::CellType::NUMERIC) && (v != ::poi::ss::usermodel::CellType::STRING)))) {
                return apply(label, static_cast< ::java::lang::Object* >(u"?"_j));
            }
end_switch1:;
        }
    }

}

poi::ss::format::CellFormatPart* poi::ss::format::CellFormat::getApplicableFormatPart(::java::lang::Object* value)
{
    if(dynamic_cast< ::java::lang::Number* >(value) != nullptr) {
        auto val = npc((java_cast< ::java::lang::Number* >(value)))->doubleValue();
        if(formatPartCount == 1) {
            if(!npc(posNumFmt)->hasCondition() || (npc(posNumFmt)->hasCondition() && npc(posNumFmt)->applies(::java::lang::Double::valueOf(val)))) {
                return posNumFmt;
            } else {
                return new CellFormatPart(locale, u"General"_j);
            }
        } else if(formatPartCount == 2) {
            if((!npc(posNumFmt)->hasCondition() && val >= 0) || (npc(posNumFmt)->hasCondition() && npc(posNumFmt)->applies(::java::lang::Double::valueOf(val)))) {
                return posNumFmt;
            } else if(!npc(negNumFmt)->hasCondition() || (npc(negNumFmt)->hasCondition() && npc(negNumFmt)->applies(::java::lang::Double::valueOf(val)))) {
                return negNumFmt;
            } else {
                return new CellFormatPart(::java::lang::StringBuilder().append(QUOTE_)->append(INVALID_VALUE_FOR_FORMAT_)
                    ->append(QUOTE_)->toString());
            }
        } else {
            if((!npc(posNumFmt)->hasCondition() && val > 0) || (npc(posNumFmt)->hasCondition() && npc(posNumFmt)->applies(::java::lang::Double::valueOf(val)))) {
                return posNumFmt;
            } else if((!npc(negNumFmt)->hasCondition() && val < 0) || (npc(negNumFmt)->hasCondition() && npc(negNumFmt)->applies(::java::lang::Double::valueOf(val)))) {
                return negNumFmt;
            } else {
                return zeroNumFmt;
            }
        }
    } else {
        throw new ::java::lang::IllegalArgumentException(u"value must be a Number"_j);
    }
}

int32_t poi::ss::format::CellFormat::ultimateType(::poi::ss::usermodel::Cell* cell)
{
    clinit();
    return npc(ultimateTypeEnum(cell))->getCode();
}

poi::ss::usermodel::CellType* poi::ss::format::CellFormat::ultimateTypeEnum(::poi::ss::usermodel::Cell* cell)
{
    clinit();
    auto type = npc(cell)->getCellTypeEnum();
    if(type == ::poi::ss::usermodel::CellType::FORMULA)
        return npc(cell)->getCachedFormulaResultTypeEnum();
    else
        return type;
}

bool poi::ss::format::CellFormat::equals(::java::lang::Object* obj)
{
    if(static_cast< ::java::lang::Object* >(this) == obj)
        return true;

    if(dynamic_cast< CellFormat* >(obj) != nullptr) {
        auto that = java_cast< CellFormat* >(obj);
        return npc(format)->equals(static_cast< ::java::lang::Object* >(npc(that)->format));
    }
    return false;
}

int32_t poi::ss::format::CellFormat::hashCode()
{
    return npc(format)->hashCode();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::format::CellFormat::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.format.CellFormat", 35);
    return c;
}

void poi::ss::format::CellFormat::clinit()
{
struct string_init_ {
    string_init_() {
    INVALID_VALUE_FOR_FORMAT_ = ::java::lang::StringBuilder().append(u"###################################################"_j)->append(u"###################################################"_j)
        ->append(u"###################################################"_j)
        ->append(u"###################################################"_j)
        ->append(u"###################################################"_j)->toString();
    }
};

    static string_init_ string_init_instance;

    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        ONE_PART_ = ::java::util::regex::Pattern::compile(::java::lang::StringBuilder().append(npc(CellFormatPart::FORMAT_PAT())->pattern())->append(u"(;|$)"_j)->toString(), ::java::util::regex::Pattern::COMMENTS | ::java::util::regex::Pattern::CASE_INSENSITIVE);
        QUOTE_ = u"\""_j;
        GENERAL_FORMAT_ = createGeneralFormat(::poi::util::LocaleUtil::getUserLocale());
        formatCache_ = new ::java::util::WeakHashMap();
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* poi::ss::format::CellFormat::getClass0()
{
    return class_();
}

