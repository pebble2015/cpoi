// Generated from /POI/java/org/apache/poi/hssf/extractor/OldExcelExtractor.java
#include <org/apache/poi/hssf/extractor/OldExcelExtractor.hpp>

#include <java/io/BufferedInputStream.hpp>
#include <java/io/Closeable.hpp>
#include <java/io/File.hpp>
#include <java/io/FileInputStream.hpp>
#include <java/io/FileNotFoundException.hpp>
#include <java/io/IOException.hpp>
#include <java/io/InputStream.hpp>
#include <java/io/PrintStream.hpp>
#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/System.hpp>
#include <org/apache/poi/EncryptedDocumentException.hpp>
#include <org/apache/poi/hssf/OldExcelFormatException.hpp>
#include <org/apache/poi/hssf/model/InternalWorkbook.hpp>
#include <org/apache/poi/hssf/record/BOFRecord.hpp>
#include <org/apache/poi/hssf/record/CodepageRecord.hpp>
#include <org/apache/poi/hssf/record/FormulaRecord.hpp>
#include <org/apache/poi/hssf/record/NumberRecord.hpp>
#include <org/apache/poi/hssf/record/OldFormulaRecord.hpp>
#include <org/apache/poi/hssf/record/OldLabelRecord.hpp>
#include <org/apache/poi/hssf/record/OldSheetRecord.hpp>
#include <org/apache/poi/hssf/record/OldStringRecord.hpp>
#include <org/apache/poi/hssf/record/RKRecord.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream.hpp>
#include <org/apache/poi/poifs/filesystem/DirectoryNode.hpp>
#include <org/apache/poi/poifs/filesystem/DocumentInputStream.hpp>
#include <org/apache/poi/poifs/filesystem/DocumentNode.hpp>
#include <org/apache/poi/poifs/filesystem/Entry.hpp>
#include <org/apache/poi/poifs/filesystem/NPOIFSFileSystem.hpp>
#include <org/apache/poi/poifs/filesystem/NotOLE2FileException.hpp>
#include <org/apache/poi/ss/usermodel/CellType.hpp>
#include <org/apache/poi/util/IOUtils.hpp>
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
typedef ::SubArray< ::java::lang::String, ObjectArray, ::java::io::SerializableArray, ComparableArray, CharSequenceArray > StringArray;
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
org::apache::poi::hssf::extractor::OldExcelExtractor::OldExcelExtractor(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::extractor::OldExcelExtractor::OldExcelExtractor(::java::io::InputStream* input)  /* throws(IOException) */
    : OldExcelExtractor(*static_cast< ::default_init_tag* >(0))
{
    ctor(input);
}

org::apache::poi::hssf::extractor::OldExcelExtractor::OldExcelExtractor(::java::io::File* f)  /* throws(IOException) */
    : OldExcelExtractor(*static_cast< ::default_init_tag* >(0))
{
    ctor(f);
}

org::apache::poi::hssf::extractor::OldExcelExtractor::OldExcelExtractor(::org::apache::poi::poifs::filesystem::NPOIFSFileSystem* fs)  /* throws(IOException) */
    : OldExcelExtractor(*static_cast< ::default_init_tag* >(0))
{
    ctor(fs);
}

org::apache::poi::hssf::extractor::OldExcelExtractor::OldExcelExtractor(::org::apache::poi::poifs::filesystem::DirectoryNode* directory)  /* throws(IOException) */
    : OldExcelExtractor(*static_cast< ::default_init_tag* >(0))
{
    ctor(directory);
}

constexpr int32_t org::apache::poi::hssf::extractor::OldExcelExtractor::FILE_PASS_RECORD_SID;

void org::apache::poi::hssf::extractor::OldExcelExtractor::ctor(::java::io::InputStream* input) /* throws(IOException) */
{
    super::ctor();
    open(input);
}

void org::apache::poi::hssf::extractor::OldExcelExtractor::ctor(::java::io::File* f) /* throws(IOException) */
{
    super::ctor();
    ::org::apache::poi::poifs::filesystem::NPOIFSFileSystem* poifs = nullptr;
    {
        auto finally0 = finally([&] {
            if(toClose == nullptr) {
                ::org::apache::poi::util::IOUtils::closeQuietly(poifs);
            }
        });
        try {
            poifs = new ::org::apache::poi::poifs::filesystem::NPOIFSFileSystem(f);
            open(poifs);
            toClose = poifs;
            return;
        } catch (::org::apache::poi::hssf::OldExcelFormatException* e) {
        } catch (::org::apache::poi::poifs::filesystem::NotOLE2FileException* e) {
        } catch (::java::io::IOException* e) {
            throw e;
        } catch (::java::lang::RuntimeException* e) {
            throw e;
        }
    }
    auto biffStream = new ::java::io::FileInputStream(f);
    try {
        open(static_cast< ::java::io::InputStream* >(biffStream));
    } catch (::java::io::IOException* e) {
        npc(biffStream)->close();
        throw e;
    } catch (::java::lang::RuntimeException* e) {
        npc(biffStream)->close();
        throw e;
    }
}

void org::apache::poi::hssf::extractor::OldExcelExtractor::ctor(::org::apache::poi::poifs::filesystem::NPOIFSFileSystem* fs) /* throws(IOException) */
{
    super::ctor();
    open(fs);
}

void org::apache::poi::hssf::extractor::OldExcelExtractor::ctor(::org::apache::poi::poifs::filesystem::DirectoryNode* directory) /* throws(IOException) */
{
    super::ctor();
    open(directory);
}

void org::apache::poi::hssf::extractor::OldExcelExtractor::open(::java::io::InputStream* biffStream) /* throws(IOException) */
{
    auto bis = (dynamic_cast< ::java::io::BufferedInputStream* >(biffStream) != nullptr) ? java_cast< ::java::io::BufferedInputStream* >(biffStream) : new ::java::io::BufferedInputStream(biffStream, int32_t(8));
    if(::org::apache::poi::poifs::filesystem::NPOIFSFileSystem::hasPOIFSHeader(static_cast< ::java::io::InputStream* >(bis))) {
        auto poifs = new ::org::apache::poi::poifs::filesystem::NPOIFSFileSystem(static_cast< ::java::io::InputStream* >(bis));
        {
            auto finally1 = finally([&] {
                npc(poifs)->close();
            });
            {
                open(poifs);
            }
        }

    } else {
        ris = new ::org::apache::poi::hssf::record::RecordInputStream(bis);
        toClose = bis;
        prepare();
    }
}

void org::apache::poi::hssf::extractor::OldExcelExtractor::open(::org::apache::poi::poifs::filesystem::NPOIFSFileSystem* fs) /* throws(IOException) */
{
    open(npc(fs)->getRoot());
}

void org::apache::poi::hssf::extractor::OldExcelExtractor::open(::org::apache::poi::poifs::filesystem::DirectoryNode* directory) /* throws(IOException) */
{
    ::org::apache::poi::poifs::filesystem::DocumentNode* book;
    try {
        book = java_cast< ::org::apache::poi::poifs::filesystem::DocumentNode* >(npc(directory)->getEntry(::org::apache::poi::hssf::model::InternalWorkbook::OLD_WORKBOOK_DIR_ENTRY_NAME()));
    } catch (::java::io::FileNotFoundException* e) {
        book = java_cast< ::org::apache::poi::poifs::filesystem::DocumentNode* >(npc(directory)->getEntry((*::org::apache::poi::hssf::model::InternalWorkbook::WORKBOOK_DIR_ENTRY_NAMES())[int32_t(0)]));
    }
    if(book == nullptr) {
        throw new ::java::io::IOException(u"No Excel 5/95 Book stream found"_j);
    }
    ris = new ::org::apache::poi::hssf::record::RecordInputStream(npc(directory)->createDocumentInputStream(static_cast< ::org::apache::poi::poifs::filesystem::Entry* >(book)));
    prepare();
}

void org::apache::poi::hssf::extractor::OldExcelExtractor::main(::java::lang::StringArray* args) /* throws(IOException) */
{
    clinit();
    if(npc(args)->length < 1) {
        npc(::java::lang::System::err())->println(u"Use:"_j);
        npc(::java::lang::System::err())->println(u"   OldExcelExtractor <filename>"_j);
        ::java::lang::System::exit(1);
    }
    auto extractor = new OldExcelExtractor(new ::java::io::File((*args)[int32_t(0)]));
    npc(::java::lang::System::out())->println(npc(extractor)->getText());
    npc(extractor)->close();
}

void org::apache::poi::hssf::extractor::OldExcelExtractor::prepare()
{
    if(!npc(ris)->hasNextRecord()) {
        throw new ::java::lang::IllegalArgumentException(u"File contains no records!"_j);
    }
    npc(ris)->nextRecord();
    int32_t bofSid = npc(ris)->getSid();
    switch (bofSid) {
    case ::org::apache::poi::hssf::record::BOFRecord::biff2_sid:
        biffVersion = 2;
        break;
    case ::org::apache::poi::hssf::record::BOFRecord::biff3_sid:
        biffVersion = 3;
        break;
    case ::org::apache::poi::hssf::record::BOFRecord::biff4_sid:
        biffVersion = 4;
        break;
    case ::org::apache::poi::hssf::record::BOFRecord::biff5_sid:
        biffVersion = 5;
        break;
    default:
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"File does not begin with a BOF, found sid of "_j)->append(bofSid)->toString());
    }

    auto bof = new ::org::apache::poi::hssf::record::BOFRecord(ris);
    fileType = npc(bof)->getType();
}

