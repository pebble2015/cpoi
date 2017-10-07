// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFOptimiser.java

#pragma once

#include <org/apache/poi/hssf/usermodel/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::poi::hssf::usermodel::HSSFOptimiser
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
    static void optimiseFonts(HSSFWorkbook* workbook);
    static void optimiseCellStyles(HSSFWorkbook* workbook);

    // Generated
    HSSFOptimiser();
protected:
    HSSFOptimiser(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
