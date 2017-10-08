// Generated from /POI/java/org/apache/poi/ss/formula/ptg/RangePtg.java
#include <org/apache/poi/ss/formula/ptg/RangePtg.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
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

poi::ss::formula::ptg::RangePtg::RangePtg(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::ptg::RangePtg::RangePtg() 
    : RangePtg(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

constexpr int32_t poi::ss::formula::ptg::RangePtg::SIZE;

constexpr int8_t poi::ss::formula::ptg::RangePtg::sid;

poi::ss::formula::ptg::OperationPtg*& poi::ss::formula::ptg::RangePtg::instance()
{
    clinit();
    return instance_;
}
poi::ss::formula::ptg::OperationPtg* poi::ss::formula::ptg::RangePtg::instance_;

void poi::ss::formula::ptg::RangePtg::ctor()
{
    super::ctor();
}

bool poi::ss::formula::ptg::RangePtg::isBaseToken()
{
    return true;
}

int32_t poi::ss::formula::ptg::RangePtg::getSize()
{
    return SIZE;
}

void poi::ss::formula::ptg::RangePtg::write(::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeByte(sid + getPtgClass());
}

java::lang::String* poi::ss::formula::ptg::RangePtg::toFormulaString()
{
    return u":"_j;
}

java::lang::String* poi::ss::formula::ptg::RangePtg::toFormulaString(::java::lang::StringArray* operands)
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append((*operands)[int32_t(0)]);
    npc(buffer)->append(u":"_j);
    npc(buffer)->append((*operands)[int32_t(1)]);
    return npc(buffer)->toString();
}

int32_t poi::ss::formula::ptg::RangePtg::getNumberOfOperands()
{
    return 2;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::ptg::RangePtg::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.ptg.RangePtg", 38);
    return c;
}

void poi::ss::formula::ptg::RangePtg::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        instance_ = new RangePtg();
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* poi::ss::formula::ptg::RangePtg::getClass0()
{
    return class_();
}

