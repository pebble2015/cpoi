// Generated from /POI/java/org/apache/poi/ss/formula/EvaluationWorkbook.java

#pragma once

#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::ss::formula::EvaluationWorkbook_ExternalSheet
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    ::java::lang::String* _workbookName {  };
    ::java::lang::String* _sheetName {  };
protected:
    void ctor(::java::lang::String* workbookName, ::java::lang::String* sheetName);

public:
    virtual ::java::lang::String* getWorkbookName();
    virtual ::java::lang::String* getSheetName();

    // Generated
    EvaluationWorkbook_ExternalSheet(::java::lang::String* workbookName, ::java::lang::String* sheetName);
protected:
    EvaluationWorkbook_ExternalSheet(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class EvaluationWorkbook;
    friend class EvaluationWorkbook_ExternalSheetRange;
    friend class EvaluationWorkbook_ExternalName;
};
