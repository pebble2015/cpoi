// Generated from /POI/java/org/apache/poi/ss/usermodel/DataFormatter.java
#include <org/apache/poi/ss/usermodel/DataFormatter.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Character.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/Double.hpp>
#include <java/lang/Exception.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/math/BigDecimal.hpp>
#include <java/math/RoundingMode.hpp>
#include <java/text/DateFormat.hpp>
#include <java/text/DateFormatSymbols.hpp>
#include <java/text/DecimalFormat.hpp>
#include <java/text/DecimalFormatSymbols.hpp>
#include <java/text/Format.hpp>
#include <java/text/SimpleDateFormat.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/Date.hpp>
#include <java/util/HashMap.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/List.hpp>
#include <java/util/Locale.hpp>
#include <java/util/Map_Entry.hpp>
#include <java/util/Map.hpp>
#include <java/util/Set.hpp>
#include <java/util/regex/Matcher.hpp>
#include <java/util/regex/Pattern.hpp>
#include <org/apache/poi/ss/format/CellFormat.hpp>
#include <org/apache/poi/ss/usermodel/Cell.hpp>
#include <org/apache/poi/ss/usermodel/CellStyle.hpp>
#include <org/apache/poi/ss/usermodel/CellType.hpp>
#include <org/apache/poi/ss/usermodel/DataFormatter_CellFormatResultWrapper.hpp>
#include <org/apache/poi/ss/usermodel/DataFormatter_ConstantStringFormat.hpp>
#include <org/apache/poi/ss/usermodel/DataFormatter_InternalDecimalFormatWithScale.hpp>
#include <org/apache/poi/ss/usermodel/DataFormatter_LocaleChangeObservable.hpp>
#include <org/apache/poi/ss/usermodel/DataFormatter_PhoneFormat.hpp>
#include <org/apache/poi/ss/usermodel/DataFormatter_SSNFormat.hpp>
#include <org/apache/poi/ss/usermodel/DataFormatter_ZipPlusFourFormat.hpp>
#include <org/apache/poi/ss/usermodel/DateUtil.hpp>
#include <org/apache/poi/ss/usermodel/ExcelGeneralNumberFormat.hpp>
#include <org/apache/poi/ss/usermodel/ExcelNumberFormat.hpp>
#include <org/apache/poi/ss/usermodel/ExcelStyleDateFormatter.hpp>
#include <org/apache/poi/ss/usermodel/FormulaError.hpp>
#include <org/apache/poi/ss/usermodel/FormulaEvaluator.hpp>
#include <org/apache/poi/ss/usermodel/FractionFormat.hpp>
#include <org/apache/poi/ss/usermodel/RichTextString.hpp>
#include <org/apache/poi/ss/util/NumberToTextConverter.hpp>
#include <org/apache/poi/util/LocaleUtil.hpp>
#include <org/apache/poi/util/POILogFactory.hpp>
#include <org/apache/poi/util/POILogger.hpp>
#include <Array.hpp>
#include <SubArray.hpp>
#include <ObjectArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace io
    {
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
    } // io

    namespace lang
    {
typedef ::SubArray< ::java::lang::CharSequence, ObjectArray > CharSequenceArray;
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::String, ObjectArray, ::java::io::SerializableArray, ComparableArray, CharSequenceArray > StringArray;
    } // lang
} // java

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

