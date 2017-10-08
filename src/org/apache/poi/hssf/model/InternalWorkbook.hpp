// Generated from /POI/java/org/apache/poi/hssf/model/InternalWorkbook.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/ddf/fwd-POI.hpp>
#include <org/apache/poi/hssf/model/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/common/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/udf/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
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
typedef ::SubArray< ::java::lang::CharSequence, ObjectArray > CharSequenceArray;
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::String, ObjectArray, ::java::io::SerializableArray, ComparableArray, CharSequenceArray > StringArray;
    } // lang
} // java

struct default_init_tag;

class poi::hssf::model::InternalWorkbook final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static constexpr int32_t MAX_SENSITIVE_SHEET_NAME_LEN { int32_t(31) };
    static ::java::lang::StringArray* WORKBOOK_DIR_ENTRY_NAMES_;
    static ::java::lang::String* OLD_WORKBOOK_DIR_ENTRY_NAME_;
    static ::poi::util::POILogger* LOG_;
    static constexpr int16_t CODEPAGE { int16_t(1200) };
    WorkbookRecordList* records {  };

public: /* protected */
    ::poi::hssf::record::SSTRecord* sst {  };

private:
    LinkTable* linkTable {  };
    ::java::util::List* boundsheets {  };
    ::java::util::List* formats {  };
    ::java::util::List* hyperlinks {  };
    int32_t numxfs {  };
    int32_t numfonts {  };
    int32_t maxformatid {  };
    bool uses1904datewindowing {  };
    DrawingManager2* drawingManager {  };
    ::java::util::List* escherBSERecords {  };
    ::poi::hssf::record::WindowOneRecord* windowOne {  };
    ::poi::hssf::record::FileSharingRecord* fileShare {  };
    ::poi::hssf::record::WriteAccessRecord* writeAccess {  };
    ::poi::hssf::record::WriteProtectRecord* writeProtect {  };
    ::java::util::Map* commentRecords {  };
protected:
    void ctor();

public:
    static InternalWorkbook* createWorkbook(::java::util::List* recs);
    static InternalWorkbook* createWorkbook();
    ::poi::hssf::record::NameRecord* getSpecificBuiltinRecord(int8_t name, int32_t sheetNumber);
    void removeBuiltinRecord(int8_t name, int32_t sheetIndex);
    int32_t getNumRecords();
    ::poi::hssf::record::FontRecord* getFontRecordAt(int32_t idx);
    int32_t getFontIndex(::poi::hssf::record::FontRecord* font);
    ::poi::hssf::record::FontRecord* createNewFont();
    void removeFontRecord(::poi::hssf::record::FontRecord* rec);
    int32_t getNumberOfFontRecords();
    void setSheetBof(int32_t sheetIndex, int32_t pos);

private:
    ::poi::hssf::record::BoundSheetRecord* getBoundSheetRec(int32_t sheetIndex);

public:
    ::poi::hssf::record::BackupRecord* getBackupRecord();
    void setSheetName(int32_t sheetnum, ::java::lang::String* sheetname);
    bool doesContainsSheetName(::java::lang::String* name, int32_t excludeSheetIdx);
    void setSheetOrder(::java::lang::String* sheetname, int32_t pos);
    ::java::lang::String* getSheetName(int32_t sheetIndex);
    bool isSheetHidden(int32_t sheetnum);
    bool isSheetVeryHidden(int32_t sheetnum);
    ::poi::ss::usermodel::SheetVisibility* getSheetVisibility(int32_t sheetnum);
    void setSheetHidden(int32_t sheetnum, bool hidden);
    void setSheetHidden(int32_t sheetnum, ::poi::ss::usermodel::SheetVisibility* visibility);
    int32_t getSheetIndex(::java::lang::String* name);

private:
    void checkSheets(int32_t sheetnum);

public:
    void removeSheet(int32_t sheetIndex);

private:
    void fixTabIdRecord();

