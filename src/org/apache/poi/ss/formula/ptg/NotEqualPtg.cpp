// Generated from /POI/java/org/apache/poi/ss/formula/ptg/NotEqualPtg.java
#include <org/apache/poi/ss/formula/ptg/NotEqualPtg.hpp>

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

org::apache::poi::ss::formula::ptg::NotEqualPtg::NotEqualPtg(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::ptg::NotEqualPtg::NotEqualPtg() 
    : NotEqualPtg(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

constexpr int8_t org::apache::poi::ss::formula::ptg::NotEqualPtg::sid;

org::apache::poi::ss::formula::ptg::ValueOperatorPtg*& org::apache::poi::ss::formula::ptg::NotEqualPtg::instance()
{
    clinit();
    return instance_;
}
org::apache::poi::ss::formula::ptg::ValueOperatorPtg* org::apache::poi::ss::formula::ptg::NotEqualPtg::instance_;

void org::apache::poi::ss::formula::ptg::NotEqualPtg::ctor()
{
    super::ctor();
}

int8_t org::apache::poi::ss::formula::ptg::NotEqualPtg::getSid()
{
    return sid;
}

int32_t org::apache::poi::ss::formula::ptg::NotEqualPtg::getNumberOfOperands()
{
    return 2;
}

java::lang::String* org::apache::poi::ss::formula::ptg::NotEqualPtg::toFormulaString(::java::lang::StringArray* operands)
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append((*operands)[int32_t(0)]);
    npc(buffer)->append(u"<>"_j);
    npc(buffer)->append((*operands)[int32_t(1)]);
    return npc(buffer)->toString();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::ptg::NotEqualPtg::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.ptg.NotEqualPtg", 41);
    return c;
}

void org::apache::poi::ss::formula::ptg::NotEqualPtg::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        instance_ = new NotEqualPtg();
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::String* org::apache::poi::ss::formula::ptg::NotEqualPtg::toFormulaString()
{
    return super::toFormulaString();
}

java::lang::Class* org::apache::poi::ss::formula::ptg::NotEqualPtg::getClass0()
{
    return class_();
}

