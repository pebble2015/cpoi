// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFWorkbook.java
#include <org/apache/poi/hssf/usermodel/HSSFWorkbook.hpp>

#include <java/io/ByteArrayInputStream.hpp>
#include <java/io/ByteArrayOutputStream.hpp>
#include <java/io/FileNotFoundException.hpp>
#include <java/io/OutputStream.hpp>
#include <java/io/OutputStreamWriter.hpp>
#include <java/io/PrintStream.hpp>
#include <java/io/PrintWriter.hpp>
#include <java/io/Serializable.hpp>
#include <java/io/Writer.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/Exception.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/IllegalStateException.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/Iterable.hpp>
#include <java/lang/Math.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/NumberFormatException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/Short.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/System.hpp>
#include <java/lang/Throwable.hpp>
#include <java/nio/charset/Charset.hpp>
#include <java/security/GeneralSecurityException.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/Arrays.hpp>
#include <java/util/Collection.hpp>
#include <java/util/Collections.hpp>
#include <java/util/HashMap.hpp>
#include <java/util/HashSet.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/List.hpp>
#include <java/util/Map_Entry.hpp>
#include <java/util/Map.hpp>
#include <java/util/Set.hpp>
#include <java/util/regex/Pattern.hpp>
#include <org/apache/commons/codec/digest/DigestUtils.hpp>
#include <org/apache/poi/EncryptedDocumentException.hpp>
#include <org/apache/poi/ddf/EscherBSERecord.hpp>
#include <org/apache/poi/ddf/EscherBitmapBlip.hpp>
#include <org/apache/poi/ddf/EscherBlipRecord.hpp>
#include <org/apache/poi/ddf/EscherMetafileBlip.hpp>
#include <org/apache/poi/ddf/EscherRecord.hpp>
#include <org/apache/poi/hpsf/ClassID.hpp>
#include <org/apache/poi/hpsf/DocumentSummaryInformation.hpp>
#include <org/apache/poi/hpsf/SummaryInformation.hpp>
#include <org/apache/poi/hssf/OldExcelFormatException.hpp>
#include <org/apache/poi/hssf/model/DrawingManager2.hpp>
#include <org/apache/poi/hssf/model/HSSFFormulaParser.hpp>
#include <org/apache/poi/hssf/model/InternalSheet_UnsupportedBOFType.hpp>
#include <org/apache/poi/hssf/model/InternalSheet.hpp>
#include <org/apache/poi/hssf/model/InternalWorkbook.hpp>
#include <org/apache/poi/hssf/model/RecordStream.hpp>
#include <org/apache/poi/hssf/model/WorkbookRecordList.hpp>
#include <org/apache/poi/hssf/record/AbstractEscherHolderRecord.hpp>
#include <org/apache/poi/hssf/record/BackupRecord.hpp>
#include <org/apache/poi/hssf/record/BoundSheetRecord.hpp>
#include <org/apache/poi/hssf/record/DrawingGroupRecord.hpp>
#include <org/apache/poi/hssf/record/ExtendedFormatRecord.hpp>
#include <org/apache/poi/hssf/record/FilePassRecord.hpp>
#include <org/apache/poi/hssf/record/FontRecord.hpp>
#include <org/apache/poi/hssf/record/LabelRecord.hpp>
#include <org/apache/poi/hssf/record/LabelSSTRecord.hpp>
#include <org/apache/poi/hssf/record/NameRecord.hpp>
#include <org/apache/poi/hssf/record/RecalcIdRecord.hpp>
#include <org/apache/poi/hssf/record/Record.hpp>
#include <org/apache/poi/hssf/record/RecordFactory.hpp>
#include <org/apache/poi/hssf/record/SSTRecord.hpp>
#include <org/apache/poi/hssf/record/UnknownRecord.hpp>
#include <org/apache/poi/hssf/record/WindowOneRecord.hpp>
#include <org/apache/poi/hssf/record/aggregates/RecordAggregate_RecordVisitor.hpp>
#include <org/apache/poi/hssf/record/common/UnicodeString.hpp>
#include <org/apache/poi/hssf/record/crypto/Biff8DecryptingStream.hpp>
#include <org/apache/poi/hssf/record/crypto/Biff8EncryptionKey.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFCellStyle.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFCreationHelper.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFDataFormat.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFFont.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFName.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFObjectData.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFPalette.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFPatriarch.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFPictureData.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFShape.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFShapeContainer.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFSheet.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFWorkbook_SheetIterator.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFWorkbook_SheetRecordCollector.hpp>
#include <org/apache/poi/hssf/util/CellReference.hpp>
#include <org/apache/poi/poifs/crypt/ChunkedCipherOutputStream.hpp>
#include <org/apache/poi/poifs/crypt/Decryptor.hpp>
#include <org/apache/poi/poifs/crypt/EncryptionInfo.hpp>
#include <org/apache/poi/poifs/crypt/EncryptionMode.hpp>
#include <org/apache/poi/poifs/crypt/EncryptionVerifier.hpp>
#include <org/apache/poi/poifs/crypt/Encryptor.hpp>
#include <org/apache/poi/poifs/filesystem/DirectoryEntry.hpp>
#include <org/apache/poi/poifs/filesystem/DirectoryNode.hpp>
#include <org/apache/poi/poifs/filesystem/DocumentInputStream.hpp>
#include <org/apache/poi/poifs/filesystem/DocumentNode.hpp>
#include <org/apache/poi/poifs/filesystem/Entry.hpp>
#include <org/apache/poi/poifs/filesystem/EntryUtils.hpp>
#include <org/apache/poi/poifs/filesystem/FilteringDirectoryNode.hpp>
#include <org/apache/poi/poifs/filesystem/NPOIFSDocument.hpp>
#include <org/apache/poi/poifs/filesystem/NPOIFSFileSystem.hpp>
#include <org/apache/poi/poifs/filesystem/Ole10Native.hpp>
#include <org/apache/poi/poifs/filesystem/POIFSFileSystem.hpp>
#include <org/apache/poi/ss/SpreadsheetVersion.hpp>
#include <org/apache/poi/ss/formula/FormulaShifter.hpp>
#include <org/apache/poi/ss/formula/FormulaType.hpp>
#include <org/apache/poi/ss/formula/SheetNameFormatter.hpp>
#include <org/apache/poi/ss/formula/udf/AggregatingUDFFinder.hpp>
#include <org/apache/poi/ss/formula/udf/IndexedUDFFinder.hpp>
#include <org/apache/poi/ss/formula/udf/UDFFinder.hpp>
#include <org/apache/poi/ss/usermodel/Drawing.hpp>
#include <org/apache/poi/ss/usermodel/Name.hpp>
#include <org/apache/poi/ss/usermodel/Row_MissingCellPolicy.hpp>
#include <org/apache/poi/ss/usermodel/Sheet.hpp>
#include <org/apache/poi/ss/usermodel/SheetVisibility.hpp>
#include <org/apache/poi/ss/usermodel/Workbook.hpp>
#include <org/apache/poi/util/Configurator.hpp>
#include <org/apache/poi/util/HexDump.hpp>
#include <org/apache/poi/util/LittleEndian.hpp>
#include <org/apache/poi/util/LittleEndianByteArrayInputStream.hpp>
#include <org/apache/poi/util/LittleEndianByteArrayOutputStream.hpp>
#include <org/apache/poi/util/POILogFactory.hpp>
#include <org/apache/poi/util/POILogger.hpp>
#include <Array.hpp>
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
typedef ::SubArray< ::java::lang::CharSequence, ObjectArray > CharSequenceArray;
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::Iterable, ObjectArray > IterableArray;
typedef ::SubArray< ::java::lang::String, ObjectArray, ::java::io::SerializableArray, ComparableArray, CharSequenceArray > StringArray;
    } // lang
} // java

namespace poi
{
    namespace hssf
    {
        namespace record
        {
            namespace aggregates
            {
typedef ::SubArray< ::poi::hssf::record::aggregates::RecordAggregate_RecordVisitor, ::java::lang::ObjectArray > RecordAggregate_RecordVisitorArray;
            } // aggregates
        } // record
    } // hssf

    namespace ss
    {
        namespace usermodel
        {
typedef ::SubArray< ::poi::ss::usermodel::Sheet, ::java::lang::ObjectArray, ::java::lang::IterableArray > SheetArray;
        } // usermodel
    } // ss

    namespace hssf
    {
        namespace usermodel
        {
typedef ::SubArray< ::poi::hssf::usermodel::HSSFSheet, ::java::lang::ObjectArray, ::poi::ss::usermodel::SheetArray > HSSFSheetArray;
typedef ::SubArray< ::poi::hssf::usermodel::HSSFWorkbook_SheetRecordCollector, ::java::lang::ObjectArray, ::poi::hssf::record::aggregates::RecordAggregate_RecordVisitorArray > HSSFWorkbook_SheetRecordCollectorArray;
        } // usermodel
    } // hssf

    namespace ss
    {
        namespace formula
        {
            namespace udf
            {
typedef ::SubArray< ::poi::ss::formula::udf::UDFFinder, ::java::lang::ObjectArray > UDFFinderArray;
            } // udf
        } // formula
    } // ss
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

namespace
{
    template<typename F>
    struct finally_
    {
        finally_(F f) : f(f), moved(false) { }
        finally_(finally_ &&x) : f(x.f), moved(false) { x.moved = true; }
        ~finally_() { if(!moved) f(); }
    private:
        finally_(const finally_&); finally_& operator=(const finally_&);
        F f;
        bool moved;
    };