poi::ss::usermodel::DataFormatter::DataFormatter(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::usermodel::DataFormatter::DataFormatter() 
    : DataFormatter(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::ss::usermodel::DataFormatter::DataFormatter(bool emulateCSV) 
    : DataFormatter(*static_cast< ::default_init_tag* >(0))
{
    ctor(emulateCSV);
}

poi::ss::usermodel::DataFormatter::DataFormatter(::java::util::Locale* locale) 
    : DataFormatter(*static_cast< ::default_init_tag* >(0))
{
    ctor(locale);
}

poi::ss::usermodel::DataFormatter::DataFormatter(::java::util::Locale* locale, bool emulateCSV) 
    : DataFormatter(*static_cast< ::default_init_tag* >(0))
{
    ctor(locale,emulateCSV);
}

poi::ss::usermodel::DataFormatter::DataFormatter(::java::util::Locale* locale, bool localeIsAdapting, bool emulateCSV) 
    : DataFormatter(*static_cast< ::default_init_tag* >(0))
{
    ctor(locale,localeIsAdapting,emulateCSV);
}

void poi::ss::usermodel::DataFormatter::init()
{
    formats = new ::java::util::HashMap();
    localeChangedObservable = new DataFormatter_LocaleChangeObservable(this);
}

java::lang::String*& poi::ss::usermodel::DataFormatter::defaultFractionWholePartFormat()
{
    clinit();
    return defaultFractionWholePartFormat_;
}
java::lang::String* poi::ss::usermodel::DataFormatter::defaultFractionWholePartFormat_;

java::lang::String*& poi::ss::usermodel::DataFormatter::defaultFractionFractionPartFormat()
{
    clinit();
    return defaultFractionFractionPartFormat_;
}
java::lang::String* poi::ss::usermodel::DataFormatter::defaultFractionFractionPartFormat_;

java::util::regex::Pattern*& poi::ss::usermodel::DataFormatter::numPattern()
{
    clinit();
    return numPattern_;
}
java::util::regex::Pattern* poi::ss::usermodel::DataFormatter::numPattern_;

java::util::regex::Pattern*& poi::ss::usermodel::DataFormatter::daysAsText()
{
    clinit();
    return daysAsText_;
}
java::util::regex::Pattern* poi::ss::usermodel::DataFormatter::daysAsText_;

java::util::regex::Pattern*& poi::ss::usermodel::DataFormatter::amPmPattern()
{
    clinit();
    return amPmPattern_;
}
java::util::regex::Pattern* poi::ss::usermodel::DataFormatter::amPmPattern_;

java::util::regex::Pattern*& poi::ss::usermodel::DataFormatter::rangeConditionalPattern()
{
    clinit();
    return rangeConditionalPattern_;
}
java::util::regex::Pattern* poi::ss::usermodel::DataFormatter::rangeConditionalPattern_;

java::util::regex::Pattern*& poi::ss::usermodel::DataFormatter::localePatternGroup()
{
    clinit();
    return localePatternGroup_;
}
java::util::regex::Pattern* poi::ss::usermodel::DataFormatter::localePatternGroup_;

java::util::regex::Pattern*& poi::ss::usermodel::DataFormatter::colorPattern()
{
    clinit();
    return colorPattern_;
}
java::util::regex::Pattern* poi::ss::usermodel::DataFormatter::colorPattern_;

java::util::regex::Pattern*& poi::ss::usermodel::DataFormatter::fractionPattern()
{
    clinit();
    return fractionPattern_;
}
java::util::regex::Pattern* poi::ss::usermodel::DataFormatter::fractionPattern_;

java::util::regex::Pattern*& poi::ss::usermodel::DataFormatter::fractionStripper()
{
    clinit();
    return fractionStripper_;
}
java::util::regex::Pattern* poi::ss::usermodel::DataFormatter::fractionStripper_;

java::util::regex::Pattern*& poi::ss::usermodel::DataFormatter::alternateGrouping()
{
    clinit();
    return alternateGrouping_;
}
java::util::regex::Pattern* poi::ss::usermodel::DataFormatter::alternateGrouping_;

java::lang::String*& poi::ss::usermodel::DataFormatter::invalidDateTimeString()
{
    clinit();
    return invalidDateTimeString_;
}
java::lang::String* poi::ss::usermodel::DataFormatter::invalidDateTimeString_;

poi::util::POILogger*& poi::ss::usermodel::DataFormatter::logger()
{
    clinit();
    return logger_;
}
poi::util::POILogger* poi::ss::usermodel::DataFormatter::logger_;

void poi::ss::usermodel::DataFormatter::ctor()
{
    ctor(false);
}

void poi::ss::usermodel::DataFormatter::ctor(bool emulateCSV)
{
    ctor(::poi::util::LocaleUtil::getUserLocale(), true, emulateCSV);
}

void poi::ss::usermodel::DataFormatter::ctor(::java::util::Locale* locale)
{
    ctor(locale, false);
}

void poi::ss::usermodel::DataFormatter::ctor(::java::util::Locale* locale, bool emulateCSV)
{
    ctor(locale, false, emulateCSV);
}

void poi::ss::usermodel::DataFormatter::ctor(::java::util::Locale* locale, bool localeIsAdapting, bool emulateCSV)
{
    super::ctor();
    init();
    this->localeIsAdapting = true;
    npc(localeChangedObservable)->addObserver(this);
    npc(localeChangedObservable)->checkForLocaleChange(locale);
    this->localeIsAdapting = localeIsAdapting;
    this->emulateCSV = emulateCSV;
}

java::text::Format* poi::ss::usermodel::DataFormatter::getFormat(Cell* cell, ::poi::ss::formula::ConditionalFormattingEvaluator* cfEvaluator)
{
    if(cell == nullptr)
        return nullptr;

    auto numFmt = ExcelNumberFormat::from(cell, cfEvaluator);
    if(numFmt == nullptr) {
        return nullptr;
    }
    auto formatIndex = npc(numFmt)->getIdx();
    auto formatStr = npc(numFmt)->getFormat();
    if(formatStr == nullptr || npc(npc(formatStr)->trim())->length() == 0) {
        return nullptr;
    }
    return getFormat(npc(cell)->getNumericCellValue(), formatIndex, formatStr);
}

java::text::Format* poi::ss::usermodel::DataFormatter::getFormat(double cellValue, int32_t formatIndex, ::java::lang::String* formatStrIn)
{
    npc(localeChangedObservable)->checkForLocaleChange();
    auto formatStr = formatStrIn;
    if(npc(formatStr)->contains(u";"_j) && (npc(formatStr)->indexOf(static_cast< int32_t >(u';')) != npc(formatStr)->lastIndexOf(static_cast< int32_t >(u';')) || npc(npc(rangeConditionalPattern_)->matcher(formatStr))->matches())) {
        try {
            auto cfmt = ::poi::ss::format::CellFormat::getInstance(locale, formatStr);
            ::java::lang::Object* cellValueO = ::java::lang::Double::valueOf(cellValue);
            if(DateUtil::isADateFormat(formatIndex, formatStr) && npc((java_cast< ::java::lang::Double* >(cellValueO)))->doubleValue() != 0.0) {
                cellValueO = DateUtil::getJavaDate(cellValue);
            }
            return new DataFormatter_CellFormatResultWrapper(this, npc(cfmt)->apply(cellValueO));
        } catch (::java::lang::Exception* e) {
            npc(logger_)->log(::poi::util::POILogger::WARN, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(::java::lang::StringBuilder().append(u"Formatting failed for format "_j)->append(formatStr)
                ->append(u", falling back"_j)->toString()), static_cast< ::java::lang::Object* >(e)}));
        }
    }
    if(emulateCSV && cellValue == 0.0 && npc(formatStr)->contains(u"#"_j) && !npc(formatStr)->contains(u"0"_j)) {
        formatStr = npc(formatStr)->replaceAll(u"#"_j, u""_j);
    }
    auto format = java_cast< ::java::text::Format* >(npc(formats)->get(formatStr));
    if(format != nullptr) {
        return format;
    }
    if(npc(u"General"_j)->equalsIgnoreCase(formatStr) || npc(u"@"_j)->equals(static_cast< ::java::lang::Object* >(formatStr))) {
        return generalNumberFormat;
    }
    format = createFormat(cellValue, formatIndex, formatStr);
    npc(formats)->put(formatStr, format);
    return format;
}

