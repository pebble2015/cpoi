// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFOptimiser.java
#include <org/apache/poi/hssf/usermodel/HSSFOptimiser.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/util/HashSet.hpp>
#include <java/util/Iterator.hpp>
#include <org/apache/poi/hssf/model/InternalWorkbook.hpp>
#include <org/apache/poi/hssf/record/CellValueRecordInterface.hpp>
#include <org/apache/poi/hssf/record/ExtendedFormatRecord.hpp>
#include <org/apache/poi/hssf/record/FontRecord.hpp>
#include <org/apache/poi/hssf/record/Record.hpp>
#include <org/apache/poi/hssf/record/RecordBase.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>
#include <org/apache/poi/hssf/record/common/UnicodeString.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFCell.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFCellStyle.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFRichTextString.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFSheet.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFWorkbook.hpp>
#include <org/apache/poi/ss/usermodel/Cell.hpp>
#include <org/apache/poi/ss/usermodel/CellType.hpp>
#include <org/apache/poi/ss/usermodel/RichTextString.hpp>
#include <org/apache/poi/ss/usermodel/Row.hpp>
#include <org/apache/poi/ss/usermodel/Sheet.hpp>
#include <ObjectArray.hpp>
#include <SubArray.hpp>
#include <Array.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace poi
{
    namespace hssf
    {
        namespace record
        {
typedef ::SubArray< ::poi::hssf::record::RecordBase, ::java::lang::ObjectArray > RecordBaseArray;
typedef ::SubArray< ::poi::hssf::record::Record, RecordBaseArray > RecordArray;
typedef ::SubArray< ::poi::hssf::record::StandardRecord, RecordArray > StandardRecordArray;
typedef ::SubArray< ::poi::hssf::record::ExtendedFormatRecord, StandardRecordArray > ExtendedFormatRecordArray;
typedef ::SubArray< ::poi::hssf::record::FontRecord, StandardRecordArray > FontRecordArray;
        } // record
    } // hssf
} // poi

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

