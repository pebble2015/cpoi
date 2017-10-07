// Generated from /POI/java/org/apache/poi/hssf/util/CellReference.java
#include <org/apache/poi/hssf/util/CellReference.hpp>

org::apache::poi::hssf::util::CellReference::CellReference(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::util::CellReference::CellReference(::java::lang::String* cellRef) 
    : CellReference(*static_cast< ::default_init_tag* >(0))
{
    ctor(cellRef);
}

org::apache::poi::hssf::util::CellReference::CellReference(int32_t pRow, int32_t pCol) 
    : CellReference(*static_cast< ::default_init_tag* >(0))
{
    ctor(pRow,pCol);
}

org::apache::poi::hssf::util::CellReference::CellReference(int32_t pRow, int32_t pCol, bool pAbsRow, bool pAbsCol) 
    : CellReference(*static_cast< ::default_init_tag* >(0))
{
    ctor(pRow,pCol,pAbsRow,pAbsCol);
}

org::apache::poi::hssf::util::CellReference::CellReference(::java::lang::String* pSheetName, int32_t pRow, int32_t pCol, bool pAbsRow, bool pAbsCol) 
    : CellReference(*static_cast< ::default_init_tag* >(0))
{
    ctor(pSheetName,pRow,pCol,pAbsRow,pAbsCol);
}

void org::apache::poi::hssf::util::CellReference::ctor(::java::lang::String* cellRef)
{
    super::ctor(cellRef);
}

void org::apache::poi::hssf::util::CellReference::ctor(int32_t pRow, int32_t pCol)
{
    super::ctor(pRow, pCol, true, true);
}

void org::apache::poi::hssf::util::CellReference::ctor(int32_t pRow, int32_t pCol, bool pAbsRow, bool pAbsCol)
{
    super::ctor(nullptr, pRow, pCol, pAbsRow, pAbsCol);
}

void org::apache::poi::hssf::util::CellReference::ctor(::java::lang::String* pSheetName, int32_t pRow, int32_t pCol, bool pAbsRow, bool pAbsCol)
{
    super::ctor(pSheetName, pRow, pCol, pAbsRow, pAbsCol);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::util::CellReference::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.util.CellReference", 38);
    return c;
}

java::lang::Class* org::apache::poi::hssf::util::CellReference::getClass0()
{
    return class_();
}

