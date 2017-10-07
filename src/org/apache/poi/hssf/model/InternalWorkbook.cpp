// Generated from /POI/java/org/apache/poi/hssf/model/InternalWorkbook.java
#include <org/apache/poi/hssf/model/InternalWorkbook.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/ArrayIndexOutOfBoundsException.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Cloneable.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/IllegalStateException.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/Short.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/System.hpp>
#include <java/security/AccessControlException.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/LinkedHashMap.hpp>
#include <java/util/List.hpp>
#include <java/util/Locale.hpp>
#include <java/util/Map_Entry.hpp>
#include <java/util/Map.hpp>
#include <java/util/Set.hpp>
#include <org/apache/poi/ddf/EscherBSERecord.hpp>
#include <org/apache/poi/ddf/EscherBoolProperty.hpp>
#include <org/apache/poi/ddf/EscherContainerRecord.hpp>
#include <org/apache/poi/ddf/EscherDgRecord.hpp>
#include <org/apache/poi/ddf/EscherDggRecord_FileIdCluster.hpp>
#include <org/apache/poi/ddf/EscherDggRecord.hpp>
#include <org/apache/poi/ddf/EscherOptRecord.hpp>
#include <org/apache/poi/ddf/EscherProperties.hpp>
#include <org/apache/poi/ddf/EscherProperty.hpp>
#include <org/apache/poi/ddf/EscherRGBProperty.hpp>
#include <org/apache/poi/ddf/EscherRecord.hpp>
#include <org/apache/poi/ddf/EscherSimpleProperty.hpp>
#include <org/apache/poi/ddf/EscherSpRecord.hpp>
#include <org/apache/poi/ddf/EscherSplitMenuColorsRecord.hpp>
#include <org/apache/poi/hssf/model/DrawingManager2.hpp>
#include <org/apache/poi/hssf/model/InternalSheet.hpp>
#include <org/apache/poi/hssf/model/LinkTable.hpp>
#include <org/apache/poi/hssf/model/WorkbookRecordList.hpp>
#include <org/apache/poi/hssf/record/BOFRecord.hpp>
#include <org/apache/poi/hssf/record/BackupRecord.hpp>
#include <org/apache/poi/hssf/record/BookBoolRecord.hpp>
#include <org/apache/poi/hssf/record/BoundSheetRecord.hpp>
#include <org/apache/poi/hssf/record/CodepageRecord.hpp>
#include <org/apache/poi/hssf/record/CountryRecord.hpp>
#include <org/apache/poi/hssf/record/DSFRecord.hpp>
#include <org/apache/poi/hssf/record/DateWindow1904Record.hpp>
#include <org/apache/poi/hssf/record/DrawingGroupRecord.hpp>
#include <org/apache/poi/hssf/record/EOFRecord.hpp>
#include <org/apache/poi/hssf/record/EscherAggregate.hpp>
#include <org/apache/poi/hssf/record/ExtSSTRecord.hpp>
#include <org/apache/poi/hssf/record/ExtendedFormatRecord.hpp>
#include <org/apache/poi/hssf/record/ExternSheetRecord.hpp>
#include <org/apache/poi/hssf/record/FileSharingRecord.hpp>
#include <org/apache/poi/hssf/record/FnGroupCountRecord.hpp>
#include <org/apache/poi/hssf/record/FontRecord.hpp>
#include <org/apache/poi/hssf/record/FormatRecord.hpp>
#include <org/apache/poi/hssf/record/HideObjRecord.hpp>
#include <org/apache/poi/hssf/record/HyperlinkRecord.hpp>
#include <org/apache/poi/hssf/record/InterfaceEndRecord.hpp>
#include <org/apache/poi/hssf/record/InterfaceHdrRecord.hpp>
#include <org/apache/poi/hssf/record/MMSRecord.hpp>
#include <org/apache/poi/hssf/record/NameCommentRecord.hpp>
#include <org/apache/poi/hssf/record/NameRecord.hpp>
#include <org/apache/poi/hssf/record/PaletteRecord.hpp>
#include <org/apache/poi/hssf/record/PasswordRecord.hpp>
#include <org/apache/poi/hssf/record/PasswordRev4Record.hpp>
#include <org/apache/poi/hssf/record/PrecisionRecord.hpp>
#include <org/apache/poi/hssf/record/ProtectRecord.hpp>
#include <org/apache/poi/hssf/record/ProtectionRev4Record.hpp>
#include <org/apache/poi/hssf/record/RecalcIdRecord.hpp>
#include <org/apache/poi/hssf/record/Record.hpp>
#include <org/apache/poi/hssf/record/RefreshAllRecord.hpp>
#include <org/apache/poi/hssf/record/SSTRecord.hpp>
#include <org/apache/poi/hssf/record/StyleRecord.hpp>
#include <org/apache/poi/hssf/record/SupBookRecord.hpp>
#include <org/apache/poi/hssf/record/TabIdRecord.hpp>
#include <org/apache/poi/hssf/record/UseSelFSRecord.hpp>
#include <org/apache/poi/hssf/record/WindowOneRecord.hpp>
#include <org/apache/poi/hssf/record/WindowProtectRecord.hpp>
#include <org/apache/poi/hssf/record/WriteAccessRecord.hpp>
#include <org/apache/poi/hssf/record/WriteProtectRecord.hpp>
#include <org/apache/poi/hssf/record/common/UnicodeString.hpp>
#include <org/apache/poi/hssf/util/HSSFColor_HSSFColorPredefined.hpp>
#include <org/apache/poi/poifs/crypt/CryptoFunctions.hpp>
#include <org/apache/poi/ss/formula/EvaluationWorkbook_ExternalName.hpp>
#include <org/apache/poi/ss/formula/EvaluationWorkbook_ExternalSheet.hpp>
#include <org/apache/poi/ss/formula/EvaluationWorkbook_ExternalSheetRange.hpp>
#include <org/apache/poi/ss/formula/FormulaShifter.hpp>
#include <org/apache/poi/ss/formula/functions/FreeRefFunction.hpp>
#include <org/apache/poi/ss/formula/ptg/Area3DPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/NameXPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/OperandPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/Ptg.hpp>
#include <org/apache/poi/ss/formula/ptg/Ref3DPtg.hpp>
#include <org/apache/poi/ss/formula/udf/UDFFinder.hpp>
#include <org/apache/poi/ss/usermodel/BuiltinFormats.hpp>
#include <org/apache/poi/ss/usermodel/SheetVisibility.hpp>
#include <org/apache/poi/util/LocaleUtil.hpp>
#include <org/apache/poi/util/POILogFactory.hpp>
#include <org/apache/poi/util/POILogger.hpp>
#include <org/apache/poi/util/RecordFormatException.hpp>
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
typedef ::SubArray< ::java::lang::Cloneable, ObjectArray > CloneableArray;
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::String, ObjectArray, ::java::io::SerializableArray, ComparableArray, CharSequenceArray > StringArray;
    } // lang
} // java

namespace org
{
    namespace apache
    {
        namespace poi
        {
            namespace ddf
            {
typedef ::SubArray< ::org::apache::poi::ddf::EscherDggRecord_FileIdCluster, ::java::lang::ObjectArray > EscherDggRecord_FileIdClusterArray;
            } // ddf

            namespace ss
            {
                namespace formula
                {
                    namespace ptg
                    {
typedef ::SubArray< ::org::apache::poi::ss::formula::ptg::Ptg, ::java::lang::ObjectArray > PtgArray;
                    } // ptg
                } // formula
            } // ss
        } // poi
    } // apache
} // org

namespace 
{
typedef ::SubArray< ::int32_tArray, ::java::lang::CloneableArray, ::java::io::SerializableArray > int32_tArrayArray;
} // 

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

