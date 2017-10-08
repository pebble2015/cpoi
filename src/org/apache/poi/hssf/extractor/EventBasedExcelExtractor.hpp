// Generated from /POI/java/org/apache/poi/hssf/extractor/EventBasedExcelExtractor.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hpsf/fwd-POI.hpp>
#include <org/apache/poi/hssf/extractor/fwd-POI.hpp>
#include <org/apache/poi/poifs/filesystem/fwd-POI.hpp>
#include <org/apache/poi/POIOLE2TextExtractor.hpp>
#include <org/apache/poi/ss/extractor/ExcelExtractor.hpp>

struct default_init_tag;

class poi::hssf::extractor::EventBasedExcelExtractor
    : public ::poi::POIOLE2TextExtractor
    , public virtual ::poi::ss::extractor::ExcelExtractor
{

public:
    typedef ::poi::POIOLE2TextExtractor super;

private:
    ::poi::poifs::filesystem::DirectoryNode* _dir {  };

public: /* package */
    bool _includeSheetNames {  };
    bool _formulasNotResults {  };
protected:
    void ctor(::poi::poifs::filesystem::DirectoryNode* dir);
    void ctor(::poi::poifs::filesystem::POIFSFileSystem* fs);

public:
    ::poi::hpsf::DocumentSummaryInformation* getDocSummaryInformation() override;
    ::poi::hpsf::SummaryInformation* getSummaryInformation() override;
    void setIncludeCellComments(bool includeComments) override;
    void setIncludeHeadersFooters(bool includeHeadersFooters) override;
    void setIncludeSheetNames(bool includeSheetNames) override;
    void setFormulasNotResults(bool formulasNotResults) override;
    ::java::lang::String* getText() override;

private:
    EventBasedExcelExtractor_TextListener* triggerExtraction() /* throws(IOException) */;

    // Generated

public:
    EventBasedExcelExtractor(::poi::poifs::filesystem::DirectoryNode* dir);
    EventBasedExcelExtractor(::poi::poifs::filesystem::POIFSFileSystem* fs);
protected:
    EventBasedExcelExtractor(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    void init();
    virtual ::java::lang::Class* getClass0();
    friend class EventBasedExcelExtractor_TextListener;
};