    template<typename F> finally_<F> finally(F f) { return finally_<F>(f); }
}
poi::hssf::usermodel::HSSFWorkbook::HSSFWorkbook(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::usermodel::HSSFWorkbook::HSSFWorkbook() 
    : HSSFWorkbook(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::hssf::usermodel::HSSFWorkbook::HSSFWorkbook(::poi::hssf::model::InternalWorkbook* book) 
    : HSSFWorkbook(*static_cast< ::default_init_tag* >(0))
{
    ctor(book);
}

poi::hssf::usermodel::HSSFWorkbook::HSSFWorkbook(::poi::poifs::filesystem::POIFSFileSystem* fs)  /* throws(IOException) */
    : HSSFWorkbook(*static_cast< ::default_init_tag* >(0))
{
    ctor(fs);
}

poi::hssf::usermodel::HSSFWorkbook::HSSFWorkbook(::poi::poifs::filesystem::NPOIFSFileSystem* fs)  /* throws(IOException) */
    : HSSFWorkbook(*static_cast< ::default_init_tag* >(0))
{
    ctor(fs);
}

poi::hssf::usermodel::HSSFWorkbook::HSSFWorkbook(::poi::poifs::filesystem::POIFSFileSystem* fs, bool preserveNodes)  /* throws(IOException) */
    : HSSFWorkbook(*static_cast< ::default_init_tag* >(0))
{
    ctor(fs,preserveNodes);
}

poi::hssf::usermodel::HSSFWorkbook::HSSFWorkbook(::poi::poifs::filesystem::DirectoryNode* directory, ::poi::poifs::filesystem::POIFSFileSystem* fs, bool preserveNodes)  /* throws(IOException) */
    : HSSFWorkbook(*static_cast< ::default_init_tag* >(0))
{
    ctor(directory,fs,preserveNodes);
}

poi::hssf::usermodel::HSSFWorkbook::HSSFWorkbook(::poi::poifs::filesystem::DirectoryNode* directory, bool preserveNodes)  /* throws(IOException) */
    : HSSFWorkbook(*static_cast< ::default_init_tag* >(0))
{
    ctor(directory,preserveNodes);
}

poi::hssf::usermodel::HSSFWorkbook::HSSFWorkbook(::java::io::InputStream* s)  /* throws(IOException) */
    : HSSFWorkbook(*static_cast< ::default_init_tag* >(0))
{
    ctor(s);
}

poi::hssf::usermodel::HSSFWorkbook::HSSFWorkbook(::java::io::InputStream* s, bool preserveNodes)  /* throws(IOException) */
    : HSSFWorkbook(*static_cast< ::default_init_tag* >(0))
{
    ctor(s,preserveNodes);
}

void poi::hssf::usermodel::HSSFWorkbook::init()
{
    missingCellPolicy = ::poi::ss::usermodel::Row_MissingCellPolicy::RETURN_NULL_AND_BLANK;
    _udfFinder = new ::poi::ss::formula::udf::IndexedUDFFinder(new ::poi::ss::formula::udf::UDFFinderArray({::poi::ss::formula::udf::AggregatingUDFFinder::DEFAULT()}));
}

java::util::regex::Pattern*& poi::hssf::usermodel::HSSFWorkbook::COMMA_PATTERN()
{
    clinit();
    return COMMA_PATTERN_;
}
java::util::regex::Pattern* poi::hssf::usermodel::HSSFWorkbook::COMMA_PATTERN_;

constexpr int32_t poi::hssf::usermodel::HSSFWorkbook::MAX_STYLES;

constexpr int32_t poi::hssf::usermodel::HSSFWorkbook::DEBUG;

int32_t& poi::hssf::usermodel::HSSFWorkbook::INITIAL_CAPACITY()
{
    clinit();
    return INITIAL_CAPACITY_;
}
int32_t poi::hssf::usermodel::HSSFWorkbook::INITIAL_CAPACITY_;

poi::util::POILogger*& poi::hssf::usermodel::HSSFWorkbook::log()
{
    clinit();
    return log_;
}
poi::util::POILogger* poi::hssf::usermodel::HSSFWorkbook::log_;

poi::hssf::usermodel::HSSFWorkbook* poi::hssf::usermodel::HSSFWorkbook::create(::poi::hssf::model::InternalWorkbook* book)
{
    clinit();
    return new HSSFWorkbook(book);
}

void poi::hssf::usermodel::HSSFWorkbook::ctor()
{
    ctor(::poi::hssf::model::InternalWorkbook::createWorkbook());
}

void poi::hssf::usermodel::HSSFWorkbook::ctor(::poi::hssf::model::InternalWorkbook* book)
{
    super::ctor(static_cast< ::poi::poifs::filesystem::DirectoryNode* >(nullptr));
    init();
    workbook = book;
    _sheets = new ::java::util::ArrayList(INITIAL_CAPACITY_);
    names = new ::java::util::ArrayList(INITIAL_CAPACITY_);
}

void poi::hssf::usermodel::HSSFWorkbook::ctor(::poi::poifs::filesystem::POIFSFileSystem* fs) /* throws(IOException) */
{
    ctor(fs, true);
}

void poi::hssf::usermodel::HSSFWorkbook::ctor(::poi::poifs::filesystem::NPOIFSFileSystem* fs) /* throws(IOException) */
{
    ctor(npc(fs)->getRoot(), true);
}

void poi::hssf::usermodel::HSSFWorkbook::ctor(::poi::poifs::filesystem::POIFSFileSystem* fs, bool preserveNodes) /* throws(IOException) */
{
    ctor(npc(fs)->getRoot(), fs, preserveNodes);
}

java::lang::String* poi::hssf::usermodel::HSSFWorkbook::getWorkbookDirEntryName(::poi::poifs::filesystem::DirectoryNode* directory)
{
    clinit();
    for(auto wbName : *npc(::poi::hssf::model::InternalWorkbook::WORKBOOK_DIR_ENTRY_NAMES())) {
        try {
            npc(directory)->getEntry(wbName);
            return wbName;
        } catch (::java::io::FileNotFoundException* e) {
        }
    }
    try {
        npc(directory)->getEntry(::poi::poifs::crypt::Decryptor::DEFAULT_POIFS_ENTRY());
        throw new ::poi::EncryptedDocumentException(::java::lang::StringBuilder().append(u"The supplied spreadsheet seems to be an Encrypted .xlsx file. "_j)->append(u"It must be decrypted before use by XSSF, it cannot be used by HSSF"_j)->toString());
    } catch (::java::io::FileNotFoundException* e) {
    }
    try {
        npc(directory)->getEntry(::poi::hssf::model::InternalWorkbook::OLD_WORKBOOK_DIR_ENTRY_NAME());
        throw new ::poi::hssf::OldExcelFormatException(::java::lang::StringBuilder().append(u"The supplied spreadsheet seems to be Excel 5.0/7.0 (BIFF5) format. "_j)->append(u"POI only supports BIFF8 format (from Excel versions 97/2000/XP/2003)"_j)->toString());
    } catch (::java::io::FileNotFoundException* e) {
    }
    throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"The supplied POIFSFileSystem does not contain a BIFF8 'Workbook' entry. "_j)->append(u"Is it really an excel file? Had: "_j)
        ->append(static_cast< ::java::lang::Object* >(npc(directory)->getEntryNames()))->toString());
}

void poi::hssf::usermodel::HSSFWorkbook::ctor(::poi::poifs::filesystem::DirectoryNode* directory, ::poi::poifs::filesystem::POIFSFileSystem* fs, bool preserveNodes) /* throws(IOException) */
{
    ctor(directory, preserveNodes);
}

void poi::hssf::usermodel::HSSFWorkbook::ctor(::poi::poifs::filesystem::DirectoryNode* directory, bool preserveNodes) /* throws(IOException) */
{
    super::ctor(directory);
    init();
    auto workbookName = getWorkbookDirEntryName(directory);
    this->preserveNodes = preserveNodes;
    if(!preserveNodes) {
        clearDirectory();
    }
    _sheets = new ::java::util::ArrayList(INITIAL_CAPACITY_);
    names = new ::java::util::ArrayList(INITIAL_CAPACITY_);
    ::java::io::InputStream* stream = npc(directory)->createDocumentInputStream(workbookName);
    auto records = ::poi::hssf::record::RecordFactory::createRecords(stream);
    workbook = ::poi::hssf::model::InternalWorkbook::createWorkbook(records);
    setPropertiesFromWorkbook(workbook);
    auto recOffset = npc(workbook)->getNumRecords();
    convertLabelRecords(records, recOffset);
    auto rs = new ::poi::hssf::model::RecordStream(records, recOffset);
    while (npc(rs)->hasNext()) {
        try {
            auto sheet = ::poi::hssf::model::InternalSheet::createSheet(rs);
            npc(_sheets)->add(static_cast< ::java::lang::Object* >(new HSSFSheet(this, sheet)));
        } catch (::poi::hssf::model::InternalSheet_UnsupportedBOFType* eb) {
            npc(log_)->log(::poi::util::POILogger::WARN, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(::java::lang::StringBuilder().append(u"Unsupported BOF found of type "_j)->append(npc(eb)->getType())->toString())}));
        }
    }
    for (auto i = int32_t(0); i < npc(workbook)->getNumNames(); ++i) {
        auto nameRecord = npc(workbook)->getNameRecord(i);
        auto name = new HSSFName(this, nameRecord, npc(workbook)->getNameCommentRecord(nameRecord));
        npc(names)->add(static_cast< ::java::lang::Object* >(name));
    }
}

void poi::hssf::usermodel::HSSFWorkbook::ctor(::java::io::InputStream* s) /* throws(IOException) */
{
    ctor(s, true);
}

void poi::hssf::usermodel::HSSFWorkbook::ctor(::java::io::InputStream* s, bool preserveNodes) /* throws(IOException) */
{
    ctor((new ::poi::poifs::filesystem::NPOIFSFileSystem(s))->getRoot(), preserveNodes);
}

void poi::hssf::usermodel::HSSFWorkbook::setPropertiesFromWorkbook(::poi::hssf::model::InternalWorkbook* book)
{
    this->workbook = book;
}

void poi::hssf::usermodel::HSSFWorkbook::convertLabelRecords(::java::util::List* records, int32_t offset)
{
    if(npc(log_)->check(::poi::util::POILogger::DEBUG)) {
        npc(log_)->log(::poi::util::POILogger::DEBUG, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(u"convertLabelRecords called"_j)}));
    }
    for (auto k = offset; k < npc(records)->size(); k++) {
        auto rec = java_cast< ::poi::hssf::record::Record* >(npc(records)->get(k));
        if(npc(rec)->getSid() == ::poi::hssf::record::LabelRecord::sid) {
            auto oldrec = java_cast< ::poi::hssf::record::LabelRecord* >(rec);
            npc(records)->remove(k);
            auto newrec = new ::poi::hssf::record::LabelSSTRecord();
            auto stringid = npc(workbook)->addSSTString(new ::poi::hssf::record::common::UnicodeString(npc(oldrec)->getValue()));
            npc(newrec)->setRow(npc(oldrec)->getRow());
            npc(newrec)->setColumn(npc(oldrec)->getColumn());
            npc(newrec)->setXFIndex(npc(oldrec)->getXFIndex());
            npc(newrec)->setSSTIndex(stringid);
            npc(records)->add(k, newrec);
        }
    }
    if(npc(log_)->check(::poi::util::POILogger::DEBUG)) {
        npc(log_)->log(::poi::util::POILogger::DEBUG, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(u"convertLabelRecords exit"_j)}));
    }
}

