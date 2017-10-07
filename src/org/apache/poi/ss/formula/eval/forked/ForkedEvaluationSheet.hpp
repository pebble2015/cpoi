// Generated from /POI/java/org/apache/poi/ss/formula/eval/forked/ForkedEvaluationSheet.java

#pragma once

#include <fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/forked/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/ss/formula/EvaluationSheet.hpp>

struct default_init_tag;

class org::apache::poi::ss::formula::eval::forked::ForkedEvaluationSheet final
    : public virtual ::java::lang::Object
    , public ::org::apache::poi::ss::formula::EvaluationSheet
{

public:
    typedef ::java::lang::Object super;

private:
    ::org::apache::poi::ss::formula::EvaluationSheet* _masterSheet {  };
    ::java::util::Map* _sharedCellsByRowCol {  };
protected:
    void ctor(::org::apache::poi::ss::formula::EvaluationSheet* masterSheet);

public:
    ::org::apache::poi::ss::formula::EvaluationCell* getCell(int32_t rowIndex, int32_t columnIndex) override;
    ForkedEvaluationCell* getOrCreateUpdatableCell(int32_t rowIndex, int32_t columnIndex);
    void copyUpdatedCells(::org::apache::poi::ss::usermodel::Sheet* sheet);
    int32_t getSheetIndex(::org::apache::poi::ss::formula::EvaluationWorkbook* mewb);
    void clearAllCachedResultValues() override;

    // Generated
    ForkedEvaluationSheet(::org::apache::poi::ss::formula::EvaluationSheet* masterSheet);
protected:
    ForkedEvaluationSheet(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class ForkedEvaluationSheet_RowColKey;
};
