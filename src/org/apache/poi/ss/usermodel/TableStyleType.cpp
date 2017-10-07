// Generated from /POI/java/org/apache/poi/ss/usermodel/TableStyleType.java
#include <org/apache/poi/ss/usermodel/TableStyleType.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/Enum.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <org/apache/poi/ss/usermodel/Cell.hpp>
#include <org/apache/poi/ss/usermodel/Sheet.hpp>
#include <org/apache/poi/ss/usermodel/Table.hpp>
#include <org/apache/poi/ss/usermodel/TableStyleType_13.hpp>
#include <org/apache/poi/ss/usermodel/TableStyleType_1.hpp>
#include <org/apache/poi/ss/usermodel/TableStyleType_2.hpp>
#include <org/apache/poi/ss/usermodel/TableStyleType_3.hpp>
#include <org/apache/poi/ss/usermodel/TableStyleType_4.hpp>
#include <org/apache/poi/ss/usermodel/TableStyleType_5.hpp>
#include <org/apache/poi/ss/usermodel/TableStyleType_6.hpp>
#include <org/apache/poi/ss/usermodel/TableStyleType_7.hpp>
#include <org/apache/poi/ss/usermodel/TableStyleType_8.hpp>
#include <org/apache/poi/ss/usermodel/TableStyleType_9.hpp>
#include <org/apache/poi/ss/usermodel/TableStyleType_10.hpp>
#include <org/apache/poi/ss/usermodel/TableStyleType_11.hpp>
#include <org/apache/poi/ss/usermodel/TableStyleType_12.hpp>
#include <org/apache/poi/ss/util/CellRangeAddressBase.hpp>
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
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::Enum, ObjectArray, ComparableArray, ::java::io::SerializableArray > EnumArray;
    } // lang
} // java

namespace org
{
    namespace apache
    {
        namespace poi
        {
            namespace ss
            {
                namespace usermodel
                {
typedef ::SubArray< ::org::apache::poi::ss::usermodel::TableStyleType, ::java::lang::EnumArray > TableStyleTypeArray;
                } // usermodel
            } // ss
        } // poi
    } // apache
} // org

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::ss::usermodel::TableStyleType::TableStyleType(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::usermodel::TableStyleType::TableStyleType(::java::lang::String* name, int ordinal)
    : TableStyleType(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal);
}

