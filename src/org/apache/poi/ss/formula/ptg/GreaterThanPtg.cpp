// Generated from /POI/java/org/apache/poi/ss/formula/ptg/GreaterThanPtg.java
#include <org/apache/poi/ss/formula/ptg/GreaterThanPtg.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
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

org::apache::poi::ss::formula::ptg::GreaterThanPtg::GreaterThanPtg(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::ptg::GreaterThanPtg::GreaterThanPtg() 
    : GreaterThanPtg(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

constexpr int8_t org::apache::poi::ss::formula::ptg::GreaterThanPtg::sid;

java::lang::String*& org::apache::poi::ss::formula::ptg::GreaterThanPtg::GREATERTHAN()
{
    clinit();
    return GREATERTHAN_;
}
java::lang::String* org::apache::poi::ss::formula::ptg::GreaterThanPtg::GREATERTHAN_;

org::apache::poi::ss::formula::ptg::ValueOperatorPtg*& org::apache::poi::ss::formula::ptg::GreaterThanPtg::instance()
{
    clinit();
    return instance_;
}
org::apache::poi::ss::formula::ptg::ValueOperatorPtg* org::apache::poi::ss::formula::ptg::GreaterThanPtg::instance_;

void org::apache::poi::ss::formula::ptg::GreaterThanPtg::ctor()
{
    super::ctor();
}

int8_t org::apache::poi::ss::formula::ptg::GreaterThanPtg::getSid()
{
    return sid;
}

int32_t org::apache::poi::ss::formula::ptg::GreaterThanPtg::getNumberOfOperands()
{
    return 2;
}

java::lang::String* org::apache::poi::ss::formula::ptg::GreaterThanPtg::toFormulaString(::java::lang::StringArray* operands)
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append((*operands)[int32_t(0)]);
    npc(buffer)->append(GREATERTHAN_);
    npc(buffer)->append((*operands)[int32_t(1)]);
    return npc(buffer)->toString();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::ptg::GreaterThanPtg::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.ptg.GreaterThanPtg", 44);
    return c;
}

void org::apache::poi::ss::formula::ptg::GreaterThanPtg::clinit()
{
struct string_init_ {
    string_init_() {
    GREATERTHAN_ = u">"_j;
    }
};

    static string_init_ string_init_instance;

    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        instance_ = new GreaterThanPtg();
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::String* org::apache::poi::ss::formula::ptg::GreaterThanPtg::toFormulaString()
{
    return super::toFormulaString();
}

java::lang::Class* org::apache::poi::ss::formula::ptg::GreaterThanPtg::getClass0()
{
    return class_();
}

