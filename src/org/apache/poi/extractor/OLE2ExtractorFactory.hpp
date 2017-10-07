// Generated from /POI/java/org/apache/poi/extractor/OLE2ExtractorFactory.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/fwd-POI.hpp>
#include <org/apache/poi/extractor/fwd-POI.hpp>
#include <org/apache/poi/poifs/filesystem/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace lang
    {
typedef ::SubArray< ::java::lang::AutoCloseable, ObjectArray > AutoCloseableArray;
    } // lang

    namespace io
    {
typedef ::SubArray< ::java::io::Closeable, ::java::lang::ObjectArray, ::java::lang::AutoCloseableArray > CloseableArray;
    } // io
} // java

namespace org
{
    namespace apache
    {
        namespace poi
        {
typedef ::SubArray< ::org::apache::poi::POITextExtractor, ::java::lang::ObjectArray, ::java::io::CloseableArray > POITextExtractorArray;
        } // poi
    } // apache
} // org

struct default_init_tag;

class org::apache::poi::extractor::OLE2ExtractorFactory
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static ::org::apache::poi::util::POILogger* LOGGER_;
    static ::java::lang::ThreadLocal* threadPreferEventExtractors_;
    static ::java::lang::Boolean* allPreferEventExtractors_;

public:
    static bool getThreadPrefersEventExtractors();
    static ::java::lang::Boolean* getAllThreadsPreferEventExtractors();
    static void setThreadPrefersEventExtractors(bool preferEventExtractors);
    static void setAllThreadsPreferEventExtractors(::java::lang::Boolean* preferEventExtractors);

public: /* protected */
    static bool getPreferEventExtractor();

public:
    static ::org::apache::poi::POIOLE2TextExtractor* createExtractor(::org::apache::poi::poifs::filesystem::POIFSFileSystem* fs) /* throws(IOException) */;
    static ::org::apache::poi::POIOLE2TextExtractor* createExtractor(::org::apache::poi::poifs::filesystem::NPOIFSFileSystem* fs) /* throws(IOException) */;
    static ::org::apache::poi::POIOLE2TextExtractor* createExtractor(::org::apache::poi::poifs::filesystem::OPOIFSFileSystem* fs) /* throws(IOException) */;
    static ::org::apache::poi::POITextExtractor* createExtractor(::java::io::InputStream* input) /* throws(IOException) */;

private:
    static ::java::lang::Class* getOOXMLClass();
    static ::java::lang::Class* getScratchpadClass();

public:
    static ::org::apache::poi::POITextExtractor* createExtractor(::org::apache::poi::poifs::filesystem::DirectoryNode* poifsDir) /* throws(IOException) */;
    static ::org::apache::poi::POITextExtractorArray* getEmbededDocsTextExtractors(::org::apache::poi::POIOLE2TextExtractor* ext) /* throws(IOException) */;

private:
    static ::org::apache::poi::POITextExtractor* createEncyptedOOXMLExtractor(::org::apache::poi::poifs::filesystem::DirectoryNode* poifsDir) /* throws(IOException) */;

    // Generated

public:
    OLE2ExtractorFactory();
protected:
    OLE2ExtractorFactory(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static ::org::apache::poi::util::POILogger*& LOGGER();
    static ::java::lang::ThreadLocal*& threadPreferEventExtractors();
    static ::java::lang::Boolean*& allPreferEventExtractors();
    virtual ::java::lang::Class* getClass0();
    friend class OLE2ExtractorFactory_1;
};