poi::ss::usermodel::Row_MissingCellPolicy* poi::hssf::usermodel::HSSFWorkbook::getMissingCellPolicy()
{
    return missingCellPolicy;
}

void poi::hssf::usermodel::HSSFWorkbook::setMissingCellPolicy(::poi::ss::usermodel::Row_MissingCellPolicy* missingCellPolicy)
{
    this->missingCellPolicy = missingCellPolicy;
}

void poi::hssf::usermodel::HSSFWorkbook::setSheetOrder(::java::lang::String* sheetname, int32_t pos)
{
    auto oldSheetIndex = getSheetIndex(sheetname);
    npc(_sheets)->add(pos, java_cast< HSSFSheet* >(npc(_sheets)->remove(oldSheetIndex)));
    npc(workbook)->setSheetOrder(sheetname, pos);
    auto shifter = ::poi::ss::formula::FormulaShifter::createForSheetShift(oldSheetIndex, pos);
    for (auto _i = npc(_sheets)->iterator(); _i->hasNext(); ) {
        HSSFSheet* sheet = java_cast< HSSFSheet* >(_i->next());
        {
            npc(npc(sheet)->getSheet())->updateFormulasAfterCellShift(shifter, -int32_t(1));
        }
    }
    npc(workbook)->updateNamesAfterCellShift(shifter);
    updateNamedRangesAfterSheetReorder(oldSheetIndex, pos);
    updateActiveSheetAfterSheetReorder(oldSheetIndex, pos);
}

void poi::hssf::usermodel::HSSFWorkbook::updateNamedRangesAfterSheetReorder(int32_t oldIndex, int32_t newIndex)
{
    for (auto _i = npc(names)->iterator(); _i->hasNext(); ) {
        HSSFName* name = java_cast< HSSFName* >(_i->next());
        {
            auto const i = npc(name)->getSheetIndex();
            if(i != -int32_t(1)) {
                if(i == oldIndex) {
                    npc(name)->setSheetIndex(newIndex);
                } else if(newIndex <= i && i < oldIndex) {
                    npc(name)->setSheetIndex(i + int32_t(1));
                } else if(oldIndex < i && i <= newIndex) {
                    npc(name)->setSheetIndex(i - int32_t(1));
                }
            }
        }
    }
}

void poi::hssf::usermodel::HSSFWorkbook::updateActiveSheetAfterSheetReorder(int32_t oldIndex, int32_t newIndex)
{
    auto active = getActiveSheetIndex();
    if(active == oldIndex) {
        setActiveSheet(newIndex);
    } else if((active < oldIndex && active < newIndex) || (active > oldIndex && active > newIndex)) {
    } else if(newIndex > oldIndex) {
        setActiveSheet(active - int32_t(1));
    } else {
        setActiveSheet(active + int32_t(1));
    }
}

void poi::hssf::usermodel::HSSFWorkbook::validateSheetIndex(int32_t index)
{
    auto lastSheetIx = npc(_sheets)->size() - int32_t(1);
    if(index < 0 || index > lastSheetIx) {
        auto range = ::java::lang::StringBuilder().append(u"(0.."_j)->append(lastSheetIx)
            ->append(u")"_j)->toString();
        if(lastSheetIx == -int32_t(1)) {
            range = u"(no sheets)"_j;
        }
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Sheet index ("_j)->append(index)
            ->append(u") is out of range "_j)
            ->append(range)->toString());
    }
}

void poi::hssf::usermodel::HSSFWorkbook::setSelectedTab(int32_t index)
{
    validateSheetIndex(index);
    auto nSheets = npc(_sheets)->size();
    for (auto i = int32_t(0); i < nSheets; i++) {
        npc(java_cast< HSSFSheet* >(getSheetAt(i)))->setSelected(i == index);
    }
    npc(npc(workbook)->getWindowOne())->setNumSelectedTabs(static_cast< int16_t >(int32_t(1)));
}

void poi::hssf::usermodel::HSSFWorkbook::setSelectedTabs(::int32_tArray* indexes)
{
    ::java::util::Collection* list = new ::java::util::ArrayList(npc(indexes)->length);
    for(auto index : *npc(indexes)) {
        npc(list)->add(::java::lang::Integer::valueOf(index));
    }
    setSelectedTabs(list);
}

void poi::hssf::usermodel::HSSFWorkbook::setSelectedTabs(::java::util::Collection* indexes)
{
    for (auto _i = npc(indexes)->iterator(); _i->hasNext(); ) {
        int32_t index = npc(java_cast< ::java::lang::Integer* >(_i->next()))->intValue();
        {
            validateSheetIndex(index);
        }
    }
    ::java::util::Set* set = new ::java::util::HashSet(static_cast< ::java::util::Collection* >(indexes));
    auto nSheets = npc(_sheets)->size();
    for (auto i = int32_t(0); i < nSheets; i++) {
        auto bSelect = npc(set)->contains(::java::lang::Integer::valueOf(i));
        npc(java_cast< HSSFSheet* >(getSheetAt(i)))->setSelected(bSelect);
    }
    auto nSelected = static_cast< int16_t >(npc(set)->size());
    npc(npc(workbook)->getWindowOne())->setNumSelectedTabs(nSelected);
}

java::util::Collection* poi::hssf::usermodel::HSSFWorkbook::getSelectedTabs()
{
    ::java::util::Collection* indexes = new ::java::util::ArrayList();
    auto nSheets = npc(_sheets)->size();
    for (auto i = int32_t(0); i < nSheets; i++) {
        auto sheet = java_cast< HSSFSheet* >(getSheetAt(i));
        if(npc(sheet)->isSelected()) {
            npc(indexes)->add(::java::lang::Integer::valueOf(i));
        }
    }
    return ::java::util::Collections::unmodifiableCollection(indexes);
}

void poi::hssf::usermodel::HSSFWorkbook::setActiveSheet(int32_t index)
{
    validateSheetIndex(index);
    auto nSheets = npc(_sheets)->size();
    for (auto i = int32_t(0); i < nSheets; i++) {
        npc(java_cast< HSSFSheet* >(getSheetAt(i)))->setActive(i == index);
    }
    npc(npc(workbook)->getWindowOne())->setActiveSheetIndex(index);
}

int32_t poi::hssf::usermodel::HSSFWorkbook::getActiveSheetIndex()
{
    return npc(npc(workbook)->getWindowOne())->getActiveSheetIndex();
}

void poi::hssf::usermodel::HSSFWorkbook::setFirstVisibleTab(int32_t index)
{
    npc(npc(workbook)->getWindowOne())->setFirstVisibleTab(index);
}

int32_t poi::hssf::usermodel::HSSFWorkbook::getFirstVisibleTab()
{
    return npc(npc(workbook)->getWindowOne())->getFirstVisibleTab();
}

void poi::hssf::usermodel::HSSFWorkbook::setSheetName(int32_t sheetIx, ::java::lang::String* name)
{
    if(name == nullptr) {
        throw new ::java::lang::IllegalArgumentException(u"sheetName must not be null"_j);
    }
    if(npc(workbook)->doesContainsSheetName(name, sheetIx)) {
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"The workbook already contains a sheet named '"_j)->append(name)
            ->append(u"'"_j)->toString());
    }
    validateSheetIndex(sheetIx);
    npc(workbook)->setSheetName(sheetIx, name);
}

java::lang::String* poi::hssf::usermodel::HSSFWorkbook::getSheetName(int32_t sheetIndex)
{
    validateSheetIndex(sheetIndex);
    return npc(workbook)->getSheetName(sheetIndex);
}

bool poi::hssf::usermodel::HSSFWorkbook::isHidden()
{
    return npc(npc(workbook)->getWindowOne())->getHidden();
}

void poi::hssf::usermodel::HSSFWorkbook::setHidden(bool hiddenFlag)
{
    npc(npc(workbook)->getWindowOne())->setHidden(hiddenFlag);
}

bool poi::hssf::usermodel::HSSFWorkbook::isSheetHidden(int32_t sheetIx)
{
    validateSheetIndex(sheetIx);
    return npc(workbook)->isSheetHidden(sheetIx);
}

bool poi::hssf::usermodel::HSSFWorkbook::isSheetVeryHidden(int32_t sheetIx)
{
    validateSheetIndex(sheetIx);
    return npc(workbook)->isSheetVeryHidden(sheetIx);
}

poi::ss::usermodel::SheetVisibility* poi::hssf::usermodel::HSSFWorkbook::getSheetVisibility(int32_t sheetIx)
{
    return npc(workbook)->getSheetVisibility(sheetIx);
}

void poi::hssf::usermodel::HSSFWorkbook::setSheetHidden(int32_t sheetIx, bool hidden)
{
    setSheetVisibility(sheetIx, hidden ? ::poi::ss::usermodel::SheetVisibility::HIDDEN : ::poi::ss::usermodel::SheetVisibility::VISIBLE);
}

void poi::hssf::usermodel::HSSFWorkbook::setSheetHidden(int32_t sheetIx, int32_t hidden)
{
    switch (hidden) {
    case ::poi::ss::usermodel::Workbook::SHEET_STATE_VISIBLE:
        setSheetVisibility(sheetIx, ::poi::ss::usermodel::SheetVisibility::VISIBLE);
        break;
    case ::poi::ss::usermodel::Workbook::SHEET_STATE_HIDDEN:
        setSheetVisibility(sheetIx, ::poi::ss::usermodel::SheetVisibility::HIDDEN);
        break;
    case ::poi::ss::usermodel::Workbook::SHEET_STATE_VERY_HIDDEN:
        setSheetVisibility(sheetIx, ::poi::ss::usermodel::SheetVisibility::VERY_HIDDEN);
        break;
    default:
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Invalid sheet state : "_j)->append(hidden)
            ->append(u"\n"_j)
            ->append(u"Sheet state must beone of the Workbook.SHEET_STATE_* constants"_j)->toString());
    }

}

