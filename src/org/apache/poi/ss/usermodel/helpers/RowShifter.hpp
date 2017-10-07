// Generated from /POI/java/org/apache/poi/ss/usermodel/helpers/RowShifter.java

#pragma once

#include <fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/helpers/fwd-POI.hpp>
#include <org/apache/poi/ss/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::poi::ss::usermodel::helpers::RowShifter
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

public: /* protected */
    ::org::apache::poi::ss::usermodel::Sheet* sheet {  };
protected:
    void ctor(::org::apache::poi::ss::usermodel::Sheet* sh);

public:
    virtual ::java::util::List* shiftMergedRegions(int32_t startRow, int32_t endRow, int32_t n);

private:
    bool removalNeeded(::org::apache::poi::ss::util::CellRangeAddress* merged, int32_t startRow, int32_t endRow, int32_t n);

public:
    virtual void updateNamedRanges(::org::apache::poi::ss::formula::FormulaShifter* shifter) = 0;
    virtual void updateFormulas(::org::apache::poi::ss::formula::FormulaShifter* shifter) = 0;
    virtual void updateRowFormulas(::org::apache::poi::ss::usermodel::Row* row, ::org::apache::poi::ss::formula::FormulaShifter* shifter) = 0;
    virtual void updateConditionalFormatting(::org::apache::poi::ss::formula::FormulaShifter* shifter) = 0;
    virtual void updateHyperlinks(::org::apache::poi::ss::formula::FormulaShifter* shifter) = 0;

    // Generated
    RowShifter(::org::apache::poi::ss::usermodel::Sheet* sh);
protected:
    RowShifter(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
