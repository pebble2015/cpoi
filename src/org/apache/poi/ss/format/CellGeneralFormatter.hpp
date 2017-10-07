// Generated from /POI/java/org/apache/poi/ss/format/CellGeneralFormatter.java

#pragma once

#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/ss/format/fwd-POI.hpp>
#include <org/apache/poi/ss/format/CellFormatter.hpp>

struct default_init_tag;

class org::apache::poi::ss::format::CellGeneralFormatter
    : public CellFormatter
{

public:
    typedef CellFormatter super;
protected:
    void ctor();
    void ctor(::java::util::Locale* locale);

public:
    void formatValue(::java::lang::StringBuffer* toAppendTo, ::java::lang::Object* value) override;
    void simpleValue(::java::lang::StringBuffer* toAppendTo, ::java::lang::Object* value) override;

    // Generated
    CellGeneralFormatter();
    CellGeneralFormatter(::java::util::Locale* locale);
protected:
    CellGeneralFormatter(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
