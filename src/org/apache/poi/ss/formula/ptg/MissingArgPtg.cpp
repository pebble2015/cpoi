// Generated from /POI/java/org/apache/poi/ss/formula/ptg/MissingArgPtg.java
#include <org/apache/poi/ss/formula/ptg/MissingArgPtg.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::ss::formula::ptg::MissingArgPtg::MissingArgPtg(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::ptg::MissingArgPtg::MissingArgPtg() 
    : MissingArgPtg(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

constexpr int32_t org::apache::poi::ss::formula::ptg::MissingArgPtg::SIZE;

constexpr int8_t org::apache::poi::ss::formula::ptg::MissingArgPtg::sid;

org::apache::poi::ss::formula::ptg::Ptg*& org::apache::poi::ss::formula::ptg::MissingArgPtg::instance()
{
    clinit();
    return instance_;
}
org::apache::poi::ss::formula::ptg::Ptg* org::apache::poi::ss::formula::ptg::MissingArgPtg::instance_;

void org::apache::poi::ss::formula::ptg::MissingArgPtg::ctor()
{
    super::ctor();
}

void org::apache::poi::ss::formula::ptg::MissingArgPtg::write(::org::apache::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeByte(sid + getPtgClass());
}

int32_t org::apache::poi::ss::formula::ptg::MissingArgPtg::getSize()
{
    return SIZE;
}

java::lang::String* org::apache::poi::ss::formula::ptg::MissingArgPtg::toFormulaString()
{
    return u" "_j;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::ptg::MissingArgPtg::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.ptg.MissingArgPtg", 43);
    return c;
}

void org::apache::poi::ss::formula::ptg::MissingArgPtg::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        instance_ = new MissingArgPtg();
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* org::apache::poi::ss::formula::ptg::MissingArgPtg::getClass0()
{
    return class_();
}

