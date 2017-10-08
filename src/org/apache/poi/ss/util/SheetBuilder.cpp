// Generated from /POI/java/org/apache/poi/ss/util/SheetBuilder.java
#include <org/apache/poi/ss/util/SheetBuilder.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Cloneable.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Number.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/Calendar.hpp>
#include <java/util/Date.hpp>
#include <org/apache/poi/ss/usermodel/Cell.hpp>
#include <org/apache/poi/ss/usermodel/Row.hpp>
#include <org/apache/poi/ss/usermodel/Sheet.hpp>
#include <org/apache/poi/ss/usermodel/Workbook.hpp>
#include <SubArray.hpp>
#include <ObjectArray.hpp>

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

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(nullptr);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::ss::util::SheetBuilder::SheetBuilder(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::util::SheetBuilder::SheetBuilder(::poi::ss::usermodel::Workbook* workbook, ::java::lang::ObjectArrayArray* cells) 
    : SheetBuilder(*static_cast< ::default_init_tag* >(0))
{
    ctor(workbook,cells);
}

void poi::ss::util::SheetBuilder::init()
{
    shouldCreateEmptyCells = false;
    sheetName = nullptr;
}

void poi::ss::util::SheetBuilder::ctor(::poi::ss::usermodel::Workbook* workbook, ::java::lang::ObjectArrayArray* cells)
{
    super::ctor();
    init();
    this->workbook = workbook;
    this->cells = npc(cells)->clone();
}

bool poi::ss::util::SheetBuilder::getCreateEmptyCells()
{
    return shouldCreateEmptyCells;
}

poi::ss::util::SheetBuilder* poi::ss::util::SheetBuilder::setCreateEmptyCells(bool shouldCreateEmptyCells)
{
    this->shouldCreateEmptyCells = shouldCreateEmptyCells;
    return this;
}

poi::ss::util::SheetBuilder* poi::ss::util::SheetBuilder::setSheetName(::java::lang::String* sheetName)
{
    this->sheetName = sheetName;
    return this;
}

poi::ss::usermodel::Sheet* poi::ss::util::SheetBuilder::build()
{
    auto sheet = (sheetName == nullptr) ? npc(workbook)->createSheet() : npc(workbook)->createSheet(sheetName);
    ::poi::ss::usermodel::Row* currentRow = nullptr;
    ::poi::ss::usermodel::Cell* currentCell = nullptr;
    for (auto rowIndex = int32_t(0); rowIndex < npc(cells)->length; ++rowIndex) {
        auto rowArray_ = (*cells)[rowIndex];
        currentRow = npc(sheet)->createRow(rowIndex);
        for (auto cellIndex = int32_t(0); cellIndex < npc(rowArray_)->length; ++cellIndex) {
            auto cellValue = (*rowArray_)[cellIndex];
            if(cellValue != nullptr || shouldCreateEmptyCells) {
                currentCell = npc(currentRow)->createCell(cellIndex);
                setCellValue(currentCell, cellValue);
            }
        }
    }
    return sheet;
}

void poi::ss::util::SheetBuilder::setCellValue(::poi::ss::usermodel::Cell* cell, ::java::lang::Object* value)
{
    if(value == nullptr || cell == nullptr) {
        return;
    } else if(dynamic_cast< ::java::lang::Number* >(value) != nullptr) {
        auto doubleValue = npc((java_cast< ::java::lang::Number* >(value)))->doubleValue();
        npc(cell)->setCellValue(doubleValue);
    } else if(dynamic_cast< ::java::util::Date* >(value) != nullptr) {
        npc(cell)->setCellValue(java_cast< ::java::util::Date* >(value));
    } else if(dynamic_cast< ::java::util::Calendar* >(value) != nullptr) {
        npc(cell)->setCellValue(java_cast< ::java::util::Calendar* >(value));
    } else if(isFormulaDefinition(value)) {
        npc(cell)->setCellFormula(getFormula(value));
    } else {
        npc(cell)->setCellValue(npc(value)->toString());
    }
}

bool poi::ss::util::SheetBuilder::isFormulaDefinition(::java::lang::Object* obj)
{
    if(dynamic_cast< ::java::lang::String* >(obj) != nullptr) {
        auto str = java_cast< ::java::lang::String* >(obj);
        if(npc(str)->length() < 2) {
            return false;
        } else {
            return npc((java_cast< ::java::lang::String* >(obj)))->charAt(int32_t(0)) == u'=';
        }
    } else {
        return false;
    }
}

java::lang::String* poi::ss::util::SheetBuilder::getFormula(::java::lang::Object* obj)
{
    return npc((java_cast< ::java::lang::String* >(obj)))->substring(1);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::util::SheetBuilder::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.util.SheetBuilder", 35);
    return c;
}

java::lang::Class* poi::ss::util::SheetBuilder::getClass0()
{
    return class_();
}