void poi::hssf::usermodel::HSSFWorkbook::setSheetVisibility(int32_t sheetIx, ::poi::ss::usermodel::SheetVisibility* visibility)
{
    validateSheetIndex(sheetIx);
    npc(workbook)->setSheetHidden(sheetIx, visibility);
}

int32_t poi::hssf::usermodel::HSSFWorkbook::getSheetIndex(::java::lang::String* name)
{
    return npc(workbook)->getSheetIndex(name);
}

int32_t poi::hssf::usermodel::HSSFWorkbook::getSheetIndex(::poi::ss::usermodel::Sheet* sheet)
{
    return npc(_sheets)->indexOf(sheet);
}

poi::ss::usermodel::Sheet* poi::hssf::usermodel::HSSFWorkbook::createSheet()
{
    auto sheet = new HSSFSheet(this);
    npc(_sheets)->add(static_cast< ::java::lang::Object* >(sheet));
    npc(workbook)->setSheetName(npc(_sheets)->size() - int32_t(1), ::java::lang::StringBuilder().append(u"Sheet"_j)->append((npc(_sheets)->size() - int32_t(1)))->toString());
    auto isOnlySheet = npc(_sheets)->size() == 1;
    npc(sheet)->setSelected(isOnlySheet);
    npc(sheet)->setActive(isOnlySheet);
    return sheet;
}

poi::ss::usermodel::Sheet* poi::hssf::usermodel::HSSFWorkbook::cloneSheet(int32_t sheetIndex)
{
    validateSheetIndex(sheetIndex);
    auto srcSheet = java_cast< HSSFSheet* >(npc(_sheets)->get(sheetIndex));
    auto srcName = npc(workbook)->getSheetName(sheetIndex);
    auto clonedSheet = npc(srcSheet)->cloneSheet(this);
    npc(clonedSheet)->setSelected(false);
    npc(clonedSheet)->setActive(false);
    auto name = getUniqueSheetName(srcName);
    auto newSheetIndex = npc(_sheets)->size();
    npc(_sheets)->add(static_cast< ::java::lang::Object* >(clonedSheet));
    npc(workbook)->setSheetName(newSheetIndex, name);
    auto filterDbNameIndex = findExistingBuiltinNameRecordIdx(sheetIndex, ::poi::hssf::record::NameRecord::BUILTIN_FILTER_DB);
    if(filterDbNameIndex != -int32_t(1)) {
        auto newNameRecord = npc(workbook)->cloneFilter(filterDbNameIndex, newSheetIndex);
        auto newName = new HSSFName(this, newNameRecord);
        npc(names)->add(static_cast< ::java::lang::Object* >(newName));
    }
    return clonedSheet;
}

java::lang::String* poi::hssf::usermodel::HSSFWorkbook::getUniqueSheetName(::java::lang::String* srcName)
{
    auto uniqueIndex = int32_t(2);
    auto baseName = srcName;
    auto bracketPos = npc(srcName)->lastIndexOf(static_cast< int32_t >(u'('));
    if(bracketPos > 0 && npc(srcName)->endsWith(u")"_j)) {
        auto suffix = npc(srcName)->substring(bracketPos + int32_t(1), npc(srcName)->length() - npc(u")"_j)->length());
        try {
            uniqueIndex = ::java::lang::Integer::parseInt(npc(suffix)->trim());
            uniqueIndex++;
            baseName = npc(npc(srcName)->substring(0, bracketPos))->trim();
        } catch (::java::lang::NumberFormatException* e) {
        }
    }
    while (true) {
        auto index = ::java::lang::Integer::toString(uniqueIndex++);
        ::java::lang::String* name;
        if(npc(baseName)->length() + npc(index)->length() + int32_t(2) < 31) {
            name = ::java::lang::StringBuilder().append(baseName)->append(u" ("_j)
                ->append(index)
                ->append(u")"_j)->toString();
        } else {
            name = ::java::lang::StringBuilder().append(npc(baseName)->substring(0, int32_t(31) - npc(index)->length() - int32_t(2)))->append(u"("_j)
                ->append(index)
                ->append(u")"_j)->toString();
        }
        if(npc(workbook)->getSheetIndex(name) == -int32_t(1)) {
            return name;
        }
    }
}

poi::ss::usermodel::Sheet* poi::hssf::usermodel::HSSFWorkbook::createSheet(::java::lang::String* sheetname)
{
    if(sheetname == nullptr) {
        throw new ::java::lang::IllegalArgumentException(u"sheetName must not be null"_j);
    }
    if(npc(workbook)->doesContainsSheetName(sheetname, npc(_sheets)->size())) {
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"The workbook already contains a sheet named '"_j)->append(sheetname)
            ->append(u"'"_j)->toString());
    }
    auto sheet = new HSSFSheet(this);
    npc(workbook)->setSheetName(npc(_sheets)->size(), sheetname);
    npc(_sheets)->add(static_cast< ::java::lang::Object* >(sheet));
    auto isOnlySheet = npc(_sheets)->size() == 1;
    npc(sheet)->setSelected(isOnlySheet);
    npc(sheet)->setActive(isOnlySheet);
    return sheet;
}

java::util::Iterator* poi::hssf::usermodel::HSSFWorkbook::sheetIterator()
{
    return new HSSFWorkbook_SheetIterator(this);
}

java::util::Iterator* poi::hssf::usermodel::HSSFWorkbook::iterator()
{
    return sheetIterator();
}

int32_t poi::hssf::usermodel::HSSFWorkbook::getNumberOfSheets()
{
    return npc(_sheets)->size();
}

poi::hssf::usermodel::HSSFSheetArray* poi::hssf::usermodel::HSSFWorkbook::getSheets()
{
    auto result = new HSSFSheetArray(npc(_sheets)->size());
    npc(_sheets)->toArray_(static_cast< ::java::lang::ObjectArray* >(result));
    return result;
}

poi::ss::usermodel::Sheet* poi::hssf::usermodel::HSSFWorkbook::getSheetAt(int32_t index)
{
    validateSheetIndex(index);
    return java_cast< HSSFSheet* >(npc(_sheets)->get(index));
}

poi::ss::usermodel::Sheet* poi::hssf::usermodel::HSSFWorkbook::getSheet(::java::lang::String* name)
{
    HSSFSheet* retval = nullptr;
    for (auto k = int32_t(0); k < npc(_sheets)->size(); k++) {
        auto sheetname = npc(workbook)->getSheetName(k);
        if(npc(sheetname)->equalsIgnoreCase(name)) {
            retval = java_cast< HSSFSheet* >(npc(_sheets)->get(k));
        }
    }
    return retval;
}

void poi::hssf::usermodel::HSSFWorkbook::removeSheetAt(int32_t index)
{
    validateSheetIndex(index);
    auto wasSelected = npc(java_cast< HSSFSheet* >(getSheetAt(index)))->isSelected();
    npc(_sheets)->remove(index);
    npc(workbook)->removeSheet(index);
    auto nSheets = npc(_sheets)->size();
    if(nSheets < 1) {
        return;
    }
    auto newSheetIndex = index;
    if(newSheetIndex >= nSheets) {
        newSheetIndex = nSheets - int32_t(1);
    }
    if(wasSelected) {
        auto someOtherSheetIsStillSelected = false;
        for (auto i = int32_t(0); i < nSheets; i++) {
            if(npc(java_cast< HSSFSheet* >(getSheetAt(i)))->isSelected()) {
                someOtherSheetIsStillSelected = true;
                break;
            }
        }
        if(!someOtherSheetIsStillSelected) {
            setSelectedTab(newSheetIndex);
        }
    }
    auto active = getActiveSheetIndex();
    if(active == index) {
        setActiveSheet(newSheetIndex);
    } else if(active > index) {
        setActiveSheet(active - int32_t(1));
    }
}

void poi::hssf::usermodel::HSSFWorkbook::setBackupFlag(bool backupValue)
{
    auto backupRecord = npc(workbook)->getBackupRecord();
    npc(backupRecord)->setBackup(backupValue ? static_cast< int16_t >(int32_t(1)) : static_cast< int16_t >(int32_t(0)));
}

bool poi::hssf::usermodel::HSSFWorkbook::getBackupFlag()
{
    auto backupRecord = npc(workbook)->getBackupRecord();
    return npc(backupRecord)->getBackup() != 0;
}

int32_t poi::hssf::usermodel::HSSFWorkbook::findExistingBuiltinNameRecordIdx(int32_t sheetIndex, int8_t builtinCode)
{
    for (auto defNameIndex = int32_t(0); defNameIndex < npc(names)->size(); defNameIndex++) {
        auto r = npc(workbook)->getNameRecord(defNameIndex);
        if(r == nullptr) {
            throw new ::java::lang::RuntimeException(u"Unable to find all defined names to iterate over"_j);
        }
        if(!npc(r)->isBuiltInName() || npc(r)->getBuiltInName() != builtinCode) {
            continue;
        }
        if(npc(r)->getSheetNumber() - int32_t(1) == sheetIndex) {
            return defNameIndex;
        }
    }
    return -int32_t(1);
}

poi::hssf::usermodel::HSSFName* poi::hssf::usermodel::HSSFWorkbook::createBuiltInName(int8_t builtinCode, int32_t sheetIndex)
{
    auto nameRecord = npc(workbook)->createBuiltInName(builtinCode, sheetIndex + int32_t(1));
    auto newName = new HSSFName(this, nameRecord, nullptr);
    npc(names)->add(static_cast< ::java::lang::Object* >(newName));
    return newName;
}

poi::hssf::usermodel::HSSFName* poi::hssf::usermodel::HSSFWorkbook::getBuiltInName(int8_t builtinCode, int32_t sheetIndex)
{
    auto index = findExistingBuiltinNameRecordIdx(sheetIndex, builtinCode);
    if(index < 0) {
        return nullptr;
    } else {
        return java_cast< HSSFName* >(npc(names)->get(index));
    }
}

poi::hssf::usermodel::HSSFFont* poi::hssf::usermodel::HSSFWorkbook::createFont()
{
    npc(workbook)->createNewFont();
    auto fontindex = static_cast< int16_t >((getNumberOfFonts() - int32_t(1)));
    if(fontindex > 3) {
        fontindex++;
    }
    if(fontindex == ::java::lang::Short::MAX_VALUE) {
        throw new ::java::lang::IllegalArgumentException(u"Maximum number of fonts was exceeded"_j);
    }
    return getFontAt(fontindex);
}

