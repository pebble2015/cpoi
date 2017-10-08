// Generated from /POI/java/org/apache/poi/hssf/extractor/ExcelExtractor.java
#include <org/apache/poi/hssf/extractor/ExcelExtractor.hpp>

#include <java/io/File.hpp>
#include <java/io/FileInputStream.hpp>
#include <java/io/InputStream.hpp>
#include <java/io/PrintStream.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/IllegalStateException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/System.hpp>
#include <org/apache/poi/POIDocument.hpp>
#include <org/apache/poi/hssf/extractor/ExcelExtractor_CommandArgs.hpp>
#include <org/apache/poi/hssf/extractor/ExcelExtractor_CommandParseException.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFCell.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFCellStyle.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFComment.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFDataFormatter.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFFooter.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFHeader.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFRichTextString.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFRow.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFSheet.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFWorkbook.hpp>
#include <org/apache/poi/poifs/filesystem/POIFSFileSystem.hpp>
#include <org/apache/poi/ss/formula/eval/ErrorEval.hpp>
#include <org/apache/poi/ss/usermodel/Cell.hpp>
#include <org/apache/poi/ss/usermodel/CellType.hpp>
#include <org/apache/poi/ss/usermodel/HeaderFooter.hpp>
#include <org/apache/poi/ss/usermodel/Row_MissingCellPolicy.hpp>
#include <org/apache/poi/ss/usermodel/Row.hpp>
#include <org/apache/poi/ss/usermodel/Sheet.hpp>

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

