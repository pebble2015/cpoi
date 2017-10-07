// Generated from /POI/java/org/apache/poi/ss/util/SheetBuilder.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <org/apache/poi/ss/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace io
    {
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
    } // io

    namespace lang
    {
typedef ::SubArray< ::java::lang::Cloneable, ObjectArray > CloneableArray;
typedef ::SubArray< ::java::lang::ObjectArray, CloneableArray, ::java::io::SerializableArray > ObjectArrayArray;
    } // lang
} // java

struct default_init_tag;

class org::apache::poi::ss::util::SheetBuilder
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    ::org::apache::poi::ss::usermodel::Workbook* workbook {  };
    ::java::lang::ObjectArrayArray* cells {  };
    bool shouldCreateEmptyCells {  };
    ::java::lang::String* sheetName {  };
protected:
    void ctor(::org::apache::poi::ss::usermodel::Workbook* workbook, ::java::lang::ObjectArrayArray* cells);

public:
    virtual bool getCreateEmptyCells();
    virtual SheetBuilder* setCreateEmptyCells(bool shouldCreateEmptyCells);
    virtual SheetBuilder* setSheetName(::java::lang::String* sheetName);
    virtual ::org::apache::poi::ss::usermodel::Sheet* build();

private:
    void setCellValue(::org::apache::poi::ss::usermodel::Cell* cell, ::java::lang::Object* value);
    bool isFormulaDefinition(::java::lang::Object* obj);
    ::java::lang::String* getFormula(::java::lang::Object* obj);

    // Generated

public:
    SheetBuilder(::org::apache::poi::ss::usermodel::Workbook* workbook, ::java::lang::ObjectArrayArray* cells);
protected:
    SheetBuilder(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    void init();
    virtual ::java::lang::Class* getClass0();
};