java::text::Format* poi::ss::usermodel::DataFormatter::createFormat(Cell* cell)
{
    int32_t formatIndex = npc(npc(cell)->getCellStyle())->getDataFormat();
    auto formatStr = npc(npc(cell)->getCellStyle())->getDataFormatString();
    return createFormat(npc(cell)->getNumericCellValue(), formatIndex, formatStr);
}

java::text::Format* poi::ss::usermodel::DataFormatter::createFormat(double cellValue, int32_t formatIndex, ::java::lang::String* sFormat)
{
    npc(localeChangedObservable)->checkForLocaleChange();
    auto formatStr = sFormat;
    auto colourM = npc(colorPattern_)->matcher(formatStr);
    while (npc(colourM)->find()) {
        auto colour = npc(colourM)->group();
        auto at = npc(formatStr)->indexOf(colour);
        if(at == -int32_t(1))
            break;

        auto nFormatStr = ::java::lang::StringBuilder().append(npc(formatStr)->substring(0, at))->append(npc(formatStr)->substring(at + npc(colour)->length()))->toString();
        if(npc(nFormatStr)->equals(static_cast< ::java::lang::Object* >(formatStr)))
            break;

        formatStr = nFormatStr;
        colourM = npc(colorPattern_)->matcher(formatStr);
    }
    auto m = npc(localePatternGroup_)->matcher(formatStr);
    while (npc(m)->find()) {
        auto match = npc(m)->group();
        auto symbol = npc(match)->substring(npc(match)->indexOf(static_cast< int32_t >(u'$')) + int32_t(1), npc(match)->indexOf(static_cast< int32_t >(u'-')));
        if(npc(symbol)->indexOf(static_cast< int32_t >(u'$')) > -int32_t(1)) {
            symbol = ::java::lang::StringBuilder().append(npc(symbol)->substring(0, npc(symbol)->indexOf(static_cast< int32_t >(u'$'))))->append(u'\\')
                ->append(npc(symbol)->substring(npc(symbol)->indexOf(static_cast< int32_t >(u'$')), npc(symbol)->length()))->toString();
        }
        formatStr = npc(m)->replaceAll(symbol);
        m = npc(localePatternGroup_)->matcher(formatStr);
    }
    if(formatStr == nullptr || npc(npc(formatStr)->trim())->length() == 0) {
        return getDefaultFormat(cellValue);
    }
    if(npc(u"General"_j)->equalsIgnoreCase(formatStr) || npc(u"@"_j)->equals(static_cast< ::java::lang::Object* >(formatStr))) {
        return generalNumberFormat;
    }
    if(DateUtil::isADateFormat(formatIndex, formatStr) && DateUtil::isValidExcelDate(cellValue)) {
        return createDateFormat(formatStr, cellValue);
    }
    if(npc(formatStr)->contains(u"#/"_j) || npc(formatStr)->contains(u"?/"_j)) {
        auto chunks = npc(formatStr)->split(u";"_j);
        for(auto chunk1 : *npc(chunks)) {
            auto chunk = npc(chunk1)->replaceAll(u"\\?"_j, u"#"_j);
            auto matcher = npc(fractionStripper_)->matcher(chunk);
            chunk = npc(matcher)->replaceAll(u" "_j);
            chunk = npc(chunk)->replaceAll(u" +"_j, u" "_j);
            auto fractionMatcher = npc(fractionPattern_)->matcher(chunk);
            if(npc(fractionMatcher)->find()) {
                auto wholePart = (npc(fractionMatcher)->group(int32_t(1)) == nullptr) ? u""_j : defaultFractionWholePartFormat_;
                return new FractionFormat(wholePart, npc(fractionMatcher)->group(int32_t(3)));
            }
        }
        return new FractionFormat(defaultFractionWholePartFormat_, defaultFractionFractionPartFormat_);
    }
    if(npc(npc(numPattern_)->matcher(formatStr))->find()) {
        return createNumberFormat(formatStr, cellValue);
    }
    if(emulateCSV) {
        return new DataFormatter_ConstantStringFormat(cleanFormatForNumber(formatStr));
    }
    return nullptr;
}