org::apache::poi::hssf::model::InternalWorkbook::InternalWorkbook(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::model::InternalWorkbook::InternalWorkbook() 
    : InternalWorkbook(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

constexpr int32_t org::apache::poi::hssf::model::InternalWorkbook::MAX_SENSITIVE_SHEET_NAME_LEN;

java::lang::StringArray*& org::apache::poi::hssf::model::InternalWorkbook::WORKBOOK_DIR_ENTRY_NAMES()
{
    clinit();
    return WORKBOOK_DIR_ENTRY_NAMES_;
}
java::lang::StringArray* org::apache::poi::hssf::model::InternalWorkbook::WORKBOOK_DIR_ENTRY_NAMES_;

java::lang::String*& org::apache::poi::hssf::model::InternalWorkbook::OLD_WORKBOOK_DIR_ENTRY_NAME()
{
    clinit();
    return OLD_WORKBOOK_DIR_ENTRY_NAME_;
}
java::lang::String* org::apache::poi::hssf::model::InternalWorkbook::OLD_WORKBOOK_DIR_ENTRY_NAME_;

org::apache::poi::util::POILogger*& org::apache::poi::hssf::model::InternalWorkbook::LOG()
{
    clinit();
    return LOG_;
}
org::apache::poi::util::POILogger* org::apache::poi::hssf::model::InternalWorkbook::LOG_;

constexpr int16_t org::apache::poi::hssf::model::InternalWorkbook::CODEPAGE;

void org::apache::poi::hssf::model::InternalWorkbook::ctor()
{
    super::ctor();
    records = new WorkbookRecordList();
    boundsheets = new ::java::util::ArrayList();
    formats = new ::java::util::ArrayList();
    hyperlinks = new ::java::util::ArrayList();
    numxfs = 0;
    numfonts = 0;
    maxformatid = -int32_t(1);
    uses1904datewindowing = false;
    escherBSERecords = new ::java::util::ArrayList();
    commentRecords = new ::java::util::LinkedHashMap();
}

org::apache::poi::hssf::model::InternalWorkbook* org::apache::poi::hssf::model::InternalWorkbook::createWorkbook(::java::util::List* recs)
{
    clinit();
    npc(LOG_)->log(::org::apache::poi::util::POILogger::DEBUG, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(u"Workbook (readfile) created with reclen="_j), static_cast< ::java::lang::Object* >(::java::lang::Integer::valueOf(npc(recs)->size()))}));
    auto retval = new InternalWorkbook();
    ::java::util::List* records = new ::java::util::ArrayList(npc(recs)->size() / int32_t(3));
    npc(npc(retval)->records)->setRecords(records);
    auto eofPassed = false;
    for (auto k = int32_t(0); k < npc(recs)->size(); k++) {
        auto rec = java_cast< ::org::apache::poi::hssf::record::Record* >(npc(recs)->get(k));
        ::java::lang::String* logObj;
        {
            ::org::apache::poi::hssf::record::FormatRecord* fr;
            ::org::apache::poi::hssf::record::NameCommentRecord* ncr;
            switch (npc(rec)->getSid()) {
            case ::org::apache::poi::hssf::record::EOFRecord::sid:
                logObj = u"workbook eof"_j;
                break;
            case ::org::apache::poi::hssf::record::BoundSheetRecord::sid:
                logObj = u"boundsheet"_j;
                npc(npc(retval)->boundsheets)->add(static_cast< ::java::lang::Object* >(java_cast< ::org::apache::poi::hssf::record::BoundSheetRecord* >(rec)));
                npc(npc(retval)->records)->setBspos(k);
                break;
            case ::org::apache::poi::hssf::record::SSTRecord::sid:
                logObj = u"sst"_j;
                npc(retval)->sst = java_cast< ::org::apache::poi::hssf::record::SSTRecord* >(rec);
                break;
            case ::org::apache::poi::hssf::record::FontRecord::sid:
                logObj = u"font"_j;
                npc(npc(retval)->records)->setFontpos(k);
                npc(retval)->numfonts++;
                break;
            case ::org::apache::poi::hssf::record::ExtendedFormatRecord::sid:
                logObj = u"XF"_j;
                npc(npc(retval)->records)->setXfpos(k);
                npc(retval)->numxfs++;
                break;
            case ::org::apache::poi::hssf::record::TabIdRecord::sid:
                logObj = u"tabid"_j;
                npc(npc(retval)->records)->setTabpos(k);
                break;
            case ::org::apache::poi::hssf::record::ProtectRecord::sid:
                logObj = u"protect"_j;
                npc(npc(retval)->records)->setProtpos(k);
                break;
            case ::org::apache::poi::hssf::record::BackupRecord::sid:
                logObj = u"backup"_j;
                npc(npc(retval)->records)->setBackuppos(k);
                break;
            case ::org::apache::poi::hssf::record::ExternSheetRecord::sid:
                throw new ::org::apache::poi::util::RecordFormatException(u"Extern sheet is part of LinkTable"_j);
            case ::org::apache::poi::hssf::record::NameRecord::sid:
            case ::org::apache::poi::hssf::record::SupBookRecord::sid:
                npc(LOG_)->log(::org::apache::poi::util::POILogger::DEBUG, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(::java::lang::StringBuilder().append(u"found SupBook record at "_j)->append(k)->toString())}));
                npc(retval)->linkTable = new LinkTable(recs, k, npc(retval)->records, npc(retval)->commentRecords);
                k += npc(npc(retval)->linkTable)->getRecordCount() - int32_t(1);
                continue;
            case ::org::apache::poi::hssf::record::FormatRecord::sid:
                logObj = u"format"_j;
                fr = java_cast< ::org::apache::poi::hssf::record::FormatRecord* >(rec);
                npc(npc(retval)->formats)->add(static_cast< ::java::lang::Object* >(fr));
                npc(retval)->maxformatid = npc(retval)->maxformatid >= npc(fr)->getIndexCode() ? npc(retval)->maxformatid : npc(fr)->getIndexCode();
                break;
            case ::org::apache::poi::hssf::record::DateWindow1904Record::sid:
                logObj = u"datewindow1904"_j;
                npc(retval)->uses1904datewindowing = npc((java_cast< ::org::apache::poi::hssf::record::DateWindow1904Record* >(rec)))->getWindowing() == 1;
                break;
            case ::org::apache::poi::hssf::record::PaletteRecord::sid:
                logObj = u"palette"_j;
                npc(npc(retval)->records)->setPalettepos(k);
                break;
            case ::org::apache::poi::hssf::record::WindowOneRecord::sid:
                logObj = u"WindowOneRecord"_j;
                npc(retval)->windowOne = java_cast< ::org::apache::poi::hssf::record::WindowOneRecord* >(rec);
                break;
            case ::org::apache::poi::hssf::record::WriteAccessRecord::sid:
                logObj = u"WriteAccess"_j;
                npc(retval)->writeAccess = java_cast< ::org::apache::poi::hssf::record::WriteAccessRecord* >(rec);
                break;
            case ::org::apache::poi::hssf::record::WriteProtectRecord::sid:
                logObj = u"WriteProtect"_j;
                npc(retval)->writeProtect = java_cast< ::org::apache::poi::hssf::record::WriteProtectRecord* >(rec);
                break;
            case ::org::apache::poi::hssf::record::FileSharingRecord::sid:
                logObj = u"FileSharing"_j;
                npc(retval)->fileShare = java_cast< ::org::apache::poi::hssf::record::FileSharingRecord* >(rec);
                break;
            case ::org::apache::poi::hssf::record::NameCommentRecord::sid:
                logObj = u"NameComment"_j;
                ncr = java_cast< ::org::apache::poi::hssf::record::NameCommentRecord* >(rec);
                npc(npc(retval)->commentRecords)->put(npc(ncr)->getNameText(), ncr);
                break;
            case ::org::apache::poi::hssf::record::HyperlinkRecord::sid:
                logObj = u"Hyperlink"_j;
                npc(npc(retval)->hyperlinks)->add(static_cast< ::java::lang::Object* >(java_cast< ::org::apache::poi::hssf::record::HyperlinkRecord* >(rec)));
                break;
            default:
                logObj = ::java::lang::StringBuilder().append(u"(sid="_j)->append(npc(rec)->getSid())
                    ->append(u")"_j)->toString();
                break;
            }
        }

        if(!eofPassed) {
            npc(records)->add(static_cast< ::java::lang::Object* >(rec));
        }
        npc(LOG_)->log(::org::apache::poi::util::POILogger::DEBUG, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(::java::lang::StringBuilder().append(u"found "_j)->append(logObj)
            ->append(u" record at "_j)
            ->append(k)->toString())}));
        if(npc(rec)->getSid() == ::org::apache::poi::hssf::record::EOFRecord::sid) {
            eofPassed = true;
        }
    }
    if(npc(retval)->windowOne == nullptr) {
        npc(retval)->windowOne = createWindowOne();
    }
    npc(LOG_)->log(::org::apache::poi::util::POILogger::DEBUG, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(u"exit create workbook from existing file function"_j)}));
    return retval;
}

org::apache::poi::hssf::model::InternalWorkbook* org::apache::poi::hssf::model::InternalWorkbook::createWorkbook()
{
    clinit();
    npc(LOG_)->log(::org::apache::poi::util::POILogger::DEBUG, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(u"creating new workbook from scratch"_j)}));
    auto retval = new InternalWorkbook();
    ::java::util::List* records = new ::java::util::ArrayList(int32_t(30));
    npc(npc(retval)->records)->setRecords(records);
    auto formats = npc(retval)->formats;
    npc(records)->add(static_cast< ::java::lang::Object* >(createBOF()));
    npc(records)->add(static_cast< ::java::lang::Object* >(new ::org::apache::poi::hssf::record::InterfaceHdrRecord(static_cast< int32_t >(CODEPAGE))));
    npc(records)->add(static_cast< ::java::lang::Object* >(createMMS()));
    npc(records)->add(static_cast< ::java::lang::Object* >(::org::apache::poi::hssf::record::InterfaceEndRecord::instance()));
    npc(records)->add(static_cast< ::java::lang::Object* >(createWriteAccess()));
    npc(records)->add(static_cast< ::java::lang::Object* >(createCodepage()));
    npc(records)->add(static_cast< ::java::lang::Object* >(createDSF()));
    npc(records)->add(static_cast< ::java::lang::Object* >(createTabId()));
    npc(npc(retval)->records)->setTabpos(npc(records)->size() - int32_t(1));
    npc(records)->add(static_cast< ::java::lang::Object* >(createFnGroupCount()));
    npc(records)->add(static_cast< ::java::lang::Object* >(createWindowProtect()));
    npc(records)->add(static_cast< ::java::lang::Object* >(createProtect()));
    npc(npc(retval)->records)->setProtpos(npc(records)->size() - int32_t(1));
    npc(records)->add(static_cast< ::java::lang::Object* >(createPassword()));
    npc(records)->add(static_cast< ::java::lang::Object* >(createProtectionRev4()));
    npc(records)->add(static_cast< ::java::lang::Object* >(createPasswordRev4()));
    npc(retval)->windowOne = createWindowOne();
    npc(records)->add(static_cast< ::java::lang::Object* >(npc(retval)->windowOne));
    npc(records)->add(static_cast< ::java::lang::Object* >(createBackup()));
    npc(npc(retval)->records)->setBackuppos(npc(records)->size() - int32_t(1));
    npc(records)->add(static_cast< ::java::lang::Object* >(createHideObj()));
    npc(records)->add(static_cast< ::java::lang::Object* >(createDateWindow1904()));
    npc(records)->add(static_cast< ::java::lang::Object* >(createPrecision()));
    npc(records)->add(static_cast< ::java::lang::Object* >(createRefreshAll()));
    npc(records)->add(static_cast< ::java::lang::Object* >(createBookBool()));
    npc(records)->add(static_cast< ::java::lang::Object* >(createFont()));
    npc(records)->add(static_cast< ::java::lang::Object* >(createFont()));
    npc(records)->add(static_cast< ::java::lang::Object* >(createFont()));
    npc(records)->add(static_cast< ::java::lang::Object* >(createFont()));
    npc(npc(retval)->records)->setFontpos(npc(records)->size() - int32_t(1));
    npc(retval)->numfonts = 4;
    for (auto i = int32_t(0); i <= 7; i++) {
        auto rec = createFormat(i);
        npc(retval)->maxformatid = npc(retval)->maxformatid >= npc(rec)->getIndexCode() ? npc(retval)->maxformatid : npc(rec)->getIndexCode();
        npc(formats)->add(static_cast< ::java::lang::Object* >(rec));
        npc(records)->add(static_cast< ::java::lang::Object* >(rec));
    }
    for (auto k = int32_t(0); k < 21; k++) {
        npc(records)->add(static_cast< ::java::lang::Object* >(InternalWorkbook::createExtendedFormat(k)));
        npc(retval)->numxfs++;
    }
    npc(npc(retval)->records)->setXfpos(npc(records)->size() - int32_t(1));
    for (auto k = int32_t(0); k < 6; k++) {
        npc(records)->add(static_cast< ::java::lang::Object* >(InternalWorkbook::createStyle(k)));
    }
    npc(records)->add(static_cast< ::java::lang::Object* >(InternalWorkbook::createUseSelFS()));
    auto nBoundSheets = int32_t(1);
    for (auto k = int32_t(0); k < nBoundSheets; k++) {
        auto bsr = createBoundSheet(k);
        npc(records)->add(static_cast< ::java::lang::Object* >(bsr));
        npc(npc(retval)->boundsheets)->add(static_cast< ::java::lang::Object* >(bsr));
        npc(npc(retval)->records)->setBspos(npc(records)->size() - int32_t(1));
    }
    npc(records)->add(static_cast< ::java::lang::Object* >(InternalWorkbook::createCountry()));
    for (auto k = int32_t(0); k < nBoundSheets; k++) {
        npc(npc(retval)->getOrCreateLinkTable())->checkExternSheet(k);
    }
    npc(retval)->sst = new ::org::apache::poi::hssf::record::SSTRecord();
    npc(records)->add(static_cast< ::java::lang::Object* >(npc(retval)->sst));
    npc(records)->add(static_cast< ::java::lang::Object* >(InternalWorkbook::createExtendedSST()));
    npc(records)->add(static_cast< ::java::lang::Object* >(::org::apache::poi::hssf::record::EOFRecord::instance()));
    npc(LOG_)->log(::org::apache::poi::util::POILogger::DEBUG, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(u"exit create new workbook from scratch"_j)}));
    return retval;
}

org::apache::poi::hssf::record::NameRecord* org::apache::poi::hssf::model::InternalWorkbook::getSpecificBuiltinRecord(int8_t name, int32_t sheetNumber)
{
    return npc(getOrCreateLinkTable())->getSpecificBuiltinRecord(name, sheetNumber);
}

void org::apache::poi::hssf::model::InternalWorkbook::removeBuiltinRecord(int8_t name, int32_t sheetIndex)
{
    npc(linkTable)->removeBuiltinRecord(name, sheetIndex);
}

int32_t org::apache::poi::hssf::model::InternalWorkbook::getNumRecords()
{
    return npc(records)->size();
}

