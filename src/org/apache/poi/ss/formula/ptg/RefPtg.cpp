// Generated from /POI/java/org/apache/poi/ss/formula/ptg/RefPtg.java
#include <org/apache/poi/ss/formula/ptg/RefPtg.hpp>

#include <org/apache/poi/ss/util/CellReference.hpp>

org::apache::poi::ss::formula::ptg::RefPtg::RefPtg(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::ptg::RefPtg::RefPtg(::java::lang::String* cellref) 
    : RefPtg(*static_cast< ::default_init_tag* >(0))
{
    ctor(cellref);
}

org::apache::poi::ss::formula::ptg::RefPtg::RefPtg(int32_t row, int32_t column, bool isRowRelative, bool isColumnRelative) 
    : RefPtg(*static_cast< ::default_init_tag* >(0))
{
    ctor(row,column,isRowRelative,isColumnRelative);
}

org::apache::poi::ss::formula::ptg::RefPtg::RefPtg(::org::apache::poi::util::LittleEndianInput* in) 
    : RefPtg(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

org::apache::poi::ss::formula::ptg::RefPtg::RefPtg(::org::apache::poi::ss::util::CellReference* cr) 
    : RefPtg(*static_cast< ::default_init_tag* >(0))
{
    ctor(cr);
}

constexpr int8_t org::apache::poi::ss::formula::ptg::RefPtg::sid;

void org::apache::poi::ss::formula::ptg::RefPtg::ctor(::java::lang::String* cellref)
{
    super::ctor(new ::org::apache::poi::ss::util::CellReference(cellref));
}

void org::apache::poi::ss::formula::ptg::RefPtg::ctor(int32_t row, int32_t column, bool isRowRelative, bool isColumnRelative)
{
    super::ctor(row, column, isRowRelative, isColumnRelative);
}

void org::apache::poi::ss::formula::ptg::RefPtg::ctor(::org::apache::poi::util::LittleEndianInput* in)
{
    super::ctor(in);
}

void org::apache::poi::ss::formula::ptg::RefPtg::ctor(::org::apache::poi::ss::util::CellReference* cr)
{
    super::ctor(cr);
}

int8_t org::apache::poi::ss::formula::ptg::RefPtg::getSid()
{
    return sid;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::ptg::RefPtg::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.ptg.RefPtg", 36);
    return c;
}

java::lang::Class* org::apache::poi::ss::formula::ptg::RefPtg::getClass0()
{
    return class_();
}