java::text::Format* poi::ss::usermodel::DataFormatter::createDateFormat(::java::lang::String* pFormatStr, double cellValue)
{
    auto formatStr = pFormatStr;
    formatStr = npc(formatStr)->replaceAll(u"\\\\-"_j, u"-"_j);
    formatStr = npc(formatStr)->replaceAll(u"\\\\,"_j, u","_j);
    formatStr = npc(formatStr)->replaceAll(u"\\\\\\."_j, u"."_j);
    formatStr = npc(formatStr)->replaceAll(u"\\\\ "_j, u" "_j);
    formatStr = npc(formatStr)->replaceAll(u"\\\\/"_j, u"/"_j);
    formatStr = npc(formatStr)->replaceAll(u";@"_j, u""_j);
    formatStr = npc(formatStr)->replaceAll(u"\"/\""_j, u"/"_j);
    formatStr = npc(formatStr)->replace(static_cast< ::java::lang::CharSequence* >(u"\"\""_j), static_cast< ::java::lang::CharSequence* >(u"'"_j));
    formatStr = npc(formatStr)->replaceAll(u"\\\\T"_j, u"'T'"_j);
    auto hasAmPm = false;
    auto amPmMatcher = npc(amPmPattern_)->matcher(formatStr);
    while (npc(amPmMatcher)->find()) {
        formatStr = npc(amPmMatcher)->replaceAll(u"@"_j);
        hasAmPm = true;
        amPmMatcher = npc(amPmPattern_)->matcher(formatStr);
    }
    formatStr = npc(formatStr)->replaceAll(u"@"_j, u"a"_j);
    auto dateMatcher = npc(daysAsText_)->matcher(formatStr);
    if(npc(dateMatcher)->find()) {
        auto match = npc(npc(npc(dateMatcher)->group(int32_t(0)))->toUpperCase(::java::util::Locale::ROOT()))->replaceAll(u"D"_j, u"E"_j);
        formatStr = npc(dateMatcher)->replaceAll(match);
    }
    auto sb = new ::java::lang::StringBuilder();
    auto chars = npc(formatStr)->toCharArray_();
    auto mIsMonth = true;
    ::java::util::List* ms = new ::java::util::ArrayList();
    auto isElapsed = false;
    for (auto j = int32_t(0); j < npc(chars)->length; j++) {
        auto c = (*chars)[j];
        if(c == u'\'') {
            npc(sb)->append(c);
            j++;
            while (j < npc(chars)->length) {
                c = (*chars)[j];
                npc(sb)->append(c);
                if(c == u'\'') {
                    break;
                }
                j++;
            }
        } else if(c == u'[' && !isElapsed) {
            isElapsed = true;
            mIsMonth = false;
            npc(sb)->append(c);
        } else if(c == u']' && isElapsed) {
            isElapsed = false;
            npc(sb)->append(c);
        } else if(isElapsed) {
            if(c == u'h' || c == u'H') {
                npc(sb)->append(u'H');
            } else if(c == u'm' || c == u'M') {
                npc(sb)->append(u'm');
            } else if(c == u's' || c == u'S') {
                npc(sb)->append(u's');
            } else {
                npc(sb)->append(c);
            }
        } else if(c == u'h' || c == u'H') {
            mIsMonth = false;
            if(hasAmPm) {
                npc(sb)->append(u'h');
            } else {
                npc(sb)->append(u'H');
            }
        } else if(c == u'm' || c == u'M') {
            if(mIsMonth) {
                npc(sb)->append(u'M');
                npc(ms)->add(static_cast< ::java::lang::Object* >(::java::lang::Integer::valueOf(npc(sb)->length() - int32_t(1))));
            } else {
                npc(sb)->append(u'm');
            }
        } else if(c == u's' || c == u'S') {
            npc(sb)->append(u's');
            for (auto _i = npc(ms)->iterator(); _i->hasNext(); ) {
                int32_t index = npc(java_cast< ::java::lang::Integer* >(_i->next()))->intValue();
                {
                    if(npc(sb)->charAt(index) == u'M') {
                        npc(sb)->replace(index, index + int32_t(1), u"m"_j);
                    }
                }
            }
            mIsMonth = true;
            npc(ms)->clear();
        } else if(::java::lang::Character::isLetter(c)) {
            mIsMonth = true;
            npc(ms)->clear();
            if(c == u'y' || c == u'Y') {
                npc(sb)->append(u'y');
            } else if(c == u'd' || c == u'D') {
                npc(sb)->append(u'd');
            } else {
                npc(sb)->append(c);
            }
        } else {
            if(::java::lang::Character::isWhitespace(c)) {
                npc(ms)->clear();
            }
            npc(sb)->append(c);
        }
    }
    formatStr = npc(sb)->toString();
    try {
        return new ExcelStyleDateFormatter(formatStr, dateSymbols);
    } catch (::java::lang::IllegalArgumentException* iae) {
        npc(logger_)->log(::poi::util::POILogger::DEBUG, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(::java::lang::StringBuilder().append(u"Formatting failed for format "_j)->append(formatStr)
            ->append(u", falling back"_j)->toString()), static_cast< ::java::lang::Object* >(iae)}));
        return getDefaultFormat(cellValue);
    }
}

