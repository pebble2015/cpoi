// Generated from /POI/java/org/apache/poi/hpsf/extractor/HPSFPropertiesExtractor.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/fwd-POI.hpp>
#include <org/apache/poi/hpsf/fwd-POI.hpp>
#include <org/apache/poi/hpsf/extractor/fwd-POI.hpp>
#include <org/apache/poi/poifs/filesystem/fwd-POI.hpp>
#include <org/apache/poi/POIOLE2TextExtractor.hpp>

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

class org::apache::poi::hpsf::extractor::HPSFPropertiesExtractor
    : public ::org::apache::poi::POIOLE2TextExtractor
{

public:
    typedef ::org::apache::poi::POIOLE2TextExtractor super;
protected:
    void ctor(::org::apache::poi::POIOLE2TextExtractor* mainExtractor);
    void ctor(::org::apache::poi::POIDocument* doc);
    void ctor(::org::apache::poi::poifs::filesystem::POIFSFileSystem* fs);
    void ctor(::org::apache::poi::poifs::filesystem::NPOIFSFileSystem* fs);

public:
    virtual ::java::lang::String* getDocumentSummaryInformationText();
    virtual ::java::lang::String* getSummaryInformationText();

private:
    static ::java::lang::String* getPropertiesText(::org::apache::poi::hpsf::PropertySet* ps);

public:
    ::java::lang::String* getText() override;
    ::org::apache::poi::POITextExtractor* getMetadataTextExtractor() override;

private:
    static ::java::lang::String* getPropertyValueText(::java::lang::Object* val);

public:
    bool equals(::java::lang::Object* o) override;
    int32_t hashCode() override;
    static void main(::java::lang::StringArray* args) /* throws(IOException) */;

    // Generated
    HPSFPropertiesExtractor(::org::apache::poi::POIOLE2TextExtractor* mainExtractor);
    HPSFPropertiesExtractor(::org::apache::poi::POIDocument* doc);
    HPSFPropertiesExtractor(::org::apache::poi::poifs::filesystem::POIFSFileSystem* fs);
    HPSFPropertiesExtractor(::org::apache::poi::poifs::filesystem::NPOIFSFileSystem* fs);
protected:
    HPSFPropertiesExtractor(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
