// Generated from /POI/java/org/apache/poi/ss/formula/ptg/Area2DPtgBase.java
#include <org/apache/poi/ss/formula/ptg/Area2DPtgBase.hpp>

#include <java/lang/Class.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::ss::formula::ptg::Area2DPtgBase::Area2DPtgBase(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::ptg::Area2DPtgBase::Area2DPtgBase(int32_t firstRow, int32_t lastRow, int32_t firstColumn, int32_t lastColumn, bool firstRowRelative, bool lastRowRelative, bool firstColRelative, bool lastColRelative) 
    : Area2DPtgBase(*static_cast< ::default_init_tag* >(0))
{
    ctor(firstRow,lastRow,firstColumn,lastColumn,firstRowRelative,lastRowRelative,firstColRelative,lastColRelative);
}

org::apache::poi::ss::formula::ptg::Area2DPtgBase::Area2DPtgBase(::org::apache::poi::ss::util::AreaReference* ar) 
    : Area2DPtgBase(*static_cast< ::default_init_tag* >(0))
{
    ctor(ar);
}

org::apache::poi::ss::formula::ptg::Area2DPtgBase::Area2DPtgBase(::org::apache::poi::util::LittleEndianInput* in) 
    : Area2DPtgBase(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int32_t org::apache::poi::ss::formula::ptg::Area2DPtgBase::SIZE;

void org::apache::poi::ss::formula::ptg::Area2DPtgBase::ctor(int32_t firstRow, int32_t lastRow, int32_t firstColumn, int32_t lastColumn, bool firstRowRelative, bool lastRowRelative, bool firstColRelative, bool lastColRelative)
{
    super::ctor(firstRow, lastRow, firstColumn, lastColumn, firstRowRelative, lastRowRelative, firstColRelative, lastColRelative);
}

void org::apache::poi::ss::formula::ptg::Area2DPtgBase::ctor(::org::apache::poi::ss::util::AreaReference* ar)
{
    super::ctor(ar);
}

void org::apache::poi::ss::formula::ptg::Area2DPtgBase::ctor(::org::apache::poi::util::LittleEndianInput* in)
{
    super::ctor();
    readCoordinates(in);
}

void org::apache::poi::ss::formula::ptg::Area2DPtgBase::write(::org::apache::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeByte(getSid() + getPtgClass());
    writeCoordinates(out);
}

int32_t org::apache::poi::ss::formula::ptg::Area2DPtgBase::getSize()
{
    return SIZE;
}

java::lang::String* org::apache::poi::ss::formula::ptg::Area2DPtgBase::toFormulaString()
{
    return formatReferenceAsString();
}

java::lang::String* org::apache::poi::ss::formula::ptg::Area2DPtgBase::toString()
{
    auto sb = new ::java::lang::StringBuffer();
    npc(sb)->append(npc(getClass())->getName());
    npc(sb)->append(u" ["_j);
    npc(sb)->append(formatReferenceAsString());
    npc(sb)->append(u"]"_j);
    return npc(sb)->toString();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::ptg::Area2DPtgBase::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.ptg.Area2DPtgBase", 43);
    return c;
}

java::lang::Class* org::apache::poi::ss::formula::ptg::Area2DPtgBase::getClass0()
{
    return class_();
}