poi::hssf::usermodel::HSSFOptimiser::HSSFOptimiser(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::usermodel::HSSFOptimiser::HSSFOptimiser()
    : HSSFOptimiser(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void poi::hssf::usermodel::HSSFOptimiser::optimiseFonts(HSSFWorkbook* workbook)
{
    clinit();
    auto newPos = new ::int16_tArray(npc(npc(workbook)->getWorkbook())->getNumberOfFontRecords() + int32_t(1));
    auto zapRecords = new ::boolArray(npc(newPos)->length);
    for (auto i = int32_t(0); i < npc(newPos)->length; i++) {
        (*newPos)[i] = static_cast< int16_t >(i);
        (*zapRecords)[i] = false;
    }
    auto frecs = new ::poi::hssf::record::FontRecordArray(npc(newPos)->length);
    for (auto i = int32_t(0); i < npc(newPos)->length; i++) {
        if(i == 4)
            continue;

        frecs->set(i, npc(npc(workbook)->getWorkbook())->getFontRecordAt(i));
    }
    for (auto i = int32_t(5); i < npc(newPos)->length; i++) {
        auto earlierDuplicate = -int32_t(1);
        for (auto j = int32_t(0); j < i && earlierDuplicate == -int32_t(1); j++) {
            if(j == 4)
                continue;

            auto frCheck = npc(npc(workbook)->getWorkbook())->getFontRecordAt(j);
            if(npc(frCheck)->sameProperties((*frecs)[i])) {
                earlierDuplicate = j;
            }
        }
        if(earlierDuplicate != -int32_t(1)) {
            (*newPos)[i] = static_cast< int16_t >(earlierDuplicate);
            (*zapRecords)[i] = true;
        }
    }
    for (auto i = int32_t(5); i < npc(newPos)->length; i++) {
        auto preDeletePos = (*newPos)[i];
        auto newPosition = preDeletePos;
        for (auto j = int32_t(0); j < preDeletePos; j++) {
            if((*zapRecords)[j])
                newPosition--;

        }
        (*newPos)[i] = newPosition;
    }
    for (auto i = int32_t(5); i < npc(newPos)->length; i++) {
        if((*zapRecords)[i]) {
            npc(npc(workbook)->getWorkbook())->removeFontRecord((*frecs)[i]);
        }
    }
    npc(workbook)->resetFontCache();
    for (auto i = int32_t(0); i < npc(npc(workbook)->getWorkbook())->getNumExFormats(); i++) {
        auto xfr = npc(npc(workbook)->getWorkbook())->getExFormatAt(i);
        npc(xfr)->setFontIndex((*newPos)[npc(xfr)->getFontIndex()]);
    }
    auto doneUnicodeStrings = new ::java::util::HashSet();
    for (auto sheetNum = int32_t(0); sheetNum < npc(workbook)->getNumberOfSheets(); sheetNum++) {
        auto s = java_cast< HSSFSheet* >(npc(workbook)->getSheetAt(sheetNum));
        for (auto _i = npc(s)->iterator(); _i->hasNext(); ) {
            ::poi::ss::usermodel::Row* row = java_cast< ::poi::ss::usermodel::Row* >(_i->next());
            {
                for (auto _i = npc(row)->iterator(); _i->hasNext(); ) {
                    ::poi::ss::usermodel::Cell* cell = java_cast< ::poi::ss::usermodel::Cell* >(_i->next());
                    {
                        if(npc(cell)->getCellTypeEnum() == ::poi::ss::usermodel::CellType::STRING) {
                            auto rtr = java_cast< HSSFRichTextString* >(npc(cell)->getRichStringCellValue());
                            auto u = npc(rtr)->getRawUnicodeString();
                            if(!npc(doneUnicodeStrings)->contains(static_cast< ::java::lang::Object* >(u))) {
                                for (int16_t i = int32_t(5); i < npc(newPos)->length; i++) {
                                    if(i != (*newPos)[i]) {
                                        npc(u)->swapFontUse(i, (*newPos)[i]);
                                    }
                                }
                                npc(doneUnicodeStrings)->add(static_cast< ::java::lang::Object* >(u));
                            }
                        }
                    }
                }
            }
        }
    }
}

void poi::hssf::usermodel::HSSFOptimiser::optimiseCellStyles(HSSFWorkbook* workbook)
{
    clinit();
    auto newPos = new ::int16_tArray(npc(npc(workbook)->getWorkbook())->getNumExFormats());
    auto isUsed = new ::boolArray(npc(newPos)->length);
    auto zapRecords = new ::boolArray(npc(newPos)->length);
    for (auto i = int32_t(0); i < npc(newPos)->length; i++) {
        (*isUsed)[i] = false;
        (*newPos)[i] = static_cast< int16_t >(i);
        (*zapRecords)[i] = false;
    }
    auto xfrs = new ::poi::hssf::record::ExtendedFormatRecordArray(npc(newPos)->length);
    for (auto i = int32_t(0); i < npc(newPos)->length; i++) {
        xfrs->set(i, npc(npc(workbook)->getWorkbook())->getExFormatAt(i));
    }
    for (auto i = int32_t(21); i < npc(newPos)->length; i++) {
        auto earlierDuplicate = -int32_t(1);
        for (auto j = int32_t(0); j < i && earlierDuplicate == -int32_t(1); j++) {
            auto xfCheck = npc(npc(workbook)->getWorkbook())->getExFormatAt(j);
            if(npc(xfCheck)->equals(static_cast< ::java::lang::Object* >((*xfrs)[i]))) {
                earlierDuplicate = j;
            }
        }
        if(earlierDuplicate != -int32_t(1)) {
            (*newPos)[i] = static_cast< int16_t >(earlierDuplicate);
            (*zapRecords)[i] = true;
        }
        if(earlierDuplicate != -int32_t(1)) {
            (*isUsed)[earlierDuplicate] = true;
        }
    }
    for (auto sheetNum = int32_t(0); sheetNum < npc(workbook)->getNumberOfSheets(); sheetNum++) {
        auto s = java_cast< HSSFSheet* >(npc(workbook)->getSheetAt(sheetNum));
        for (auto _i = npc(s)->iterator(); _i->hasNext(); ) {
            ::poi::ss::usermodel::Row* row = java_cast< ::poi::ss::usermodel::Row* >(_i->next());
            {
                for (auto _i = npc(row)->iterator(); _i->hasNext(); ) {
                    ::poi::ss::usermodel::Cell* cellI = java_cast< ::poi::ss::usermodel::Cell* >(_i->next());
                    {
                        auto cell = java_cast< HSSFCell* >(cellI);
                        auto oldXf = npc(npc(cell)->getCellValueRecord())->getXFIndex();
                        (*isUsed)[oldXf] = true;
                    }
                }
            }
        }
    }
    for (auto i = int32_t(21); i < npc(isUsed)->length; i++) {
        if(!(*isUsed)[i]) {
            (*zapRecords)[i] = true;
            (*newPos)[i] = 0;
        }
    }
    for (auto i = int32_t(21); i < npc(newPos)->length; i++) {
        auto preDeletePos = (*newPos)[i];
        auto newPosition = preDeletePos;
        for (auto j = int32_t(0); j < preDeletePos; j++) {
            if((*zapRecords)[j])
                newPosition--;

        }
        (*newPos)[i] = newPosition;
    }
    auto max = npc(newPos)->length;
    auto removed = int32_t(0);
    for (auto i = int32_t(21); i < max; i++) {
        if((*zapRecords)[i + removed]) {
            npc(npc(workbook)->getWorkbook())->removeExFormatRecord(i);
            i--;
            max--;
            removed++;
        }
    }
    for (auto sheetNum = int32_t(0); sheetNum < npc(workbook)->getNumberOfSheets(); sheetNum++) {
        auto s = java_cast< HSSFSheet* >(npc(workbook)->getSheetAt(sheetNum));
        for (auto _i = npc(s)->iterator(); _i->hasNext(); ) {
            ::poi::ss::usermodel::Row* row = java_cast< ::poi::ss::usermodel::Row* >(_i->next());
            {
                for (auto _i = npc(row)->iterator(); _i->hasNext(); ) {
                    ::poi::ss::usermodel::Cell* cellI = java_cast< ::poi::ss::usermodel::Cell* >(_i->next());
                    {
                        auto cell = java_cast< HSSFCell* >(cellI);
                        auto oldXf = npc(npc(cell)->getCellValueRecord())->getXFIndex();
                        auto newStyle = npc(workbook)->getCellStyleAt(static_cast< int32_t >((*newPos)[oldXf]));
                        npc(cell)->setCellStyle(newStyle);
                    }
                }
            }
        }
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::usermodel::HSSFOptimiser::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.usermodel.HSSFOptimiser", 43);
    return c;
}

java::lang::Class* poi::hssf::usermodel::HSSFOptimiser::getClass0()
{
    return class_();
}