org::apache::poi::ss::usermodel::TableStyleType* org::apache::poi::ss::usermodel::TableStyleType::wholeTable = new ::org::apache::poi::ss::usermodel::TableStyleType_1(u"wholeTable"_j, 0);
org::apache::poi::ss::usermodel::TableStyleType* org::apache::poi::ss::usermodel::TableStyleType::pageFieldLabels = new ::org::apache::poi::ss::usermodel::TableStyleType(u"pageFieldLabels"_j, 1);
org::apache::poi::ss::usermodel::TableStyleType* org::apache::poi::ss::usermodel::TableStyleType::pageFieldValues = new ::org::apache::poi::ss::usermodel::TableStyleType(u"pageFieldValues"_j, 2);
org::apache::poi::ss::usermodel::TableStyleType* org::apache::poi::ss::usermodel::TableStyleType::firstColumnStripe = new ::org::apache::poi::ss::usermodel::TableStyleType_2(u"firstColumnStripe"_j, 3);
org::apache::poi::ss::usermodel::TableStyleType* org::apache::poi::ss::usermodel::TableStyleType::secondColumnStripe = new ::org::apache::poi::ss::usermodel::TableStyleType_3(u"secondColumnStripe"_j, 4);
org::apache::poi::ss::usermodel::TableStyleType* org::apache::poi::ss::usermodel::TableStyleType::firstRowStripe = new ::org::apache::poi::ss::usermodel::TableStyleType_4(u"firstRowStripe"_j, 5);
org::apache::poi::ss::usermodel::TableStyleType* org::apache::poi::ss::usermodel::TableStyleType::secondRowStripe = new ::org::apache::poi::ss::usermodel::TableStyleType_5(u"secondRowStripe"_j, 6);
org::apache::poi::ss::usermodel::TableStyleType* org::apache::poi::ss::usermodel::TableStyleType::lastColumn = new ::org::apache::poi::ss::usermodel::TableStyleType_6(u"lastColumn"_j, 7);
org::apache::poi::ss::usermodel::TableStyleType* org::apache::poi::ss::usermodel::TableStyleType::firstColumn = new ::org::apache::poi::ss::usermodel::TableStyleType_7(u"firstColumn"_j, 8);
org::apache::poi::ss::usermodel::TableStyleType* org::apache::poi::ss::usermodel::TableStyleType::headerRow = new ::org::apache::poi::ss::usermodel::TableStyleType_8(u"headerRow"_j, 9);
org::apache::poi::ss::usermodel::TableStyleType* org::apache::poi::ss::usermodel::TableStyleType::totalRow = new ::org::apache::poi::ss::usermodel::TableStyleType_9(u"totalRow"_j, 10);
org::apache::poi::ss::usermodel::TableStyleType* org::apache::poi::ss::usermodel::TableStyleType::firstHeaderCell = new ::org::apache::poi::ss::usermodel::TableStyleType_10(u"firstHeaderCell"_j, 11);
org::apache::poi::ss::usermodel::TableStyleType* org::apache::poi::ss::usermodel::TableStyleType::lastHeaderCell = new ::org::apache::poi::ss::usermodel::TableStyleType_11(u"lastHeaderCell"_j, 12);
org::apache::poi::ss::usermodel::TableStyleType* org::apache::poi::ss::usermodel::TableStyleType::firstTotalCell = new ::org::apache::poi::ss::usermodel::TableStyleType_12(u"firstTotalCell"_j, 13);
org::apache::poi::ss::usermodel::TableStyleType* org::apache::poi::ss::usermodel::TableStyleType::lastTotalCell = new ::org::apache::poi::ss::usermodel::TableStyleType_13(u"lastTotalCell"_j, 14);
org::apache::poi::ss::usermodel::TableStyleType* org::apache::poi::ss::usermodel::TableStyleType::firstSubtotalColumn = new ::org::apache::poi::ss::usermodel::TableStyleType(u"firstSubtotalColumn"_j, 15);
org::apache::poi::ss::usermodel::TableStyleType* org::apache::poi::ss::usermodel::TableStyleType::secondSubtotalColumn = new ::org::apache::poi::ss::usermodel::TableStyleType(u"secondSubtotalColumn"_j, 16);
org::apache::poi::ss::usermodel::TableStyleType* org::apache::poi::ss::usermodel::TableStyleType::thirdSubtotalColumn = new ::org::apache::poi::ss::usermodel::TableStyleType(u"thirdSubtotalColumn"_j, 17);
org::apache::poi::ss::usermodel::TableStyleType* org::apache::poi::ss::usermodel::TableStyleType::blankRow = new ::org::apache::poi::ss::usermodel::TableStyleType(u"blankRow"_j, 18);
org::apache::poi::ss::usermodel::TableStyleType* org::apache::poi::ss::usermodel::TableStyleType::firstSubtotalRow = new ::org::apache::poi::ss::usermodel::TableStyleType(u"firstSubtotalRow"_j, 19);
org::apache::poi::ss::usermodel::TableStyleType* org::apache::poi::ss::usermodel::TableStyleType::secondSubtotalRow = new ::org::apache::poi::ss::usermodel::TableStyleType(u"secondSubtotalRow"_j, 20);
org::apache::poi::ss::usermodel::TableStyleType* org::apache::poi::ss::usermodel::TableStyleType::thirdSubtotalRow = new ::org::apache::poi::ss::usermodel::TableStyleType(u"thirdSubtotalRow"_j, 21);
org::apache::poi::ss::usermodel::TableStyleType* org::apache::poi::ss::usermodel::TableStyleType::firstColumnSubheading = new ::org::apache::poi::ss::usermodel::TableStyleType(u"firstColumnSubheading"_j, 22);
org::apache::poi::ss::usermodel::TableStyleType* org::apache::poi::ss::usermodel::TableStyleType::secondColumnSubheading = new ::org::apache::poi::ss::usermodel::TableStyleType(u"secondColumnSubheading"_j, 23);
org::apache::poi::ss::usermodel::TableStyleType* org::apache::poi::ss::usermodel::TableStyleType::thirdColumnSubheading = new ::org::apache::poi::ss::usermodel::TableStyleType(u"thirdColumnSubheading"_j, 24);
org::apache::poi::ss::usermodel::TableStyleType* org::apache::poi::ss::usermodel::TableStyleType::firstRowSubheading = new ::org::apache::poi::ss::usermodel::TableStyleType(u"firstRowSubheading"_j, 25);
org::apache::poi::ss::usermodel::TableStyleType* org::apache::poi::ss::usermodel::TableStyleType::secondRowSubheading = new ::org::apache::poi::ss::usermodel::TableStyleType(u"secondRowSubheading"_j, 26);
org::apache::poi::ss::usermodel::TableStyleType* org::apache::poi::ss::usermodel::TableStyleType::thirdRowSubheading = new ::org::apache::poi::ss::usermodel::TableStyleType(u"thirdRowSubheading"_j, 27);
org::apache::poi::ss::util::CellRangeAddressBase* org::apache::poi::ss::usermodel::TableStyleType::appliesTo(Table* table, Cell* cell)
{
    if(table == nullptr || cell == nullptr)
        return nullptr;

    if(!npc(npc(npc(cell)->getSheet())->getSheetName())->equals(static_cast< ::java::lang::Object* >(npc(table)->getSheetName())))
        return nullptr;

    if(!npc(table)->contains(cell))
        return nullptr;

    auto const range = getRange(table, cell);
    if(range != nullptr && npc(range)->isInRange(npc(cell)->getRowIndex(), npc(cell)->getColumnIndex()))
        return range;

    return nullptr;
}

