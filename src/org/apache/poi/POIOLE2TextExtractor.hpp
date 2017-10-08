// Generated from /POI/java/org/apache/poi/POIOLE2TextExtractor.java

#pragma once

#include <org/apache/poi/fwd-POI.hpp>
#include <org/apache/poi/hpsf/fwd-POI.hpp>
#include <org/apache/poi/poifs/filesystem/fwd-POI.hpp>
#include <org/apache/poi/POITextExtractor.hpp>

struct default_init_tag;

class poi::POIOLE2TextExtractor
    : public POITextExtractor
{

public:
    typedef POITextExtractor super;

public: /* protected */
    POIDocument* document {  };
protected:
    void ctor(POIDocument* document);
    void ctor(POIOLE2TextExtractor* otherExtractor);

public:
    virtual ::poi::hpsf::DocumentSummaryInformation* getDocSummaryInformation();
    virtual ::poi::hpsf::SummaryInformation* getSummaryInformation();
    POITextExtractor* getMetadataTextExtractor() override;
    virtual ::poi::poifs::filesystem::DirectoryEntry* getRoot();
    virtual POIDocument* getDocument();

    // Generated
    POIOLE2TextExtractor(POIDocument* document);

public: /* protected */
    POIOLE2TextExtractor(POIOLE2TextExtractor* otherExtractor);
protected:
    POIOLE2TextExtractor(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