org::apache::poi::hssf::record::FontRecord* org::apache::poi::hssf::model::InternalWorkbook::getFontRecordAt(int32_t idx)
{
    auto index = idx;
    if(index > 4) {
        index -= 1;
    }
    if(index > (numfonts - int32_t(1))) {
        throw new ::java::lang::ArrayIndexOutOfBoundsException(::java::lang::StringBuilder().append(u"There are only "_j)->append(numfonts)
            ->append(u" font records, you asked for "_j)
            ->append(idx)->toString());
    }
    auto retval = java_cast< ::org::apache::poi::hssf::record::FontRecord* >(npc(records)->get((npc(records)->getFontpos() - (numfonts - int32_t(1))) + index));
    return retval;
}

int32_t org::apache::poi::hssf::model::InternalWorkbook::getFontIndex(::org::apache::poi::hssf::record::FontRecord* font)
{
    for (auto i = int32_t(0); i <= numfonts; i++) {
        auto thisFont = java_cast< ::org::apache::poi::hssf::record::FontRecord* >(npc(records)->get((npc(records)->getFontpos() - (numfonts - int32_t(1))) + i));
        if(thisFont == font) {
            return (i > 3) ? i + int32_t(1) : i;
        }
    }
    throw new ::java::lang::IllegalArgumentException(u"Could not find that font!"_j);
}

org::apache::poi::hssf::record::FontRecord* org::apache::poi::hssf::model::InternalWorkbook::createNewFont()
{
    auto rec = createFont();
    npc(records)->add(npc(records)->getFontpos() + int32_t(1), rec);
    npc(records)->setFontpos(npc(records)->getFontpos() + int32_t(1));
    numfonts++;
    return rec;
}

void org::apache::poi::hssf::model::InternalWorkbook::removeFontRecord(::org::apache::poi::hssf::record::FontRecord* rec)
{
    npc(records)->remove(static_cast< ::java::lang::Object* >(rec));
    numfonts--;
}

int32_t org::apache::poi::hssf::model::InternalWorkbook::getNumberOfFontRecords()
{
    return numfonts;
}

void org::apache::poi::hssf::model::InternalWorkbook::setSheetBof(int32_t sheetIndex, int32_t pos)
{
    npc(LOG_)->log(::org::apache::poi::util::POILogger::DEBUG, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(u"setting bof for sheetnum ="_j), static_cast< ::java::lang::Object* >(::java::lang::Integer::valueOf(sheetIndex)), static_cast< ::java::lang::Object* >(u" at pos="_j), static_cast< ::java::lang::Object* >(::java::lang::Integer::valueOf(pos))}));
    checkSheets(sheetIndex);
    npc(getBoundSheetRec(sheetIndex))->setPositionOfBof(pos);
}

org::apache::poi::hssf::record::BoundSheetRecord* org::apache::poi::hssf::model::InternalWorkbook::getBoundSheetRec(int32_t sheetIndex)
{
    return java_cast< ::org::apache::poi::hssf::record::BoundSheetRecord* >(npc(boundsheets)->get(sheetIndex));
}

org::apache::poi::hssf::record::BackupRecord* org::apache::poi::hssf::model::InternalWorkbook::getBackupRecord()
{
    return java_cast< ::org::apache::poi::hssf::record::BackupRecord* >(npc(records)->get(npc(records)->getBackuppos()));
}

void org::apache::poi::hssf::model::InternalWorkbook::setSheetName(int32_t sheetnum, ::java::lang::String* sheetname)
{
    checkSheets(sheetnum);
    auto sn = (npc(sheetname)->length() > 31) ? npc(sheetname)->substring(0, 31) : sheetname;
    auto sheet = java_cast< ::org::apache::poi::hssf::record::BoundSheetRecord* >(npc(boundsheets)->get(sheetnum));
    npc(sheet)->setSheetname(sn);
}

bool org::apache::poi::hssf::model::InternalWorkbook::doesContainsSheetName(::java::lang::String* name, int32_t excludeSheetIdx)
{
    auto aName = name;
    if(npc(aName)->length() > MAX_SENSITIVE_SHEET_NAME_LEN) {
        aName = npc(aName)->substring(0, MAX_SENSITIVE_SHEET_NAME_LEN);
    }
    auto i = int32_t(0);
    for (auto _i = npc(boundsheets)->iterator(); _i->hasNext(); ) {
        ::org::apache::poi::hssf::record::BoundSheetRecord* boundSheetRecord = java_cast< ::org::apache::poi::hssf::record::BoundSheetRecord* >(_i->next());
        {
            if(excludeSheetIdx == i++) {
                continue;
            }
            auto bName = npc(boundSheetRecord)->getSheetname();
            if(npc(bName)->length() > MAX_SENSITIVE_SHEET_NAME_LEN) {
                bName = npc(bName)->substring(0, MAX_SENSITIVE_SHEET_NAME_LEN);
            }
            if(npc(aName)->equalsIgnoreCase(bName)) {
                return true;
            }
        }
    }
    return false;
}

void org::apache::poi::hssf::model::InternalWorkbook::setSheetOrder(::java::lang::String* sheetname, int32_t pos)
{
    auto sheetNumber = getSheetIndex(sheetname);
    npc(boundsheets)->add(pos, java_cast< ::org::apache::poi::hssf::record::BoundSheetRecord* >(npc(boundsheets)->remove(sheetNumber)));
    auto initialBspos = npc(records)->getBspos();
    auto pos0 = initialBspos - (npc(boundsheets)->size() - int32_t(1));
    auto removed = npc(records)->get(pos0 + sheetNumber);
    npc(records)->remove(pos0 + sheetNumber);
    npc(records)->add(pos0 + pos, removed);
    npc(records)->setBspos(initialBspos);
}

java::lang::String* org::apache::poi::hssf::model::InternalWorkbook::getSheetName(int32_t sheetIndex)
{
    return npc(getBoundSheetRec(sheetIndex))->getSheetname();
}

bool org::apache::poi::hssf::model::InternalWorkbook::isSheetHidden(int32_t sheetnum)
{
    return npc(getBoundSheetRec(sheetnum))->isHidden();
}

bool org::apache::poi::hssf::model::InternalWorkbook::isSheetVeryHidden(int32_t sheetnum)
{
    return npc(getBoundSheetRec(sheetnum))->isVeryHidden();
}

org::apache::poi::ss::usermodel::SheetVisibility* org::apache::poi::hssf::model::InternalWorkbook::getSheetVisibility(int32_t sheetnum)
{
    auto const bsr = getBoundSheetRec(sheetnum);
    if(npc(bsr)->isVeryHidden()) {
        return ::org::apache::poi::ss::usermodel::SheetVisibility::VERY_HIDDEN;
    }
    if(npc(bsr)->isHidden()) {
        return ::org::apache::poi::ss::usermodel::SheetVisibility::HIDDEN;
    }
    return ::org::apache::poi::ss::usermodel::SheetVisibility::VISIBLE;
}

void org::apache::poi::hssf::model::InternalWorkbook::setSheetHidden(int32_t sheetnum, bool hidden)
{
    setSheetHidden(sheetnum, hidden ? ::org::apache::poi::ss::usermodel::SheetVisibility::HIDDEN : ::org::apache::poi::ss::usermodel::SheetVisibility::VISIBLE);
}

void org::apache::poi::hssf::model::InternalWorkbook::setSheetHidden(int32_t sheetnum, ::org::apache::poi::ss::usermodel::SheetVisibility* visibility)
{
    auto bsr = getBoundSheetRec(sheetnum);
    npc(bsr)->setHidden(visibility == ::org::apache::poi::ss::usermodel::SheetVisibility::HIDDEN);
    npc(bsr)->setVeryHidden(visibility == ::org::apache::poi::ss::usermodel::SheetVisibility::VERY_HIDDEN);
}

int32_t org::apache::poi::hssf::model::InternalWorkbook::getSheetIndex(::java::lang::String* name)
{
    auto retval = -int32_t(1);
    auto const size = npc(boundsheets)->size();
    for (auto k = int32_t(0); k < size; k++) {
        auto sheet = getSheetName(k);
        if(npc(sheet)->equalsIgnoreCase(name)) {
            retval = k;
            break;
        }
    }
    return retval;
}

void org::apache::poi::hssf::model::InternalWorkbook::checkSheets(int32_t sheetnum)
{
    if((npc(boundsheets)->size()) <= sheetnum) {
        if((npc(boundsheets)->size() + int32_t(1)) <= sheetnum) {
            throw new ::java::lang::RuntimeException(u"Sheet number out of bounds!"_j);
        }
        auto bsr = createBoundSheet(sheetnum);
        npc(records)->add(npc(records)->getBspos() + int32_t(1), bsr);
        npc(records)->setBspos(npc(records)->getBspos() + int32_t(1));
        npc(boundsheets)->add(static_cast< ::java::lang::Object* >(bsr));
        npc(getOrCreateLinkTable())->checkExternSheet(sheetnum);
        fixTabIdRecord();
    }
}

void org::apache::poi::hssf::model::InternalWorkbook::removeSheet(int32_t sheetIndex)
{
    if(npc(boundsheets)->size() > sheetIndex) {
        npc(records)->remove(npc(records)->getBspos() - (npc(boundsheets)->size() - int32_t(1)) + sheetIndex);
        npc(boundsheets)->remove(sheetIndex);
        fixTabIdRecord();
    }
    auto sheetNum1Based = sheetIndex + int32_t(1);
    for (auto i = int32_t(0); i < getNumNames(); i++) {
        auto nr = getNameRecord(i);
        if(npc(nr)->getSheetNumber() == sheetNum1Based) {
            npc(nr)->setSheetNumber(0);
        } else if(npc(nr)->getSheetNumber() > sheetNum1Based) {
            npc(nr)->setSheetNumber(npc(nr)->getSheetNumber() - int32_t(1));
        }
    }
    if(linkTable != nullptr) {
        npc(linkTable)->removeSheet(sheetIndex);
    }
}

void org::apache::poi::hssf::model::InternalWorkbook::fixTabIdRecord()
{
    auto rec = npc(records)->get(npc(records)->getTabpos());
    if(npc(records)->getTabpos() <= 0) {
        return;
    }
    auto tir = java_cast< ::org::apache::poi::hssf::record::TabIdRecord* >(rec);
    auto tia = new ::int16_tArray(npc(boundsheets)->size());
    for (int16_t k = int32_t(0); k < npc(tia)->length; k++) {
        (*tia)[k] = k;
    }
    npc(tir)->setTabIdArray_(tia);
}

int32_t org::apache::poi::hssf::model::InternalWorkbook::getNumSheets()
{
    npc(LOG_)->log(::org::apache::poi::util::POILogger::DEBUG, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(u"getNumSheets="_j), static_cast< ::java::lang::Object* >(::java::lang::Integer::valueOf(npc(boundsheets)->size()))}));
    return npc(boundsheets)->size();
}

int32_t org::apache::poi::hssf::model::InternalWorkbook::getNumExFormats()
{
    npc(LOG_)->log(::org::apache::poi::util::POILogger::DEBUG, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(u"getXF="_j), static_cast< ::java::lang::Object* >(::java::lang::Integer::valueOf(numxfs))}));
    return numxfs;
}

org::apache::poi::hssf::record::ExtendedFormatRecord* org::apache::poi::hssf::model::InternalWorkbook::getExFormatAt(int32_t index)
{
    auto xfptr = npc(records)->getXfpos() - (numxfs - int32_t(1));
    xfptr += index;
    auto retval = java_cast< ::org::apache::poi::hssf::record::ExtendedFormatRecord* >(npc(records)->get(xfptr));
    return retval;
}

void org::apache::poi::hssf::model::InternalWorkbook::removeExFormatRecord(::org::apache::poi::hssf::record::ExtendedFormatRecord* rec)
{
    npc(records)->remove(static_cast< ::java::lang::Object* >(rec));
    numxfs--;
}

