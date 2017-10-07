// Generated from /POI/java/org/apache/poi/ss/util/cellwalk/CellWalk.java
#include <org/apache/poi/ss/util/cellwalk/CellWalk_SimpleCellWalkContext.hpp>

org::apache::poi::ss::util::cellwalk::CellWalk_SimpleCellWalkContext::CellWalk_SimpleCellWalkContext(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::util::cellwalk::CellWalk_SimpleCellWalkContext::CellWalk_SimpleCellWalkContext()
    : CellWalk_SimpleCellWalkContext(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void org::apache::poi::ss::util::cellwalk::CellWalk_SimpleCellWalkContext::ctor()
{
    super::ctor();
    init();
}

void org::apache::poi::ss::util::cellwalk::CellWalk_SimpleCellWalkContext::init()
{
    ordinalNumber = int32_t(0);
    rowNumber = int32_t(0);
    colNumber = int32_t(0);
}

int64_t org::apache::poi::ss::util::cellwalk::CellWalk_SimpleCellWalkContext::getOrdinalNumber()
{
    return ordinalNumber;
}

int32_t org::apache::poi::ss::util::cellwalk::CellWalk_SimpleCellWalkContext::getRowNumber()
{
    return rowNumber;
}

int32_t org::apache::poi::ss::util::cellwalk::CellWalk_SimpleCellWalkContext::getColumnNumber()
{
    return colNumber;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::util::cellwalk::CellWalk_SimpleCellWalkContext::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.util.cellwalk.CellWalk.SimpleCellWalkContext", 62);
    return c;
}

java::lang::Class* org::apache::poi::ss::util::cellwalk::CellWalk_SimpleCellWalkContext::getClass0()
{
    return class_();
}