org::apache::poi::ss::util::CellRangeAddressBase* org::apache::poi::ss::usermodel::TableStyleType::getRange(Table* table, Cell* cell)
{
    return nullptr;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::usermodel::TableStyleType::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.usermodel.TableStyleType", 42);
    return c;
}

org::apache::poi::ss::usermodel::TableStyleType* org::apache::poi::ss::usermodel::TableStyleType::valueOf(::java::lang::String* a0)
{
    if(blankRow->toString()->equals(a0))
        return blankRow;
    if(firstColumn->toString()->equals(a0))
        return firstColumn;
    if(firstColumnStripe->toString()->equals(a0))
        return firstColumnStripe;
    if(firstColumnSubheading->toString()->equals(a0))
        return firstColumnSubheading;
    if(firstHeaderCell->toString()->equals(a0))
        return firstHeaderCell;
    if(firstRowStripe->toString()->equals(a0))
        return firstRowStripe;
    if(firstRowSubheading->toString()->equals(a0))
        return firstRowSubheading;
    if(firstSubtotalColumn->toString()->equals(a0))
        return firstSubtotalColumn;
    if(firstSubtotalRow->toString()->equals(a0))
        return firstSubtotalRow;
    if(firstTotalCell->toString()->equals(a0))
        return firstTotalCell;
    if(headerRow->toString()->equals(a0))
        return headerRow;
    if(lastColumn->toString()->equals(a0))
        return lastColumn;
    if(lastHeaderCell->toString()->equals(a0))
        return lastHeaderCell;
    if(lastTotalCell->toString()->equals(a0))
        return lastTotalCell;
    if(pageFieldLabels->toString()->equals(a0))
        return pageFieldLabels;
    if(pageFieldValues->toString()->equals(a0))
        return pageFieldValues;
    if(secondColumnStripe->toString()->equals(a0))
        return secondColumnStripe;
    if(secondColumnSubheading->toString()->equals(a0))
        return secondColumnSubheading;
    if(secondRowStripe->toString()->equals(a0))
        return secondRowStripe;
    if(secondRowSubheading->toString()->equals(a0))
        return secondRowSubheading;
    if(secondSubtotalColumn->toString()->equals(a0))
        return secondSubtotalColumn;
    if(secondSubtotalRow->toString()->equals(a0))
        return secondSubtotalRow;
    if(thirdColumnSubheading->toString()->equals(a0))
        return thirdColumnSubheading;
    if(thirdRowSubheading->toString()->equals(a0))
        return thirdRowSubheading;
    if(thirdSubtotalColumn->toString()->equals(a0))
        return thirdSubtotalColumn;
    if(thirdSubtotalRow->toString()->equals(a0))
        return thirdSubtotalRow;
    if(totalRow->toString()->equals(a0))
        return totalRow;
    if(wholeTable->toString()->equals(a0))
        return wholeTable;
    throw new ::java::lang::IllegalArgumentException(a0);
}

org::apache::poi::ss::usermodel::TableStyleTypeArray* org::apache::poi::ss::usermodel::TableStyleType::values()
{
    return new org::apache::poi::ss::usermodel::TableStyleTypeArray({
        blankRow,
        firstColumn,
        firstColumnStripe,
        firstColumnSubheading,
        firstHeaderCell,
        firstRowStripe,
        firstRowSubheading,
        firstSubtotalColumn,
        firstSubtotalRow,
        firstTotalCell,
        headerRow,
        lastColumn,
        lastHeaderCell,
        lastTotalCell,
        pageFieldLabels,
        pageFieldValues,
        secondColumnStripe,
        secondColumnSubheading,
        secondRowStripe,
        secondRowSubheading,
        secondSubtotalColumn,
        secondSubtotalRow,
        thirdColumnSubheading,
        thirdRowSubheading,
        thirdSubtotalColumn,
        thirdSubtotalRow,
        totalRow,
        wholeTable,
    });
}

java::lang::Class* org::apache::poi::ss::usermodel::TableStyleType::getClass0()
{
    return class_();
}

