// Generated from /POI/java/org/apache/poi/ss/usermodel/CellCopyPolicy.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::ss::usermodel::CellCopyPolicy_Builder
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    bool copyCellValue {  };
    bool copyCellStyle {  };
    bool copyCellFormula {  };
    bool copyHyperlink_ {  };
    bool mergeHyperlink_ {  };
    bool copyRowHeight {  };
    bool condenseRows_ {  };
    bool copyMergedRegions {  };
protected:
    void ctor();

public:
    virtual CellCopyPolicy_Builder* cellValue(bool copyCellValue);
    virtual CellCopyPolicy_Builder* cellStyle(bool copyCellStyle);
    virtual CellCopyPolicy_Builder* cellFormula(bool copyCellFormula);
    virtual CellCopyPolicy_Builder* copyHyperlink(bool copyHyperlink);
    virtual CellCopyPolicy_Builder* mergeHyperlink(bool mergeHyperlink);
    virtual CellCopyPolicy_Builder* rowHeight(bool copyRowHeight);
    virtual CellCopyPolicy_Builder* condenseRows(bool condenseRows);
    virtual CellCopyPolicy_Builder* mergedRegions(bool copyMergedRegions);
    virtual CellCopyPolicy* build();

    // Generated
    CellCopyPolicy_Builder();
protected:
    CellCopyPolicy_Builder(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    void init();
    virtual ::java::lang::Class* getClass0();
    friend class CellCopyPolicy;
};