void org::apache::poi::hssf::model::InternalWorkbook::removeExFormatRecord(int32_t index)
{
    auto xfptr = npc(records)->getXfpos() - (numxfs - int32_t(1)) + index;
    npc(records)->remove(xfptr);
    numxfs--;
}

org::apache::poi::hssf::record::ExtendedFormatRecord* org::apache::poi::hssf::model::InternalWorkbook::createCellXF()
{
    auto xf = createExtendedFormat();
    npc(records)->add(npc(records)->getXfpos() + int32_t(1), xf);
    npc(records)->setXfpos(npc(records)->getXfpos() + int32_t(1));
    numxfs++;
    return xf;
}

org::apache::poi::hssf::record::StyleRecord* org::apache::poi::hssf::model::InternalWorkbook::getStyleRecord(int32_t xfIndex)
{
    for (auto i = npc(records)->getXfpos(); i < npc(records)->size(); i++) {
        auto r = npc(records)->get(i);
        if(dynamic_cast< ::org::apache::poi::hssf::record::StyleRecord* >(r) != nullptr) {
            auto sr = java_cast< ::org::apache::poi::hssf::record::StyleRecord* >(r);
            if(npc(sr)->getXFIndex() == xfIndex) {
                return sr;
            }
        }
    }
    return nullptr;
}

org::apache::poi::hssf::record::StyleRecord* org::apache::poi::hssf::model::InternalWorkbook::createStyleRecord(int32_t xfIndex)
{
    auto newSR = new ::org::apache::poi::hssf::record::StyleRecord();
    npc(newSR)->setXFIndex(xfIndex);
    auto addAt = -int32_t(1);
    for (auto i = npc(records)->getXfpos(); i < npc(records)->size() && addAt == -int32_t(1); i++) {
        auto r = npc(records)->get(i);
        if(dynamic_cast< ::org::apache::poi::hssf::record::ExtendedFormatRecord* >(r) != nullptr || dynamic_cast< ::org::apache::poi::hssf::record::StyleRecord* >(r) != nullptr) {
        } else {
            addAt = i;
        }
    }
    if(addAt == -int32_t(1)) {
        throw new ::java::lang::IllegalStateException(u"No XF Records found!"_j);
    }
    npc(records)->add(addAt, newSR);
    return newSR;
}

int32_t org::apache::poi::hssf::model::InternalWorkbook::addSSTString(::org::apache::poi::hssf::record::common::UnicodeString* string)
{
    npc(LOG_)->log(::org::apache::poi::util::POILogger::DEBUG, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(u"insert to sst string='"_j), static_cast< ::java::lang::Object* >(string)}));
    if(sst == nullptr) {
        insertSST();
    }
    return npc(sst)->addString(string);
}

org::apache::poi::hssf::record::common::UnicodeString* org::apache::poi::hssf::model::InternalWorkbook::getSSTString(int32_t str)
{
    if(sst == nullptr) {
        insertSST();
    }
    auto retval = npc(sst)->getString(str);
    npc(LOG_)->log(::org::apache::poi::util::POILogger::DEBUG, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(u"Returning SST for index="_j), static_cast< ::java::lang::Object* >(::java::lang::Integer::valueOf(str)), static_cast< ::java::lang::Object* >(u" String= "_j), static_cast< ::java::lang::Object* >(retval)}));
    return retval;
}

void org::apache::poi::hssf::model::InternalWorkbook::insertSST()
{
    npc(LOG_)->log(::org::apache::poi::util::POILogger::DEBUG, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(u"creating new SST via insertSST!"_j)}));
    sst = new ::org::apache::poi::hssf::record::SSTRecord();
    npc(records)->add(npc(records)->size() - int32_t(1), createExtendedSST());
    npc(records)->add(npc(records)->size() - int32_t(2), sst);
}

int32_t org::apache::poi::hssf::model::InternalWorkbook::serialize(int32_t offset, ::int8_tArray* data)
{
    npc(LOG_)->log(::org::apache::poi::util::POILogger::DEBUG, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(u"Serializing Workbook with offsets"_j)}));
    auto pos = int32_t(0);
    ::org::apache::poi::hssf::record::SSTRecord* lSST = nullptr;
    auto sstPos = int32_t(0);
    auto wroteBoundSheets = false;
    for (auto _i = npc(npc(records)->getRecords())->iterator(); _i->hasNext(); ) {
        ::org::apache::poi::hssf::record::Record* record = java_cast< ::org::apache::poi::hssf::record::Record* >(_i->next());
        {
            auto len = int32_t(0);
            if(dynamic_cast< ::org::apache::poi::hssf::record::SSTRecord* >(record) != nullptr) {
                lSST = java_cast< ::org::apache::poi::hssf::record::SSTRecord* >(record);
                sstPos = pos;
            }
            if(npc(record)->getSid() == ::org::apache::poi::hssf::record::ExtSSTRecord::sid && lSST != nullptr) {
                record = npc(lSST)->createExtSSTRecord(sstPos + offset);
            }
            if(dynamic_cast< ::org::apache::poi::hssf::record::BoundSheetRecord* >(record) != nullptr) {
                if(!wroteBoundSheets) {
                    for (auto _i = npc(boundsheets)->iterator(); _i->hasNext(); ) {
                        ::org::apache::poi::hssf::record::BoundSheetRecord* bsr = java_cast< ::org::apache::poi::hssf::record::BoundSheetRecord* >(_i->next());
                        {
                            len += npc(bsr)->serialize(pos + offset + len, data);
                        }
                    }
                    wroteBoundSheets = true;
                }
            } else {
                len = npc(record)->serialize(pos + offset, data);
            }
            pos += len;
        }
    }
    npc(LOG_)->log(::org::apache::poi::util::POILogger::DEBUG, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(u"Exiting serialize workbook"_j)}));
    return pos;
}

void org::apache::poi::hssf::model::InternalWorkbook::preSerialize()
{
    if(npc(records)->getTabpos() > 0) {
        auto tir = java_cast< ::org::apache::poi::hssf::record::TabIdRecord* >(npc(records)->get(npc(records)->getTabpos()));
        if(npc(npc(tir)->_tabids)->length < npc(boundsheets)->size()) {
            fixTabIdRecord();
        }
    }
}

int32_t org::apache::poi::hssf::model::InternalWorkbook::getSize()
{
    auto retval = int32_t(0);
    ::org::apache::poi::hssf::record::SSTRecord* lSST = nullptr;
    for (auto _i = npc(npc(records)->getRecords())->iterator(); _i->hasNext(); ) {
        ::org::apache::poi::hssf::record::Record* record = java_cast< ::org::apache::poi::hssf::record::Record* >(_i->next());
        {
            if(dynamic_cast< ::org::apache::poi::hssf::record::SSTRecord* >(record) != nullptr) {
                lSST = java_cast< ::org::apache::poi::hssf::record::SSTRecord* >(record);
            }
            if(npc(record)->getSid() == ::org::apache::poi::hssf::record::ExtSSTRecord::sid && lSST != nullptr) {
                retval += npc(lSST)->calcExtSSTRecordSize();
            } else {
                retval += npc(record)->getRecordSize();
            }
        }
    }
    return retval;
}

org::apache::poi::hssf::record::BOFRecord* org::apache::poi::hssf::model::InternalWorkbook::createBOF()
{
    clinit();
    auto retval = new ::org::apache::poi::hssf::record::BOFRecord();
    npc(retval)->setVersion(static_cast< int16_t >(int32_t(1536)));
    npc(retval)->setType(::org::apache::poi::hssf::record::BOFRecord::TYPE_WORKBOOK);
    npc(retval)->setBuild(static_cast< int16_t >(int32_t(4307)));
    npc(retval)->setBuildYear(static_cast< int16_t >(int32_t(1996)));
    npc(retval)->setHistoryBitMask(65);
    npc(retval)->setRequiredVersion(6);
    return retval;
}

org::apache::poi::hssf::record::MMSRecord* org::apache::poi::hssf::model::InternalWorkbook::createMMS()
{
    clinit();
    auto retval = new ::org::apache::poi::hssf::record::MMSRecord();
    npc(retval)->setAddMenuCount(static_cast< int8_t >(int32_t(0)));
    npc(retval)->setDelMenuCount(static_cast< int8_t >(int32_t(0)));
    return retval;
}

org::apache::poi::hssf::record::WriteAccessRecord* org::apache::poi::hssf::model::InternalWorkbook::createWriteAccess()
{
    clinit();
    auto retval = new ::org::apache::poi::hssf::record::WriteAccessRecord();
    auto defaultUserName = u"POI"_j;
    try {
        auto username = ::java::lang::System::getProperty(u"user.name"_j);
        if(username == nullptr) {
            username = defaultUserName;
        }
        npc(retval)->setUsername(username);
    } catch (::java::security::AccessControlException* e) {
        npc(LOG_)->log(::org::apache::poi::util::POILogger::WARN, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(u"can't determine user.name"_j), static_cast< ::java::lang::Object* >(e)}));
        npc(retval)->setUsername(defaultUserName);
    }
    return retval;
}

org::apache::poi::hssf::record::CodepageRecord* org::apache::poi::hssf::model::InternalWorkbook::createCodepage()
{
    clinit();
    auto retval = new ::org::apache::poi::hssf::record::CodepageRecord();
    npc(retval)->setCodepage(CODEPAGE);
    return retval;
}

org::apache::poi::hssf::record::DSFRecord* org::apache::poi::hssf::model::InternalWorkbook::createDSF()
{
    clinit();
    return new ::org::apache::poi::hssf::record::DSFRecord(false);
}

org::apache::poi::hssf::record::TabIdRecord* org::apache::poi::hssf::model::InternalWorkbook::createTabId()
{
    clinit();
    return new ::org::apache::poi::hssf::record::TabIdRecord();
}

org::apache::poi::hssf::record::FnGroupCountRecord* org::apache::poi::hssf::model::InternalWorkbook::createFnGroupCount()
{
    clinit();
    auto retval = new ::org::apache::poi::hssf::record::FnGroupCountRecord();
    npc(retval)->setCount(static_cast< int16_t >(int32_t(14)));
    return retval;
}

org::apache::poi::hssf::record::WindowProtectRecord* org::apache::poi::hssf::model::InternalWorkbook::createWindowProtect()
{
    clinit();
    return new ::org::apache::poi::hssf::record::WindowProtectRecord(false);
}

org::apache::poi::hssf::record::ProtectRecord* org::apache::poi::hssf::model::InternalWorkbook::createProtect()
{
    clinit();
    return new ::org::apache::poi::hssf::record::ProtectRecord(false);
}

org::apache::poi::hssf::record::PasswordRecord* org::apache::poi::hssf::model::InternalWorkbook::createPassword()
{
    clinit();
    return new ::org::apache::poi::hssf::record::PasswordRecord(int32_t(0));
}

org::apache::poi::hssf::record::ProtectionRev4Record* org::apache::poi::hssf::model::InternalWorkbook::createProtectionRev4()
{
    clinit();
    return new ::org::apache::poi::hssf::record::ProtectionRev4Record(false);
}

org::apache::poi::hssf::record::PasswordRev4Record* org::apache::poi::hssf::model::InternalWorkbook::createPasswordRev4()
{
    clinit();
    return new ::org::apache::poi::hssf::record::PasswordRev4Record(int32_t(0));
}