poi::hssf::usermodel::HSSFFont* poi::hssf::usermodel::HSSFWorkbook::findFont(bool bold, int16_t color, int16_t fontHeight, ::java::lang::String* name, bool italic, bool strikeout, int16_t typeOffset, int8_t underline)
{
    auto numberOfFonts = getNumberOfFonts();
    for (int16_t i = int32_t(0); i <= numberOfFonts; i++) {
        if(i == 4) {
            continue;
        }
        auto hssfFont = getFontAt(i);
        if(npc(hssfFont)->getBold() == bold && npc(hssfFont)->getColor() == color && npc(hssfFont)->getFontHeight() == fontHeight && npc(npc(hssfFont)->getFontName())->equals(static_cast< ::java::lang::Object* >(name)) && npc(hssfFont)->getItalic() == italic && npc(hssfFont)->getStrikeout() == strikeout && npc(hssfFont)->getTypeOffset() == typeOffset && npc(hssfFont)->getUnderline() == underline) {
            return hssfFont;
        }
    }
    return nullptr;
}

int16_t poi::hssf::usermodel::HSSFWorkbook::getNumberOfFonts()
{
    return static_cast< int16_t >(npc(workbook)->getNumberOfFontRecords());
}

poi::hssf::usermodel::HSSFFont* poi::hssf::usermodel::HSSFWorkbook::getFontAt(int16_t idx)
{
    if(fonts == nullptr) {
        fonts = new ::java::util::HashMap();
    }
    auto sIdx = ::java::lang::Short::valueOf(idx);
    if(npc(fonts)->containsKey(sIdx)) {
        return java_cast< HSSFFont* >(npc(fonts)->get(sIdx));
    }
    auto font = npc(workbook)->getFontRecordAt(idx);
    auto retval = new HSSFFont(idx, font);
    npc(fonts)->put(sIdx, retval);
    return retval;
}

void poi::hssf::usermodel::HSSFWorkbook::resetFontCache()
{
    fonts = new ::java::util::HashMap();
}

poi::hssf::usermodel::HSSFCellStyle* poi::hssf::usermodel::HSSFWorkbook::createCellStyle()
{
    if(npc(workbook)->getNumExFormats() == MAX_STYLES) {
        throw new ::java::lang::IllegalStateException(::java::lang::StringBuilder().append(u"The maximum number of cell styles was exceeded. "_j)->append(u"You can define up to 4000 styles in a .xls workbook"_j)->toString());
    }
    auto xfr = npc(workbook)->createCellXF();
    auto index = static_cast< int16_t >((getNumCellStyles() - int32_t(1)));
    return new HSSFCellStyle(index, xfr, this);
}

int32_t poi::hssf::usermodel::HSSFWorkbook::getNumCellStyles()
{
    return npc(workbook)->getNumExFormats();
}

poi::hssf::usermodel::HSSFCellStyle* poi::hssf::usermodel::HSSFWorkbook::getCellStyleAt(int32_t idx)
{
    auto xfr = npc(workbook)->getExFormatAt(idx);
    return new HSSFCellStyle(static_cast< int16_t >(idx), xfr, this);
}

void poi::hssf::usermodel::HSSFWorkbook::close() /* throws(IOException) */
{
    super::close();
}

void poi::hssf::usermodel::HSSFWorkbook::write() /* throws(IOException) */
{
    validateInPlaceWritePossible();
    auto const dir = getDirectory();
    auto workbookNode = java_cast< ::poi::poifs::filesystem::DocumentNode* >(npc(dir)->getEntry(getWorkbookDirEntryName(dir)));
    auto workbookDoc = new ::poi::poifs::filesystem::NPOIFSDocument(workbookNode);
    npc(workbookDoc)->replaceContents(new ::java::io::ByteArrayInputStream(getBytes()));
    writeProperties();
    npc(npc(dir)->getFileSystem())->writeFilesystem();
}

void poi::hssf::usermodel::HSSFWorkbook::write(::java::io::File* newFile) /* throws(IOException) */
{
    auto fs = ::poi::poifs::filesystem::POIFSFileSystem::create(newFile);
    {
        auto finally0 = finally([&] {
            npc(fs)->close();
        });
        {
            write(static_cast< ::poi::poifs::filesystem::NPOIFSFileSystem* >(fs));
            npc(fs)->writeFilesystem();
        }
    }

}

void poi::hssf::usermodel::HSSFWorkbook::write(::java::io::OutputStream* stream) /* throws(IOException) */
{
    auto fs = new ::poi::poifs::filesystem::NPOIFSFileSystem();
    {
        auto finally1 = finally([&] {
            npc(fs)->close();
        });
        {
            write(fs);
            npc(fs)->writeFilesystem(stream);
        }
    }

}

void poi::hssf::usermodel::HSSFWorkbook::write(::poi::poifs::filesystem::NPOIFSFileSystem* fs) /* throws(IOException) */
{
    ::java::util::List* excepts = new ::java::util::ArrayList(int32_t(1));
    npc(fs)->createDocument(new ::java::io::ByteArrayInputStream(getBytes()), u"Workbook"_j);
    writeProperties(fs, excepts);
    if(preserveNodes) {
        npc(excepts)->addAll(static_cast< ::java::util::Collection* >(::java::util::Arrays::asList(::poi::hssf::model::InternalWorkbook::WORKBOOK_DIR_ENTRY_NAMES())));
        npc(excepts)->addAll(static_cast< ::java::util::Collection* >(::java::util::Arrays::asList(new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(::poi::hpsf::DocumentSummaryInformation::DEFAULT_STREAM_NAME()), static_cast< ::java::lang::Object* >(::poi::hpsf::SummaryInformation::DEFAULT_STREAM_NAME()), static_cast< ::java::lang::Object* >(getEncryptedPropertyStreamName())}))));
        ::poi::poifs::filesystem::EntryUtils::copyNodes(new ::poi::poifs::filesystem::FilteringDirectoryNode(getDirectory(), excepts), new ::poi::poifs::filesystem::FilteringDirectoryNode(npc(fs)->getRoot(), excepts));
        npc(npc(fs)->getRoot())->setStorageClsid(npc(getDirectory())->getStorageClsid());
    }
}

int8_tArray* poi::hssf::usermodel::HSSFWorkbook::getBytes()
{
    if(npc(log_)->check(::poi::util::POILogger::DEBUG)) {
        npc(log_)->log(DEBUG, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(u"HSSFWorkbook.getBytes()"_j)}));
    }
    auto sheets = getSheets();
    auto nSheets = npc(sheets)->length;
    updateEncryptionInfo();
    npc(workbook)->preSerialize();
    for(auto sheet : *npc(sheets)) {
        npc(npc(sheet)->getSheet())->preSerialize();
        npc(sheet)->preSerialize();
    }
    auto totalsize = npc(workbook)->getSize();
    auto srCollectors = new HSSFWorkbook_SheetRecordCollectorArray(nSheets);
    for (auto k = int32_t(0); k < nSheets; k++) {
        npc(workbook)->setSheetBof(k, totalsize);
        auto src = new HSSFWorkbook_SheetRecordCollector();
        npc(npc((*sheets)[k])->getSheet())->visitContainedRecords(src, totalsize);
        totalsize += npc(src)->getTotalSize();
        srCollectors->set(k, src);
    }
    auto retval = new ::int8_tArray(totalsize);
    auto pos = npc(workbook)->serialize(0, retval);
    for (auto k = int32_t(0); k < nSheets; k++) {
        auto src = (*srCollectors)[k];
        auto serializedSize = npc(src)->serialize(pos, retval);
        if(serializedSize != npc(src)->getTotalSize()) {
            throw new ::java::lang::IllegalStateException(::java::lang::StringBuilder().append(u"Actual serialized sheet size ("_j)->append(serializedSize)
                ->append(u") differs from pre-calculated size ("_j)
                ->append(npc(src)->getTotalSize())
                ->append(u") for sheet ("_j)
                ->append(k)
                ->append(u")"_j)->toString());
        }
        pos += serializedSize;
    }
    encryptBytes(retval);
    return retval;
}

void poi::hssf::usermodel::HSSFWorkbook::encryptBytes(::int8_tArray* buf)
{
    auto ei = getEncryptionInfo();
    if(ei == nullptr) {
        return;
    }
    auto enc = npc(ei)->getEncryptor();
    auto initialOffset = int32_t(0);
    auto plain = new ::poi::util::LittleEndianByteArrayInputStream(buf, int32_t(0));
    auto leos = new ::poi::util::LittleEndianByteArrayOutputStream(buf, int32_t(0));
    npc(enc)->setChunkSize(::poi::hssf::record::crypto::Biff8DecryptingStream::RC4_REKEYING_INTERVAL);
    auto tmp = new ::int8_tArray(int32_t(1024));
    try {
        auto os = npc(enc)->getDataStream(leos, initialOffset);
        auto totalBytes = int32_t(0);
        while (totalBytes < npc(buf)->length) {
            npc(plain)->read(tmp, int32_t(0), int32_t(4));
            auto const sid = ::poi::util::LittleEndian::getUShort(tmp, 0);
            auto const len = ::poi::util::LittleEndian::getUShort(tmp, 2);
            auto isPlain = ::poi::hssf::record::crypto::Biff8DecryptingStream::isNeverEncryptedRecord(sid);
            npc(os)->setNextRecordSize(len, isPlain);
            npc(os)->writePlain(tmp, 0, 4);
            if(sid == ::poi::hssf::record::BoundSheetRecord::sid) {
                auto bsrBuf = new ::int8_tArray(len);
                npc(plain)->readFully(bsrBuf);
                npc(os)->writePlain(bsrBuf, 0, 4);
                npc(os)->write(bsrBuf, int32_t(4), len - int32_t(4));
            } else {
                auto todo = len;
                while (todo > 0) {
                    auto nextLen = ::java::lang::Math::min(todo, npc(tmp)->length);
                    npc(plain)->readFully(tmp, int32_t(0), nextLen);
                    if(isPlain) {
                        npc(os)->writePlain(tmp, 0, nextLen);
                    } else {
                        npc(os)->write(tmp, int32_t(0), nextLen);
                    }
                    todo -= nextLen;
                }
            }
            totalBytes += int32_t(4) + len;
        }
        npc(os)->close();
    } catch (::java::lang::Exception* e) {
        throw new ::poi::EncryptedDocumentException(static_cast< ::java::lang::Throwable* >(e));
    }
}

