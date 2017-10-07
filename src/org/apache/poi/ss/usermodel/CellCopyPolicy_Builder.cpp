// Generated from /POI/java/org/apache/poi/ss/usermodel/CellCopyPolicy.java
#include <org/apache/poi/ss/usermodel/CellCopyPolicy_Builder.hpp>

#include <org/apache/poi/ss/usermodel/CellCopyPolicy.hpp>

org::apache::poi::ss::usermodel::CellCopyPolicy_Builder::CellCopyPolicy_Builder(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::usermodel::CellCopyPolicy_Builder::CellCopyPolicy_Builder() 
    : CellCopyPolicy_Builder(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void org::apache::poi::ss::usermodel::CellCopyPolicy_Builder::init()
{
    copyCellValue = CellCopyPolicy::DEFAULT_COPY_CELL_VALUE_POLICY;
    copyCellStyle = CellCopyPolicy::DEFAULT_COPY_CELL_STYLE_POLICY;
    copyCellFormula = CellCopyPolicy::DEFAULT_COPY_CELL_FORMULA_POLICY;
    copyHyperlink_ = CellCopyPolicy::DEFAULT_COPY_HYPERLINK_POLICY;
    mergeHyperlink_ = CellCopyPolicy::DEFAULT_MERGE_HYPERLINK_POLICY;
    copyRowHeight = CellCopyPolicy::DEFAULT_COPY_ROW_HEIGHT_POLICY;
    condenseRows_ = CellCopyPolicy::DEFAULT_CONDENSE_ROWS_POLICY;
    copyMergedRegions = CellCopyPolicy::DEFAULT_COPY_MERGED_REGIONS_POLICY;
}

void org::apache::poi::ss::usermodel::CellCopyPolicy_Builder::ctor()
{
    super::ctor();
    init();
}

org::apache::poi::ss::usermodel::CellCopyPolicy_Builder* org::apache::poi::ss::usermodel::CellCopyPolicy_Builder::cellValue(bool copyCellValue)
{
    this->copyCellValue = copyCellValue;
    return this;
}

org::apache::poi::ss::usermodel::CellCopyPolicy_Builder* org::apache::poi::ss::usermodel::CellCopyPolicy_Builder::cellStyle(bool copyCellStyle)
{
    this->copyCellStyle = copyCellStyle;
    return this;
}

org::apache::poi::ss::usermodel::CellCopyPolicy_Builder* org::apache::poi::ss::usermodel::CellCopyPolicy_Builder::cellFormula(bool copyCellFormula)
{
    this->copyCellFormula = copyCellFormula;
    return this;
}

org::apache::poi::ss::usermodel::CellCopyPolicy_Builder* org::apache::poi::ss::usermodel::CellCopyPolicy_Builder::copyHyperlink(bool copyHyperlink)
{
    this->copyHyperlink_ = copyHyperlink;
    return this;
}

org::apache::poi::ss::usermodel::CellCopyPolicy_Builder* org::apache::poi::ss::usermodel::CellCopyPolicy_Builder::mergeHyperlink(bool mergeHyperlink)
{
    this->mergeHyperlink_ = mergeHyperlink;
    return this;
}

org::apache::poi::ss::usermodel::CellCopyPolicy_Builder* org::apache::poi::ss::usermodel::CellCopyPolicy_Builder::rowHeight(bool copyRowHeight)
{
    this->copyRowHeight = copyRowHeight;
    return this;
}

org::apache::poi::ss::usermodel::CellCopyPolicy_Builder* org::apache::poi::ss::usermodel::CellCopyPolicy_Builder::condenseRows(bool condenseRows)
{
    this->condenseRows_ = condenseRows;
    return this;
}

org::apache::poi::ss::usermodel::CellCopyPolicy_Builder* org::apache::poi::ss::usermodel::CellCopyPolicy_Builder::mergedRegions(bool copyMergedRegions)
{
    this->copyMergedRegions = copyMergedRegions;
    return this;
}

org::apache::poi::ss::usermodel::CellCopyPolicy* org::apache::poi::ss::usermodel::CellCopyPolicy_Builder::build()
{
    return new CellCopyPolicy(this);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::usermodel::CellCopyPolicy_Builder::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.usermodel.CellCopyPolicy.Builder", 50);
    return c;
}

java::lang::Class* org::apache::poi::ss::usermodel::CellCopyPolicy_Builder::getClass0()
{
    return class_();
}

