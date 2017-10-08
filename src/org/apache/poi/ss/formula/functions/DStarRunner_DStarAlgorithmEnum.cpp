// Generated from /POI/java/org/apache/poi/ss/formula/functions/DStarRunner.java
#include <org/apache/poi/ss/formula/functions/DStarRunner_DStarAlgorithmEnum.hpp>

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
    namespace ss
    {
        namespace formula
        {
            namespace functions
            {
typedef ::SubArray< ::poi::ss::formula::functions::DStarRunner_DStarAlgorithmEnum, ::java::lang::EnumArray > DStarRunner_DStarAlgorithmEnumArray;
            } // functions
        } // formula
    } // ss
} // poi

poi::ss::formula::functions::DStarRunner_DStarAlgorithmEnum::DStarRunner_DStarAlgorithmEnum(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::functions::DStarRunner_DStarAlgorithmEnum::DStarRunner_DStarAlgorithmEnum(::java::lang::String* name, int ordinal)
    : DStarRunner_DStarAlgorithmEnum(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal);
}

poi::ss::formula::functions::DStarRunner_DStarAlgorithmEnum* poi::ss::formula::functions::DStarRunner_DStarAlgorithmEnum::DGET = new ::poi::ss::formula::functions::DStarRunner_DStarAlgorithmEnum(u"DGET"_j, 0);
poi::ss::formula::functions::DStarRunner_DStarAlgorithmEnum* poi::ss::formula::functions::DStarRunner_DStarAlgorithmEnum::DMIN = new ::poi::ss::formula::functions::DStarRunner_DStarAlgorithmEnum(u"DMIN"_j, 1);
extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::functions::DStarRunner_DStarAlgorithmEnum::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.DStarRunner.DStarAlgorithmEnum", 66);
    return c;
}

poi::ss::formula::functions::DStarRunner_DStarAlgorithmEnum* poi::ss::formula::functions::DStarRunner_DStarAlgorithmEnum::valueOf(::java::lang::String* a0)
{
    if(DGET->toString()->equals(a0))
        return DGET;
    if(DMIN->toString()->equals(a0))
        return DMIN;
    throw new ::java::lang::IllegalArgumentException(a0);
}

poi::ss::formula::functions::DStarRunner_DStarAlgorithmEnumArray* poi::ss::formula::functions::DStarRunner_DStarAlgorithmEnum::values()
{
    return new poi::ss::formula::functions::DStarRunner_DStarAlgorithmEnumArray({
        DGET,
        DMIN,
    });
}

java::lang::Class* poi::ss::formula::functions::DStarRunner_DStarAlgorithmEnum::getClass0()
{
    return class_();
}