int32_t org::apache::poi::hssf::extractor::OldExcelExtractor::getBiffVersion()
{
    return biffVersion;
}

int32_t org::apache::poi::hssf::extractor::OldExcelExtractor::getFileType()
{
    return fileType;
}

java::lang::String* org::apache::poi::hssf::extractor::OldExcelExtractor::getText()
{
    auto text = new ::java::lang::StringBuffer();
    ::org::apache::poi::hssf::record::CodepageRecord* codepage = nullptr;
    while (npc(ris)->hasNextRecord()) {
        auto sid = npc(ris)->getNextSid();
        npc(ris)->nextRecord();
        {
            ::org::apache::poi::hssf::record::OldSheetRecord* shr;
            ::org::apache::poi::hssf::record::OldLabelRecord* lr;
            ::org::apache::poi::hssf::record::OldStringRecord* sr;
            ::org::apache::poi::hssf::record::NumberRecord* nr;
            ::org::apache::poi::hssf::record::RKRecord* rr;
            switch (sid) {
            case FILE_PASS_RECORD_SID:
                throw new ::org::apache::poi::EncryptedDocumentException(u"Encryption not supported for Old Excel files"_j);
            case ::org::apache::poi::hssf::record::OldSheetRecord::sid:
                shr = new ::org::apache::poi::hssf::record::OldSheetRecord(ris);
                npc(shr)->setCodePage(codepage);
                npc(text)->append(u"Sheet: "_j);
                npc(text)->append(npc(shr)->getSheetname());
                npc(text)->append(u'\u000a');
                break;
            case ::org::apache::poi::hssf::record::OldLabelRecord::biff2_sid:
            case ::org::apache::poi::hssf::record::OldLabelRecord::biff345_sid:
                lr = new ::org::apache::poi::hssf::record::OldLabelRecord(ris);
                npc(lr)->setCodePage(codepage);
                npc(text)->append(npc(lr)->getValue());
                npc(text)->append(u'\u000a');
                break;
            case ::org::apache::poi::hssf::record::OldStringRecord::biff2_sid:
            case ::org::apache::poi::hssf::record::OldStringRecord::biff345_sid:
                sr = new ::org::apache::poi::hssf::record::OldStringRecord(ris);
                npc(sr)->setCodePage(codepage);
                npc(text)->append(npc(sr)->getString());
                npc(text)->append(u'\u000a');
                break;
            case ::org::apache::poi::hssf::record::NumberRecord::sid:
                nr = new ::org::apache::poi::hssf::record::NumberRecord(ris);
                handleNumericCell(text, npc(nr)->getValue());
                break;
            case ::org::apache::poi::hssf::record::OldFormulaRecord::biff2_sid:
            case ::org::apache::poi::hssf::record::OldFormulaRecord::biff3_sid:
            case ::org::apache::poi::hssf::record::OldFormulaRecord::biff4_sid:
                if(biffVersion == 5) {
                    auto fr = new ::org::apache::poi::hssf::record::FormulaRecord(ris);
                    if(npc(fr)->getCachedResultType() == npc(::org::apache::poi::ss::usermodel::CellType::NUMERIC)->getCode()) {
                        handleNumericCell(text, npc(fr)->getValue());
                    }
                } else {
                    auto fr = new ::org::apache::poi::hssf::record::OldFormulaRecord(ris);
                    if(npc(fr)->getCachedResultType() == npc(::org::apache::poi::ss::usermodel::CellType::NUMERIC)->getCode()) {
                        handleNumericCell(text, npc(fr)->getValue());
                    }
                }
                break;
            case ::org::apache::poi::hssf::record::RKRecord::sid:
                rr = new ::org::apache::poi::hssf::record::RKRecord(ris);
                handleNumericCell(text, npc(rr)->getRKNumber());
                break;
            case ::org::apache::poi::hssf::record::CodepageRecord::sid:
                codepage = new ::org::apache::poi::hssf::record::CodepageRecord(ris);
                break;
            default:
                npc(ris)->readFully(new ::int8_tArray(npc(ris)->remaining()));
            }
        }

    }
    close();
    ris = nullptr;
    return npc(text)->toString();
}

void org::apache::poi::hssf::extractor::OldExcelExtractor::close()
{
    if(toClose != nullptr) {
        ::org::apache::poi::util::IOUtils::closeQuietly(toClose);
        toClose = nullptr;
    }
}

void org::apache::poi::hssf::extractor::OldExcelExtractor::handleNumericCell(::java::lang::StringBuffer* text, double value)
{
    npc(text)->append(value);
    npc(text)->append(u'\u000a');
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::extractor::OldExcelExtractor::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.extractor.OldExcelExtractor", 47);
    return c;
}

java::lang::Class* org::apache::poi::hssf::extractor::OldExcelExtractor::getClass0()
{
    return class_();
}

