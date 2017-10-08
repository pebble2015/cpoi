// Generated from /POI/java/org/apache/poi/ss/formula/ptg/AreaPtg.java
#include <org/apache/poi/ss/formula/ptg/AreaPtg.hpp>

#include <org/apache/poi/ss/SpreadsheetVersion.hpp>
#include <org/apache/poi/ss/util/AreaReference.hpp>

poi::ss::formula::ptg::AreaPtg::AreaPtg(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::ptg::AreaPtg::AreaPtg(int32_t firstRow, int32_t lastRow, int32_t firstColumn, int32_t lastColumn, bool firstRowRelative, bool lastRowRelative, bool firstColRelative, bool lastColRelative) 
    : AreaPtg(*static_cast< ::default_init_tag* >(0))
{
    ctor(firstRow,lastRow,firstColumn,lastColumn,firstRowRelative,lastRowRelative,firstColRelative,lastColRelative);
}

poi::ss::formula::ptg::AreaPtg::AreaPtg(::poi::util::LittleEndianInput* in) 
    : AreaPtg(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

poi::ss::formula::ptg::AreaPtg::AreaPtg(::java::lang::String* arearef) 
    : AreaPtg(*static_cast< ::default_init_tag* >(0))
{
    ctor(arearef);
}

poi::ss::formula::ptg::AreaPtg::AreaPtg(::poi::ss::util::AreaReference* arearef) 
    : AreaPtg(*static_cast< ::default_init_tag* >(0))
{
    ctor(arearef);
}

constexpr int16_t poi::ss::formula::ptg::AreaPtg::sid;

void poi::ss::formula::ptg::AreaPtg::ctor(int32_t firstRow, int32_t lastRow, int32_t firstColumn, int32_t lastColumn, bool firstRowRelative, bool lastRowRelative, bool firstColRelative, bool lastColRelative)
{
    super::ctor(firstRow, lastRow, firstColumn, lastColumn, firstRowRelative, lastRowRelative, firstColRelative, lastColRelative);
}

void poi::ss::formula::ptg::AreaPtg::ctor(::poi::util::LittleEndianInput* in)
{
    super::ctor(in);
}

void poi::ss::formula::ptg::AreaPtg::ctor(::java::lang::String* arearef)
{
    ctor(new ::poi::ss::util::AreaReference(arearef, ::poi::ss::SpreadsheetVersion::EXCEL97));
}

void poi::ss::formula::ptg::AreaPtg::ctor(::poi::ss::util::AreaReference* arearef)
{
    super::ctor(arearef);
}

int8_t poi::ss::formula::ptg::AreaPtg::getSid()
{
    return sid;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::ptg::AreaPtg::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.ptg.AreaPtg", 37);
    return c;
}

java::lang::Class* poi::ss::formula::ptg::AreaPtg::getClass0()
{
    return class_();
}

