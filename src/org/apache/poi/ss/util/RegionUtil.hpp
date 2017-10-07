// Generated from /POI/java/org/apache/poi/ss/util/RegionUtil.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <org/apache/poi/ss/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::poi::ss::util::RegionUtil final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
protected:
    void ctor();

public:
    static void setBorderLeft(int32_t border, CellRangeAddress* region, ::org::apache::poi::ss::usermodel::Sheet* sheet);
    static void setBorderLeft(::org::apache::poi::ss::usermodel::BorderStyle* border, CellRangeAddress* region, ::org::apache::poi::ss::usermodel::Sheet* sheet);
    static void setLeftBorderColor(int32_t color, CellRangeAddress* region, ::org::apache::poi::ss::usermodel::Sheet* sheet);
    static void setBorderRight(int32_t border, CellRangeAddress* region, ::org::apache::poi::ss::usermodel::Sheet* sheet);
    static void setBorderRight(::org::apache::poi::ss::usermodel::BorderStyle* border, CellRangeAddress* region, ::org::apache::poi::ss::usermodel::Sheet* sheet);
    static void setRightBorderColor(int32_t color, CellRangeAddress* region, ::org::apache::poi::ss::usermodel::Sheet* sheet);
    static void setBorderBottom(int32_t border, CellRangeAddress* region, ::org::apache::poi::ss::usermodel::Sheet* sheet);
    static void setBorderBottom(::org::apache::poi::ss::usermodel::BorderStyle* border, CellRangeAddress* region, ::org::apache::poi::ss::usermodel::Sheet* sheet);
    static void setBottomBorderColor(int32_t color, CellRangeAddress* region, ::org::apache::poi::ss::usermodel::Sheet* sheet);
    static void setBorderTop(int32_t border, CellRangeAddress* region, ::org::apache::poi::ss::usermodel::Sheet* sheet);
    static void setBorderTop(::org::apache::poi::ss::usermodel::BorderStyle* border, CellRangeAddress* region, ::org::apache::poi::ss::usermodel::Sheet* sheet);
    static void setTopBorderColor(int32_t color, CellRangeAddress* region, ::org::apache::poi::ss::usermodel::Sheet* sheet);

    // Generated

private:
    RegionUtil();
protected:
    RegionUtil(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class RegionUtil_CellPropertySetter;
};
