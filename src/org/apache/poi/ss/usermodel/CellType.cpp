// Generated from /POI/java/org/apache/poi/ss/usermodel/CellType.java
#include <org/apache/poi/ss/usermodel/CellType.hpp>

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
typedef ::SubArray< ::poi::ss::usermodel::CellType, ::java::lang::EnumArray > CellTypeArray;
        } // usermodel
    } // ss
} // poi

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::ss::usermodel::CellType::CellType(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::usermodel::CellType::CellType(::java::lang::String* name, int ordinal, int32_t code) 
    : CellType(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal, code);
}

poi::ss::usermodel::CellType* poi::ss::usermodel::CellType::_NONE = new ::poi::ss::usermodel::CellType(u"_NONE"_j, 0, -int32_t(1));
poi::ss::usermodel::CellType* poi::ss::usermodel::CellType::NUMERIC = new ::poi::ss::usermodel::CellType(u"NUMERIC"_j, 1, int32_t(0));
poi::ss::usermodel::CellType* poi::ss::usermodel::CellType::STRING = new ::poi::ss::usermodel::CellType(u"STRING"_j, 2, int32_t(1));
poi::ss::usermodel::CellType* poi::ss::usermodel::CellType::FORMULA = new ::poi::ss::usermodel::CellType(u"FORMULA"_j, 3, int32_t(2));
poi::ss::usermodel::CellType* poi::ss::usermodel::CellType::BLANK = new ::poi::ss::usermodel::CellType(u"BLANK"_j, 4, int32_t(3));
poi::ss::usermodel::CellType* poi::ss::usermodel::CellType::BOOLEAN = new ::poi::ss::usermodel::CellType(u"BOOLEAN"_j, 5, int32_t(4));
poi::ss::usermodel::CellType* poi::ss::usermodel::CellType::ERROR = new ::poi::ss::usermodel::CellType(u"ERROR"_j, 6, int32_t(5));
void poi::ss::usermodel::CellType::ctor(::java::lang::String* name, int ordinal, int32_t code)
{
    super::ctor(name, ordinal);
    this->code = code;
}

poi::ss::usermodel::CellType* poi::ss::usermodel::CellType::forInt(int32_t code)
{
    clinit();
    for(auto type : *npc(values())) {
        if(npc(type)->code == code) {
            return type;
        }
    }
    throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Invalid CellType code: "_j)->append(code)->toString());
}

int32_t poi::ss::usermodel::CellType::getCode()
{
    return code;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::usermodel::CellType::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.usermodel.CellType", 36);
    return c;
}

poi::ss::usermodel::CellType* poi::ss::usermodel::CellType::valueOf(::java::lang::String* a0)
{
    if(BLANK->toString()->equals(a0))
        return BLANK;
    if(BOOLEAN->toString()->equals(a0))
        return BOOLEAN;
    if(ERROR->toString()->equals(a0))
        return ERROR;
    if(FORMULA->toString()->equals(a0))
        return FORMULA;
    if(NUMERIC->toString()->equals(a0))
        return NUMERIC;
    if(STRING->toString()->equals(a0))
        return STRING;
    if(_NONE->toString()->equals(a0))
        return _NONE;
    throw new ::java::lang::IllegalArgumentException(a0);
}

poi::ss::usermodel::CellTypeArray* poi::ss::usermodel::CellType::values()
{
    return new poi::ss::usermodel::CellTypeArray({
        BLANK,
        BOOLEAN,
        ERROR,
        FORMULA,
        NUMERIC,
        STRING,
        _NONE,
    });
}

java::lang::Class* poi::ss::usermodel::CellType::getClass0()
{
    return class_();
}

