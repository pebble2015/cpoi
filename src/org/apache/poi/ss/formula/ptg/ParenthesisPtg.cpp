// Generated from /POI/java/org/apache/poi/ss/formula/ptg/ParenthesisPtg.java
#include <org/apache/poi/ss/formula/ptg/ParenthesisPtg.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>
#include <SubArray.hpp>
#include <ObjectArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace io
    {
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
    } // io

    namespace lang
    {
typedef ::SubArray< ::java::lang::CharSequence, ObjectArray > CharSequenceArray;
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::String, ObjectArray, ::java::io::SerializableArray, ComparableArray, CharSequenceArray > StringArray;
    } // lang
} // java

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::ss::formula::ptg::ParenthesisPtg::ParenthesisPtg(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::ptg::ParenthesisPtg::ParenthesisPtg() 
    : ParenthesisPtg(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

constexpr int32_t org::apache::poi::ss::formula::ptg::ParenthesisPtg::SIZE;

constexpr int8_t org::apache::poi::ss::formula::ptg::ParenthesisPtg::sid;

org::apache::poi::ss::formula::ptg::ControlPtg*& org::apache::poi::ss::formula::ptg::ParenthesisPtg::instance()
{
    clinit();
    return instance_;
}
org::apache::poi::ss::formula::ptg::ControlPtg* org::apache::poi::ss::formula::ptg::ParenthesisPtg::instance_;

void org::apache::poi::ss::formula::ptg::ParenthesisPtg::ctor()
{
    super::ctor();
}

void org::apache::poi::ss::formula::ptg::ParenthesisPtg::write(::org::apache::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeByte(sid + getPtgClass());
}

int32_t org::apache::poi::ss::formula::ptg::ParenthesisPtg::getSize()
{
    return SIZE;
}

java::lang::String* org::apache::poi::ss::formula::ptg::ParenthesisPtg::toFormulaString()
{
    return u"()"_j;
}

java::lang::String* org::apache::poi::ss::formula::ptg::ParenthesisPtg::toFormulaString(::java::lang::StringArray* operands)
{
    return ::java::lang::StringBuilder().append(u"("_j)->append((*operands)[int32_t(0)])
        ->append(u")"_j)->toString();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::ptg::ParenthesisPtg::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.ptg.ParenthesisPtg", 44);
    return c;
}

void org::apache::poi::ss::formula::ptg::ParenthesisPtg::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        instance_ = new ParenthesisPtg();
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* org::apache::poi::ss::formula::ptg::ParenthesisPtg::getClass0()
{
    return class_();
}

