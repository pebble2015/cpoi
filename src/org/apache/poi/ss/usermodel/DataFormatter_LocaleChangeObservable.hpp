// Generated from /POI/java/org/apache/poi/ss/usermodel/DataFormatter.java

#pragma once

#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <java/util/Observable.hpp>

struct default_init_tag;

class org::apache::poi::ss::usermodel::DataFormatter_LocaleChangeObservable
    : public ::java::util::Observable
{

public:
    typedef ::java::util::Observable super;

public: /* package */
    virtual void checkForLocaleChange();
    virtual void checkForLocaleChange(::java::util::Locale* newLocale);

    // Generated

public:
    DataFormatter_LocaleChangeObservable(DataFormatter *DataFormatter_this);
protected:
    DataFormatter_LocaleChangeObservable(DataFormatter *DataFormatter_this, const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    DataFormatter *DataFormatter_this;

private:
    virtual ::java::lang::Class* getClass0();
    friend class DataFormatter;
    friend class DataFormatter_InternalDecimalFormatWithScale;
    friend class DataFormatter_SSNFormat;
    friend class DataFormatter_ZipPlusFourFormat;
    friend class DataFormatter_PhoneFormat;
    friend class DataFormatter_ConstantStringFormat;
    friend class DataFormatter_CellFormatResultWrapper;
};
