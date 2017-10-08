// Generated from /POI/java/org/apache/poi/ss/usermodel/HorizontalAlignment.java
#include <org/apache/poi/ss/usermodel/HorizontalAlignment.hpp>

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

namespace poi
{
    namespace ss
    {
        namespace usermodel
        {
typedef ::SubArray< ::poi::ss::usermodel::HorizontalAlignment, ::java::lang::EnumArray > HorizontalAlignmentArray;
        } // usermodel
    } // ss
} // poi

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::ss::usermodel::HorizontalAlignment::HorizontalAlignment(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::usermodel::HorizontalAlignment::HorizontalAlignment(::java::lang::String* name, int ordinal)
    : HorizontalAlignment(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal);
}

poi::ss::usermodel::HorizontalAlignment* poi::ss::usermodel::HorizontalAlignment::GENERAL = new ::poi::ss::usermodel::HorizontalAlignment(u"GENERAL"_j, 0);
poi::ss::usermodel::HorizontalAlignment* poi::ss::usermodel::HorizontalAlignment::LEFT = new ::poi::ss::usermodel::HorizontalAlignment(u"LEFT"_j, 1);
poi::ss::usermodel::HorizontalAlignment* poi::ss::usermodel::HorizontalAlignment::CENTER = new ::poi::ss::usermodel::HorizontalAlignment(u"CENTER"_j, 2);
poi::ss::usermodel::HorizontalAlignment* poi::ss::usermodel::HorizontalAlignment::RIGHT = new ::poi::ss::usermodel::HorizontalAlignment(u"RIGHT"_j, 3);
poi::ss::usermodel::HorizontalAlignment* poi::ss::usermodel::HorizontalAlignment::FILL = new ::poi::ss::usermodel::HorizontalAlignment(u"FILL"_j, 4);
poi::ss::usermodel::HorizontalAlignment* poi::ss::usermodel::HorizontalAlignment::JUSTIFY = new ::poi::ss::usermodel::HorizontalAlignment(u"JUSTIFY"_j, 5);
poi::ss::usermodel::HorizontalAlignment* poi::ss::usermodel::HorizontalAlignment::CENTER_SELECTION = new ::poi::ss::usermodel::HorizontalAlignment(u"CENTER_SELECTION"_j, 6);
poi::ss::usermodel::HorizontalAlignment* poi::ss::usermodel::HorizontalAlignment::DISTRIBUTED = new ::poi::ss::usermodel::HorizontalAlignment(u"DISTRIBUTED"_j, 7);
int16_t poi::ss::usermodel::HorizontalAlignment::getCode()
{
    return static_cast< int16_t >(ordinal());
}

poi::ss::usermodel::HorizontalAlignment* poi::ss::usermodel::HorizontalAlignment::forInt(int32_t code)
{
    clinit();
    if(code < 0 || code >= npc(values())->length) {
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Invalid HorizontalAlignment code: "_j)->append(code)->toString());
    }
    return (*values())[code];
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::usermodel::HorizontalAlignment::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.usermodel.HorizontalAlignment", 47);
    return c;
}

poi::ss::usermodel::HorizontalAlignment* poi::ss::usermodel::HorizontalAlignment::valueOf(::java::lang::String* a0)
{
    if(CENTER->toString()->equals(a0))
        return CENTER;
    if(CENTER_SELECTION->toString()->equals(a0))
        return CENTER_SELECTION;
    if(DISTRIBUTED->toString()->equals(a0))
        return DISTRIBUTED;
    if(FILL->toString()->equals(a0))
        return FILL;
    if(GENERAL->toString()->equals(a0))
        return GENERAL;
    if(JUSTIFY->toString()->equals(a0))
        return JUSTIFY;
    if(LEFT->toString()->equals(a0))
        return LEFT;
    if(RIGHT->toString()->equals(a0))
        return RIGHT;
    throw new ::java::lang::IllegalArgumentException(a0);
}

poi::ss::usermodel::HorizontalAlignmentArray* poi::ss::usermodel::HorizontalAlignment::values()
{
    return new poi::ss::usermodel::HorizontalAlignmentArray({
        CENTER,
        CENTER_SELECTION,
        DISTRIBUTED,
        FILL,
        GENERAL,
        JUSTIFY,
        LEFT,
        RIGHT,
    });
}

java::lang::Class* poi::ss::usermodel::HorizontalAlignment::getClass0()
{
    return class_();
}

