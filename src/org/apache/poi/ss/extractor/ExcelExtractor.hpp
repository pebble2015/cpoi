// Generated from /POI/java/org/apache/poi/ss/extractor/ExcelExtractor.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/extractor/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct poi::ss::extractor::ExcelExtractor
    : public virtual ::java::lang::Object
{
    virtual void setIncludeSheetNames(bool includeSheetNames) = 0;
    virtual void setFormulasNotResults(bool formulasNotResults) = 0;
    virtual void setIncludeHeadersFooters(bool includeHeadersFooters) = 0;
    virtual void setIncludeCellComments(bool includeCellComments) = 0;
    virtual ::java::lang::String* getText() = 0;

    // Generated
    static ::java::lang::Class *class_();
};
