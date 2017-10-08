// Generated from /POI/java/org/apache/poi/ss/usermodel/CellCopyPolicy.java
#include <org/apache/poi/ss/usermodel/CellCopyPolicy.hpp>

#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/ss/usermodel/CellCopyPolicy_Builder.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::ss::usermodel::CellCopyPolicy::CellCopyPolicy(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::usermodel::CellCopyPolicy::CellCopyPolicy() 
    : CellCopyPolicy(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::ss::usermodel::CellCopyPolicy::CellCopyPolicy(CellCopyPolicy* other) 
    : CellCopyPolicy(*static_cast< ::default_init_tag* >(0))
{
    ctor(other);
}

poi::ss::usermodel::CellCopyPolicy::CellCopyPolicy(CellCopyPolicy_Builder* builder) 
    : CellCopyPolicy(*static_cast< ::default_init_tag* >(0))
{
    ctor(builder);
}

void poi::ss::usermodel::CellCopyPolicy::init()
{
    copyCellValue = CellCopyPolicy::DEFAULT_COPY_CELL_VALUE_POLICY;
    copyCellStyle = CellCopyPolicy::DEFAULT_COPY_CELL_STYLE_POLICY;
    copyCellFormula = CellCopyPolicy::DEFAULT_COPY_CELL_FORMULA_POLICY;
    copyHyperlink = CellCopyPolicy::DEFAULT_COPY_HYPERLINK_POLICY;
    mergeHyperlink = CellCopyPolicy::DEFAULT_MERGE_HYPERLINK_POLICY;
    copyRowHeight = CellCopyPolicy::DEFAULT_COPY_ROW_HEIGHT_POLICY;
    condenseRows = CellCopyPolicy::DEFAULT_CONDENSE_ROWS_POLICY;
    copyMergedRegions = CellCopyPolicy::DEFAULT_COPY_MERGED_REGIONS_POLICY;
}

constexpr bool poi::ss::usermodel::CellCopyPolicy::DEFAULT_COPY_CELL_VALUE_POLICY;

constexpr bool poi::ss::usermodel::CellCopyPolicy::DEFAULT_COPY_CELL_STYLE_POLICY;

constexpr bool poi::ss::usermodel::CellCopyPolicy::DEFAULT_COPY_CELL_FORMULA_POLICY;

constexpr bool poi::ss::usermodel::CellCopyPolicy::DEFAULT_COPY_HYPERLINK_POLICY;

constexpr bool poi::ss::usermodel::CellCopyPolicy::DEFAULT_MERGE_HYPERLINK_POLICY;

constexpr bool poi::ss::usermodel::CellCopyPolicy::DEFAULT_COPY_ROW_HEIGHT_POLICY;

constexpr bool poi::ss::usermodel::CellCopyPolicy::DEFAULT_CONDENSE_ROWS_POLICY;

constexpr bool poi::ss::usermodel::CellCopyPolicy::DEFAULT_COPY_MERGED_REGIONS_POLICY;

void poi::ss::usermodel::CellCopyPolicy::ctor()
{
    super::ctor();
    init();
}

void poi::ss::usermodel::CellCopyPolicy::ctor(CellCopyPolicy* other)
{
    super::ctor();
    init();
    copyCellValue = npc(other)->isCopyCellValue();
    copyCellStyle = npc(other)->isCopyCellStyle();
    copyCellFormula = npc(other)->isCopyCellFormula();
    copyHyperlink = npc(other)->isCopyHyperlink();
    mergeHyperlink = npc(other)->isMergeHyperlink();
    copyRowHeight = npc(other)->isCopyRowHeight();
    condenseRows = npc(other)->isCondenseRows();
    copyMergedRegions = npc(other)->isCopyMergedRegions();
}

void poi::ss::usermodel::CellCopyPolicy::ctor(CellCopyPolicy_Builder* builder)
{
    super::ctor();
    init();
    copyCellValue = npc(builder)->copyCellValue;
    copyCellStyle = npc(builder)->copyCellStyle;
    copyCellFormula = npc(builder)->copyCellFormula;
    copyHyperlink = npc(builder)->copyHyperlink_;
    mergeHyperlink = npc(builder)->mergeHyperlink_;
    copyRowHeight = npc(builder)->copyRowHeight;
    condenseRows = npc(builder)->condenseRows_;
    copyMergedRegions = npc(builder)->copyMergedRegions;
}

poi::ss::usermodel::CellCopyPolicy_Builder* poi::ss::usermodel::CellCopyPolicy::createBuilder()
{
    auto const builder = npc(npc(npc(npc(npc(npc(npc((new CellCopyPolicy_Builder())->cellValue(copyCellValue))->cellStyle(copyCellStyle))->cellFormula(copyCellFormula))->copyHyperlink(copyHyperlink))->mergeHyperlink(mergeHyperlink))->rowHeight(copyRowHeight))->condenseRows(condenseRows))->mergedRegions(copyMergedRegions);
    return builder;
}

bool poi::ss::usermodel::CellCopyPolicy::isCopyCellValue()
{
    return copyCellValue;
}

void poi::ss::usermodel::CellCopyPolicy::setCopyCellValue(bool copyCellValue)
{
    this->copyCellValue = copyCellValue;
}

bool poi::ss::usermodel::CellCopyPolicy::isCopyCellStyle()
{
    return copyCellStyle;
}

void poi::ss::usermodel::CellCopyPolicy::setCopyCellStyle(bool copyCellStyle)
{
    this->copyCellStyle = copyCellStyle;
}

bool poi::ss::usermodel::CellCopyPolicy::isCopyCellFormula()
{
    return copyCellFormula;
}

void poi::ss::usermodel::CellCopyPolicy::setCopyCellFormula(bool copyCellFormula)
{
    this->copyCellFormula = copyCellFormula;
}

bool poi::ss::usermodel::CellCopyPolicy::isCopyHyperlink()
{
    return copyHyperlink;
}

void poi::ss::usermodel::CellCopyPolicy::setCopyHyperlink(bool copyHyperlink)
{
    this->copyHyperlink = copyHyperlink;
}

bool poi::ss::usermodel::CellCopyPolicy::isMergeHyperlink()
{
    return mergeHyperlink;
}

void poi::ss::usermodel::CellCopyPolicy::setMergeHyperlink(bool mergeHyperlink)
{
    this->mergeHyperlink = mergeHyperlink;
}

bool poi::ss::usermodel::CellCopyPolicy::isCopyRowHeight()
{
    return copyRowHeight;
}

void poi::ss::usermodel::CellCopyPolicy::setCopyRowHeight(bool copyRowHeight)
{
    this->copyRowHeight = copyRowHeight;
}

bool poi::ss::usermodel::CellCopyPolicy::isCondenseRows()
{
    return condenseRows;
}

void poi::ss::usermodel::CellCopyPolicy::setCondenseRows(bool condenseRows)
{
    this->condenseRows = condenseRows;
}

bool poi::ss::usermodel::CellCopyPolicy::isCopyMergedRegions()
{
    return copyMergedRegions;
}

void poi::ss::usermodel::CellCopyPolicy::setCopyMergedRegions(bool copyMergedRegions)
{
    this->copyMergedRegions = copyMergedRegions;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::usermodel::CellCopyPolicy::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.usermodel.CellCopyPolicy", 42);
    return c;
}

java::lang::Class* poi::ss::usermodel::CellCopyPolicy::getClass0()
{
    return class_();
}

