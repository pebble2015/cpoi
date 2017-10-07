// Generated from /POI/java/org/apache/poi/POIOLE2TextExtractor.java
#include <org/apache/poi/POIOLE2TextExtractor.hpp>

#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/POIDocument.hpp>
#include <org/apache/poi/hpsf/DocumentSummaryInformation.hpp>
#include <org/apache/poi/hpsf/SummaryInformation.hpp>
#include <org/apache/poi/hpsf/extractor/HPSFPropertiesExtractor.hpp>
#include <org/apache/poi/poifs/filesystem/DirectoryNode.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::POIOLE2TextExtractor::POIOLE2TextExtractor(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::POIOLE2TextExtractor::POIOLE2TextExtractor(POIDocument* document) 
    : POIOLE2TextExtractor(*static_cast< ::default_init_tag* >(0))
{
    ctor(document);
}

org::apache::poi::POIOLE2TextExtractor::POIOLE2TextExtractor(POIOLE2TextExtractor* otherExtractor) 
    : POIOLE2TextExtractor(*static_cast< ::default_init_tag* >(0))
{
    ctor(otherExtractor);
}

void org::apache::poi::POIOLE2TextExtractor::ctor(POIDocument* document)
{
    super::ctor();
    this->document = document;
    setFilesystem(document);
}

void org::apache::poi::POIOLE2TextExtractor::ctor(POIOLE2TextExtractor* otherExtractor)
{
    super::ctor();
    this->document = npc(otherExtractor)->document;
}

org::apache::poi::hpsf::DocumentSummaryInformation* org::apache::poi::POIOLE2TextExtractor::getDocSummaryInformation()
{
    return npc(document)->getDocumentSummaryInformation();
}

org::apache::poi::hpsf::SummaryInformation* org::apache::poi::POIOLE2TextExtractor::getSummaryInformation()
{
    return npc(document)->getSummaryInformation();
}

org::apache::poi::POITextExtractor* org::apache::poi::POIOLE2TextExtractor::getMetadataTextExtractor()
{
    return new ::org::apache::poi::hpsf::extractor::HPSFPropertiesExtractor(this);
}

org::apache::poi::poifs::filesystem::DirectoryEntry* org::apache::poi::POIOLE2TextExtractor::getRoot()
{
    return npc(document)->getDirectory();
}

org::apache::poi::POIDocument* org::apache::poi::POIOLE2TextExtractor::getDocument()
{
    return document;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::POIOLE2TextExtractor::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.POIOLE2TextExtractor", 35);
    return c;
}

java::lang::Class* org::apache::poi::POIOLE2TextExtractor::getClass0()
{
    return class_();
}

