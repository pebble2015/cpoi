// Generated from /POI/java/org/apache/poi/ss/format/CellDateFormatter.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/text/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/ss/format/fwd-POI.hpp>
#include <org/apache/poi/ss/format/CellFormatter.hpp>

struct default_init_tag;

class org::apache::poi::ss::format::CellDateFormatter
    : public CellFormatter
{

public:
    typedef CellFormatter super;

private:
    bool amPmUpper {  };
    bool showM {  };
    bool showAmPm {  };
    ::java::text::DateFormat* dateFmt {  };
    ::java::lang::String* sFmt {  };
    ::java::util::Calendar* EXCEL_EPOCH_CAL {  };
    static CellDateFormatter* SIMPLE_DATE_;
protected:
    void ctor(::java::lang::String* format);
    void ctor(::java::util::Locale* locale, ::java::lang::String* format);

public:
    void formatValue(::java::lang::StringBuffer* toAppendTo, ::java::lang::Object* value) override;
    void simpleValue(::java::lang::StringBuffer* toAppendTo, ::java::lang::Object* value) override;

    // Generated
    CellDateFormatter(::java::lang::String* format);
    CellDateFormatter(::java::util::Locale* locale, ::java::lang::String* format);
protected:
    CellDateFormatter(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    void init();
    static CellDateFormatter*& SIMPLE_DATE();
    virtual ::java::lang::Class* getClass0();
    friend class CellDateFormatter_DatePartHandler;
};
