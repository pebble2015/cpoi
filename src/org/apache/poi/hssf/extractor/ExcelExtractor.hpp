// Generated from /POI/java/org/apache/poi/hssf/extractor/ExcelExtractor.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/extractor/fwd-POI.hpp>
#include <org/apache/poi/hssf/usermodel/fwd-POI.hpp>
#include <org/apache/poi/poifs/filesystem/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <org/apache/poi/POIOLE2TextExtractor.hpp>
#include <org/apache/poi/ss/extractor/ExcelExtractor.hpp>

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

class poi::hssf::extractor::ExcelExtractor
    : public ::poi::POIOLE2TextExtractor
    , public virtual ::poi::ss::extractor::ExcelExtractor
{

public:
    typedef ::poi::POIOLE2TextExtractor super;

private:
    ::poi::hssf::usermodel::HSSFWorkbook* _wb {  };
    ::poi::hssf::usermodel::HSSFDataFormatter* _formatter {  };
    bool _includeSheetNames {  };
    bool _shouldEvaluateFormulas {  };
    bool _includeCellComments {  };
    bool _includeBlankCells {  };
    bool _includeHeadersFooters {  };
protected:
    void ctor(::poi::hssf::usermodel::HSSFWorkbook* wb);
    void ctor(::poi::poifs::filesystem::POIFSFileSystem* fs) /* throws(IOException) */;
    void ctor(::poi::poifs::filesystem::DirectoryNode* dir) /* throws(IOException) */;

private:
    static void printUsageMessage(::java::io::PrintStream* ps);

public:
    static void main(::java::lang::StringArray* args) /* throws(IOException) */;
    void setIncludeSheetNames(bool includeSheetNames) override;
    void setFormulasNotResults(bool formulasNotResults) override;
    void setIncludeCellComments(bool includeCellComments) override;
    virtual void setIncludeBlankCells(bool includeBlankCells);
    void setIncludeHeadersFooters(bool includeHeadersFooters) override;
    ::java::lang::String* getText() override;
    static ::java::lang::String* _extractHeaderFooter(::poi::ss::usermodel::HeaderFooter* hf);

    // Generated
    ExcelExtractor(::poi::hssf::usermodel::HSSFWorkbook* wb);
    ExcelExtractor(::poi::poifs::filesystem::POIFSFileSystem* fs);
    ExcelExtractor(::poi::poifs::filesystem::DirectoryNode* dir);
protected:
    ExcelExtractor(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    void init();
    virtual ::java::lang::Class* getClass0();
    friend class ExcelExtractor_CommandParseException;
    friend class ExcelExtractor_CommandArgs;
};