poi::hssf::extractor::ExcelExtractor::ExcelExtractor(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::extractor::ExcelExtractor::ExcelExtractor(::poi::hssf::usermodel::HSSFWorkbook* wb) 
    : ExcelExtractor(*static_cast< ::default_init_tag* >(0))
{
    ctor(wb);
}

poi::hssf::extractor::ExcelExtractor::ExcelExtractor(::poi::poifs::filesystem::POIFSFileSystem* fs)  /* throws(IOException) */
    : ExcelExtractor(*static_cast< ::default_init_tag* >(0))
{
    ctor(fs);
}

poi::hssf::extractor::ExcelExtractor::ExcelExtractor(::poi::poifs::filesystem::DirectoryNode* dir)  /* throws(IOException) */
    : ExcelExtractor(*static_cast< ::default_init_tag* >(0))
{
    ctor(dir);
}

void poi::hssf::extractor::ExcelExtractor::init()
{
    _includeSheetNames = true;
    _shouldEvaluateFormulas = true;
    _includeCellComments = false;
    _includeBlankCells = false;
    _includeHeadersFooters = true;
}

void poi::hssf::extractor::ExcelExtractor::ctor(::poi::hssf::usermodel::HSSFWorkbook* wb)
{
    super::ctor(static_cast< ::poi::POIDocument* >(wb));
    init();
    _wb = wb;
    _formatter = new ::poi::hssf::usermodel::HSSFDataFormatter();
}

void poi::hssf::extractor::ExcelExtractor::ctor(::poi::poifs::filesystem::POIFSFileSystem* fs) /* throws(IOException) */
{
    ctor(npc(fs)->getRoot());
}

void poi::hssf::extractor::ExcelExtractor::ctor(::poi::poifs::filesystem::DirectoryNode* dir) /* throws(IOException) */
{
    ctor(new ::poi::hssf::usermodel::HSSFWorkbook(dir, true));
}

void poi::hssf::extractor::ExcelExtractor::printUsageMessage(::java::io::PrintStream* ps)
{
    clinit();
    npc(ps)->println(u"Use:"_j);
    npc(ps)->println(::java::lang::StringBuilder().append(u"    "_j)->append(npc(::poi::hssf::extractor::ExcelExtractor::class_())->getName())
        ->append(u" [<flag> <value> [<flag> <value> [...]]] [-i <filename.xls>]"_j)->toString());
    npc(ps)->println(u"       -i <filename.xls> specifies input file (default is to use stdin)"_j);
    npc(ps)->println(u"       Flags can be set on or off by using the values 'Y' or 'N'."_j);
    npc(ps)->println(u"       Following are available flags and their default values:"_j);
    npc(ps)->println(u"       --show-sheet-names  Y"_j);
    npc(ps)->println(u"       --evaluate-formulas Y"_j);
    npc(ps)->println(u"       --show-comments     N"_j);
    npc(ps)->println(u"       --show-blanks       Y"_j);
    npc(ps)->println(u"       --headers-footers   Y"_j);
}

void poi::hssf::extractor::ExcelExtractor::main(::java::lang::StringArray* args) /* throws(IOException) */
{
    clinit();
    ExcelExtractor_CommandArgs* cmdArgs;
    try {
        cmdArgs = new ExcelExtractor_CommandArgs(args);
    } catch (ExcelExtractor_CommandParseException* e) {
        npc(::java::lang::System::err())->println(npc(e)->getMessage());
        printUsageMessage(::java::lang::System::err());
        ::java::lang::System::exit(1);
        return;
    }
    if(npc(cmdArgs)->isRequestHelp()) {
        printUsageMessage(::java::lang::System::out());
        return;
    }
    ::java::io::InputStream* is;
    if(npc(cmdArgs)->getInputFile() == nullptr) {
        is = ::java::lang::System::in();
    } else {
        is = new ::java::io::FileInputStream(npc(cmdArgs)->getInputFile());
    }
    auto wb = new ::poi::hssf::usermodel::HSSFWorkbook(is);
    npc(is)->close();
    auto extractor = new ::poi::hssf::extractor::ExcelExtractor(wb);
    npc(extractor)->setIncludeSheetNames(npc(cmdArgs)->shouldShowSheetNames());
    npc(extractor)->setFormulasNotResults(!npc(cmdArgs)->shouldEvaluateFormulas());
    npc(extractor)->setIncludeCellComments(npc(cmdArgs)->shouldShowCellComments());
    npc(extractor)->setIncludeBlankCells(npc(cmdArgs)->shouldShowBlankCells());
    npc(extractor)->setIncludeHeadersFooters(npc(cmdArgs)->shouldIncludeHeadersFooters());
    npc(::java::lang::System::out())->println(npc(extractor)->getText());
    npc(extractor)->close();
    npc(wb)->close();
}

void poi::hssf::extractor::ExcelExtractor::setIncludeSheetNames(bool includeSheetNames)
{
    _includeSheetNames = includeSheetNames;
}

void poi::hssf::extractor::ExcelExtractor::setFormulasNotResults(bool formulasNotResults)
{
    _shouldEvaluateFormulas = !formulasNotResults;
}

void poi::hssf::extractor::ExcelExtractor::setIncludeCellComments(bool includeCellComments)
{
    _includeCellComments = includeCellComments;
}

void poi::hssf::extractor::ExcelExtractor::setIncludeBlankCells(bool includeBlankCells)
{
    _includeBlankCells = includeBlankCells;
}

void poi::hssf::extractor::ExcelExtractor::setIncludeHeadersFooters(bool includeHeadersFooters)
{
    _includeHeadersFooters = includeHeadersFooters;
}

java::lang::String* poi::hssf::extractor::ExcelExtractor::getText()
{
    auto text = new ::java::lang::StringBuffer();
    npc(_wb)->setMissingCellPolicy(::poi::ss::usermodel::Row_MissingCellPolicy::RETURN_BLANK_AS_NULL);
    for (auto i = int32_t(0); i < npc(_wb)->getNumberOfSheets(); i++) {
        auto sheet = java_cast< ::poi::hssf::usermodel::HSSFSheet* >(npc(_wb)->getSheetAt(i));
        if(sheet == nullptr) {
            continue;
        }
        if(_includeSheetNames) {
            auto name = npc(_wb)->getSheetName(i);
            if(name != nullptr) {
                npc(text)->append(name);
                npc(text)->append(u"\n"_j);
            }
        }
        if(_includeHeadersFooters) {
            npc(text)->append(_extractHeaderFooter(npc(sheet)->getHeader()));
        }
        auto firstRow = npc(sheet)->getFirstRowNum();
        auto lastRow = npc(sheet)->getLastRowNum();
        for (auto j = firstRow; j <= lastRow; j++) {
            auto row = java_cast< ::poi::hssf::usermodel::HSSFRow* >(npc(sheet)->getRow(j));
            if(row == nullptr) {
                continue;
            }
            int32_t firstCell = npc(row)->getFirstCellNum();
            int32_t lastCell = npc(row)->getLastCellNum();
            if(_includeBlankCells) {
                firstCell = 0;
            }
            for (auto k = firstCell; k < lastCell; k++) {
                auto cell = java_cast< ::poi::hssf::usermodel::HSSFCell* >(npc(row)->getCell(k));
                auto outputContents = true;
                if(cell == nullptr) {
                    outputContents = _includeBlankCells;
                } else {
                    {
                        auto v = npc(cell)->getCellTypeEnum();
                        if((v == ::poi::ss::usermodel::CellType::STRING)) {
                            npc(text)->append(npc(npc(cell)->getRichStringCellValue())->getString());
                            goto end_switch0;;
                        }
                        if((v == ::poi::ss::usermodel::CellType::NUMERIC)) {
                            npc(text)->append(npc(_formatter)->formatCellValue(cell));
                            goto end_switch0;;
                        }
                        if((v == ::poi::ss::usermodel::CellType::BOOLEAN)) {
                            npc(text)->append(npc(cell)->getBooleanCellValue());
                            goto end_switch0;;
                        }
                        if((v == ::poi::ss::usermodel::CellType::ERROR)) {
                            npc(text)->append(::poi::ss::formula::eval::ErrorEval::getText(npc(cell)->getErrorCellValue()));
                            goto end_switch0;;
                        }
                        if((v == ::poi::ss::usermodel::CellType::FORMULA)) {
                            if(!_shouldEvaluateFormulas) {
                                npc(text)->append(npc(cell)->getCellFormula());
                            } else {
                                {
                                    ::poi::hssf::usermodel::HSSFRichTextString* str;
                                    ::poi::hssf::usermodel::HSSFCellStyle* style;
                                    double nVal;
                                    int16_t df;
                                    ::java::lang::String* dfs;
                                    {
                                        auto v_ = npc(cell)->getCachedFormulaResultTypeEnum();
                                        if((v_ == ::poi::ss::usermodel::CellType::STRING)) {
                                            auto str = npc(cell)->getRichStringCellValue();
                                            if(str != nullptr && npc(str)->length() > 0) {
                                                npc(text)->append(static_cast< ::java::lang::Object* >(str));
                                            }
                                            goto end_switch1;;
                                        }
                                        if((v_ == ::poi::ss::usermodel::CellType::NUMERIC)) {
                                            auto style = npc(cell)->getCellStyle();
                                            auto nVal = npc(cell)->getNumericCellValue();
                                            auto df = npc(style)->getDataFormat();
                                            auto dfs = npc(style)->getDataFormatString();
                                            npc(text)->append(npc(_formatter)->formatRawCellContents(nVal, df, dfs));
                                            goto end_switch1;;
                                        }
                                        if((v_ == ::poi::ss::usermodel::CellType::BOOLEAN)) {
                                            npc(text)->append(npc(cell)->getBooleanCellValue());
                                            goto end_switch1;;
                                        }
                                        if((v_ == ::poi::ss::usermodel::CellType::ERROR)) {
                                            npc(text)->append(::poi::ss::formula::eval::ErrorEval::getText(npc(cell)->getErrorCellValue()));
                                            goto end_switch1;;
                                        }
                                        if((((v_ != ::poi::ss::usermodel::CellType::STRING) && (v_ != ::poi::ss::usermodel::CellType::NUMERIC) && (v_ != ::poi::ss::usermodel::CellType::BOOLEAN) && (v_ != ::poi::ss::usermodel::CellType::ERROR)))) {
                                            throw new ::java::lang::IllegalStateException(::java::lang::StringBuilder().append(u"Unexpected cell cached formula result type: "_j)->append(static_cast< ::java::lang::Object* >(npc(cell)->getCachedFormulaResultTypeEnum()))->toString());
                                        }
end_switch1:;
                                    }
                                }

                            }
                            goto end_switch0;;
                        }
                        if((((v != ::poi::ss::usermodel::CellType::STRING) && (v != ::poi::ss::usermodel::CellType::NUMERIC) && (v != ::poi::ss::usermodel::CellType::BOOLEAN) && (v != ::poi::ss::usermodel::CellType::ERROR) && (v != ::poi::ss::usermodel::CellType::FORMULA)))) {
                            throw new ::java::lang::RuntimeException(::java::lang::StringBuilder().append(u"Unexpected cell type ("_j)->append(static_cast< ::java::lang::Object* >(npc(cell)->getCellTypeEnum()))
                                ->append(u")"_j)->toString());
                        }
end_switch0:;
                    }

                    auto comment = npc(cell)->getCellComment();
                    if(_includeCellComments && comment != nullptr) {
                        auto commentText = npc(npc(npc(comment)->getString())->getString())->replace(u'\u000a', u' ');
                        npc(text)->append(::java::lang::StringBuilder().append(u" Comment by "_j)->append(npc(comment)->getAuthor())
                            ->append(u": "_j)
                            ->append(commentText)->toString());
                    }
                }
                if(outputContents && k < (lastCell - int32_t(1))) {
                    npc(text)->append(u"\t"_j);
                }
            }
            npc(text)->append(u"\n"_j);
        }
        if(_includeHeadersFooters) {
            npc(text)->append(_extractHeaderFooter(npc(sheet)->getFooter()));
        }
    }
    return npc(text)->toString();
}

java::lang::String* poi::hssf::extractor::ExcelExtractor::_extractHeaderFooter(::poi::ss::usermodel::HeaderFooter* hf)
{
    clinit();
    auto text = new ::java::lang::StringBuffer();
    if(npc(hf)->getLeft() != nullptr) {
        npc(text)->append(npc(hf)->getLeft());
    }
    if(npc(hf)->getCenter() != nullptr) {
        if(npc(text)->length() > 0)
            npc(text)->append(u"\t"_j);

        npc(text)->append(npc(hf)->getCenter());
    }
    if(npc(hf)->getRight() != nullptr) {
        if(npc(text)->length() > 0)
            npc(text)->append(u"\t"_j);

        npc(text)->append(npc(hf)->getRight());
    }
    if(npc(text)->length() > 0)
        npc(text)->append(u"\n"_j);

    return npc(text)->toString();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::extractor::ExcelExtractor::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.extractor.ExcelExtractor", 44);
    return c;
}

java::lang::Class* poi::hssf::extractor::ExcelExtractor::getClass0()
{
    return class_();
}