poi::hssf::model::InternalWorkbook* poi::hssf::usermodel::HSSFWorkbook::getWorkbook()
{
    return workbook;
}

int32_t poi::hssf::usermodel::HSSFWorkbook::getNumberOfNames()
{
    return npc(names)->size();
}

poi::hssf::usermodel::HSSFName* poi::hssf::usermodel::HSSFWorkbook::getName(::java::lang::String* name)
{
    auto nameIndex = getNameIndex(name);
    if(nameIndex < 0) {
        return nullptr;
    }
    return java_cast< HSSFName* >(npc(names)->get(nameIndex));
}

java::util::List* poi::hssf::usermodel::HSSFWorkbook::getNames(::java::lang::String* name)
{
    ::java::util::List* nameList = new ::java::util::ArrayList();
    for (auto _i = npc(names)->iterator(); _i->hasNext(); ) {
        HSSFName* nr = java_cast< HSSFName* >(_i->next());
        {
            if(npc(npc(nr)->getNameName())->equals(static_cast< ::java::lang::Object* >(name))) {
                npc(nameList)->add(static_cast< ::java::lang::Object* >(nr));
            }
        }
    }
    return ::java::util::Collections::unmodifiableList(nameList);
}

poi::hssf::usermodel::HSSFName* poi::hssf::usermodel::HSSFWorkbook::getNameAt(int32_t nameIndex)
{
    auto nNames = npc(names)->size();
    if(nNames < 1) {
        throw new ::java::lang::IllegalStateException(u"There are no defined names in this workbook"_j);
    }
    if(nameIndex < 0 || nameIndex > nNames) {
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Specified name index "_j)->append(nameIndex)
            ->append(u" is outside the allowable range (0.."_j)
            ->append((nNames - int32_t(1)))
            ->append(u")."_j)->toString());
    }
    return java_cast< HSSFName* >(npc(names)->get(nameIndex));
}

java::util::List* poi::hssf::usermodel::HSSFWorkbook::getAllNames()
{
    return ::java::util::Collections::unmodifiableList(names);
}

poi::hssf::record::NameRecord* poi::hssf::usermodel::HSSFWorkbook::getNameRecord(int32_t nameIndex)
{
    return npc(getWorkbook())->getNameRecord(nameIndex);
}

java::lang::String* poi::hssf::usermodel::HSSFWorkbook::getNameName(int32_t index)
{
    return npc(getNameAt(index))->getNameName();
}

void poi::hssf::usermodel::HSSFWorkbook::setPrintArea(int32_t sheetIndex, ::java::lang::String* reference)
{
    auto name = npc(workbook)->getSpecificBuiltinRecord(::poi::hssf::record::NameRecord::BUILTIN_PRINT_AREA, sheetIndex + int32_t(1));
    if(name == nullptr) {
        name = npc(workbook)->createBuiltInName(::poi::hssf::record::NameRecord::BUILTIN_PRINT_AREA, sheetIndex + int32_t(1));
    }
    auto parts = npc(COMMA_PATTERN_)->split(reference);
    auto sb = new ::java::lang::StringBuffer(int32_t(32));
    for (auto i = int32_t(0); i < npc(parts)->length; i++) {
        if(i > 0) {
            npc(sb)->append(u","_j);
        }
        ::poi::ss::formula::SheetNameFormatter::appendFormat(sb, getSheetName(sheetIndex));
        npc(sb)->append(u"!"_j);
        npc(sb)->append((*parts)[i]);
    }
    npc(name)->setNameDefinition(::poi::hssf::model::HSSFFormulaParser::parse(npc(sb)->toString(), this, ::poi::ss::formula::FormulaType::NAMEDRANGE, sheetIndex));
}

void poi::hssf::usermodel::HSSFWorkbook::setPrintArea(int32_t sheetIndex, int32_t startColumn, int32_t endColumn, int32_t startRow, int32_t endRow)
{
    auto cell = new ::poi::hssf::util::CellReference(startRow, startColumn, true, true);
    auto reference = npc(cell)->formatAsString();
    cell = new ::poi::hssf::util::CellReference(endRow, endColumn, true, true);
    reference = ::java::lang::StringBuilder().append(reference)->append(u":"_j)
        ->append(npc(cell)->formatAsString())->toString();
    setPrintArea(sheetIndex, reference);
}

java::lang::String* poi::hssf::usermodel::HSSFWorkbook::getPrintArea(int32_t sheetIndex)
{
    auto name = npc(workbook)->getSpecificBuiltinRecord(::poi::hssf::record::NameRecord::BUILTIN_PRINT_AREA, sheetIndex + int32_t(1));
    if(name == nullptr) {
        return nullptr;
    }
    return ::poi::hssf::model::HSSFFormulaParser::toFormulaString(this, npc(name)->getNameDefinition());
}

void poi::hssf::usermodel::HSSFWorkbook::removePrintArea(int32_t sheetIndex)
{
    npc(getWorkbook())->removeBuiltinRecord(::poi::hssf::record::NameRecord::BUILTIN_PRINT_AREA, sheetIndex + int32_t(1));
}

poi::hssf::usermodel::HSSFName* poi::hssf::usermodel::HSSFWorkbook::createName()
{
    auto nameRecord = npc(workbook)->createName();
    auto newName = new HSSFName(this, nameRecord);
    npc(names)->add(static_cast< ::java::lang::Object* >(newName));
    return newName;
}

int32_t poi::hssf::usermodel::HSSFWorkbook::getNameIndex(::java::lang::String* name)
{
    for (auto k = int32_t(0); k < npc(names)->size(); k++) {
        auto nameName = getNameName(k);
        if(npc(nameName)->equalsIgnoreCase(name)) {
            return k;
        }
    }
    return -int32_t(1);
}

int32_t poi::hssf::usermodel::HSSFWorkbook::getNameIndex(HSSFName* name)
{
    for (auto k = int32_t(0); k < npc(names)->size(); k++) {
        if(name == java_cast< HSSFName* >(npc(names)->get(k))) {
            return k;
        }
    }
    return -int32_t(1);
}

void poi::hssf::usermodel::HSSFWorkbook::removeName(int32_t index)
{
    npc(names)->remove(index);
    npc(workbook)->removeName(index);
}

poi::hssf::usermodel::HSSFDataFormat* poi::hssf::usermodel::HSSFWorkbook::createDataFormat()
{
    if(formatter == nullptr) {
        formatter = new HSSFDataFormat(workbook);
    }
    return formatter;
}

void poi::hssf::usermodel::HSSFWorkbook::removeName(::java::lang::String* name)
{
    auto index = getNameIndex(name);
    removeName(index);
}

void poi::hssf::usermodel::HSSFWorkbook::removeName(::poi::ss::usermodel::Name* name)
{
    auto index = getNameIndex(java_cast< HSSFName* >(name));
    removeName(index);
}

poi::hssf::usermodel::HSSFPalette* poi::hssf::usermodel::HSSFWorkbook::getCustomPalette()
{
    return new HSSFPalette(npc(workbook)->getCustomPalette());
}

void poi::hssf::usermodel::HSSFWorkbook::insertChartRecord()
{
    auto loc = npc(workbook)->findFirstRecordLocBySid(::poi::hssf::record::SSTRecord::sid);
    auto data = (new ::int8_tArray({
        static_cast< int8_t >(int32_t(15))
        , static_cast< int8_t >(int32_t(0))
        , static_cast< int8_t >(int32_t(0))
        , static_cast< int8_t >(int32_t(240))
        , static_cast< int8_t >(int32_t(82))
        , static_cast< int8_t >(int32_t(0))
        , static_cast< int8_t >(int32_t(0))
        , static_cast< int8_t >(int32_t(0))
        , static_cast< int8_t >(int32_t(0))
        , static_cast< int8_t >(int32_t(0))
        , static_cast< int8_t >(int32_t(6))
        , static_cast< int8_t >(int32_t(240))
        , static_cast< int8_t >(int32_t(24))
        , static_cast< int8_t >(int32_t(0))
        , static_cast< int8_t >(int32_t(0))
        , static_cast< int8_t >(int32_t(0))
        , static_cast< int8_t >(int32_t(1))
        , static_cast< int8_t >(int32_t(8))
        , static_cast< int8_t >(int32_t(0))
        , static_cast< int8_t >(int32_t(0))
        , static_cast< int8_t >(int32_t(2))
        , static_cast< int8_t >(int32_t(0))
        , static_cast< int8_t >(int32_t(0))
        , static_cast< int8_t >(int32_t(0))
        , static_cast< int8_t >(int32_t(2))
        , static_cast< int8_t >(int32_t(0))
        , static_cast< int8_t >(int32_t(0))
        , static_cast< int8_t >(int32_t(0))
        , static_cast< int8_t >(int32_t(1))
        , static_cast< int8_t >(int32_t(0))
        , static_cast< int8_t >(int32_t(0))
        , static_cast< int8_t >(int32_t(0))
        , static_cast< int8_t >(int32_t(1))
        , static_cast< int8_t >(int32_t(0))
        , static_cast< int8_t >(int32_t(0))
        , static_cast< int8_t >(int32_t(0))
        , static_cast< int8_t >(int32_t(3))
        , static_cast< int8_t >(int32_t(0))
        , static_cast< int8_t >(int32_t(0))
        , static_cast< int8_t >(int32_t(0))
        , static_cast< int8_t >(int32_t(51))
        , static_cast< int8_t >(int32_t(0))
        , static_cast< int8_t >(int32_t(11))
        , static_cast< int8_t >(int32_t(240))
        , static_cast< int8_t >(int32_t(18))
        , static_cast< int8_t >(int32_t(0))
        , static_cast< int8_t >(int32_t(0))
        , static_cast< int8_t >(int32_t(0))
        , static_cast< int8_t >(int32_t(191))
        , static_cast< int8_t >(int32_t(0))
        , static_cast< int8_t >(int32_t(8))
        , static_cast< int8_t >(int32_t(0))
        , static_cast< int8_t >(int32_t(8))
        , static_cast< int8_t >(int32_t(0))
        , static_cast< int8_t >(int32_t(129))
        , static_cast< int8_t >(int32_t(1))
        , static_cast< int8_t >(int32_t(9))
        , static_cast< int8_t >(int32_t(0))
        , static_cast< int8_t >(int32_t(0))
        , static_cast< int8_t >(int32_t(8))
        , static_cast< int8_t >(int32_t(192))
        , static_cast< int8_t >(int32_t(1))
        , static_cast< int8_t >(int32_t(64))
        , static_cast< int8_t >(int32_t(0))
        , static_cast< int8_t >(int32_t(0))
        , static_cast< int8_t >(int32_t(8))
        , static_cast< int8_t >(int32_t(64))
        , static_cast< int8_t >(int32_t(0))
        , static_cast< int8_t >(int32_t(30))
        , static_cast< int8_t >(int32_t(241))
        , static_cast< int8_t >(int32_t(16))
        , static_cast< int8_t >(int32_t(0))
        , static_cast< int8_t >(int32_t(0))
        , static_cast< int8_t >(int32_t(0))
        , static_cast< int8_t >(int32_t(13))
        , static_cast< int8_t >(int32_t(0))
        , static_cast< int8_t >(int32_t(0))
        , static_cast< int8_t >(int32_t(8))
        , static_cast< int8_t >(int32_t(12))
        , static_cast< int8_t >(int32_t(0))
        , static_cast< int8_t >(int32_t(0))
        , static_cast< int8_t >(int32_t(8))
        , static_cast< int8_t >(int32_t(23))
        , static_cast< int8_t >(int32_t(0))
        , static_cast< int8_t >(int32_t(0))
        , static_cast< int8_t >(int32_t(8))
        , static_cast< int8_t >(int32_t(247))
        , static_cast< int8_t >(int32_t(0))
        , static_cast< int8_t >(int32_t(0))
        , static_cast< int8_t >(int32_t(16))
    }));
    auto r = new ::poi::hssf::record::UnknownRecord(static_cast< int16_t >(int32_t(235)), data);
    npc(npc(workbook)->getRecords())->add(loc, r);
}

