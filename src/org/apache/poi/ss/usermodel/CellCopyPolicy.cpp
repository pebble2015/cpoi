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

org::apache::poi::ss::usermodel::CellCopyPolicy::CellCopyPolicy(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::usermodel::CellCopyPolicy::CellCopyPolicy() 
    : CellCopyPolicy(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::ss::usermodel::CellCopyPolicy::CellCopyPolicy(CellCopyPolicy* other) 
    : CellCopyPolicy(*static_cast< ::default_init_tag* >(0))
{
    ctor(other);
}

org::apache::poi::ss::usermodel::CellCopyPolicy::CellCopyPolicy(CellCopyPolicy_Builder* builder) 
    : CellCopyPolicy(*static_cast< ::default_init_tag* >(0))
{
    ctor(builder);
}

void org::apache::poi::ss::usermodel::CellCopyPolicy::init()
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

constexpr bool org::apache::poi::ss::usermodel::CellCopyPolicy::DEFAULT_COPY_CELL_VALUE_POLICY;

constexpr bool org::apache::poi::ss::usermodel::CellCopyPolicy::DEFAULT_COPY_CELL_STYLE_POLICY;

constexpr bool org::apache::poi::ss::usermodel::CellCopyPolicy::DEFAULT_COPY_CELL_FORMULA_POLICY;

constexpr bool org::apache::poi::ss::usermodel::CellCopyPolicy::DEFAULT_COPY_HYPERLINK_POLICY;

constexpr bool org::apache::poi::ss::usermodel::CellCopyPolicy::DEFAULT_MERGE_HYPERLINK_POLICY;

constexpr bool org::apache::poi::ss::usermodel::CellCopyPolicy::DEFAULT_COPY_ROW_HEIGHT_POLICY;

constexpr bool org::apache::poi::ss::usermodel::CellCopyPolicy::DEFAULT_CONDENSE_ROWS_POLICY;

constexpr bool org::apache::poi::ss::usermodel::CellCopyPolicy::DEFAULT_COPY_MERGED_REGIONS_POLICY;

void org::apache::poi::ss::usermodel::CellCopyPolicy::ctor()
{
    super::ctor();
    init();
}

void org::apache::poi::ss::usermodel::CellCopyPolicy::ctor(CellCopyPolicy* other)
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

void org::apache::poi::ss::usermodel::CellCopyPolicy::ctor(CellCopyPolicy_Builder* builder)
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

org::apache::poi::ss::usermodel::CellCopyPolicy_Builder* org::apache::poi::ss::usermodel::CellCopyPolicy::createBuilder()
{
    auto const builder = npc(npc(npc(npc(npc(npc(npc((new CellCopyPolicy_Builder())->cellValue(copyCellValue))->cellStyle(copyCellStyle))->cellFormula(copyCellFormula))->copyHyperlink(copyHyperlink))->mergeHyperlink(mergeHyperlink))->rowHeight(copyRowHeight))->condenseRows(condenseRows))->mergedRegions(copyMergedRegions);
    return builder;
}

bool org::apache::poi::ss::usermodel::CellCopyPolicy::isCopyCellValue()
{
    return copyCellValue;
}

void org::apache::poi::ss::usermodel::CellCopyPolicy::setCopyCellValue(bool copyCellValue)
{
    this->copyCellValue = copyCellValue;
}

bool org::apache::poi::ss::usermodel::CellCopyPolicy::isCopyCellStyle()
{
    return copyCellStyle;
}

void org::apache::poi::ss::usermodel::CellCopyPolicy::setCopyCellStyle(bool copyCellStyle)
{
    this->copyCellStyle = copyCellStyle;
}

bool org::apache::poi::ss::usermodel::CellCopyPolicy::isCopyCellFormula()
{
    return copyCellFormula;
}

void org::apache::poi::ss::usermodel::CellCopyPolicy::setCopyCellFormula(bool copyCellFormula)
{
    this->copyCellFormula = copyCellFormula;
}

bool org::apache::poi::ss::usermodel::CellCopyPolicy::isCopyHyperlink()
{
    return copyHyperlink;
}

void org::apache::poi::ss::usermodel::CellCopyPolicy::setCopyHyperlink(bool copyHyperlink)
{
    this->copyHyperlink = copyHyperlink;
}

bool org::apache::poi::ss::usermodel::CellCopyPolicy::isMergeHyperlink()
{
    return mergeHyperlink;
}

void org::apache::poi::ss::usermodel::CellCopyPolicy::setMergeHyperlink(bool mergeHyperlink)
{
    this->mergeHyperlink = mergeHyperlink;
}

bool org::apache::poi::ss::usermodel::CellCopyPolicy::isCopyRowHeight()
{
    return copyRowHeight;
}

void org::apache::poi::ss::usermodel::CellCopyPolicy::setCopyRowHeight(bool copyRowHeight)
{
    this->copyRowHeight = copyRowHeight;
}

bool org::apache::poi::ss::usermodel::CellCopyPolicy::isCondenseRows()
{
    return condenseRows;
}

void org::apache::poi::ss::usermodel::CellCopyPolicy::setCondenseRows(bool condenseRows)
{
    this->condenseRows = condenseRows;
}

bool org::apache::poi::ss::usermodel::CellCopyPolicy::isCopyMergedRegions()
{
    return copyMergedRegions;
}

void org::apache::poi::ss::usermodel::CellCopyPolicy::setCopyMergedRegions(bool copyMergedRegions)
{
    this->copyMergedRegions = copyMergedRegions;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::usermodel::CellCopyPolicy::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.usermodel.CellCopyPolicy", 42);
    return c;
}

java::lang::Class* org::apache::poi::ss::usermodel::CellCopyPolicy::getClass0()
{
    return class_();
}