org::apache::poi::hssf::record::WindowOneRecord* org::apache::poi::hssf::model::InternalWorkbook::createWindowOne()
{
    clinit();
    auto retval = new ::org::apache::poi::hssf::record::WindowOneRecord();
    npc(retval)->setHorizontalHold(static_cast< int16_t >(int32_t(360)));
    npc(retval)->setVerticalHold(static_cast< int16_t >(int32_t(270)));
    npc(retval)->setWidth(static_cast< int16_t >(int32_t(14940)));
    npc(retval)->setHeight(static_cast< int16_t >(int32_t(9150)));
    npc(retval)->setOptions(static_cast< int16_t >(int32_t(56)));
    npc(retval)->setActiveSheetIndex(0);
    npc(retval)->setFirstVisibleTab(0);
    npc(retval)->setNumSelectedTabs(static_cast< int16_t >(int32_t(1)));
    npc(retval)->setTabWidthRatio(static_cast< int16_t >(int32_t(600)));
    return retval;
}

org::apache::poi::hssf::record::BackupRecord* org::apache::poi::hssf::model::InternalWorkbook::createBackup()
{
    clinit();
    auto retval = new ::org::apache::poi::hssf::record::BackupRecord();
    npc(retval)->setBackup(static_cast< int16_t >(int32_t(0)));
    return retval;
}

org::apache::poi::hssf::record::HideObjRecord* org::apache::poi::hssf::model::InternalWorkbook::createHideObj()
{
    clinit();
    auto retval = new ::org::apache::poi::hssf::record::HideObjRecord();
    npc(retval)->setHideObj(static_cast< int16_t >(int32_t(0)));
    return retval;
}

org::apache::poi::hssf::record::DateWindow1904Record* org::apache::poi::hssf::model::InternalWorkbook::createDateWindow1904()
{
    clinit();
    auto retval = new ::org::apache::poi::hssf::record::DateWindow1904Record();
    npc(retval)->setWindowing(static_cast< int16_t >(int32_t(0)));
    return retval;
}

org::apache::poi::hssf::record::PrecisionRecord* org::apache::poi::hssf::model::InternalWorkbook::createPrecision()
{
    clinit();
    auto retval = new ::org::apache::poi::hssf::record::PrecisionRecord();
    npc(retval)->setFullPrecision(true);
    return retval;
}

org::apache::poi::hssf::record::RefreshAllRecord* org::apache::poi::hssf::model::InternalWorkbook::createRefreshAll()
{
    clinit();
    return new ::org::apache::poi::hssf::record::RefreshAllRecord(false);
}

org::apache::poi::hssf::record::BookBoolRecord* org::apache::poi::hssf::model::InternalWorkbook::createBookBool()
{
    clinit();
    auto retval = new ::org::apache::poi::hssf::record::BookBoolRecord();
    npc(retval)->setSaveLinkValues(static_cast< int16_t >(int32_t(0)));
    return retval;
}

org::apache::poi::hssf::record::FontRecord* org::apache::poi::hssf::model::InternalWorkbook::createFont()
{
    clinit();
    auto retval = new ::org::apache::poi::hssf::record::FontRecord();
    npc(retval)->setFontHeight(static_cast< int16_t >(int32_t(200)));
    npc(retval)->setAttributes(static_cast< int16_t >(int32_t(0)));
    npc(retval)->setColorPaletteIndex(static_cast< int16_t >(int32_t(32767)));
    npc(retval)->setBoldWeight(static_cast< int16_t >(int32_t(400)));
    npc(retval)->setFontName(u"Arial"_j);
    return retval;
}

org::apache::poi::hssf::record::FormatRecord* org::apache::poi::hssf::model::InternalWorkbook::createFormat(int32_t id)
{
    clinit();
    auto const mappings = (new ::int32_tArray({
        int32_t(5)
        , int32_t(6)
        , int32_t(7)
        , int32_t(8)
        , int32_t(42)
        , int32_t(41)
        , int32_t(44)
        , int32_t(43)
    }));
    if(id < 0 || id >= npc(mappings)->length) {
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Unexpected id "_j)->append(id)->toString());
    }
    return new ::org::apache::poi::hssf::record::FormatRecord((*mappings)[id], ::org::apache::poi::ss::usermodel::BuiltinFormats::getBuiltinFormat((*mappings)[id]));
}

org::apache::poi::hssf::record::ExtendedFormatRecord* org::apache::poi::hssf::model::InternalWorkbook::createExtendedFormat(int32_t id)
{
    clinit();
    switch (id) {
    case int32_t(0):
        return createExtendedFormat(0, 0, -11, 0);
    case int32_t(1):
    case int32_t(2):
        return createExtendedFormat(1, 0, -11, -3072);
    case int32_t(3):
    case int32_t(4):
        return createExtendedFormat(2, 0, -11, -3072);
    case int32_t(5):
    case int32_t(6):
    case int32_t(7):
    case int32_t(8):
    case int32_t(9):
    case int32_t(10):
    case int32_t(11):
    case int32_t(12):
    case int32_t(13):
    case int32_t(14):
        return createExtendedFormat(0, 0, -11, -3072);
    case int32_t(15):
        return createExtendedFormat(0, 0, 1, 0);
    case int32_t(16):
        return createExtendedFormat(1, 43, -11, -2048);
    case int32_t(17):
        return createExtendedFormat(1, 41, -11, -2048);
    case int32_t(18):
        return createExtendedFormat(1, 44, -11, -2048);
    case int32_t(19):
        return createExtendedFormat(1, 42, -11, -2048);
    case int32_t(20):
        return createExtendedFormat(1, 9, -11, -2048);
    case int32_t(21):
        return createExtendedFormat(5, 0, 1, 2048);
    case int32_t(22):
        return createExtendedFormat(6, 0, 1, 23552);
    case int32_t(23):
        return createExtendedFormat(0, 49, 1, 23552);
    case int32_t(24):
        return createExtendedFormat(0, 8, 1, 23552);
    case int32_t(25):
        return createExtendedFormat(6, 8, 1, 23552);
    default:
        throw new ::java::lang::IllegalStateException(::java::lang::StringBuilder().append(u"Unrecognized format id: "_j)->append(id)->toString());
    }

}

org::apache::poi::hssf::record::ExtendedFormatRecord* org::apache::poi::hssf::model::InternalWorkbook::createExtendedFormat(int32_t fontIndex, int32_t formatIndex, int32_t cellOptions, int32_t indentionOptions)
{
    clinit();
    auto retval = new ::org::apache::poi::hssf::record::ExtendedFormatRecord();
    npc(retval)->setFontIndex(static_cast< int16_t >(fontIndex));
    npc(retval)->setFormatIndex(static_cast< int16_t >(formatIndex));
    npc(retval)->setCellOptions(static_cast< int16_t >(cellOptions));
    npc(retval)->setAlignmentOptions(static_cast< int16_t >(int32_t(32)));
    npc(retval)->setIndentionOptions(static_cast< int16_t >(indentionOptions));
    npc(retval)->setBorderOptions(static_cast< int16_t >(int32_t(0)));
    npc(retval)->setPaletteOptions(static_cast< int16_t >(int32_t(0)));
    npc(retval)->setAdtlPaletteOptions(static_cast< int16_t >(int32_t(0)));
    npc(retval)->setFillPaletteOptions(static_cast< int16_t >(int32_t(8384)));
    return retval;
}

org::apache::poi::hssf::record::ExtendedFormatRecord* org::apache::poi::hssf::model::InternalWorkbook::createExtendedFormat()
{
    clinit();
    auto retval = new ::org::apache::poi::hssf::record::ExtendedFormatRecord();
    npc(retval)->setFontIndex(static_cast< int16_t >(int32_t(0)));
    npc(retval)->setFormatIndex(static_cast< int16_t >(int32_t(0)));
    npc(retval)->setCellOptions(static_cast< int16_t >(int32_t(1)));
    npc(retval)->setAlignmentOptions(static_cast< int16_t >(int32_t(32)));
    npc(retval)->setIndentionOptions(static_cast< int16_t >(int32_t(0)));
    npc(retval)->setBorderOptions(static_cast< int16_t >(int32_t(0)));
    npc(retval)->setPaletteOptions(static_cast< int16_t >(int32_t(0)));
    npc(retval)->setAdtlPaletteOptions(static_cast< int16_t >(int32_t(0)));
    npc(retval)->setFillPaletteOptions(static_cast< int16_t >(int32_t(8384)));
    npc(retval)->setTopBorderPaletteIdx(npc(::org::apache::poi::hssf::util::HSSFColor_HSSFColorPredefined::BLACK)->getIndex());
    npc(retval)->setBottomBorderPaletteIdx(npc(::org::apache::poi::hssf::util::HSSFColor_HSSFColorPredefined::BLACK)->getIndex());
    npc(retval)->setLeftBorderPaletteIdx(npc(::org::apache::poi::hssf::util::HSSFColor_HSSFColorPredefined::BLACK)->getIndex());
    npc(retval)->setRightBorderPaletteIdx(npc(::org::apache::poi::hssf::util::HSSFColor_HSSFColorPredefined::BLACK)->getIndex());
    return retval;
}

org::apache::poi::hssf::record::StyleRecord* org::apache::poi::hssf::model::InternalWorkbook::createStyle(int32_t id)
{
    clinit();
    auto const mappings = (new ::int32_tArrayArray({
        (new ::int32_tArray({
        int32_t(16)
        , int32_t(3)
    }))
        , (new ::int32_tArray({
        int32_t(17)
        , int32_t(6)
    }))
        , (new ::int32_tArray({
        int32_t(18)
        , int32_t(4)
    }))
        , (new ::int32_tArray({
        int32_t(19)
        , int32_t(7)
    }))
        , (new ::int32_tArray({
        int32_t(0)
        , int32_t(0)
    }))
        , (new ::int32_tArray({
        int32_t(20)
        , int32_t(5)
    }))
    }));
    if(id < 0 || id >= npc(mappings)->length) {
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Unexpected style id "_j)->append(id)->toString());
    }
    auto retval = new ::org::apache::poi::hssf::record::StyleRecord();
    npc(retval)->setOutlineStyleLevel(static_cast< int8_t >(int32_t(-1)));
    npc(retval)->setXFIndex((*(*mappings)[id])[int32_t(0)]);
    npc(retval)->setBuiltinStyle((*(*mappings)[id])[int32_t(1)]);
    return retval;
}

org::apache::poi::hssf::record::PaletteRecord* org::apache::poi::hssf::model::InternalWorkbook::createPalette()
{
    clinit();
    return new ::org::apache::poi::hssf::record::PaletteRecord();
}

org::apache::poi::hssf::record::UseSelFSRecord* org::apache::poi::hssf::model::InternalWorkbook::createUseSelFS()
{
    clinit();
    return new ::org::apache::poi::hssf::record::UseSelFSRecord(false);
}

org::apache::poi::hssf::record::BoundSheetRecord* org::apache::poi::hssf::model::InternalWorkbook::createBoundSheet(int32_t id)
{
    clinit();
    return new ::org::apache::poi::hssf::record::BoundSheetRecord(::java::lang::StringBuilder().append(u"Sheet"_j)->append((id + int32_t(1)))->toString());
}

org::apache::poi::hssf::record::CountryRecord* org::apache::poi::hssf::model::InternalWorkbook::createCountry()
{
    clinit();
    auto retval = new ::org::apache::poi::hssf::record::CountryRecord();
    npc(retval)->setDefaultCountry(static_cast< int16_t >(int32_t(1)));
    if(npc(u"ru_RU"_j)->equals(static_cast< ::java::lang::Object* >(npc(::org::apache::poi::util::LocaleUtil::getUserLocale())->toString()))) {
        npc(retval)->setCurrentCountry(static_cast< int16_t >(int32_t(7)));
    } else {
        npc(retval)->setCurrentCountry(static_cast< int16_t >(int32_t(1)));
    }
    return retval;
}

