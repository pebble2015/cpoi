// Generated from /POI/java/org/apache/poi/ss/formula/ptg/RefPtg.java
#include <org/apache/poi/ss/formula/ptg/RefPtg.hpp>

#include <org/apache/poi/ss/util/CellReference.hpp>

poi::ss::formula::ptg::RefPtg::RefPtg(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::ptg::RefPtg::RefPtg(::java::lang::String* cellref) 
    : RefPtg(*static_cast< ::default_init_tag* >(0))
{
    ctor(cellref);
}

poi::ss::formula::ptg::RefPtg::RefPtg(int32_t row, int32_t column, bool isRowRelative, bool isColumnRelative) 
    : RefPtg(*static_cast< ::default_init_tag* >(0))
{
    ctor(row,column,isRowRelative,isColumnRelative);
}

poi::ss::formula::ptg::RefPtg::RefPtg(::poi::util::LittleEndianInput* in) 
    : RefPtg(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

poi::ss::formula::ptg::RefPtg::RefPtg(::poi::ss::util::CellReference* cr) 
    : RefPtg(*static_cast< ::default_init_tag* >(0))
{
    ctor(cr);
}

constexpr int8_t poi::ss::formula::ptg::RefPtg::sid;

void poi::ss::formula::ptg::RefPtg::ctor(::java::lang::String* cellref)
{
    super::ctor(new ::poi::ss::util::CellReference(cellref));
}

void poi::ss::formula::ptg::RefPtg::ctor(int32_t row, int32_t column, bool isRowRelative, bool isColumnRelative)
{
    super::ctor(row, column, isRowRelative, isColumnRelative);
}

void poi::ss::formula::ptg::RefPtg::ctor(::poi::util::LittleEndianInput* in)
{
    super::ctor(in);
}

void poi::ss::formula::ptg::RefPtg::ctor(::poi::ss::util::CellReference* cr)
{
    super::ctor(cr);
}

int8_t poi::ss::formula::ptg::RefPtg::getSid()
{
    return sid;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::ptg::RefPtg::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.ptg.RefPtg", 36);
    return c;
}

java::lang::Class* poi::ss::formula::ptg::RefPtg::getClass0()
{
    return class_();
}

