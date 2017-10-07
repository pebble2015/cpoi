// Generated from /POI/java/org/apache/poi/wp/usermodel/HeaderFooterType.java
#include <org/apache/poi/wp/usermodel/HeaderFooterType.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/Enum.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
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
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::Enum, ObjectArray, ComparableArray, ::java::io::SerializableArray > EnumArray;
    } // lang
} // java

namespace org
{
    namespace apache
    {
        namespace poi
        {
            namespace wp
            {
                namespace usermodel
                {
typedef ::SubArray< ::org::apache::poi::wp::usermodel::HeaderFooterType, ::java::lang::EnumArray > HeaderFooterTypeArray;
                } // usermodel
            } // wp
        } // poi
    } // apache
} // org

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::wp::usermodel::HeaderFooterType::HeaderFooterType(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::wp::usermodel::HeaderFooterType::HeaderFooterType(::java::lang::String* name, int ordinal, int32_t i) 
    : HeaderFooterType(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal, i);
}

org::apache::poi::wp::usermodel::HeaderFooterType* org::apache::poi::wp::usermodel::HeaderFooterType::DEFAULT = new ::org::apache::poi::wp::usermodel::HeaderFooterType(u"DEFAULT"_j, 0, int32_t(2));
org::apache::poi::wp::usermodel::HeaderFooterType* org::apache::poi::wp::usermodel::HeaderFooterType::EVEN = new ::org::apache::poi::wp::usermodel::HeaderFooterType(u"EVEN"_j, 1, int32_t(1));
org::apache::poi::wp::usermodel::HeaderFooterType* org::apache::poi::wp::usermodel::HeaderFooterType::FIRST = new ::org::apache::poi::wp::usermodel::HeaderFooterType(u"FIRST"_j, 2, int32_t(3));
void org::apache::poi::wp::usermodel::HeaderFooterType::ctor(::java::lang::String* name, int ordinal, int32_t i)
{
    super::ctor(name, ordinal);
    code = i;
}

int32_t org::apache::poi::wp::usermodel::HeaderFooterType::toInt()
{
    return code;
}

org::apache::poi::wp::usermodel::HeaderFooterType* org::apache::poi::wp::usermodel::HeaderFooterType::forInt(int32_t i)
{
    clinit();
    for(auto type : *npc(values())) {
        if(npc(type)->code == i) {
            return type;
        }
    }
    throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Invalid HeaderFooterType code: "_j)->append(i)->toString());
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::wp::usermodel::HeaderFooterType::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.wp.usermodel.HeaderFooterType", 44);
    return c;
}

org::apache::poi::wp::usermodel::HeaderFooterType* org::apache::poi::wp::usermodel::HeaderFooterType::valueOf(::java::lang::String* a0)
{
    if(DEFAULT->toString()->equals(a0))
        return DEFAULT;
    if(EVEN->toString()->equals(a0))
        return EVEN;
    if(FIRST->toString()->equals(a0))
        return FIRST;
    throw new ::java::lang::IllegalArgumentException(a0);
}

org::apache::poi::wp::usermodel::HeaderFooterTypeArray* org::apache::poi::wp::usermodel::HeaderFooterType::values()
{
    return new org::apache::poi::wp::usermodel::HeaderFooterTypeArray({
        DEFAULT,
        EVEN,
        FIRST,
    });
}

java::lang::Class* org::apache::poi::wp::usermodel::HeaderFooterType::getClass0()
{
    return class_();
}

