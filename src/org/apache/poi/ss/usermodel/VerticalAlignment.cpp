// Generated from /POI/java/org/apache/poi/ss/usermodel/VerticalAlignment.java
#include <org/apache/poi/ss/usermodel/VerticalAlignment.hpp>

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
            namespace ss
            {
                namespace usermodel
                {
typedef ::SubArray< ::org::apache::poi::ss::usermodel::VerticalAlignment, ::java::lang::EnumArray > VerticalAlignmentArray;
                } // usermodel
            } // ss
        } // poi
    } // apache
} // org

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::ss::usermodel::VerticalAlignment::VerticalAlignment(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::usermodel::VerticalAlignment::VerticalAlignment(::java::lang::String* name, int ordinal)
    : VerticalAlignment(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal);
}

org::apache::poi::ss::usermodel::VerticalAlignment* org::apache::poi::ss::usermodel::VerticalAlignment::TOP = new ::org::apache::poi::ss::usermodel::VerticalAlignment(u"TOP"_j, 0);
org::apache::poi::ss::usermodel::VerticalAlignment* org::apache::poi::ss::usermodel::VerticalAlignment::CENTER = new ::org::apache::poi::ss::usermodel::VerticalAlignment(u"CENTER"_j, 1);
org::apache::poi::ss::usermodel::VerticalAlignment* org::apache::poi::ss::usermodel::VerticalAlignment::BOTTOM = new ::org::apache::poi::ss::usermodel::VerticalAlignment(u"BOTTOM"_j, 2);
org::apache::poi::ss::usermodel::VerticalAlignment* org::apache::poi::ss::usermodel::VerticalAlignment::JUSTIFY = new ::org::apache::poi::ss::usermodel::VerticalAlignment(u"JUSTIFY"_j, 3);
org::apache::poi::ss::usermodel::VerticalAlignment* org::apache::poi::ss::usermodel::VerticalAlignment::DISTRIBUTED = new ::org::apache::poi::ss::usermodel::VerticalAlignment(u"DISTRIBUTED"_j, 4);
int16_t org::apache::poi::ss::usermodel::VerticalAlignment::getCode()
{
    return static_cast< int16_t >(ordinal());
}

org::apache::poi::ss::usermodel::VerticalAlignment* org::apache::poi::ss::usermodel::VerticalAlignment::forInt(int32_t code)
{
    clinit();
    if(code < 0 || code >= npc(values())->length) {
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Invalid VerticalAlignment code: "_j)->append(code)->toString());
    }
    return (*values())[code];
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::usermodel::VerticalAlignment::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.usermodel.VerticalAlignment", 45);
    return c;
}

org::apache::poi::ss::usermodel::VerticalAlignment* org::apache::poi::ss::usermodel::VerticalAlignment::valueOf(::java::lang::String* a0)
{
    if(BOTTOM->toString()->equals(a0))
        return BOTTOM;
    if(CENTER->toString()->equals(a0))
        return CENTER;
    if(DISTRIBUTED->toString()->equals(a0))
        return DISTRIBUTED;
    if(JUSTIFY->toString()->equals(a0))
        return JUSTIFY;
    if(TOP->toString()->equals(a0))
        return TOP;
    throw new ::java::lang::IllegalArgumentException(a0);
}

org::apache::poi::ss::usermodel::VerticalAlignmentArray* org::apache::poi::ss::usermodel::VerticalAlignment::values()
{
    return new org::apache::poi::ss::usermodel::VerticalAlignmentArray({
        BOTTOM,
        CENTER,
        DISTRIBUTED,
        JUSTIFY,
        TOP,
    });
}

java::lang::Class* org::apache::poi::ss::usermodel::VerticalAlignment::getClass0()
{
    return class_();
}