org::apache::poi::hssf::record::ExtSSTRecord* org::apache::poi::hssf::model::InternalWorkbook::createExtendedSST()
{
    clinit();
    auto retval = new ::org::apache::poi::hssf::record::ExtSSTRecord();
    npc(retval)->setNumStringsPerBucket(static_cast< int16_t >(int32_t(8)));
    return retval;
}

org::apache::poi::hssf::model::LinkTable* org::apache::poi::hssf::model::InternalWorkbook::getOrCreateLinkTable()
{
    if(linkTable == nullptr) {
        linkTable = new LinkTable(static_cast< int16_t >(getNumSheets()), records);
    }
    return linkTable;
}

int32_t org::apache::poi::hssf::model::InternalWorkbook::linkExternalWorkbook(::java::lang::String* name, ::org::apache::poi::ss::usermodel::Workbook* externalWorkbook)
{
    return npc(getOrCreateLinkTable())->linkExternalWorkbook(name, externalWorkbook);
}

java::lang::String* org::apache::poi::hssf::model::InternalWorkbook::findSheetFirstNameFromExternSheet(int32_t externSheetIndex)
{
    auto indexToSheet = npc(linkTable)->getFirstInternalSheetIndexForExtIndex(externSheetIndex);
    return findSheetNameFromIndex(indexToSheet);
}

java::lang::String* org::apache::poi::hssf::model::InternalWorkbook::findSheetLastNameFromExternSheet(int32_t externSheetIndex)
{
    auto indexToSheet = npc(linkTable)->getLastInternalSheetIndexForExtIndex(externSheetIndex);
    return findSheetNameFromIndex(indexToSheet);
}

java::lang::String* org::apache::poi::hssf::model::InternalWorkbook::findSheetNameFromIndex(int32_t internalSheetIndex)
{
    if(internalSheetIndex < 0) {
        return u""_j;
    }
    if(internalSheetIndex >= npc(boundsheets)->size()) {
        return u""_j;
    }
    return getSheetName(internalSheetIndex);
}

org::apache::poi::ss::formula::EvaluationWorkbook_ExternalSheet* org::apache::poi::hssf::model::InternalWorkbook::getExternalSheet(int32_t externSheetIndex)
{
    auto extNames = npc(linkTable)->getExternalBookAndSheetName(externSheetIndex);
    if(extNames == nullptr) {
        return nullptr;
    }
    if(npc(extNames)->length == 2) {
        return new ::org::apache::poi::ss::formula::EvaluationWorkbook_ExternalSheet((*extNames)[int32_t(0)], (*extNames)[int32_t(1)]);
    } else {
        return new ::org::apache::poi::ss::formula::EvaluationWorkbook_ExternalSheetRange((*extNames)[int32_t(0)], (*extNames)[int32_t(1)], (*extNames)[int32_t(2)]);
    }
}

org::apache::poi::ss::formula::EvaluationWorkbook_ExternalName* org::apache::poi::hssf::model::InternalWorkbook::getExternalName(int32_t externSheetIndex, int32_t externNameIndex)
{
    auto nameName = npc(linkTable)->resolveNameXText(externSheetIndex, externNameIndex, this);
    if(nameName == nullptr) {
        return nullptr;
    }
    auto ix = npc(linkTable)->resolveNameXIx(externSheetIndex, externNameIndex);
    return new ::org::apache::poi::ss::formula::EvaluationWorkbook_ExternalName(nameName, externNameIndex, ix);
}

int32_t org::apache::poi::hssf::model::InternalWorkbook::getFirstSheetIndexFromExternSheetIndex(int32_t externSheetNumber)
{
    return npc(linkTable)->getFirstInternalSheetIndexForExtIndex(externSheetNumber);
}

int32_t org::apache::poi::hssf::model::InternalWorkbook::getLastSheetIndexFromExternSheetIndex(int32_t externSheetNumber)
{
    return npc(linkTable)->getLastInternalSheetIndexForExtIndex(externSheetNumber);
}

int16_t org::apache::poi::hssf::model::InternalWorkbook::checkExternSheet(int32_t sheetNumber)
{
    return static_cast< int16_t >(npc(getOrCreateLinkTable())->checkExternSheet(sheetNumber));
}

int16_t org::apache::poi::hssf::model::InternalWorkbook::checkExternSheet(int32_t firstSheetNumber, int32_t lastSheetNumber)
{
    return static_cast< int16_t >(npc(getOrCreateLinkTable())->checkExternSheet(firstSheetNumber, lastSheetNumber));
}

int32_t org::apache::poi::hssf::model::InternalWorkbook::getExternalSheetIndex(::java::lang::String* workbookName, ::java::lang::String* sheetName)
{
    return npc(getOrCreateLinkTable())->getExternalSheetIndex(workbookName, sheetName, sheetName);
}

int32_t org::apache::poi::hssf::model::InternalWorkbook::getExternalSheetIndex(::java::lang::String* workbookName, ::java::lang::String* firstSheetName, ::java::lang::String* lastSheetName)
{
    return npc(getOrCreateLinkTable())->getExternalSheetIndex(workbookName, firstSheetName, lastSheetName);
}

int32_t org::apache::poi::hssf::model::InternalWorkbook::getNumNames()
{
    if(linkTable == nullptr) {
        return 0;
    }
    return npc(linkTable)->getNumNames();
}

org::apache::poi::hssf::record::NameRecord* org::apache::poi::hssf::model::InternalWorkbook::getNameRecord(int32_t index)
{
    return npc(linkTable)->getNameRecord(index);
}

org::apache::poi::hssf::record::NameCommentRecord* org::apache::poi::hssf::model::InternalWorkbook::getNameCommentRecord(::org::apache::poi::hssf::record::NameRecord* nameRecord)
{
    return java_cast< ::org::apache::poi::hssf::record::NameCommentRecord* >(npc(commentRecords)->get(npc(nameRecord)->getNameText()));
}

org::apache::poi::hssf::record::NameRecord* org::apache::poi::hssf::model::InternalWorkbook::createName()
{
    return addName(new ::org::apache::poi::hssf::record::NameRecord());
}

org::apache::poi::hssf::record::NameRecord* org::apache::poi::hssf::model::InternalWorkbook::addName(::org::apache::poi::hssf::record::NameRecord* name)
{
    npc(getOrCreateLinkTable())->addName(name);
    return name;
}

org::apache::poi::hssf::record::NameRecord* org::apache::poi::hssf::model::InternalWorkbook::createBuiltInName(int8_t builtInName, int32_t sheetNumber)
{
    if(sheetNumber < 0 || sheetNumber + int32_t(1) > ::java::lang::Short::MAX_VALUE) {
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Sheet number ["_j)->append(sheetNumber)
            ->append(u"]is not valid "_j)->toString());
    }
    auto name = new ::org::apache::poi::hssf::record::NameRecord(builtInName, sheetNumber);
    if(npc(linkTable)->nameAlreadyExists(name)) {
        throw new ::java::lang::RuntimeException(::java::lang::StringBuilder().append(u"Builtin ("_j)->append(builtInName)
            ->append(u") already exists for sheet ("_j)
            ->append(sheetNumber)
            ->append(u")"_j)->toString());
    }
    addName(name);
    return name;
}

void org::apache::poi::hssf::model::InternalWorkbook::removeName(int32_t nameIndex)
{
    if(npc(linkTable)->getNumNames() > nameIndex) {
        auto idx = findFirstRecordLocBySid(::org::apache::poi::hssf::record::NameRecord::sid);
        npc(records)->remove(idx + nameIndex);
        npc(linkTable)->removeName(nameIndex);
    }
}

void org::apache::poi::hssf::model::InternalWorkbook::updateNameCommentRecordCache(::org::apache::poi::hssf::record::NameCommentRecord* commentRecord)
{
    if(npc(commentRecords)->containsValue(commentRecord)) {
        for (auto _i = npc(npc(commentRecords)->entrySet())->iterator(); _i->hasNext(); ) {
            ::java::util::Map_Entry* entry = java_cast< ::java::util::Map_Entry* >(_i->next());
            {
                if(npc(java_cast< ::org::apache::poi::hssf::record::NameCommentRecord* >(npc(entry)->getValue()))->equals(commentRecord)) {
                    npc(commentRecords)->remove(java_cast< ::java::lang::String* >(npc(entry)->getKey()));
                    break;
                }
            }
        }
    }
    npc(commentRecords)->put(npc(commentRecord)->getNameText(), commentRecord);
}

int16_t org::apache::poi::hssf::model::InternalWorkbook::getFormat(::java::lang::String* format, bool createIfNotFound)
{
    for (auto _i = npc(formats)->iterator(); _i->hasNext(); ) {
        ::org::apache::poi::hssf::record::FormatRecord* r = java_cast< ::org::apache::poi::hssf::record::FormatRecord* >(_i->next());
        {
            if(npc(npc(r)->getFormatString())->equals(static_cast< ::java::lang::Object* >(format))) {
                return static_cast< int16_t >(npc(r)->getIndexCode());
            }
        }
    }
    if(createIfNotFound) {
        return static_cast< int16_t >(createFormat(format));
    }
    return -int32_t(1);
}

java::util::List* org::apache::poi::hssf::model::InternalWorkbook::getFormats()
{
    return formats;
}

int32_t org::apache::poi::hssf::model::InternalWorkbook::createFormat(::java::lang::String* formatString)
{
    maxformatid = maxformatid >= 164 ? maxformatid + int32_t(1) : int32_t(164);
    auto rec = new ::org::apache::poi::hssf::record::FormatRecord(maxformatid, formatString);
    auto pos = int32_t(0);
    while (pos < npc(records)->size() && npc(npc(records)->get(pos))->getSid() != ::org::apache::poi::hssf::record::FormatRecord::sid) {
        pos++;
    }
    pos += npc(formats)->size();
    npc(formats)->add(static_cast< ::java::lang::Object* >(rec));
    npc(records)->add(pos, rec);
    return maxformatid;
}

org::apache::poi::hssf::record::Record* org::apache::poi::hssf::model::InternalWorkbook::findFirstRecordBySid(int16_t sid)
{
    for (auto _i = npc(npc(records)->getRecords())->iterator(); _i->hasNext(); ) {
        ::org::apache::poi::hssf::record::Record* record = java_cast< ::org::apache::poi::hssf::record::Record* >(_i->next());
        {
            if(npc(record)->getSid() == sid) {
                return record;
            }
        }
    }
    return nullptr;
}

int32_t org::apache::poi::hssf::model::InternalWorkbook::findFirstRecordLocBySid(int16_t sid)
{
    auto index = int32_t(0);
    for (auto _i = npc(npc(records)->getRecords())->iterator(); _i->hasNext(); ) {
        ::org::apache::poi::hssf::record::Record* record = java_cast< ::org::apache::poi::hssf::record::Record* >(_i->next());
        {
            if(npc(record)->getSid() == sid) {
                return index;
            }
            index++;
        }
    }
    return -int32_t(1);
}

org::apache::poi::hssf::record::Record* org::apache::poi::hssf::model::InternalWorkbook::findNextRecordBySid(int16_t sid, int32_t pos)
{
    auto matches = int32_t(0);
    for (auto _i = npc(npc(records)->getRecords())->iterator(); _i->hasNext(); ) {
        ::org::apache::poi::hssf::record::Record* record = java_cast< ::org::apache::poi::hssf::record::Record* >(_i->next());
        {
            if(npc(record)->getSid() == sid && matches++ == pos) {
                return record;
            }
        }
    }
    return nullptr;
}