void poi::hssf::usermodel::HSSFWorkbook::dumpDrawingGroupRecords(bool fat)
{
    auto r = java_cast< ::poi::hssf::record::DrawingGroupRecord* >(npc(workbook)->findFirstRecordBySid(::poi::hssf::record::DrawingGroupRecord::sid));
    npc(r)->decode();
    auto escherRecords = npc(r)->getEscherRecords();
    auto w = new ::java::io::PrintWriter(static_cast< ::java::io::Writer* >(new ::java::io::OutputStreamWriter(static_cast< ::java::io::OutputStream* >(::java::lang::System::out()), ::java::nio::charset::Charset::defaultCharset())));
    for (auto _i = npc(escherRecords)->iterator(); _i->hasNext(); ) {
        ::poi::ddf::EscherRecord* escherRecord = java_cast< ::poi::ddf::EscherRecord* >(_i->next());
        {
            if(fat) {
                npc(::java::lang::System::out())->println(static_cast< ::java::lang::Object* >(escherRecord));
            } else {
                npc(escherRecord)->display(w, 0);
            }
        }
    }
    npc(w)->flush();
}

void poi::hssf::usermodel::HSSFWorkbook::initDrawings()
{
    auto mgr = npc(workbook)->findDrawingGroup();
    if(mgr != nullptr) {
        for (auto _i = npc(_sheets)->iterator(); _i->hasNext(); ) {
            HSSFSheet* sh = java_cast< HSSFSheet* >(_i->next());
            {
                java_cast< HSSFPatriarch* >(npc(sh)->getDrawingPatriarch());
            }
        }
    } else {
        npc(workbook)->createDrawingGroup();
    }
}

int32_t poi::hssf::usermodel::HSSFWorkbook::addPicture(::int8_tArray* pictureData, int32_t format)
{
    initDrawings();
    auto uid = ::org::apache::commons::codec::digest::DigestUtils::md5(pictureData);
    ::poi::ddf::EscherBlipRecord* blipRecord;
    int32_t blipSize;
    int16_t escherTag;
    {
        ::poi::ddf::EscherMetafileBlip* blipRecordMeta;
        ::poi::ddf::EscherBitmapBlip* blipRecordBitmap;
        switch (format) {
        case PICTURE_TYPE_WMF:
            if(::poi::util::LittleEndian::getInt(pictureData) == -1698247209) {
                auto picDataNoHeader = new ::int8_tArray(npc(pictureData)->length - int32_t(22));
                ::java::lang::System::arraycopy(pictureData, 22, picDataNoHeader, 0, npc(pictureData)->length - int32_t(22));
                pictureData = picDataNoHeader;
            }
        case PICTURE_TYPE_EMF:
            blipRecordMeta = new ::poi::ddf::EscherMetafileBlip();
            blipRecord = blipRecordMeta;
            npc(blipRecordMeta)->setUID(uid);
            npc(blipRecordMeta)->setPictureData(pictureData);
            npc(blipRecordMeta)->setFilter(static_cast< int8_t >(-int32_t(2)));
            blipSize = npc(blipRecordMeta)->getCompressedSize() + int32_t(58);
            escherTag = 0;
            break;
        default:
            blipRecordBitmap = new ::poi::ddf::EscherBitmapBlip();
            blipRecord = blipRecordBitmap;
            npc(blipRecordBitmap)->setUID(uid);
            npc(blipRecordBitmap)->setMarker(static_cast< int8_t >(int32_t(255)));
            npc(blipRecordBitmap)->setPictureData(pictureData);
            blipSize = npc(pictureData)->length + int32_t(25);
            escherTag = static_cast< int16_t >(int32_t(255));
            break;
        }
    }

    npc(blipRecord)->setRecordId(static_cast< int16_t >((::poi::ddf::EscherBlipRecord::RECORD_ID_START + format)));
    switch (format) {
    case PICTURE_TYPE_EMF:
        npc(blipRecord)->setOptions(HSSFPictureData::MSOBI_EMF);
        break;
    case PICTURE_TYPE_WMF:
        npc(blipRecord)->setOptions(HSSFPictureData::MSOBI_WMF);
        break;
    case PICTURE_TYPE_PICT:
        npc(blipRecord)->setOptions(HSSFPictureData::MSOBI_PICT);
        break;
    case PICTURE_TYPE_PNG:
        npc(blipRecord)->setOptions(HSSFPictureData::MSOBI_PNG);
        break;
    case PICTURE_TYPE_JPEG:
        npc(blipRecord)->setOptions(HSSFPictureData::MSOBI_JPEG);
        break;
    case PICTURE_TYPE_DIB:
        npc(blipRecord)->setOptions(HSSFPictureData::MSOBI_DIB);
        break;
    default:
        throw new ::java::lang::IllegalStateException(::java::lang::StringBuilder().append(u"Unexpected picture format: "_j)->append(format)->toString());
    }

    auto r = new ::poi::ddf::EscherBSERecord();
    npc(r)->setRecordId(::poi::ddf::EscherBSERecord::RECORD_ID);
    npc(r)->setOptions(static_cast< int16_t >((int32_t(2) | (format << int32_t(4)))));
    npc(r)->setBlipTypeMacOS(static_cast< int8_t >(format));
    npc(r)->setBlipTypeWin32(static_cast< int8_t >(format));
    npc(r)->setUid(uid);
    npc(r)->setTag(escherTag);
    npc(r)->setSize(blipSize);
    npc(r)->setRef(0);
    npc(r)->setOffset(0);
    npc(r)->setBlipRecord(blipRecord);
    return npc(workbook)->addBSERecord(r);
}

java::util::List* poi::hssf::usermodel::HSSFWorkbook::getAllPictures()
{
    ::java::util::List* pictures = new ::java::util::ArrayList();
    for (auto _i = npc(npc(workbook)->getRecords())->iterator(); _i->hasNext(); ) {
        ::poi::hssf::record::Record* r = java_cast< ::poi::hssf::record::Record* >(_i->next());
        {
            if(dynamic_cast< ::poi::hssf::record::AbstractEscherHolderRecord* >(r) != nullptr) {
                npc((java_cast< ::poi::hssf::record::AbstractEscherHolderRecord* >(r)))->decode();
                auto escherRecords = npc((java_cast< ::poi::hssf::record::AbstractEscherHolderRecord* >(r)))->getEscherRecords();
                searchForPictures(escherRecords, pictures);
            }
        }
    }
    return ::java::util::Collections::unmodifiableList(pictures);
}

void poi::hssf::usermodel::HSSFWorkbook::searchForPictures(::java::util::List* escherRecords, ::java::util::List* pictures)
{
    for (auto _i = npc(escherRecords)->iterator(); _i->hasNext(); ) {
        ::poi::ddf::EscherRecord* escherRecord = java_cast< ::poi::ddf::EscherRecord* >(_i->next());
        {
            if(dynamic_cast< ::poi::ddf::EscherBSERecord* >(escherRecord) != nullptr) {
                auto blip = npc((java_cast< ::poi::ddf::EscherBSERecord* >(escherRecord)))->getBlipRecord();
                if(blip != nullptr) {
                    auto picture = new HSSFPictureData(blip);
                    npc(pictures)->add(static_cast< ::java::lang::Object* >(picture));
                }
            }
            searchForPictures(npc(escherRecord)->getChildRecords(), pictures);
        }
    }
}

java::util::Map* poi::hssf::usermodel::HSSFWorkbook::getOleMap()
{
    clinit();
    ::java::util::Map* olemap = new ::java::util::HashMap();
    npc(olemap)->put(u"PowerPoint Document"_j, ::poi::hpsf::ClassID::PPT_SHOW());
    for(auto str : *npc(::poi::hssf::model::InternalWorkbook::WORKBOOK_DIR_ENTRY_NAMES())) {
        npc(olemap)->put(str, ::poi::hpsf::ClassID::XLS_WORKBOOK());
    }
    return olemap;
}

int32_t poi::hssf::usermodel::HSSFWorkbook::addOlePackage(::poi::poifs::filesystem::POIFSFileSystem* poiData, ::java::lang::String* label, ::java::lang::String* fileName, ::java::lang::String* command) /* throws(IOException) */
{
    auto root = npc(poiData)->getRoot();
    auto olemap = getOleMap();
    for (auto _i = npc(npc(olemap)->entrySet())->iterator(); _i->hasNext(); ) {
        ::java::util::Map_Entry* entry = java_cast< ::java::util::Map_Entry* >(_i->next());
        {
            if(npc(root)->hasEntry(java_cast< ::java::lang::String* >(npc(entry)->getKey()))) {
                npc(root)->setStorageClsid(java_cast< ::poi::hpsf::ClassID* >(npc(entry)->getValue()));
                break;
            }
        }
    }
    auto bos = new ::java::io::ByteArrayOutputStream();
    npc(poiData)->writeFilesystem(bos);
    return addOlePackage(npc(bos)->toByteArray_(), label, fileName, command);
}