java::lang::String* poi::ss::usermodel::DataFormatter::cleanFormatForNumber(::java::lang::String* formatStr)
{
    auto sb = new ::java::lang::StringBuilder(formatStr);
    if(emulateCSV) {
        for (auto i = int32_t(0); i < npc(sb)->length(); i++) {
            auto c = npc(sb)->charAt(i);
            if(c == u'_' || c == u'*' || c == u'?') {
                if(i > 0 && npc(sb)->charAt((i - int32_t(1))) == u'\\') {
                    continue;
                }
                if(c == u'?') {
                    npc(sb)->setCharAt(i, u' ');
                } else if(i < npc(sb)->length() - int32_t(1)) {
                    if(c == u'_') {
                        npc(sb)->setCharAt(i + int32_t(1), u' ');
                    } else {
                        npc(sb)->deleteCharAt(i + int32_t(1));
                    }
                    npc(sb)->deleteCharAt(i);
                    i--;
                }
            }
        }
    } else {
        for (auto i = int32_t(0); i < npc(sb)->length(); i++) {
            auto c = npc(sb)->charAt(i);
            if(c == u'_' || c == u'*') {
                if(i > 0 && npc(sb)->charAt((i - int32_t(1))) == u'\\') {
                    continue;
                }
                if(i < npc(sb)->length() - int32_t(1)) {
                    npc(sb)->deleteCharAt(i + int32_t(1));
                }
                npc(sb)->deleteCharAt(i);
                i--;
            }
        }
    }
    for (auto i = int32_t(0); i < npc(sb)->length(); i++) {
        auto c = npc(sb)->charAt(i);
        if(c == u'\\' || c == u'"') {
            npc(sb)->deleteCharAt(i);
            i--;
        } else if(c == u'+' && i > 0 && npc(sb)->charAt(i - int32_t(1)) == u'E') {
            npc(sb)->deleteCharAt(i);
            i--;
        }
    }
    return npc(sb)->toString();
}

