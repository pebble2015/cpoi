// Generated from /POI/java/org/apache/poi/ss/format/CellNumberFormatter.java

#pragma once

#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/ss/format/fwd-POI.hpp>
#include <org/apache/poi/ss/format/CellFormatter.hpp>

struct default_init_tag;

class poi::ss::format::CellNumberFormatter_GeneralNumberFormatter
    : public CellFormatter
{

public:
    typedef CellFormatter super;
protected:
    void ctor(::java::util::Locale* locale);

public:
    void formatValue(::java::lang::StringBuffer* toAppendTo, ::java::lang::Object* value) override;
    void simpleValue(::java::lang::StringBuffer* toAppendTo, ::java::lang::Object* value) override;

    // Generated

private:
    CellNumberFormatter_GeneralNumberFormatter(::java::util::Locale* locale);
protected:
    CellNumberFormatter_GeneralNumberFormatter(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class CellNumberFormatter;
    friend class CellNumberFormatter_Special;
};
