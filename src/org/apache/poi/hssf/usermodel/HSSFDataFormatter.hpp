// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFDataFormatter.java

#pragma once

#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/usermodel/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/DataFormatter.hpp>

struct default_init_tag;

class poi::hssf::usermodel::HSSFDataFormatter final
    : public ::poi::ss::usermodel::DataFormatter
{

public:
    typedef ::poi::ss::usermodel::DataFormatter super;
protected:
    void ctor(::java::util::Locale* locale);
    void ctor();

    // Generated

public:
    HSSFDataFormatter(::java::util::Locale* locale);
    HSSFDataFormatter();
protected:
    HSSFDataFormatter(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
