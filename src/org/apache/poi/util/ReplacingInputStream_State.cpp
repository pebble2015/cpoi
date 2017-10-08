// Generated from /POI/java/org/apache/poi/util/ReplacingInputStream.java
#include <org/apache/poi/util/ReplacingInputStream_State.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/Enum.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/String.hpp>
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
    namespace util
    {
typedef ::SubArray< ::poi::util::ReplacingInputStream_State, ::java::lang::EnumArray > ReplacingInputStream_StateArray;
    } // util
} // poi

poi::util::ReplacingInputStream_State::ReplacingInputStream_State(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::util::ReplacingInputStream_State::ReplacingInputStream_State(::java::lang::String* name, int ordinal)
    : ReplacingInputStream_State(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal);
}

poi::util::ReplacingInputStream_State* poi::util::ReplacingInputStream_State::NOT_MATCHED = new ::poi::util::ReplacingInputStream_State(u"NOT_MATCHED"_j, 0);
poi::util::ReplacingInputStream_State* poi::util::ReplacingInputStream_State::MATCHING = new ::poi::util::ReplacingInputStream_State(u"MATCHING"_j, 1);
poi::util::ReplacingInputStream_State* poi::util::ReplacingInputStream_State::REPLACING = new ::poi::util::ReplacingInputStream_State(u"REPLACING"_j, 2);
poi::util::ReplacingInputStream_State* poi::util::ReplacingInputStream_State::UNBUFFER = new ::poi::util::ReplacingInputStream_State(u"UNBUFFER"_j, 3);
extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::util::ReplacingInputStream_State::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.util.ReplacingInputStream.State", 46);
    return c;
}

poi::util::ReplacingInputStream_State* poi::util::ReplacingInputStream_State::valueOf(::java::lang::String* a0)
{
    if(MATCHING->toString()->equals(a0))
        return MATCHING;
    if(NOT_MATCHED->toString()->equals(a0))
        return NOT_MATCHED;
    if(REPLACING->toString()->equals(a0))
        return REPLACING;
    if(UNBUFFER->toString()->equals(a0))
        return UNBUFFER;
    throw new ::java::lang::IllegalArgumentException(a0);
}

poi::util::ReplacingInputStream_StateArray* poi::util::ReplacingInputStream_State::values()
{
    return new poi::util::ReplacingInputStream_StateArray({
        MATCHING,
        NOT_MATCHED,
        REPLACING,
        UNBUFFER,
    });
}

java::lang::Class* poi::util::ReplacingInputStream_State::getClass0()
{
    return class_();
}

