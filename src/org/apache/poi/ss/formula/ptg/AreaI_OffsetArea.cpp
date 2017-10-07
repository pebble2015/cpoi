// Generated from /POI/java/org/apache/poi/ss/formula/ptg/AreaI.java
#include <org/apache/poi/ss/formula/ptg/AreaI_OffsetArea.hpp>

#include <java/lang/Math.hpp>

org::apache::poi::ss::formula::ptg::AreaI_OffsetArea::AreaI_OffsetArea(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::ptg::AreaI_OffsetArea::AreaI_OffsetArea(int32_t baseRow, int32_t baseColumn, int32_t relFirstRowIx, int32_t relLastRowIx, int32_t relFirstColIx, int32_t relLastColIx) 
    : AreaI_OffsetArea(*static_cast< ::default_init_tag* >(0))
{
    ctor(baseRow,baseColumn,relFirstRowIx,relLastRowIx,relFirstColIx,relLastColIx);
}

void org::apache::poi::ss::formula::ptg::AreaI_OffsetArea::ctor(int32_t baseRow, int32_t baseColumn, int32_t relFirstRowIx, int32_t relLastRowIx, int32_t relFirstColIx, int32_t relLastColIx)
{
    super::ctor();
    _firstRow = baseRow + ::java::lang::Math::min(relFirstRowIx, relLastRowIx);
    _lastRow = baseRow + ::java::lang::Math::max(relFirstRowIx, relLastRowIx);
    _firstColumn = baseColumn + ::java::lang::Math::min(relFirstColIx, relLastColIx);
    _lastColumn = baseColumn + ::java::lang::Math::max(relFirstColIx, relLastColIx);
}

int32_t org::apache::poi::ss::formula::ptg::AreaI_OffsetArea::getFirstColumn()
{
    return _firstColumn;
}

int32_t org::apache::poi::ss::formula::ptg::AreaI_OffsetArea::getFirstRow()
{
    return _firstRow;
}

int32_t org::apache::poi::ss::formula::ptg::AreaI_OffsetArea::getLastColumn()
{
    return _lastColumn;
}

int32_t org::apache::poi::ss::formula::ptg::AreaI_OffsetArea::getLastRow()
{
    return _lastRow;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::ptg::AreaI_OffsetArea::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.ptg.AreaI.OffsetArea", 46);
    return c;
}

java::lang::Class* org::apache::poi::ss::formula::ptg::AreaI_OffsetArea::getClass0()
{
    return class_();
}