java::text::Format* poi::ss::usermodel::DataFormatter::createNumberFormat(::java::lang::String* formatStr, double cellValue)
{
    auto format = cleanFormatForNumber(formatStr);
    auto symbols = decimalSymbols;
    auto agm = npc(alternateGrouping_)->matcher(format);
    if(npc(agm)->find()) {
        auto grouping = npc(npc(agm)->group(int32_t(2)))->charAt(int32_t(0));
        if(grouping != u',') {
            symbols = ::java::text::DecimalFormatSymbols::getInstance(locale);
            npc(symbols)->setGroupingSeparator(grouping);
            auto oldPart = npc(agm)->group(int32_t(1));
            auto newPart = npc(oldPart)->replace(grouping, u',');
            format = npc(format)->replace(static_cast< ::java::lang::CharSequence* >(oldPart), static_cast< ::java::lang::CharSequence* >(newPart));
        }
    }
    try {
        return new DataFormatter_InternalDecimalFormatWithScale(format, symbols);
    } catch (::java::lang::IllegalArgumentException* iae) {
        npc(logger_)->log(::poi::util::POILogger::DEBUG, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(::java::lang::StringBuilder().append(u"Formatting failed for format "_j)->append(formatStr)
            ->append(u", falling back"_j)->toString()), static_cast< ::java::lang::Object* >(iae)}));
        return getDefaultFormat(cellValue);
    }
}

java::text::Format* poi::ss::usermodel::DataFormatter::getDefaultFormat(Cell* cell)
{
    return getDefaultFormat(npc(cell)->getNumericCellValue());
}

java::text::Format* poi::ss::usermodel::DataFormatter::getDefaultFormat(double cellValue)
{
    npc(localeChangedObservable)->checkForLocaleChange();
    if(defaultNumFormat != nullptr) {
        return defaultNumFormat;
    }
    return generalNumberFormat;
}

java::lang::String* poi::ss::usermodel::DataFormatter::performDateFormatting(::java::util::Date* d, ::java::text::Format* dateFormat)
{
    return npc((dateFormat != nullptr ? dateFormat : static_cast< ::java::text::Format* >(defaultDateformat)))->format(d);
}

java::lang::String* poi::ss::usermodel::DataFormatter::getFormattedDateString(Cell* cell, ::poi::ss::formula::ConditionalFormattingEvaluator* cfEvaluator)
{
    auto dateFormat = getFormat(cell, cfEvaluator);
    if(dynamic_cast< ExcelStyleDateFormatter* >(dateFormat) != nullptr) {
        npc((java_cast< ExcelStyleDateFormatter* >(dateFormat)))->setDateToBeFormatted(npc(cell)->getNumericCellValue());
    }
    auto d = npc(cell)->getDateCellValue();
    return performDateFormatting(d, dateFormat);
}

java::lang::String* poi::ss::usermodel::DataFormatter::getFormattedNumberString(Cell* cell, ::poi::ss::formula::ConditionalFormattingEvaluator* cfEvaluator)
{
    auto numberFormat = getFormat(cell, cfEvaluator);
    auto d = npc(cell)->getNumericCellValue();
    if(numberFormat == nullptr) {
        return ::java::lang::String::valueOf(d);
    }
    auto formatted = npc(numberFormat)->format(new ::java::lang::Double(d));
    return npc(formatted)->replaceFirst(u"E(\\d)"_j, u"E+$1"_j);
}

java::lang::String* poi::ss::usermodel::DataFormatter::formatRawCellContents(double value, int32_t formatIndex, ::java::lang::String* formatString)
{
    return formatRawCellContents(value, formatIndex, formatString, false);
}

java::lang::String* poi::ss::usermodel::DataFormatter::formatRawCellContents(double value, int32_t formatIndex, ::java::lang::String* formatString, bool use1904Windowing)
{
    npc(localeChangedObservable)->checkForLocaleChange();
    if(DateUtil::isADateFormat(formatIndex, formatString)) {
        if(DateUtil::isValidExcelDate(value)) {
            auto dateFormat = getFormat(value, formatIndex, formatString);
            if(dynamic_cast< ExcelStyleDateFormatter* >(dateFormat) != nullptr) {
                npc((java_cast< ExcelStyleDateFormatter* >(dateFormat)))->setDateToBeFormatted(value);
            }
            auto d = DateUtil::getJavaDate(value, use1904Windowing);
            return performDateFormatting(d, dateFormat);
        }
        if(emulateCSV) {
            return invalidDateTimeString_;
        }
    }
    auto numberFormat = getFormat(value, formatIndex, formatString);
    if(numberFormat == nullptr) {
        return ::java::lang::String::valueOf(value);
    }
    ::java::lang::String* result;
    auto const textValue = ::poi::ss::util::NumberToTextConverter::toText(value);
    if(npc(textValue)->indexOf(static_cast< int32_t >(u'E')) > -int32_t(1)) {
        result = npc(numberFormat)->format(new ::java::lang::Double(value));
    } else {
        result = npc(numberFormat)->format(new ::java::math::BigDecimal(textValue));
    }
    if(npc(result)->indexOf(static_cast< int32_t >(u'E')) > -int32_t(1) && !npc(result)->contains(u"E-"_j)) {
        result = npc(result)->replaceFirst(u"E"_j, u"E+"_j);
    }
    return result;
}

