// Generated from /POI/java/org/apache/poi/hssf/extractor/ExcelExtractor.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/extractor/fwd-POI.hpp>
#include <java/lang/Object.hpp>

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

class org::apache::poi::hssf::extractor::ExcelExtractor_CommandArgs final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    bool _requestHelp {  };
    ::java::io::File* _inputFile {  };
    bool _showSheetNames {  };
    bool _evaluateFormulas {  };
    bool _showCellComments {  };
    bool _showBlankCells {  };
    bool _headersFooters {  };
protected:
    void ctor(::java::lang::StringArray* args) /* throws(CommandParseException) */;

private:
    static bool parseBoolArg(::java::lang::StringArray* args, int32_t i) /* throws(CommandParseException) */;

public:
    bool isRequestHelp();
    ::java::io::File* getInputFile();
    bool shouldShowSheetNames();
    bool shouldEvaluateFormulas();
    bool shouldShowCellComments();
    bool shouldShowBlankCells();
    bool shouldIncludeHeadersFooters();

    // Generated
    ExcelExtractor_CommandArgs(::java::lang::StringArray* args);
protected:
    ExcelExtractor_CommandArgs(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class ExcelExtractor;
    friend class ExcelExtractor_CommandParseException;
};
