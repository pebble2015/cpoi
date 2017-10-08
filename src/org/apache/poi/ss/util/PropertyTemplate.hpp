// Generated from /POI/java/org/apache/poi/ss/util/PropertyTemplate.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <org/apache/poi/ss/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::ss::util::PropertyTemplate final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    ::java::util::Map* _propertyTemplate {  };
protected:
    void ctor();
    void ctor(PropertyTemplate* template_);

private:
    ::java::util::Map* getTemplate();
    static ::java::util::Map* cloneCellProperties(::java::util::Map* properties);

public:
    void drawBorders(CellRangeAddress* range, ::poi::ss::usermodel::BorderStyle* borderType, ::poi::ss::usermodel::BorderExtent* extent);
    void drawBorders(CellRangeAddress* range, ::poi::ss::usermodel::BorderStyle* borderType, int16_t color, ::poi::ss::usermodel::BorderExtent* extent);

private:
    void drawTopBorder(CellRangeAddress* range, ::poi::ss::usermodel::BorderStyle* borderType);
    void drawBottomBorder(CellRangeAddress* range, ::poi::ss::usermodel::BorderStyle* borderType);
    void drawLeftBorder(CellRangeAddress* range, ::poi::ss::usermodel::BorderStyle* borderType);
    void drawRightBorder(CellRangeAddress* range, ::poi::ss::usermodel::BorderStyle* borderType);
    void drawOutsideBorders(CellRangeAddress* range, ::poi::ss::usermodel::BorderStyle* borderType, ::poi::ss::usermodel::BorderExtent* extent);
    void drawHorizontalBorders(CellRangeAddress* range, ::poi::ss::usermodel::BorderStyle* borderType, ::poi::ss::usermodel::BorderExtent* extent);
    void drawVerticalBorders(CellRangeAddress* range, ::poi::ss::usermodel::BorderStyle* borderType, ::poi::ss::usermodel::BorderExtent* extent);
    void removeBorders(CellRangeAddress* range);

public:
    void applyBorders(::poi::ss::usermodel::Sheet* sheet);
    void drawBorderColors(CellRangeAddress* range, int16_t color, ::poi::ss::usermodel::BorderExtent* extent);

private:
    void drawTopBorderColor(CellRangeAddress* range, int16_t color);
    void drawBottomBorderColor(CellRangeAddress* range, int16_t color);
    void drawLeftBorderColor(CellRangeAddress* range, int16_t color);
    void drawRightBorderColor(CellRangeAddress* range, int16_t color);
    void drawOutsideBorderColors(CellRangeAddress* range, int16_t color, ::poi::ss::usermodel::BorderExtent* extent);
    void drawHorizontalBorderColors(CellRangeAddress* range, int16_t color, ::poi::ss::usermodel::BorderExtent* extent);
    void drawVerticalBorderColors(CellRangeAddress* range, int16_t color, ::poi::ss::usermodel::BorderExtent* extent);
    void removeBorderColors(CellRangeAddress* range);
    void addProperty(int32_t row, int32_t col, ::java::lang::String* property, int16_t value);
    void addProperty(int32_t row, int32_t col, ::java::lang::String* property, ::java::lang::Object* value);
    void removeProperties(int32_t row, int32_t col, ::java::util::Set* properties);

public:
    int32_t getNumBorders(CellAddress* cell);
    int32_t getNumBorders(int32_t row, int32_t col);
    int32_t getNumBorderColors(CellAddress* cell);
    int32_t getNumBorderColors(int32_t row, int32_t col);
    ::poi::ss::usermodel::BorderStyle* getBorderStyle(CellAddress* cell, ::java::lang::String* property);
    ::poi::ss::usermodel::BorderStyle* getBorderStyle(int32_t row, int32_t col, ::java::lang::String* property);
    int16_t getTemplateProperty(CellAddress* cell, ::java::lang::String* property);
    int16_t getTemplateProperty(int32_t row, int32_t col, ::java::lang::String* property);

private:
    static int16_t getShort(::java::lang::Object* value);

    // Generated

public:
    PropertyTemplate();
    PropertyTemplate(PropertyTemplate* template_);
protected:
    PropertyTemplate(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