java::lang::String* poi::ss::usermodel::DataFormatter::formatCellValue(Cell* cell)
{
    return formatCellValue(cell, nullptr);
}

java::lang::String* poi::ss::usermodel::DataFormatter::formatCellValue(Cell* cell, FormulaEvaluator* evaluator)
{
    return formatCellValue(cell, evaluator, nullptr);
}

java::lang::String* poi::ss::usermodel::DataFormatter::formatCellValue(Cell* cell, FormulaEvaluator* evaluator, ::poi::ss::formula::ConditionalFormattingEvaluator* cfEvaluator)
{
    npc(localeChangedObservable)->checkForLocaleChange();
    if(cell == nullptr) {
        return u""_j;
    }
    auto cellType = npc(cell)->getCellTypeEnum();
    if(cellType == CellType::FORMULA) {
        if(evaluator == nullptr) {
            return npc(cell)->getCellFormula();
        }
        cellType = npc(evaluator)->evaluateFormulaCellEnum(cell);
    }
    {
        auto v = cellType;
        if((v == CellType::NUMERIC)) {
            if(DateUtil::isCellDateFormatted(cell, cfEvaluator)) {
                return getFormattedDateString(cell, cfEvaluator);
            }
            return getFormattedNumberString(cell, cfEvaluator);
        }
        if((v == CellType::STRING)) {
            return npc(npc(cell)->getRichStringCellValue())->getString();
        }
        if((v == CellType::BOOLEAN)) {
            return npc(cell)->getBooleanCellValue() ? u"TRUE"_j : u"FALSE"_j;
        }
        if((v == CellType::BLANK)) {
            return u""_j;
        }
        if((v == CellType::ERROR)) {
            return npc(FormulaError::forInt(npc(cell)->getErrorCellValue()))->getString();
        }
        if((((v != CellType::NUMERIC) && (v != CellType::STRING) && (v != CellType::BOOLEAN) && (v != CellType::BLANK) && (v != CellType::ERROR)))) {
            throw new ::java::lang::RuntimeException(::java::lang::StringBuilder().append(u"Unexpected celltype ("_j)->append(static_cast< ::java::lang::Object* >(cellType))
                ->append(u")"_j)->toString());
        }
end_switch0:;
    }

}

void poi::ss::usermodel::DataFormatter::setDefaultNumberFormat(::java::text::Format* format)
{
    for (auto _i = npc(npc(formats)->entrySet())->iterator(); _i->hasNext(); ) {
        ::java::util::Map_Entry* entry = java_cast< ::java::util::Map_Entry* >(_i->next());
        {
            if(java_cast< ::java::text::Format* >(npc(entry)->getValue()) == generalNumberFormat) {
                npc(entry)->setValue(format);
            }
        }
    }
    defaultNumFormat = format;
}

void poi::ss::usermodel::DataFormatter::addFormat(::java::lang::String* excelFormatStr, ::java::text::Format* format)
{
    npc(formats)->put(excelFormatStr, format);
}

java::text::DecimalFormat* poi::ss::usermodel::DataFormatter::createIntegerOnlyFormat(::java::lang::String* fmt)
{
    clinit();
    auto dsf = ::java::text::DecimalFormatSymbols::getInstance(::java::util::Locale::ROOT());
    auto result = new ::java::text::DecimalFormat(fmt, dsf);
    npc(result)->setParseIntegerOnly(true);
    return result;
}

void poi::ss::usermodel::DataFormatter::setExcelStyleRoundingMode(::java::text::DecimalFormat* format)
{
    clinit();
    setExcelStyleRoundingMode(format, ::java::math::RoundingMode::HALF_UP);
}

void poi::ss::usermodel::DataFormatter::setExcelStyleRoundingMode(::java::text::DecimalFormat* format, ::java::math::RoundingMode* roundingMode)
{
    clinit();
    npc(format)->setRoundingMode(roundingMode);
}

java::util::Observable* poi::ss::usermodel::DataFormatter::getLocaleChangedObservable()
{
    return localeChangedObservable;
}