public:
    int32_t getNumSheets();
    int32_t getNumExFormats();
    ::poi::hssf::record::ExtendedFormatRecord* getExFormatAt(int32_t index);
    void removeExFormatRecord(::poi::hssf::record::ExtendedFormatRecord* rec);
    void removeExFormatRecord(int32_t index);
    ::poi::hssf::record::ExtendedFormatRecord* createCellXF();
    ::poi::hssf::record::StyleRecord* getStyleRecord(int32_t xfIndex);
    ::poi::hssf::record::StyleRecord* createStyleRecord(int32_t xfIndex);
    int32_t addSSTString(::poi::hssf::record::common::UnicodeString* string);
    ::poi::hssf::record::common::UnicodeString* getSSTString(int32_t str);
    void insertSST();
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    void preSerialize();
    int32_t getSize();

private:
    static ::poi::hssf::record::BOFRecord* createBOF();
    static ::poi::hssf::record::MMSRecord* createMMS();
    static ::poi::hssf::record::WriteAccessRecord* createWriteAccess();
    static ::poi::hssf::record::CodepageRecord* createCodepage();
    static ::poi::hssf::record::DSFRecord* createDSF();
    static ::poi::hssf::record::TabIdRecord* createTabId();
    static ::poi::hssf::record::FnGroupCountRecord* createFnGroupCount();
    static ::poi::hssf::record::WindowProtectRecord* createWindowProtect();
    static ::poi::hssf::record::ProtectRecord* createProtect();
    static ::poi::hssf::record::PasswordRecord* createPassword();
    static ::poi::hssf::record::ProtectionRev4Record* createProtectionRev4();
    static ::poi::hssf::record::PasswordRev4Record* createPasswordRev4();
    static ::poi::hssf::record::WindowOneRecord* createWindowOne();
    static ::poi::hssf::record::BackupRecord* createBackup();
    static ::poi::hssf::record::HideObjRecord* createHideObj();
    static ::poi::hssf::record::DateWindow1904Record* createDateWindow1904();
    static ::poi::hssf::record::PrecisionRecord* createPrecision();
    static ::poi::hssf::record::RefreshAllRecord* createRefreshAll();
    static ::poi::hssf::record::BookBoolRecord* createBookBool();
    static ::poi::hssf::record::FontRecord* createFont();
    static ::poi::hssf::record::FormatRecord* createFormat(int32_t id);
    static ::poi::hssf::record::ExtendedFormatRecord* createExtendedFormat(int32_t id);
    static ::poi::hssf::record::ExtendedFormatRecord* createExtendedFormat(int32_t fontIndex, int32_t formatIndex, int32_t cellOptions, int32_t indentionOptions);
    static ::poi::hssf::record::ExtendedFormatRecord* createExtendedFormat();
    static ::poi::hssf::record::StyleRecord* createStyle(int32_t id);
    static ::poi::hssf::record::PaletteRecord* createPalette();
    static ::poi::hssf::record::UseSelFSRecord* createUseSelFS();
    static ::poi::hssf::record::BoundSheetRecord* createBoundSheet(int32_t id);
    static ::poi::hssf::record::CountryRecord* createCountry();
    static ::poi::hssf::record::ExtSSTRecord* createExtendedSST();
    LinkTable* getOrCreateLinkTable();

public:
    int32_t linkExternalWorkbook(::java::lang::String* name, ::poi::ss::usermodel::Workbook* externalWorkbook);
    ::java::lang::String* findSheetFirstNameFromExternSheet(int32_t externSheetIndex);
    ::java::lang::String* findSheetLastNameFromExternSheet(int32_t externSheetIndex);

private:
    ::java::lang::String* findSheetNameFromIndex(int32_t internalSheetIndex);

