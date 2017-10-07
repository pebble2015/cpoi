// Generated from /POI/java/org/apache/poi/ss/usermodel/DataFormatter.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/math/fwd-POI.hpp>
#include <java/text/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/util/regex/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Observer.hpp>

struct default_init_tag;

class org::apache::poi::ss::usermodel::DataFormatter
    : public virtual ::java::lang::Object
    , public virtual ::java::util::Observer
{

public:
    typedef ::java::lang::Object super;

private:
    static ::java::lang::String* defaultFractionWholePartFormat_;
    static ::java::lang::String* defaultFractionFractionPartFormat_;
    static ::java::util::regex::Pattern* numPattern_;
    static ::java::util::regex::Pattern* daysAsText_;
    static ::java::util::regex::Pattern* amPmPattern_;
    static ::java::util::regex::Pattern* rangeConditionalPattern_;
    static ::java::util::regex::Pattern* localePatternGroup_;
    static ::java::util::regex::Pattern* colorPattern_;
    static ::java::util::regex::Pattern* fractionPattern_;
    static ::java::util::regex::Pattern* fractionStripper_;
    static ::java::util::regex::Pattern* alternateGrouping_;
    static ::java::lang::String* invalidDateTimeString_;
    ::java::text::DecimalFormatSymbols* decimalSymbols {  };
    ::java::text::DateFormatSymbols* dateSymbols {  };
    ::java::text::DateFormat* defaultDateformat {  };
    ::java::text::Format* generalNumberFormat {  };
    ::java::text::Format* defaultNumFormat {  };
    ::java::util::Map* formats {  };
    bool emulateCSV {  };
    ::java::util::Locale* locale {  };
    bool localeIsAdapting {  };
    DataFormatter_LocaleChangeObservable* localeChangedObservable {  };
    static ::org::apache::poi::util::POILogger* logger_;
protected:
    void ctor();
    void ctor(bool emulateCSV);
    void ctor(::java::util::Locale* locale);
    void ctor(::java::util::Locale* locale, bool emulateCSV);
    void ctor(::java::util::Locale* locale, bool localeIsAdapting, bool emulateCSV);

private:
    ::java::text::Format* getFormat(Cell* cell, ::org::apache::poi::ss::formula::ConditionalFormattingEvaluator* cfEvaluator);
    ::java::text::Format* getFormat(double cellValue, int32_t formatIndex, ::java::lang::String* formatStrIn);

public:
    virtual ::java::text::Format* createFormat(Cell* cell);

private:
    ::java::text::Format* createFormat(double cellValue, int32_t formatIndex, ::java::lang::String* sFormat);
    ::java::text::Format* createDateFormat(::java::lang::String* pFormatStr, double cellValue);
    ::java::lang::String* cleanFormatForNumber(::java::lang::String* formatStr);
    ::java::text::Format* createNumberFormat(::java::lang::String* formatStr, double cellValue);

public:
    virtual ::java::text::Format* getDefaultFormat(Cell* cell);

private:
    ::java::text::Format* getDefaultFormat(double cellValue);
    ::java::lang::String* performDateFormatting(::java::util::Date* d, ::java::text::Format* dateFormat);
    ::java::lang::String* getFormattedDateString(Cell* cell, ::org::apache::poi::ss::formula::ConditionalFormattingEvaluator* cfEvaluator);
    ::java::lang::String* getFormattedNumberString(Cell* cell, ::org::apache::poi::ss::formula::ConditionalFormattingEvaluator* cfEvaluator);

public:
    virtual ::java::lang::String* formatRawCellContents(double value, int32_t formatIndex, ::java::lang::String* formatString);
    virtual ::java::lang::String* formatRawCellContents(double value, int32_t formatIndex, ::java::lang::String* formatString, bool use1904Windowing);
    virtual ::java::lang::String* formatCellValue(Cell* cell);
    virtual ::java::lang::String* formatCellValue(Cell* cell, FormulaEvaluator* evaluator);
    virtual ::java::lang::String* formatCellValue(Cell* cell, FormulaEvaluator* evaluator, ::org::apache::poi::ss::formula::ConditionalFormattingEvaluator* cfEvaluator);
    virtual void setDefaultNumberFormat(::java::text::Format* format);
    virtual void addFormat(::java::lang::String* excelFormatStr, ::java::text::Format* format);

private:
    static ::java::text::DecimalFormat* createIntegerOnlyFormat(::java::lang::String* fmt);

public:
    static void setExcelStyleRoundingMode(::java::text::DecimalFormat* format);
    static void setExcelStyleRoundingMode(::java::text::DecimalFormat* format, ::java::math::RoundingMode* roundingMode);
    virtual ::java::util::Observable* getLocaleChangedObservable();
    void update(::java::util::Observable* observable, ::java::lang::Object* localeObj) override;

    // Generated
    DataFormatter();
    DataFormatter(bool emulateCSV);
    DataFormatter(::java::util::Locale* locale);
    DataFormatter(::java::util::Locale* locale, bool emulateCSV);

private:
    DataFormatter(::java::util::Locale* locale, bool localeIsAdapting, bool emulateCSV);
protected:
    DataFormatter(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    void init();
    static ::java::lang::String*& defaultFractionWholePartFormat();
    static ::java::lang::String*& defaultFractionFractionPartFormat();
    static ::java::util::regex::Pattern*& numPattern();
    static ::java::util::regex::Pattern*& daysAsText();
    static ::java::util::regex::Pattern*& amPmPattern();
    static ::java::util::regex::Pattern*& rangeConditionalPattern();
    static ::java::util::regex::Pattern*& localePatternGroup();
    static ::java::util::regex::Pattern*& colorPattern();
    static ::java::util::regex::Pattern*& fractionPattern();
    static ::java::util::regex::Pattern*& fractionStripper();
    static ::java::util::regex::Pattern*& alternateGrouping();
    static ::java::lang::String*& invalidDateTimeString();
    static ::org::apache::poi::util::POILogger*& logger();
    virtual ::java::lang::Class* getClass0();
    friend class DataFormatter_LocaleChangeObservable;
    friend class DataFormatter_InternalDecimalFormatWithScale;
    friend class DataFormatter_SSNFormat;
    friend class DataFormatter_ZipPlusFourFormat;
    friend class DataFormatter_PhoneFormat;
    friend class DataFormatter_ConstantStringFormat;
    friend class DataFormatter_CellFormatResultWrapper;
};
