// Generated from /POI/java/org/apache/poi/ss/formula/eval/forked/ForkedEvaluationCell.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/forked/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/ss/formula/EvaluationCell.hpp>

struct default_init_tag;

class poi::ss::formula::eval::forked::ForkedEvaluationCell final
    : public virtual ::java::lang::Object
    , public ::poi::ss::formula::EvaluationCell
{

public:
    typedef ::java::lang::Object super;

private:
    ::poi::ss::formula::EvaluationSheet* _sheet {  };
    ::poi::ss::formula::EvaluationCell* _masterCell {  };
    bool _booleanValue {  };
    ::poi::ss::usermodel::CellType* _cellType {  };
    int32_t _errorValue {  };
    double _numberValue {  };
    ::java::lang::String* _stringValue {  };
protected:
    void ctor(ForkedEvaluationSheet* sheet, ::poi::ss::formula::EvaluationCell* masterCell);

public:
    ::java::lang::Object* getIdentityKey() override;
    void setValue(::poi::ss::formula::eval::ValueEval* value);
    void copyValue(::poi::ss::usermodel::Cell* destCell);

private:
    void checkCellType(::poi::ss::usermodel::CellType* expectedCellType);

public:
    int32_t getCellType() override;
    ::poi::ss::usermodel::CellType* getCellTypeEnum() override;
    bool getBooleanCellValue() override;
    int32_t getErrorCellValue() override;
    double getNumericCellValue() override;
    ::java::lang::String* getStringCellValue() override;
    ::poi::ss::formula::EvaluationSheet* getSheet() override;
    int32_t getRowIndex() override;
    int32_t getColumnIndex() override;
    int32_t getCachedFormulaResultType() override;
    ::poi::ss::usermodel::CellType* getCachedFormulaResultTypeEnum() override;

    // Generated
    ForkedEvaluationCell(ForkedEvaluationSheet* sheet, ::poi::ss::formula::EvaluationCell* masterCell);
protected:
    ForkedEvaluationCell(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
