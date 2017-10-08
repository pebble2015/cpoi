// Generated from /POI/java/org/apache/poi/ss/formula/ConditionalFormattingEvaluator.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <org/apache/poi/ss/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::ss::formula::ConditionalFormattingEvaluator
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    WorkbookEvaluator* workbookEvaluator {  };
    ::poi::ss::usermodel::Workbook* workbook {  };
    ::java::util::Map* formats {  };
    ::java::util::Map* values {  };
protected:
    void ctor(::poi::ss::usermodel::Workbook* wb, WorkbookEvaluatorProvider* provider);

public: /* protected */
    virtual WorkbookEvaluator* getWorkbookEvaluator();

public:
    virtual void clearAllCachedFormats();
    virtual void clearAllCachedValues();

public: /* protected */
    virtual ::java::util::List* getRules(::poi::ss::usermodel::Sheet* sheet);

public:
    virtual ::java::util::List* getConditionalFormattingForCell(::poi::ss::util::CellReference* cellRef);
    virtual ::java::util::List* getConditionalFormattingForCell(::poi::ss::usermodel::Cell* cell);
    static ::poi::ss::util::CellReference* getRef(::poi::ss::usermodel::Cell* cell);
    virtual ::java::util::List* getFormatRulesForSheet(::java::lang::String* sheetName);
    virtual ::java::util::List* getFormatRulesForSheet(::poi::ss::usermodel::Sheet* sheet);
    virtual ::java::util::List* getMatchingCells(::poi::ss::usermodel::Sheet* sheet, int32_t conditionalFormattingIndex, int32_t ruleIndex);
    virtual ::java::util::List* getMatchingCells(EvaluationConditionalFormatRule* rule);

    // Generated
    ConditionalFormattingEvaluator(::poi::ss::usermodel::Workbook* wb, WorkbookEvaluatorProvider* provider);
protected:
    ConditionalFormattingEvaluator(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    void init();
    virtual ::java::lang::Class* getClass0();
};
