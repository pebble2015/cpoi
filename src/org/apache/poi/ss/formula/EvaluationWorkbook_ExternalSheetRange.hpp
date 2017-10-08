// Generated from /POI/java/org/apache/poi/ss/formula/EvaluationWorkbook.java

#pragma once

#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/EvaluationWorkbook_ExternalSheet.hpp>

struct default_init_tag;

class poi::ss::formula::EvaluationWorkbook_ExternalSheetRange
    : public EvaluationWorkbook_ExternalSheet
{

public:
    typedef EvaluationWorkbook_ExternalSheet super;

private:
    ::java::lang::String* _lastSheetName {  };
protected:
    void ctor(::java::lang::String* workbookName, ::java::lang::String* firstSheetName, ::java::lang::String* lastSheetName);

public:
    virtual ::java::lang::String* getFirstSheetName();
    virtual ::java::lang::String* getLastSheetName();

    // Generated
    EvaluationWorkbook_ExternalSheetRange(::java::lang::String* workbookName, ::java::lang::String* firstSheetName, ::java::lang::String* lastSheetName);
protected:
    EvaluationWorkbook_ExternalSheetRange(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class EvaluationWorkbook;
    friend class EvaluationWorkbook_ExternalSheet;
    friend class EvaluationWorkbook_ExternalName;
};