java::util::List* org::apache::poi::hssf::model::InternalWorkbook::getHyperlinks()
{
    return hyperlinks;
}

java::util::List* org::apache::poi::hssf::model::InternalWorkbook::getRecords()
{
    return npc(records)->getRecords();
}

bool org::apache::poi::hssf::model::InternalWorkbook::isUsing1904DateWindowing()
{
    return uses1904datewindowing;
}

org::apache::poi::hssf::record::PaletteRecord* org::apache::poi::hssf::model::InternalWorkbook::getCustomPalette()
{
    ::org::apache::poi::hssf::record::PaletteRecord* palette;
    auto palettePos = npc(records)->getPalettepos();
    if(palettePos != -int32_t(1)) {
        auto rec = npc(records)->get(palettePos);
        if(dynamic_cast< ::org::apache::poi::hssf::record::PaletteRecord* >(rec) != nullptr) {
            palette = java_cast< ::org::apache::poi::hssf::record::PaletteRecord* >(rec);
        } else {
            throw new ::java::lang::RuntimeException(::java::lang::StringBuilder().append(u"InternalError: Expected PaletteRecord but got a '"_j)->append(static_cast< ::java::lang::Object* >(rec))
                ->append(u"'"_j)->toString());
        }
    } else {
        palette = createPalette();
        npc(records)->add(1, palette);
        npc(records)->setPalettepos(1);
    }
    return palette;
}

org::apache::poi::hssf::model::DrawingManager2* org::apache::poi::hssf::model::InternalWorkbook::findDrawingGroup()
{
    if(drawingManager != nullptr) {
        return drawingManager;
    }
    for (auto _i = npc(npc(records)->getRecords())->iterator(); _i->hasNext(); ) {
        ::org::apache::poi::hssf::record::Record* r = java_cast< ::org::apache::poi::hssf::record::Record* >(_i->next());
        {
            if(!(dynamic_cast< ::org::apache::poi::hssf::record::DrawingGroupRecord* >(r) != nullptr)) {
                continue;
            }
            auto dg = java_cast< ::org::apache::poi::hssf::record::DrawingGroupRecord* >(r);
            npc(dg)->processChildRecords();
            drawingManager = findDrawingManager(dg, escherBSERecords);
            if(drawingManager != nullptr) {
                return drawingManager;
            }
        }
    }
    auto dg = java_cast< ::org::apache::poi::hssf::record::DrawingGroupRecord* >(findFirstRecordBySid(::org::apache::poi::hssf::record::DrawingGroupRecord::sid));
    drawingManager = findDrawingManager(dg, escherBSERecords);
    return drawingManager;
}

org::apache::poi::hssf::model::DrawingManager2* org::apache::poi::hssf::model::InternalWorkbook::findDrawingManager(::org::apache::poi::hssf::record::DrawingGroupRecord* dg, ::java::util::List* escherBSERecords)
{
    clinit();
    if(dg == nullptr) {
        return nullptr;
    }
    auto cr = npc(dg)->getEscherContainer();
    if(cr == nullptr) {
        return nullptr;
    }
    ::org::apache::poi::ddf::EscherDggRecord* dgg = nullptr;
    ::org::apache::poi::ddf::EscherContainerRecord* bStore = nullptr;
    for (auto _i = npc(cr)->iterator(); _i->hasNext(); ) {
        ::org::apache::poi::ddf::EscherRecord* er = java_cast< ::org::apache::poi::ddf::EscherRecord* >(_i->next());
        {
            if(dynamic_cast< ::org::apache::poi::ddf::EscherDggRecord* >(er) != nullptr) {
                dgg = java_cast< ::org::apache::poi::ddf::EscherDggRecord* >(er);
            } else if(npc(er)->getRecordId() == ::org::apache::poi::ddf::EscherContainerRecord::BSTORE_CONTAINER) {
                bStore = java_cast< ::org::apache::poi::ddf::EscherContainerRecord* >(er);
            }
        }
    }
    if(dgg == nullptr) {
        return nullptr;
    }
    auto dm = new DrawingManager2(dgg);
    if(bStore != nullptr) {
        for (auto _i = npc(npc(bStore)->getChildRecords())->iterator(); _i->hasNext(); ) {
            ::org::apache::poi::ddf::EscherRecord* bs = java_cast< ::org::apache::poi::ddf::EscherRecord* >(_i->next());
            {
                if(dynamic_cast< ::org::apache::poi::ddf::EscherBSERecord* >(bs) != nullptr) {
                    npc(escherBSERecords)->add(static_cast< ::java::lang::Object* >(java_cast< ::org::apache::poi::ddf::EscherBSERecord* >(bs)));
                }
            }
        }
    }
    return dm;
}

void org::apache::poi::hssf::model::InternalWorkbook::createDrawingGroup()
{
    if(drawingManager == nullptr) {
        auto dggContainer = new ::org::apache::poi::ddf::EscherContainerRecord();
        auto dgg = new ::org::apache::poi::ddf::EscherDggRecord();
        auto opt = new ::org::apache::poi::ddf::EscherOptRecord();
        auto splitMenuColors = new ::org::apache::poi::ddf::EscherSplitMenuColorsRecord();
        npc(dggContainer)->setRecordId(static_cast< int16_t >(int32_t(61440)));
        npc(dggContainer)->setOptions(static_cast< int16_t >(int32_t(15)));
        npc(dgg)->setRecordId(::org::apache::poi::ddf::EscherDggRecord::RECORD_ID);
        npc(dgg)->setOptions(static_cast< int16_t >(int32_t(0)));
        npc(dgg)->setShapeIdMax(1024);
        npc(dgg)->setNumShapesSaved(0);
        npc(dgg)->setDrawingsSaved(0);
        npc(dgg)->setFileIdClusters(new ::org::apache::poi::ddf::EscherDggRecord_FileIdClusterArray({}));
        drawingManager = new DrawingManager2(dgg);
        ::org::apache::poi::ddf::EscherContainerRecord* bstoreContainer = nullptr;
        if(!npc(escherBSERecords)->isEmpty()) {
            bstoreContainer = new ::org::apache::poi::ddf::EscherContainerRecord();
            npc(bstoreContainer)->setRecordId(::org::apache::poi::ddf::EscherContainerRecord::BSTORE_CONTAINER);
            npc(bstoreContainer)->setOptions(static_cast< int16_t >(((npc(escherBSERecords)->size() << int32_t(4)) | int32_t(15))));
            for (auto _i = npc(escherBSERecords)->iterator(); _i->hasNext(); ) {
                ::org::apache::poi::ddf::EscherRecord* escherRecord = java_cast< ::org::apache::poi::ddf::EscherRecord* >(_i->next());
                {
                    npc(bstoreContainer)->addChildRecord(escherRecord);
                }
            }
        }
        npc(opt)->setRecordId(static_cast< int16_t >(int32_t(61451)));
        npc(opt)->setOptions(static_cast< int16_t >(int32_t(51)));
        npc(opt)->addEscherProperty(new ::org::apache::poi::ddf::EscherBoolProperty(::org::apache::poi::ddf::EscherProperties::TEXT__SIZE_TEXT_TO_FIT_SHAPE, int32_t(524296)));
        npc(opt)->addEscherProperty(new ::org::apache::poi::ddf::EscherRGBProperty(::org::apache::poi::ddf::EscherProperties::FILL__FILLCOLOR, int32_t(134217793)));
        npc(opt)->addEscherProperty(new ::org::apache::poi::ddf::EscherRGBProperty(::org::apache::poi::ddf::EscherProperties::LINESTYLE__COLOR, int32_t(134217792)));
        npc(splitMenuColors)->setRecordId(static_cast< int16_t >(int32_t(61726)));
        npc(splitMenuColors)->setOptions(static_cast< int16_t >(int32_t(64)));
        npc(splitMenuColors)->setColor1(134217741);
        npc(splitMenuColors)->setColor2(134217740);
        npc(splitMenuColors)->setColor3(134217751);
        npc(splitMenuColors)->setColor4(268435703);
        npc(dggContainer)->addChildRecord(dgg);
        if(bstoreContainer != nullptr) {
            npc(dggContainer)->addChildRecord(bstoreContainer);
        }
        npc(dggContainer)->addChildRecord(opt);
        npc(dggContainer)->addChildRecord(splitMenuColors);
        auto dgLoc = findFirstRecordLocBySid(::org::apache::poi::hssf::record::DrawingGroupRecord::sid);
        if(dgLoc == -int32_t(1)) {
            auto drawingGroup = new ::org::apache::poi::hssf::record::DrawingGroupRecord();
            npc(drawingGroup)->addEscherRecord(dggContainer);
            auto loc = findFirstRecordLocBySid(::org::apache::poi::hssf::record::CountryRecord::sid);
            npc(getRecords())->add(loc + int32_t(1), drawingGroup);
        } else {
            auto drawingGroup = new ::org::apache::poi::hssf::record::DrawingGroupRecord();
            npc(drawingGroup)->addEscherRecord(dggContainer);
            npc(getRecords())->set(dgLoc, drawingGroup);
        }
    }
}

org::apache::poi::hssf::record::WindowOneRecord* org::apache::poi::hssf::model::InternalWorkbook::getWindowOne()
{
    return windowOne;
}

org::apache::poi::ddf::EscherBSERecord* org::apache::poi::hssf::model::InternalWorkbook::getBSERecord(int32_t pictureIndex)
{
    return java_cast< ::org::apache::poi::ddf::EscherBSERecord* >(npc(escherBSERecords)->get(pictureIndex - int32_t(1)));
}

int32_t org::apache::poi::hssf::model::InternalWorkbook::addBSERecord(::org::apache::poi::ddf::EscherBSERecord* e)
{
    createDrawingGroup();
    npc(escherBSERecords)->add(static_cast< ::java::lang::Object* >(e));
    auto dgLoc = findFirstRecordLocBySid(::org::apache::poi::hssf::record::DrawingGroupRecord::sid);
    auto drawingGroup = java_cast< ::org::apache::poi::hssf::record::DrawingGroupRecord* >(java_cast< ::org::apache::poi::hssf::record::Record* >(npc(getRecords())->get(dgLoc)));
    auto dggContainer = java_cast< ::org::apache::poi::ddf::EscherContainerRecord* >(npc(drawingGroup)->getEscherRecord(0));
    ::org::apache::poi::ddf::EscherContainerRecord* bstoreContainer;
    if(npc(npc(dggContainer)->getChild(int32_t(1)))->getRecordId() == ::org::apache::poi::ddf::EscherContainerRecord::BSTORE_CONTAINER) {
        bstoreContainer = java_cast< ::org::apache::poi::ddf::EscherContainerRecord* >(npc(dggContainer)->getChild(int32_t(1)));
    } else {
        bstoreContainer = new ::org::apache::poi::ddf::EscherContainerRecord();
        npc(bstoreContainer)->setRecordId(::org::apache::poi::ddf::EscherContainerRecord::BSTORE_CONTAINER);
        auto childRecords = npc(dggContainer)->getChildRecords();
        npc(childRecords)->add(1, bstoreContainer);
        npc(dggContainer)->setChildRecords(childRecords);
    }
    npc(bstoreContainer)->setOptions(static_cast< int16_t >(((npc(escherBSERecords)->size() << int32_t(4)) | int32_t(15))));
    npc(bstoreContainer)->addChildRecord(e);
    return npc(escherBSERecords)->size();
}

org::apache::poi::hssf::model::DrawingManager2* org::apache::poi::hssf::model::InternalWorkbook::getDrawingManager()
{
    return drawingManager;
}