public:
    ::poi::ss::formula::EvaluationWorkbook_ExternalSheet* getExternalSheet(int32_t externSheetIndex);
    ::poi::ss::formula::EvaluationWorkbook_ExternalName* getExternalName(int32_t externSheetIndex, int32_t externNameIndex);
    int32_t getFirstSheetIndexFromExternSheetIndex(int32_t externSheetNumber);
    int32_t getLastSheetIndexFromExternSheetIndex(int32_t externSheetNumber);
    int16_t checkExternSheet(int32_t sheetNumber);
    int16_t checkExternSheet(int32_t firstSheetNumber, int32_t lastSheetNumber);
    int32_t getExternalSheetIndex(::java::lang::String* workbookName, ::java::lang::String* sheetName);
    int32_t getExternalSheetIndex(::java::lang::String* workbookName, ::java::lang::String* firstSheetName, ::java::lang::String* lastSheetName);
    int32_t getNumNames();
    ::poi::hssf::record::NameRecord* getNameRecord(int32_t index);
    ::poi::hssf::record::NameCommentRecord* getNameCommentRecord(::poi::hssf::record::NameRecord* nameRecord);
    ::poi::hssf::record::NameRecord* createName();
    ::poi::hssf::record::NameRecord* addName(::poi::hssf::record::NameRecord* name);
    ::poi::hssf::record::NameRecord* createBuiltInName(int8_t builtInName, int32_t sheetNumber);
    void removeName(int32_t nameIndex);
    void updateNameCommentRecordCache(::poi::hssf::record::NameCommentRecord* commentRecord);
    int16_t getFormat(::java::lang::String* format, bool createIfNotFound);
    ::java::util::List* getFormats();
    int32_t createFormat(::java::lang::String* formatString);
    ::poi::hssf::record::Record* findFirstRecordBySid(int16_t sid);
    int32_t findFirstRecordLocBySid(int16_t sid);
    ::poi::hssf::record::Record* findNextRecordBySid(int16_t sid, int32_t pos);
    ::java::util::List* getHyperlinks();
    ::java::util::List* getRecords();
    bool isUsing1904DateWindowing();
    ::poi::hssf::record::PaletteRecord* getCustomPalette();
    DrawingManager2* findDrawingGroup();

private:
    static DrawingManager2* findDrawingManager(::poi::hssf::record::DrawingGroupRecord* dg, ::java::util::List* escherBSERecords);

public:
    void createDrawingGroup();
    ::poi::hssf::record::WindowOneRecord* getWindowOne();
    ::poi::ddf::EscherBSERecord* getBSERecord(int32_t pictureIndex);
    int32_t addBSERecord(::poi::ddf::EscherBSERecord* e);
    DrawingManager2* getDrawingManager();
    ::poi::hssf::record::WriteProtectRecord* getWriteProtect();
    ::poi::hssf::record::WriteAccessRecord* getWriteAccess();
    ::poi::hssf::record::FileSharingRecord* getFileSharing();
    bool isWriteProtected();
    void writeProtectWorkbook(::java::lang::String* password, ::java::lang::String* username);
    void unwriteProtectWorkbook();
    ::java::lang::String* resolveNameXText(int32_t refIndex, int32_t definedNameIndex);
    ::poi::ss::formula::ptg::NameXPtg* getNameXPtg(::java::lang::String* name, int32_t sheetRefIndex, ::poi::ss::formula::udf::UDFFinder* udf);
    ::poi::ss::formula::ptg::NameXPtg* getNameXPtg(::java::lang::String* name, ::poi::ss::formula::udf::UDFFinder* udf);
    void cloneDrawings(InternalSheet* sheet);
    ::poi::hssf::record::NameRecord* cloneFilter(int32_t filterDbNameIndex, int32_t newSheetIndex);
    void updateNamesAfterCellShift(::poi::ss::formula::FormulaShifter* shifter);
    ::poi::hssf::record::RecalcIdRecord* getRecalcId();
    bool changeExternalReference(::java::lang::String* oldUrl, ::java::lang::String* newUrl);
    WorkbookRecordList* getWorkbookRecordList();

    // Generated

private:
    InternalWorkbook();
protected:
    InternalWorkbook(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    static ::java::lang::StringArray*& WORKBOOK_DIR_ENTRY_NAMES();
    static ::java::lang::String*& OLD_WORKBOOK_DIR_ENTRY_NAME();

private:
    static ::poi::util::POILogger*& LOG();
    virtual ::java::lang::Class* getClass0();
};
