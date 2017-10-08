// Generated from /POI/java/org/apache/poi/ss/util/CellUtil.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <org/apache/poi/ss/util/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace poi
{
    namespace ss
    {
        namespace util
        {
typedef ::SubArray< ::poi::ss::util::CellUtil_UnicodeMapping, ::java::lang::ObjectArray > CellUtil_UnicodeMappingArray;
        } // util
    } // ss
} // poi

struct default_init_tag;

class poi::ss::util::CellUtil final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static ::poi::util::POILogger* log_;
    static ::java::lang::String* ALIGNMENT_;
    static ::java::lang::String* BORDER_BOTTOM_;
    static ::java::lang::String* BORDER_LEFT_;
    static ::java::lang::String* BORDER_RIGHT_;
    static ::java::lang::String* BORDER_TOP_;
    static ::java::lang::String* BOTTOM_BORDER_COLOR_;
    static ::java::lang::String* LEFT_BORDER_COLOR_;
    static ::java::lang::String* RIGHT_BORDER_COLOR_;
    static ::java::lang::String* TOP_BORDER_COLOR_;
    static ::java::lang::String* DATA_FORMAT_;
    static ::java::lang::String* FILL_BACKGROUND_COLOR_;
    static ::java::lang::String* FILL_FOREGROUND_COLOR_;
    static ::java::lang::String* FILL_PATTERN_;
    static ::java::lang::String* FONT_;
    static ::java::lang::String* HIDDEN_;
    static ::java::lang::String* INDENTION_;
    static ::java::lang::String* LOCKED_;
    static ::java::lang::String* ROTATION_;
    static ::java::lang::String* VERTICAL_ALIGNMENT_;
    static ::java::lang::String* WRAP_TEXT_;
    static ::java::util::Set* shortValues_;
    static ::java::util::Set* booleanValues_;
    static ::java::util::Set* borderTypeValues_;
    static CellUtil_UnicodeMappingArray* unicodeMappings_;
protected:
    void ctor();

public:
    static ::poi::ss::usermodel::Row* getRow(int32_t rowIndex, ::poi::ss::usermodel::Sheet* sheet);
    static ::poi::ss::usermodel::Cell* getCell(::poi::ss::usermodel::Row* row, int32_t columnIndex);
    static ::poi::ss::usermodel::Cell* createCell(::poi::ss::usermodel::Row* row, int32_t column, ::java::lang::String* value, ::poi::ss::usermodel::CellStyle* style);
    static ::poi::ss::usermodel::Cell* createCell(::poi::ss::usermodel::Row* row, int32_t column, ::java::lang::String* value);
    static void setAlignment(::poi::ss::usermodel::Cell* cell, ::poi::ss::usermodel::HorizontalAlignment* align);
    static void setVerticalAlignment(::poi::ss::usermodel::Cell* cell, ::poi::ss::usermodel::VerticalAlignment* align);
    static void setFont(::poi::ss::usermodel::Cell* cell, ::poi::ss::usermodel::Font* font);
    static void setCellStyleProperties(::poi::ss::usermodel::Cell* cell, ::java::util::Map* properties);
    static void setCellStyleProperty(::poi::ss::usermodel::Cell* cell, ::java::lang::String* propertyName, ::java::lang::Object* propertyValue);

private:
    static ::java::util::Map* getFormatProperties(::poi::ss::usermodel::CellStyle* style);
    static void putAll(::java::util::Map* src, ::java::util::Map* dest);
    static void setFormatProperties(::poi::ss::usermodel::CellStyle* style, ::poi::ss::usermodel::Workbook* workbook, ::java::util::Map* properties);
    static int16_t getShort(::java::util::Map* properties, ::java::lang::String* name);
    static ::poi::ss::usermodel::BorderStyle* getBorderStyle(::java::util::Map* properties, ::java::lang::String* name);
    static ::poi::ss::usermodel::FillPatternType* getFillPattern(::java::util::Map* properties, ::java::lang::String* name);
    static ::poi::ss::usermodel::HorizontalAlignment* getHorizontalAlignment(::java::util::Map* properties, ::java::lang::String* name);
    static ::poi::ss::usermodel::VerticalAlignment* getVerticalAlignment(::java::util::Map* properties, ::java::lang::String* name);
    static bool getBoolean(::java::util::Map* properties, ::java::lang::String* name);
    static void put(::java::util::Map* properties, ::java::lang::String* name, ::java::lang::Object* value);

public:
    static ::poi::ss::usermodel::Cell* translateUnicodeValues(::poi::ss::usermodel::Cell* cell);

private:
    static CellUtil_UnicodeMapping* um(::java::lang::String* entityName, ::java::lang::String* resolvedValue);

    // Generated
    CellUtil();
protected:
    CellUtil(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static ::poi::util::POILogger*& log();

public:
    static ::java::lang::String*& ALIGNMENT();
    static ::java::lang::String*& BORDER_BOTTOM();
    static ::java::lang::String*& BORDER_LEFT();
    static ::java::lang::String*& BORDER_RIGHT();
    static ::java::lang::String*& BORDER_TOP();
    static ::java::lang::String*& BOTTOM_BORDER_COLOR();
    static ::java::lang::String*& LEFT_BORDER_COLOR();
    static ::java::lang::String*& RIGHT_BORDER_COLOR();
    static ::java::lang::String*& TOP_BORDER_COLOR();
    static ::java::lang::String*& DATA_FORMAT();
    static ::java::lang::String*& FILL_BACKGROUND_COLOR();
    static ::java::lang::String*& FILL_FOREGROUND_COLOR();
    static ::java::lang::String*& FILL_PATTERN();
    static ::java::lang::String*& FONT();
    static ::java::lang::String*& HIDDEN();
    static ::java::lang::String*& INDENTION();
    static ::java::lang::String*& LOCKED();
    static ::java::lang::String*& ROTATION();
    static ::java::lang::String*& VERTICAL_ALIGNMENT();
    static ::java::lang::String*& WRAP_TEXT();

private:
    static ::java::util::Set*& shortValues();
    static ::java::util::Set*& booleanValues();
    static ::java::util::Set*& borderTypeValues();
    static CellUtil_UnicodeMappingArray*& unicodeMappings();
    virtual ::java::lang::Class* getClass0();
    friend class CellUtil_UnicodeMapping;
};