org::apache::poi::hssf::record::WriteProtectRecord* org::apache::poi::hssf::model::InternalWorkbook::getWriteProtect()
{
    if(writeProtect == nullptr) {
        writeProtect = new ::org::apache::poi::hssf::record::WriteProtectRecord();
        auto i = findFirstRecordLocBySid(::org::apache::poi::hssf::record::BOFRecord::sid);
        npc(records)->add(i + int32_t(1), writeProtect);
    }
    return this->writeProtect;
}

org::apache::poi::hssf::record::WriteAccessRecord* org::apache::poi::hssf::model::InternalWorkbook::getWriteAccess()
{
    if(writeAccess == nullptr) {
        writeAccess = createWriteAccess();
        auto i = findFirstRecordLocBySid(::org::apache::poi::hssf::record::InterfaceEndRecord::sid);
        npc(records)->add(i + int32_t(1), writeAccess);
    }
    return writeAccess;
}

org::apache::poi::hssf::record::FileSharingRecord* org::apache::poi::hssf::model::InternalWorkbook::getFileSharing()
{
    if(fileShare == nullptr) {
        fileShare = new ::org::apache::poi::hssf::record::FileSharingRecord();
        auto i = findFirstRecordLocBySid(::org::apache::poi::hssf::record::WriteAccessRecord::sid);
        npc(records)->add(i + int32_t(1), fileShare);
    }
    return fileShare;
}

bool org::apache::poi::hssf::model::InternalWorkbook::isWriteProtected()
{
    if(fileShare == nullptr) {
        return false;
    }
    auto frec = getFileSharing();
    return npc(frec)->getReadOnly() == 1;
}

void org::apache::poi::hssf::model::InternalWorkbook::writeProtectWorkbook(::java::lang::String* password, ::java::lang::String* username)
{
    auto frec = getFileSharing();
    auto waccess = getWriteAccess();
    getWriteProtect();
    npc(frec)->setReadOnly(static_cast< int16_t >(int32_t(1)));
    npc(frec)->setPassword(static_cast< int16_t >(::org::apache::poi::poifs::crypt::CryptoFunctions::createXorVerifier1(password)));
    npc(frec)->setUsername(username);
    npc(waccess)->setUsername(username);
}

void org::apache::poi::hssf::model::InternalWorkbook::unwriteProtectWorkbook()
{
    npc(records)->remove(static_cast< ::java::lang::Object* >(fileShare));
    npc(records)->remove(static_cast< ::java::lang::Object* >(writeProtect));
    fileShare = nullptr;
    writeProtect = nullptr;
}

java::lang::String* org::apache::poi::hssf::model::InternalWorkbook::resolveNameXText(int32_t refIndex, int32_t definedNameIndex)
{
    return npc(linkTable)->resolveNameXText(refIndex, definedNameIndex, this);
}

org::apache::poi::ss::formula::ptg::NameXPtg* org::apache::poi::hssf::model::InternalWorkbook::getNameXPtg(::java::lang::String* name, int32_t sheetRefIndex, ::org::apache::poi::ss::formula::udf::UDFFinder* udf)
{
    auto lnk = getOrCreateLinkTable();
    auto xptg = npc(lnk)->getNameXPtg(name, sheetRefIndex);
    if(xptg == nullptr && npc(udf)->findFunction(name) != nullptr) {
        xptg = npc(lnk)->addNameXPtg(name);
    }
    return xptg;
}

org::apache::poi::ss::formula::ptg::NameXPtg* org::apache::poi::hssf::model::InternalWorkbook::getNameXPtg(::java::lang::String* name, ::org::apache::poi::ss::formula::udf::UDFFinder* udf)
{
    return getNameXPtg(name, -int32_t(1), udf);
}

void org::apache::poi::hssf::model::InternalWorkbook::cloneDrawings(InternalSheet* sheet)
{
    findDrawingGroup();
    if(drawingManager == nullptr) {
        return;
    }
    auto aggLoc = npc(sheet)->aggregateDrawingRecords(drawingManager, false);
    if(aggLoc == -int32_t(1)) {
        return;
    }
    auto agg = java_cast< ::org::apache::poi::hssf::record::EscherAggregate* >(npc(sheet)->findFirstRecordBySid(::org::apache::poi::hssf::record::EscherAggregate::sid_));
    auto escherContainer = npc(agg)->getEscherContainer();
    if(escherContainer == nullptr) {
        return;
    }
    auto dgg = npc(drawingManager)->getDgg();
    int32_t dgId = npc(drawingManager)->findNewDrawingGroupId();
    npc(dgg)->addCluster(dgId, 0);
    npc(dgg)->setDrawingsSaved(npc(dgg)->getDrawingsSaved() + int32_t(1));
    ::org::apache::poi::ddf::EscherDgRecord* dg = nullptr;
    for (auto _i = npc(escherContainer)->iterator(); _i->hasNext(); ) {
        ::org::apache::poi::ddf::EscherRecord* er = java_cast< ::org::apache::poi::ddf::EscherRecord* >(_i->next());
        {
            if(dynamic_cast< ::org::apache::poi::ddf::EscherDgRecord* >(er) != nullptr) {
                dg = java_cast< ::org::apache::poi::ddf::EscherDgRecord* >(er);
                npc(dg)->setOptions(static_cast< int16_t >((dgId << int32_t(4))));
            } else if(dynamic_cast< ::org::apache::poi::ddf::EscherContainerRecord* >(er) != nullptr) {
                for (auto _i = npc(java_cast< ::org::apache::poi::ddf::EscherContainerRecord* >(er))->iterator(); _i->hasNext(); ) {
                    ::org::apache::poi::ddf::EscherRecord* er2 = java_cast< ::org::apache::poi::ddf::EscherRecord* >(_i->next());
                    {
                        for (auto _i = npc(java_cast< ::org::apache::poi::ddf::EscherContainerRecord* >(er2))->iterator(); _i->hasNext(); ) {
                            ::org::apache::poi::ddf::EscherRecord* shapeChildRecord = java_cast< ::org::apache::poi::ddf::EscherRecord* >(_i->next());
                            {
                                int32_t recordId = npc(shapeChildRecord)->getRecordId();
                                if(recordId == ::org::apache::poi::ddf::EscherSpRecord::RECORD_ID) {
                                    if(dg == nullptr) {
                                        throw new ::org::apache::poi::util::RecordFormatException(u"EscherDgRecord wasn't set/processed before."_j);
                                    }
                                    auto sp = java_cast< ::org::apache::poi::ddf::EscherSpRecord* >(shapeChildRecord);
                                    auto shapeId = npc(drawingManager)->allocateShapeId(dg);
                                    npc(dg)->setNumShapes(npc(dg)->getNumShapes() - int32_t(1));
                                    npc(sp)->setShapeId(shapeId);
                                } else if(recordId == ::org::apache::poi::ddf::EscherOptRecord::RECORD_ID) {
                                    auto opt = java_cast< ::org::apache::poi::ddf::EscherOptRecord* >(shapeChildRecord);
                                    auto prop = java_cast< ::org::apache::poi::ddf::EscherSimpleProperty* >(java_cast< ::org::apache::poi::ddf::EscherProperty* >(npc(opt)->lookup(::org::apache::poi::ddf::EscherProperties::BLIP__BLIPTODISPLAY)));
                                    if(prop != nullptr) {
                                        auto pictureIndex = npc(prop)->getPropertyValue();
                                        auto bse = getBSERecord(pictureIndex);
                                        npc(bse)->setRef(npc(bse)->getRef() + int32_t(1));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

org::apache::poi::hssf::record::NameRecord* org::apache::poi::hssf::model::InternalWorkbook::cloneFilter(int32_t filterDbNameIndex, int32_t newSheetIndex)
{
    auto origNameRecord = getNameRecord(filterDbNameIndex);
    int32_t newExtSheetIx = checkExternSheet(newSheetIndex);
    auto ptgs = npc(origNameRecord)->getNameDefinition();
    for (auto i = int32_t(0); i < npc(ptgs)->length; i++) {
        auto ptg = (*ptgs)[i];
        if(dynamic_cast< ::org::apache::poi::ss::formula::ptg::Area3DPtg* >(ptg) != nullptr) {
            auto a3p = java_cast< ::org::apache::poi::ss::formula::ptg::Area3DPtg* >(npc((java_cast< ::org::apache::poi::ss::formula::ptg::OperandPtg* >(ptg)))->copy());
            npc(a3p)->setExternSheetIndex(newExtSheetIx);
            ptgs->set(i, a3p);
        } else if(dynamic_cast< ::org::apache::poi::ss::formula::ptg::Ref3DPtg* >(ptg) != nullptr) {
            auto r3p = java_cast< ::org::apache::poi::ss::formula::ptg::Ref3DPtg* >(npc((java_cast< ::org::apache::poi::ss::formula::ptg::OperandPtg* >(ptg)))->copy());
            npc(r3p)->setExternSheetIndex(newExtSheetIx);
            ptgs->set(i, r3p);
        }
    }
    auto newNameRecord = createBuiltInName(::org::apache::poi::hssf::record::NameRecord::BUILTIN_FILTER_DB, newSheetIndex + int32_t(1));
    npc(newNameRecord)->setNameDefinition(ptgs);
    npc(newNameRecord)->setHidden(true);
    return newNameRecord;
}

void org::apache::poi::hssf::model::InternalWorkbook::updateNamesAfterCellShift(::org::apache::poi::ss::formula::FormulaShifter* shifter)
{
    for (auto i = int32_t(0); i < getNumNames(); ++i) {
        auto nr = getNameRecord(i);
        auto ptgs = npc(nr)->getNameDefinition();
        if(npc(shifter)->adjustFormula(ptgs, npc(nr)->getSheetNumber())) {
            npc(nr)->setNameDefinition(ptgs);
        }
    }
}

org::apache::poi::hssf::record::RecalcIdRecord* org::apache::poi::hssf::model::InternalWorkbook::getRecalcId()
{
    auto record = java_cast< ::org::apache::poi::hssf::record::RecalcIdRecord* >(findFirstRecordBySid(::org::apache::poi::hssf::record::RecalcIdRecord::sid));
    if(record == nullptr) {
        record = new ::org::apache::poi::hssf::record::RecalcIdRecord();
        auto pos = findFirstRecordLocBySid(::org::apache::poi::hssf::record::CountryRecord::sid);
        npc(records)->add(pos + int32_t(1), record);
    }
    return record;
}

bool org::apache::poi::hssf::model::InternalWorkbook::changeExternalReference(::java::lang::String* oldUrl, ::java::lang::String* newUrl)
{
    return npc(linkTable)->changeExternalReference(oldUrl, newUrl);
}

org::apache::poi::hssf::model::WorkbookRecordList* org::apache::poi::hssf::model::InternalWorkbook::getWorkbookRecordList()
{
    return records;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::model::InternalWorkbook::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.model.InternalWorkbook", 42);
    return c;
}

void org::apache::poi::hssf::model::InternalWorkbook::clinit()
{
struct string_init_ {
    string_init_() {
    OLD_WORKBOOK_DIR_ENTRY_NAME_ = u"Book"_j;
    }
};

    static string_init_ string_init_instance;

    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        WORKBOOK_DIR_ENTRY_NAMES_ = (new ::java::lang::StringArray({
            u"Workbook"_j
            , u"WORKBOOK"_j
            , u"BOOK"_j
        }));
        LOG_ = ::org::apache::poi::util::POILogFactory::getLogger(static_cast< ::java::lang::Class* >(InternalWorkbook::class_()));
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* org::apache::poi::hssf::model::InternalWorkbook::getClass0()
{
    return class_();
}

