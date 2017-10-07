// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFWorkbook.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/util/regex/fwd-POI.hpp>
#include <org/apache/poi/hssf/model/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/usermodel/fwd-POI.hpp>
#include <org/apache/poi/poifs/crypt/fwd-POI.hpp>
#include <org/apache/poi/poifs/filesystem/fwd-POI.hpp>
#include <org/apache/poi/ss/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/udf/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/POIDocument.hpp>
#include <org/apache/poi/ss/usermodel/Workbook.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFCellStyle.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFDataFormat.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFFont.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFName.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace lang
    {
typedef ::SubArray< ::java::lang::Iterable, ObjectArray > IterableArray;
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
typedef ::SubArray< ::org::apache::poi::ss::usermodel::Sheet, ::java::lang::ObjectArray, ::java::lang::IterableArray > SheetArray;
                } // usermodel
            } // ss

            namespace hssf
            {
                namespace usermodel
                {
typedef ::SubArray< ::org::apache::poi::hssf::usermodel::HSSFSheet, ::java::lang::ObjectArray, ::org::apache::poi::ss::usermodel::SheetArray > HSSFSheetArray;
                } // usermodel
            } // hssf
        } // poi
    } // apache
} // org

struct default_init_tag;

class org::apache::poi::hssf::usermodel::HSSFWorkbook final
    : public ::org::apache::poi::POIDocument
    , public ::org::apache::poi::ss::usermodel::Workbook
{

public:
    typedef ::org::apache::poi::POIDocument super;

private:
    static ::java::util::regex::Pattern* COMMA_PATTERN_;
    static constexpr int32_t MAX_STYLES { int32_t(4030) };
    static constexpr int32_t DEBUG { int32_t(1) };
    static int32_t INITIAL_CAPACITY_;
    ::org::apache::poi::hssf::model::InternalWorkbook* workbook {  };

public: /* protected */
    ::java::util::List* _sheets {  };

private:
    ::java::util::ArrayList* names {  };
    ::java::util::Map* fonts {  };
    bool preserveNodes {  };
    HSSFDataFormat* formatter {  };
    ::org::apache::poi::ss::usermodel::Row_MissingCellPolicy* missingCellPolicy {  };
    static ::org::apache::poi::util::POILogger* log_;
    ::org::apache::poi::ss::formula::udf::UDFFinder* _udfFinder {  };

public:
    static HSSFWorkbook* create(::org::apache::poi::hssf::model::InternalWorkbook* book);
protected:
    void ctor();
    void ctor(::org::apache::poi::hssf::model::InternalWorkbook* book);
    void ctor(::org::apache::poi::poifs::filesystem::POIFSFileSystem* fs) /* throws(IOException) */;
    void ctor(::org::apache::poi::poifs::filesystem::NPOIFSFileSystem* fs) /* throws(IOException) */;
    void ctor(::org::apache::poi::poifs::filesystem::POIFSFileSystem* fs, bool preserveNodes) /* throws(IOException) */;

public:
    static ::java::lang::String* getWorkbookDirEntryName(::org::apache::poi::poifs::filesystem::DirectoryNode* directory);
protected:
    void ctor(::org::apache::poi::poifs::filesystem::DirectoryNode* directory, ::org::apache::poi::poifs::filesystem::POIFSFileSystem* fs, bool preserveNodes) /* throws(IOException) */;
    void ctor(::org::apache::poi::poifs::filesystem::DirectoryNode* directory, bool preserveNodes) /* throws(IOException) */;
    void ctor(::java::io::InputStream* s) /* throws(IOException) */;
    void ctor(::java::io::InputStream* s, bool preserveNodes) /* throws(IOException) */;

private:
    void setPropertiesFromWorkbook(::org::apache::poi::hssf::model::InternalWorkbook* book);
    void convertLabelRecords(::java::util::List* records, int32_t offset);

public:
    ::org::apache::poi::ss::usermodel::Row_MissingCellPolicy* getMissingCellPolicy() override;
    void setMissingCellPolicy(::org::apache::poi::ss::usermodel::Row_MissingCellPolicy* missingCellPolicy) override;
    void setSheetOrder(::java::lang::String* sheetname, int32_t pos) override;

private:
    void updateNamedRangesAfterSheetReorder(int32_t oldIndex, int32_t newIndex);
    void updateActiveSheetAfterSheetReorder(int32_t oldIndex, int32_t newIndex);
    void validateSheetIndex(int32_t index);

public:
    void setSelectedTab(int32_t index) override;
    void setSelectedTabs(::int32_tArray* indexes);
    void setSelectedTabs(::java::util::Collection* indexes);
    ::java::util::Collection* getSelectedTabs();
    void setActiveSheet(int32_t index) override;
    int32_t getActiveSheetIndex() override;
    void setFirstVisibleTab(int32_t index) override;
    int32_t getFirstVisibleTab() override;
    void setSheetName(int32_t sheetIx, ::java::lang::String* name) override;
    ::java::lang::String* getSheetName(int32_t sheetIndex) override;
    bool isHidden() override;
    void setHidden(bool hiddenFlag) override;
    bool isSheetHidden(int32_t sheetIx) override;
    bool isSheetVeryHidden(int32_t sheetIx) override;
    ::org::apache::poi::ss::usermodel::SheetVisibility* getSheetVisibility(int32_t sheetIx) override;
    void setSheetHidden(int32_t sheetIx, bool hidden) override;
    void setSheetHidden(int32_t sheetIx, int32_t hidden) override;
    void setSheetVisibility(int32_t sheetIx, ::org::apache::poi::ss::usermodel::SheetVisibility* visibility) override;
    int32_t getSheetIndex(::java::lang::String* name) override;
    int32_t getSheetIndex(::org::apache::poi::ss::usermodel::Sheet* sheet) override;
    ::org::apache::poi::ss::usermodel::Sheet* createSheet() override;
    ::org::apache::poi::ss::usermodel::Sheet* cloneSheet(int32_t sheetIndex) override;

private:
    ::java::lang::String* getUniqueSheetName(::java::lang::String* srcName);

public:
    ::org::apache::poi::ss::usermodel::Sheet* createSheet(::java::lang::String* sheetname) override;
    ::java::util::Iterator* sheetIterator() override;
    ::java::util::Iterator* iterator() override;
    int32_t getNumberOfSheets() override;

private:
    HSSFSheetArray* getSheets();

public:
    ::org::apache::poi::ss::usermodel::Sheet* getSheetAt(int32_t index) override;
    ::org::apache::poi::ss::usermodel::Sheet* getSheet(::java::lang::String* name) override;
    void removeSheetAt(int32_t index) override;
    void setBackupFlag(bool backupValue);
    bool getBackupFlag();

public: /* package */
    int32_t findExistingBuiltinNameRecordIdx(int32_t sheetIndex, int8_t builtinCode);
    HSSFName* createBuiltInName(int8_t builtinCode, int32_t sheetIndex);
    HSSFName* getBuiltInName(int8_t builtinCode, int32_t sheetIndex);

public:
    HSSFFont* createFont() override;
    HSSFFont* findFont(bool bold, int16_t color, int16_t fontHeight, ::java::lang::String* name, bool italic, bool strikeout, int16_t typeOffset, int8_t underline) override;
    int16_t getNumberOfFonts() override;
    HSSFFont* getFontAt(int16_t idx) override;

public: /* protected */
    void resetFontCache();

public:
    HSSFCellStyle* createCellStyle() override;
    int32_t getNumCellStyles() override;
    HSSFCellStyle* getCellStyleAt(int32_t idx) override;
    void close() /* throws(IOException) */ override;
    void write() /* throws(IOException) */ override;
    void write(::java::io::File* newFile) /* throws(IOException) */ override;
    void write(::java::io::OutputStream* stream) /* throws(IOException) */ override;

private:
    void write(::org::apache::poi::poifs::filesystem::NPOIFSFileSystem* fs) /* throws(IOException) */;

public:
    ::int8_tArray* getBytes();

public: /* protected */
    void encryptBytes(::int8_tArray* buf);

public: /* package */
    ::org::apache::poi::hssf::model::InternalWorkbook* getWorkbook();

public:
    int32_t getNumberOfNames() override;
    HSSFName* getName(::java::lang::String* name) override;
    ::java::util::List* getNames(::java::lang::String* name) override;
    HSSFName* getNameAt(int32_t nameIndex) override;
    ::java::util::List* getAllNames() override;
    ::org::apache::poi::hssf::record::NameRecord* getNameRecord(int32_t nameIndex);
    ::java::lang::String* getNameName(int32_t index);
    void setPrintArea(int32_t sheetIndex, ::java::lang::String* reference) override;
    void setPrintArea(int32_t sheetIndex, int32_t startColumn, int32_t endColumn, int32_t startRow, int32_t endRow) override;
    ::java::lang::String* getPrintArea(int32_t sheetIndex) override;
    void removePrintArea(int32_t sheetIndex) override;
    HSSFName* createName() override;
    int32_t getNameIndex(::java::lang::String* name) override;

public: /* package */
    int32_t getNameIndex(HSSFName* name);

public:
    void removeName(int32_t index) override;
    HSSFDataFormat* createDataFormat() override;
    void removeName(::java::lang::String* name) override;
    void removeName(::org::apache::poi::ss::usermodel::Name* name) override;
    HSSFPalette* getCustomPalette();
    void insertChartRecord();
    void dumpDrawingGroupRecords(bool fat);

public: /* package */
    void initDrawings();

public:
    int32_t addPicture(::int8_tArray* pictureData, int32_t format) override;
    ::java::util::List* getAllPictures() override;

private:
    void searchForPictures(::java::util::List* escherRecords, ::java::util::List* pictures);

public: /* protected */
    static ::java::util::Map* getOleMap();

public:
    int32_t addOlePackage(::org::apache::poi::poifs::filesystem::POIFSFileSystem* poiData, ::java::lang::String* label, ::java::lang::String* fileName, ::java::lang::String* command) /* throws(IOException) */;
    int32_t addOlePackage(::int8_tArray* oleData, ::java::lang::String* label, ::java::lang::String* fileName, ::java::lang::String* command) /* throws(IOException) */ override;
    int32_t linkExternalWorkbook(::java::lang::String* name, ::org::apache::poi::ss::usermodel::Workbook* workbook) override;
    bool isWriteProtected();
    void writeProtectWorkbook(::java::lang::String* password, ::java::lang::String* username);
    void unwriteProtectWorkbook();
    ::java::util::List* getAllEmbeddedObjects();

private:
    void getAllEmbeddedObjects(HSSFSheet* sheet, ::java::util::List* objects);
    void getAllEmbeddedObjects(HSSFShapeContainer* parent, ::java::util::List* objects);

public:
    ::org::apache::poi::ss::usermodel::CreationHelper* getCreationHelper() override;

public: /* package */
    ::org::apache::poi::ss::formula::udf::UDFFinder* getUDFFinder();

public:
    void addToolPack(::org::apache::poi::ss::formula::udf::UDFFinder* toopack) override;
    void setForceFormulaRecalculation(bool value) override;
    bool getForceFormulaRecalculation() override;
    bool changeExternalReference(::java::lang::String* oldUrl, ::java::lang::String* newUrl);
    ::org::apache::poi::poifs::filesystem::DirectoryNode* getRootDirectory();
    ::org::apache::poi::hssf::model::InternalWorkbook* getInternalWorkbook();
    ::org::apache::poi::ss::SpreadsheetVersion* getSpreadsheetVersion() override;
    ::org::apache::poi::poifs::crypt::EncryptionInfo* getEncryptionInfo() override;

private:
    void updateEncryptionInfo();

    // Generated

public:
    HSSFWorkbook();

private:
    HSSFWorkbook(::org::apache::poi::hssf::model::InternalWorkbook* book);

public:
    HSSFWorkbook(::org::apache::poi::poifs::filesystem::POIFSFileSystem* fs);
    HSSFWorkbook(::org::apache::poi::poifs::filesystem::NPOIFSFileSystem* fs);
    HSSFWorkbook(::org::apache::poi::poifs::filesystem::POIFSFileSystem* fs, bool preserveNodes);
    HSSFWorkbook(::org::apache::poi::poifs::filesystem::DirectoryNode* directory, ::org::apache::poi::poifs::filesystem::POIFSFileSystem* fs, bool preserveNodes);
    HSSFWorkbook(::org::apache::poi::poifs::filesystem::DirectoryNode* directory, bool preserveNodes);
    HSSFWorkbook(::java::io::InputStream* s);
    HSSFWorkbook(::java::io::InputStream* s, bool preserveNodes);
protected:
    HSSFWorkbook(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    void init();
    static ::java::util::regex::Pattern*& COMMA_PATTERN();

public:
    static int32_t& INITIAL_CAPACITY();

private:
    static ::org::apache::poi::util::POILogger*& log();
    virtual ::java::lang::Class* getClass0();
    friend class HSSFWorkbook_SheetIterator;
    friend class HSSFWorkbook_SheetRecordCollector;
};