int32_t poi::hssf::usermodel::HSSFWorkbook::addOlePackage(::int8_tArray* oleData, ::java::lang::String* label, ::java::lang::String* fileName, ::java::lang::String* command) /* throws(IOException) */
{
    if(initDirectory()) {
        preserveNodes = true;
    }
    auto storageId = int32_t(0);
    ::poi::poifs::filesystem::DirectoryEntry* oleDir = nullptr;
    do {
        auto storageStr = ::java::lang::StringBuilder().append(u"MBD"_j)->append(::poi::util::HexDump::toHex(++storageId))->toString();
        if(!npc(getDirectory())->hasEntry(storageStr)) {
            oleDir = npc(getDirectory())->createDirectory(storageStr);
            npc(oleDir)->setStorageClsid(::poi::hpsf::ClassID::OLE10_PACKAGE());
        }
    } while (oleDir == nullptr);
    auto oleBytes = (new ::int8_tArray({
        static_cast< int8_t >(int32_t(1))
        , static_cast< int8_t >(int32_t(0))
        , static_cast< int8_t >(int32_t(0))
        , static_cast< int8_t >(int32_t(2))
        , static_cast< int8_t >(int32_t(0))
        , static_cast< int8_t >(int32_t(0))
        , static_cast< int8_t >(int32_t(0))
        , static_cast< int8_t >(int32_t(0))
        , static_cast< int8_t >(int32_t(0))
        , static_cast< int8_t >(int32_t(0))
        , static_cast< int8_t >(int32_t(0))
        , static_cast< int8_t >(int32_t(0))
        , static_cast< int8_t >(int32_t(0))
        , static_cast< int8_t >(int32_t(0))
        , static_cast< int8_t >(int32_t(0))
        , static_cast< int8_t >(int32_t(0))
        , static_cast< int8_t >(int32_t(0))
        , static_cast< int8_t >(int32_t(0))
        , static_cast< int8_t >(int32_t(0))
        , static_cast< int8_t >(int32_t(0))
    }));
    npc(oleDir)->createDocument(u"\u0001Ole"_j, new ::java::io::ByteArrayInputStream(oleBytes));
    auto oleNative = new ::poi::poifs::filesystem::Ole10Native(label, fileName, command, oleData);
    auto bos = new ::java::io::ByteArrayOutputStream();
    npc(oleNative)->writeOut(bos);
    npc(oleDir)->createDocument(::poi::poifs::filesystem::Ole10Native::OLE10_NATIVE(), new ::java::io::ByteArrayInputStream(npc(bos)->toByteArray_()));
    return storageId;
}

int32_t poi::hssf::usermodel::HSSFWorkbook::linkExternalWorkbook(::java::lang::String* name, ::poi::ss::usermodel::Workbook* workbook)
{
    return npc(this->workbook)->linkExternalWorkbook(name, workbook);
}

bool poi::hssf::usermodel::HSSFWorkbook::isWriteProtected()
{
    return npc(this->workbook)->isWriteProtected();
}

void poi::hssf::usermodel::HSSFWorkbook::writeProtectWorkbook(::java::lang::String* password, ::java::lang::String* username)
{
    npc(this->workbook)->writeProtectWorkbook(password, username);
}

void poi::hssf::usermodel::HSSFWorkbook::unwriteProtectWorkbook()
{
    npc(this->workbook)->unwriteProtectWorkbook();
}

java::util::List* poi::hssf::usermodel::HSSFWorkbook::getAllEmbeddedObjects()
{
    ::java::util::List* objects = new ::java::util::ArrayList();
    for (auto _i = npc(_sheets)->iterator(); _i->hasNext(); ) {
        HSSFSheet* sheet = java_cast< HSSFSheet* >(_i->next());
        {
            getAllEmbeddedObjects(sheet, objects);
        }
    }
    return ::java::util::Collections::unmodifiableList(objects);
}

void poi::hssf::usermodel::HSSFWorkbook::getAllEmbeddedObjects(HSSFSheet* sheet, ::java::util::List* objects)
{
    auto patriarch = java_cast< HSSFPatriarch* >(npc(sheet)->getDrawingPatriarch());
    if(nullptr == patriarch) {
        return;
    }
    getAllEmbeddedObjects(static_cast< HSSFShapeContainer* >(patriarch), objects);
}

void poi::hssf::usermodel::HSSFWorkbook::getAllEmbeddedObjects(HSSFShapeContainer* parent, ::java::util::List* objects)
{
    for (auto _i = npc(npc(parent)->getChildren())->iterator(); _i->hasNext(); ) {
        HSSFShape* shape = java_cast< HSSFShape* >(_i->next());
        {
            if(dynamic_cast< HSSFObjectData* >(shape) != nullptr) {
                npc(objects)->add(static_cast< ::java::lang::Object* >(java_cast< HSSFObjectData* >(shape)));
            } else if(dynamic_cast< HSSFShapeContainer* >(shape) != nullptr) {
                getAllEmbeddedObjects(java_cast< HSSFShapeContainer* >(shape), objects);
            }
        }
    }
}

poi::ss::usermodel::CreationHelper* poi::hssf::usermodel::HSSFWorkbook::getCreationHelper()
{
    return new HSSFCreationHelper(this);
}

poi::ss::formula::udf::UDFFinder* poi::hssf::usermodel::HSSFWorkbook::getUDFFinder()
{
    return _udfFinder;
}

void poi::hssf::usermodel::HSSFWorkbook::addToolPack(::poi::ss::formula::udf::UDFFinder* toopack)
{
    auto udfs = java_cast< ::poi::ss::formula::udf::AggregatingUDFFinder* >(_udfFinder);
    npc(udfs)->add(toopack);
}

void poi::hssf::usermodel::HSSFWorkbook::setForceFormulaRecalculation(bool value)
{
    auto iwb = getWorkbook();
    auto recalc = npc(iwb)->getRecalcId();
    npc(recalc)->setEngineId(0);
}

bool poi::hssf::usermodel::HSSFWorkbook::getForceFormulaRecalculation()
{
    auto iwb = getWorkbook();
    auto recalc = java_cast< ::poi::hssf::record::RecalcIdRecord* >(npc(iwb)->findFirstRecordBySid(::poi::hssf::record::RecalcIdRecord::sid));
    return recalc != nullptr && npc(recalc)->getEngineId() != 0;
}

bool poi::hssf::usermodel::HSSFWorkbook::changeExternalReference(::java::lang::String* oldUrl, ::java::lang::String* newUrl)
{
    return npc(workbook)->changeExternalReference(oldUrl, newUrl);
}

poi::poifs::filesystem::DirectoryNode* poi::hssf::usermodel::HSSFWorkbook::getRootDirectory()
{
    return getDirectory();
}

poi::hssf::model::InternalWorkbook* poi::hssf::usermodel::HSSFWorkbook::getInternalWorkbook()
{
    return workbook;
}

poi::ss::SpreadsheetVersion* poi::hssf::usermodel::HSSFWorkbook::getSpreadsheetVersion()
{
    return ::poi::ss::SpreadsheetVersion::EXCEL97;
}

poi::poifs::crypt::EncryptionInfo* poi::hssf::usermodel::HSSFWorkbook::getEncryptionInfo()
{
    auto fpr = java_cast< ::poi::hssf::record::FilePassRecord* >(npc(workbook)->findFirstRecordBySid(::poi::hssf::record::FilePassRecord::sid));
    return (fpr != nullptr) ? npc(fpr)->getEncryptionInfo() : static_cast< ::poi::poifs::crypt::EncryptionInfo* >(nullptr);
}

void poi::hssf::usermodel::HSSFWorkbook::updateEncryptionInfo()
{
    readProperties();
    auto fpr = java_cast< ::poi::hssf::record::FilePassRecord* >(npc(workbook)->findFirstRecordBySid(::poi::hssf::record::FilePassRecord::sid));
    auto password = ::poi::hssf::record::crypto::Biff8EncryptionKey::getCurrentUserPassword();
    auto wrl = npc(workbook)->getWorkbookRecordList();
    if(password == nullptr) {
        if(fpr != nullptr) {
            npc(wrl)->remove(static_cast< ::java::lang::Object* >(fpr));
        }
    } else {
        if(fpr == nullptr) {
            fpr = new ::poi::hssf::record::FilePassRecord(::poi::poifs::crypt::EncryptionMode::cryptoAPI);
            npc(wrl)->add(1, fpr);
        }
        auto ei = npc(fpr)->getEncryptionInfo();
        auto ver = npc(ei)->getVerifier();
        auto encVer = npc(ver)->getEncryptedVerifier();
        auto dec = npc(ei)->getDecryptor();
        auto enc = npc(ei)->getEncryptor();
        try {
            if(encVer == nullptr || !npc(dec)->verifyPassword(password)) {
                npc(enc)->confirmPassword(password);
            } else {
                auto verifier = npc(dec)->getVerifier();
                auto salt = npc(ver)->getSalt();
                npc(enc)->confirmPassword(password, nullptr, nullptr, verifier, salt, nullptr);
            }
        } catch (::java::security::GeneralSecurityException* e) {
            throw new ::poi::EncryptedDocumentException(u"can't validate/update encryption setting"_j, e);
        }
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::usermodel::HSSFWorkbook::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.usermodel.HSSFWorkbook", 42);
    return c;
}

void poi::hssf::usermodel::HSSFWorkbook::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        COMMA_PATTERN_ = ::java::util::regex::Pattern::compile(u","_j);
        INITIAL_CAPACITY_ = ::poi::util::Configurator::getIntValue(u"HSSFWorkbook.SheetInitialCapacity"_j, 3);
        log_ = ::poi::util::POILogFactory::getLogger(static_cast< ::java::lang::Class* >(HSSFWorkbook::class_()));
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* poi::hssf::usermodel::HSSFWorkbook::getClass0()
{
    return class_();
}

