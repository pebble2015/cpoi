// Generated from /POI/java/org/apache/poi/ss/formula/ptg/AddPtg.java
#include <org/apache/poi/ss/formula/ptg/AddPtg.hpp>

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

poi::ss::formula::ptg::AddPtg::AddPtg(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::ptg::AddPtg::AddPtg() 
    : AddPtg(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

constexpr int8_t poi::ss::formula::ptg::AddPtg::sid;

java::lang::String*& poi::ss::formula::ptg::AddPtg::ADD()
{
    clinit();
    return ADD_;
}
java::lang::String* poi::ss::formula::ptg::AddPtg::ADD_;

poi::ss::formula::ptg::ValueOperatorPtg*& poi::ss::formula::ptg::AddPtg::instance()
{
    clinit();
    return instance_;
}
poi::ss::formula::ptg::ValueOperatorPtg* poi::ss::formula::ptg::AddPtg::instance_;

void poi::ss::formula::ptg::AddPtg::ctor()
{
    super::ctor();
}

int8_t poi::ss::formula::ptg::AddPtg::getSid()
{
    return sid;
}

int32_t poi::ss::formula::ptg::AddPtg::getNumberOfOperands()
{
    return 2;
}

java::lang::String* poi::ss::formula::ptg::AddPtg::toFormulaString(::java::lang::StringArray* operands)
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append((*operands)[int32_t(0)]);
    npc(buffer)->append(ADD_);
    npc(buffer)->append((*operands)[int32_t(1)]);
    return npc(buffer)->toString();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::ptg::AddPtg::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.ptg.AddPtg", 36);
    return c;
}

void poi::ss::formula::ptg::AddPtg::clinit()
{
struct string_init_ {
    string_init_() {
    ADD_ = u"+"_j;
    }
};

    static string_init_ string_init_instance;

    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        instance_ = new AddPtg();
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::String* poi::ss::formula::ptg::AddPtg::toFormulaString()
{
    return super::toFormulaString();
}

java::lang::Class* poi::ss::formula::ptg::AddPtg::getClass0()
{
    return class_();
}