void poi::ss::usermodel::DataFormatter::update(::java::util::Observable* observable, ::java::lang::Object* localeObj)
{
    if(!(dynamic_cast< ::java::util::Locale* >(localeObj) != nullptr))
        return;

    auto newLocale = java_cast< ::java::util::Locale* >(localeObj);
    if(!localeIsAdapting || npc(newLocale)->equals(static_cast< ::java::lang::Object* >(locale)))
        return;

    locale = newLocale;
    dateSymbols = ::java::text::DateFormatSymbols::getInstance(locale);
    decimalSymbols = ::java::text::DecimalFormatSymbols::getInstance(locale);
    generalNumberFormat = new ExcelGeneralNumberFormat(locale);
    defaultDateformat = new ::java::text::SimpleDateFormat(u"EEE MMM dd HH:mm:ss zzz yyyy"_j, dateSymbols);
    npc(defaultDateformat)->setTimeZone(::poi::util::LocaleUtil::getUserTimeZone());
    npc(formats)->clear();
    auto zipFormat = DataFormatter_ZipPlusFourFormat::instance();
    addFormat(u"00000\\-0000"_j, zipFormat);
    addFormat(u"00000-0000"_j, zipFormat);
    auto phoneFormat = DataFormatter_PhoneFormat::instance();
    addFormat(u"[<=9999999]###\\-####;\\(###\\)\\ ###\\-####"_j, phoneFormat);
    addFormat(u"[<=9999999]###-####;(###) ###-####"_j, phoneFormat);
    addFormat(u"###\\-####;\\(###\\)\\ ###\\-####"_j, phoneFormat);
    addFormat(u"###-####;(###) ###-####"_j, phoneFormat);
    auto ssnFormat = DataFormatter_SSNFormat::instance();
    addFormat(u"000\\-00\\-0000"_j, ssnFormat);
    addFormat(u"000-00-0000"_j, ssnFormat);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::usermodel::DataFormatter::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.usermodel.DataFormatter", 41);
    return c;
}

void poi::ss::usermodel::DataFormatter::clinit()
{
struct string_init_ {
    string_init_() {
    defaultFractionWholePartFormat_ = u"#"_j;
    defaultFractionFractionPartFormat_ = u"#/##"_j;
    }
};

    static string_init_ string_init_instance;

    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        numPattern_ = ::java::util::regex::Pattern::compile(u"[0#]+"_j);
        daysAsText_ = ::java::util::regex::Pattern::compile(u"([d]{3,})"_j, ::java::util::regex::Pattern::CASE_INSENSITIVE);
        amPmPattern_ = ::java::util::regex::Pattern::compile(u"((A|P)[M/P]*)"_j, ::java::util::regex::Pattern::CASE_INSENSITIVE);
        rangeConditionalPattern_ = ::java::util::regex::Pattern::compile(u".*\\[\\s*(>|>=|<|<=|=)\\s*[0-9]*\\.*[0-9].*"_j);
        localePatternGroup_ = ::java::util::regex::Pattern::compile(u"(\\[\\$[^-\\]]*-[0-9A-Z]+\\])"_j);
        colorPattern_ = ::java::util::regex::Pattern::compile(::java::lang::StringBuilder().append(u"(\\[BLACK\\])|(\\[BLUE\\])|(\\[CYAN\\])|(\\[GREEN\\])|"_j)->append(u"(\\[MAGENTA\\])|(\\[RED\\])|(\\[WHITE\\])|(\\[YELLOW\\])|"_j)
            ->append(u"(\\[COLOR\\s*\\d\\])|(\\[COLOR\\s*[0-5]\\d\\])"_j)->toString(), ::java::util::regex::Pattern::CASE_INSENSITIVE);
        fractionPattern_ = ::java::util::regex::Pattern::compile(u"(?:([#\\d]+)\\s+)?(#+)\\s*\\/\\s*([#\\d]+)"_j);
        fractionStripper_ = ::java::util::regex::Pattern::compile(u"(\"[^\"]*\")|([^ \\?#\\d\\/]+)"_j);
        alternateGrouping_ = ::java::util::regex::Pattern::compile(u"([#0]([^.#0])[#0]{3})"_j);
        {
            auto buf = new ::java::lang::StringBuilder();
            for (auto i = int32_t(0); i < 255; i++) 
                                npc(buf)->append(u'#');

            invalidDateTimeString_ = npc(buf)->toString();
        }
        logger_ = ::poi::util::POILogFactory::getLogger(static_cast< ::java::lang::Class* >(DataFormatter::class_()));
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* poi::ss::usermodel::DataFormatter::getClass0()
{
    return class_();
}

