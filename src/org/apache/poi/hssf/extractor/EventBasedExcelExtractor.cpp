// Generated from /POI/java/org/apache/poi/hssf/extractor/EventBasedExcelExtractor.java
#include <org/apache/poi/hssf/extractor/EventBasedExcelExtractor.hpp>

#include <java/io/IOException.hpp>
#include <java/lang/IllegalStateException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/Throwable.hpp>
#include <org/apache/poi/POIDocument.hpp>
#include <org/apache/poi/hssf/eventusermodel/FormatTrackingHSSFListener.hpp>
#include <org/apache/poi/hssf/eventusermodel/HSSFEventFactory.hpp>
#include <org/apache/poi/hssf/eventusermodel/HSSFRequest.hpp>
#include <org/apache/poi/hssf/extractor/EventBasedExcelExtractor_TextListener.hpp>
#include <org/apache/poi/poifs/filesystem/DirectoryNode.hpp>
#include <org/apache/poi/poifs/filesystem/POIFSFileSystem.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::hssf::extractor::EventBasedExcelExtractor::EventBasedExcelExtractor(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::extractor::EventBasedExcelExtractor::EventBasedExcelExtractor(::poi::poifs::filesystem::DirectoryNode* dir) 
    : EventBasedExcelExtractor(*static_cast< ::default_init_tag* >(0))
{
    ctor(dir);
}

poi::hssf::extractor::EventBasedExcelExtractor::EventBasedExcelExtractor(::poi::poifs::filesystem::POIFSFileSystem* fs) 
    : EventBasedExcelExtractor(*static_cast< ::default_init_tag* >(0))
{
    ctor(fs);
}

void poi::hssf::extractor::EventBasedExcelExtractor::init()
{
    _includeSheetNames = true;
    _formulasNotResults = false;
}

void poi::hssf::extractor::EventBasedExcelExtractor::ctor(::poi::poifs::filesystem::DirectoryNode* dir)
{
    super::ctor(static_cast< ::poi::POIDocument* >(nullptr));
    init();
    _dir = dir;
}

void poi::hssf::extractor::EventBasedExcelExtractor::ctor(::poi::poifs::filesystem::POIFSFileSystem* fs)
{
    ctor(npc(fs)->getRoot());
    super::setFilesystem(fs);
}

poi::hpsf::DocumentSummaryInformation* poi::hssf::extractor::EventBasedExcelExtractor::getDocSummaryInformation()
{
    throw new ::java::lang::IllegalStateException(u"Metadata extraction not supported in streaming mode, please use ExcelExtractor"_j);
}

poi::hpsf::SummaryInformation* poi::hssf::extractor::EventBasedExcelExtractor::getSummaryInformation()
{
    throw new ::java::lang::IllegalStateException(u"Metadata extraction not supported in streaming mode, please use ExcelExtractor"_j);
}

void poi::hssf::extractor::EventBasedExcelExtractor::setIncludeCellComments(bool includeComments)
{
    throw new ::java::lang::IllegalStateException(u"Comment extraction not supported in streaming mode, please use ExcelExtractor"_j);
}

void poi::hssf::extractor::EventBasedExcelExtractor::setIncludeHeadersFooters(bool includeHeadersFooters)
{
    throw new ::java::lang::IllegalStateException(u"Header/Footer extraction not supported in streaming mode, please use ExcelExtractor"_j);
}

void poi::hssf::extractor::EventBasedExcelExtractor::setIncludeSheetNames(bool includeSheetNames)
{
    _includeSheetNames = includeSheetNames;
}

void poi::hssf::extractor::EventBasedExcelExtractor::setFormulasNotResults(bool formulasNotResults)
{
    _formulasNotResults = formulasNotResults;
}

java::lang::String* poi::hssf::extractor::EventBasedExcelExtractor::getText()
{
    ::java::lang::String* text = nullptr;
    try {
        auto tl = triggerExtraction();
        text = npc(npc(tl)->_text)->toString();
        if(!npc(text)->endsWith(u"\n"_j)) {
            text = ::java::lang::StringBuilder().append(text)->append(u"\n"_j)->toString();
        }
    } catch (::java::io::IOException* e) {
        throw new ::java::lang::RuntimeException(static_cast< ::java::lang::Throwable* >(e));
    }
    return text;
}

poi::hssf::extractor::EventBasedExcelExtractor_TextListener* poi::hssf::extractor::EventBasedExcelExtractor::triggerExtraction() /* throws(IOException) */
{
    auto tl = new EventBasedExcelExtractor_TextListener(this);
    auto ft = new ::poi::hssf::eventusermodel::FormatTrackingHSSFListener(tl);
    npc(tl)->_ft = ft;
    auto factory = new ::poi::hssf::eventusermodel::HSSFEventFactory();
    auto request = new ::poi::hssf::eventusermodel::HSSFRequest();
    npc(request)->addListenerForAllRecords(ft);
    npc(factory)->processWorkbookEvents(request, _dir);
    return tl;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::extractor::EventBasedExcelExtractor::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.extractor.EventBasedExcelExtractor", 54);
    return c;
}

java::lang::Class* poi::hssf::extractor::EventBasedExcelExtractor::getClass0()
{
    return class_();
}

