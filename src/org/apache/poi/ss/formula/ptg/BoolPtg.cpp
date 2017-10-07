// Generated from /POI/java/org/apache/poi/ss/formula/ptg/BoolPtg.java
#include <org/apache/poi/ss/formula/ptg/BoolPtg.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <org/apache/poi/util/LittleEndianInput.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::ss::formula::ptg::BoolPtg::BoolPtg(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::ptg::BoolPtg::BoolPtg(bool b) 
    : BoolPtg(*static_cast< ::default_init_tag* >(0))
{
    ctor(b);
}

constexpr int32_t org::apache::poi::ss::formula::ptg::BoolPtg::SIZE;

constexpr int8_t org::apache::poi::ss::formula::ptg::BoolPtg::sid;

org::apache::poi::ss::formula::ptg::BoolPtg*& org::apache::poi::ss::formula::ptg::BoolPtg::FALSE()
{
    clinit();
    return FALSE_;
}
org::apache::poi::ss::formula::ptg::BoolPtg* org::apache::poi::ss::formula::ptg::BoolPtg::FALSE_;

org::apache::poi::ss::formula::ptg::BoolPtg*& org::apache::poi::ss::formula::ptg::BoolPtg::TRUE()
{
    clinit();
    return TRUE_;
}
org::apache::poi::ss::formula::ptg::BoolPtg* org::apache::poi::ss::formula::ptg::BoolPtg::TRUE_;

void org::apache::poi::ss::formula::ptg::BoolPtg::ctor(bool b)
{
    super::ctor();
    _value = b;
}

org::apache::poi::ss::formula::ptg::BoolPtg* org::apache::poi::ss::formula::ptg::BoolPtg::valueOf(bool b)
{
    clinit();
    return b ? TRUE_ : FALSE_;
}

org::apache::poi::ss::formula::ptg::BoolPtg* org::apache::poi::ss::formula::ptg::BoolPtg::read(::org::apache::poi::util::LittleEndianInput* in)
{
    clinit();
    return valueOf(npc(in)->readByte() == 1);
}

bool org::apache::poi::ss::formula::ptg::BoolPtg::getValue()
{
    return _value;
}

void org::apache::poi::ss::formula::ptg::BoolPtg::write(::org::apache::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeByte(sid + getPtgClass());
    npc(out)->writeByte(_value ? int32_t(1) : int32_t(0));
}

int32_t org::apache::poi::ss::formula::ptg::BoolPtg::getSize()
{
    return SIZE;
}

java::lang::String* org::apache::poi::ss::formula::ptg::BoolPtg::toFormulaString()
{
    return _value ? u"TRUE"_j : u"FALSE"_j;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::ptg::BoolPtg::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.ptg.BoolPtg", 37);
    return c;
}

void org::apache::poi::ss::formula::ptg::BoolPtg::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        FALSE_ = new BoolPtg(false);
        TRUE_ = new BoolPtg(true);
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* org::apache::poi::ss::formula::ptg::BoolPtg::getClass0()
{
    return class_();
}

