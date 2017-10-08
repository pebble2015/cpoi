// Generated from /POI/java/org/apache/poi/ss/usermodel/Row.java
#include <org/apache/poi/ss/usermodel/Row_MissingCellPolicy.hpp>

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
        namespace usermodel
        {
typedef ::SubArray< ::poi::ss::usermodel::Row_MissingCellPolicy, ::java::lang::EnumArray > Row_MissingCellPolicyArray;
        } // usermodel
    } // ss
} // poi

poi::ss::usermodel::Row_MissingCellPolicy::Row_MissingCellPolicy(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::usermodel::Row_MissingCellPolicy::Row_MissingCellPolicy(::java::lang::String* name, int ordinal)
    : Row_MissingCellPolicy(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal);
}

poi::ss::usermodel::Row_MissingCellPolicy* poi::ss::usermodel::Row_MissingCellPolicy::RETURN_NULL_AND_BLANK = new ::poi::ss::usermodel::Row_MissingCellPolicy(u"RETURN_NULL_AND_BLANK"_j, 0);
poi::ss::usermodel::Row_MissingCellPolicy* poi::ss::usermodel::Row_MissingCellPolicy::RETURN_BLANK_AS_NULL = new ::poi::ss::usermodel::Row_MissingCellPolicy(u"RETURN_BLANK_AS_NULL"_j, 1);
poi::ss::usermodel::Row_MissingCellPolicy* poi::ss::usermodel::Row_MissingCellPolicy::CREATE_NULL_AS_BLANK = new ::poi::ss::usermodel::Row_MissingCellPolicy(u"CREATE_NULL_AS_BLANK"_j, 2);
extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::usermodel::Row_MissingCellPolicy::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.usermodel.Row.MissingCellPolicy", 49);
    return c;
}

poi::ss::usermodel::Row_MissingCellPolicy* poi::ss::usermodel::Row_MissingCellPolicy::valueOf(::java::lang::String* a0)
{
    if(CREATE_NULL_AS_BLANK->toString()->equals(a0))
        return CREATE_NULL_AS_BLANK;
    if(RETURN_BLANK_AS_NULL->toString()->equals(a0))
        return RETURN_BLANK_AS_NULL;
    if(RETURN_NULL_AND_BLANK->toString()->equals(a0))
        return RETURN_NULL_AND_BLANK;
    throw new ::java::lang::IllegalArgumentException(a0);
}

poi::ss::usermodel::Row_MissingCellPolicyArray* poi::ss::usermodel::Row_MissingCellPolicy::values()
{
    return new poi::ss::usermodel::Row_MissingCellPolicyArray({
        CREATE_NULL_AS_BLANK,
        RETURN_BLANK_AS_NULL,
        RETURN_NULL_AND_BLANK,
    });
}

java::lang::Class* poi::ss::usermodel::Row_MissingCellPolicy::getClass0()
{
    return class_();
}

