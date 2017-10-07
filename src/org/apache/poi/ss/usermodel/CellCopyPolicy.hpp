// Generated from /POI/java/org/apache/poi/ss/usermodel/CellCopyPolicy.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::poi::ss::usermodel::CellCopyPolicy
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
    static constexpr bool DEFAULT_COPY_CELL_VALUE_POLICY { true };
    static constexpr bool DEFAULT_COPY_CELL_STYLE_POLICY { true };
    static constexpr bool DEFAULT_COPY_CELL_FORMULA_POLICY { true };
    static constexpr bool DEFAULT_COPY_HYPERLINK_POLICY { true };
    static constexpr bool DEFAULT_MERGE_HYPERLINK_POLICY { false };
    static constexpr bool DEFAULT_COPY_ROW_HEIGHT_POLICY { true };
    static constexpr bool DEFAULT_CONDENSE_ROWS_POLICY { false };
    static constexpr bool DEFAULT_COPY_MERGED_REGIONS_POLICY { true };

private:
    bool copyCellValue {  };
    bool copyCellStyle {  };
    bool copyCellFormula {  };
    bool copyHyperlink {  };
    bool mergeHyperlink {  };
    bool copyRowHeight {  };
    bool condenseRows {  };
    bool copyMergedRegions {  };
protected:
    void ctor();
    void ctor(CellCopyPolicy* other);
    void ctor(CellCopyPolicy_Builder* builder);

public:
    virtual CellCopyPolicy_Builder* createBuilder();
    virtual bool isCopyCellValue();
    virtual void setCopyCellValue(bool copyCellValue);
    virtual bool isCopyCellStyle();
    virtual void setCopyCellStyle(bool copyCellStyle);
    virtual bool isCopyCellFormula();
    virtual void setCopyCellFormula(bool copyCellFormula);
    virtual bool isCopyHyperlink();
    virtual void setCopyHyperlink(bool copyHyperlink);
    virtual bool isMergeHyperlink();
    virtual void setMergeHyperlink(bool mergeHyperlink);
    virtual bool isCopyRowHeight();
    virtual void setCopyRowHeight(bool copyRowHeight);
    virtual bool isCondenseRows();
    virtual void setCondenseRows(bool condenseRows);
    virtual bool isCopyMergedRegions();
    virtual void setCopyMergedRegions(bool copyMergedRegions);

    // Generated
    CellCopyPolicy();
    CellCopyPolicy(CellCopyPolicy* other);

private:
    CellCopyPolicy(CellCopyPolicy_Builder* builder);
protected:
    CellCopyPolicy(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    void init();
    virtual ::java::lang::Class* getClass0();
    friend class CellCopyPolicy_Builder;
};
