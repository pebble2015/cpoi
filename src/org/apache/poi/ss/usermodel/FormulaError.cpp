// Generated from /POI/java/org/apache/poi/ss/usermodel/FormulaError.java
#include <org/apache/poi/ss/usermodel/FormulaError.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Byte.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/Enum.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/util/HashMap.hpp>
#include <java/util/Map.hpp>
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
typedef ::SubArray< ::poi::ss::usermodel::FormulaError, ::java::lang::EnumArray > FormulaErrorArray;
        } // usermodel
    } // ss
} // poi

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(nullptr);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::ss::usermodel::FormulaError::FormulaError(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::usermodel::FormulaError::FormulaError(::java::lang::String* name, int ordinal, int32_t type, ::java::lang::String* repr) 
    : FormulaError(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal, type,repr);
}

poi::ss::usermodel::FormulaError* poi::ss::usermodel::FormulaError::_NO_ERROR = new ::poi::ss::usermodel::FormulaError(u"_NO_ERROR"_j, 0, -int32_t(1), u"(no error)"_j);
poi::ss::usermodel::FormulaError* poi::ss::usermodel::FormulaError::NULL_ = new ::poi::ss::usermodel::FormulaError(u"NULL_"_j, 1, int32_t(0), u"#NULL!"_j);
poi::ss::usermodel::FormulaError* poi::ss::usermodel::FormulaError::DIV0 = new ::poi::ss::usermodel::FormulaError(u"DIV0"_j, 2, int32_t(7), u"#DIV/0!"_j);
poi::ss::usermodel::FormulaError* poi::ss::usermodel::FormulaError::VALUE = new ::poi::ss::usermodel::FormulaError(u"VALUE"_j, 3, int32_t(15), u"#VALUE!"_j);
poi::ss::usermodel::FormulaError* poi::ss::usermodel::FormulaError::REF = new ::poi::ss::usermodel::FormulaError(u"REF"_j, 4, int32_t(23), u"#REF!"_j);
poi::ss::usermodel::FormulaError* poi::ss::usermodel::FormulaError::NAME = new ::poi::ss::usermodel::FormulaError(u"NAME"_j, 5, int32_t(29), u"#NAME?"_j);
poi::ss::usermodel::FormulaError* poi::ss::usermodel::FormulaError::NUM = new ::poi::ss::usermodel::FormulaError(u"NUM"_j, 6, int32_t(36), u"#NUM!"_j);
poi::ss::usermodel::FormulaError* poi::ss::usermodel::FormulaError::NA = new ::poi::ss::usermodel::FormulaError(u"NA"_j, 7, int32_t(42), u"#N/A"_j);
poi::ss::usermodel::FormulaError* poi::ss::usermodel::FormulaError::CIRCULAR_REF = new ::poi::ss::usermodel::FormulaError(u"CIRCULAR_REF"_j, 8, int32_t(-60), u"~CIRCULAR~REF~"_j);
poi::ss::usermodel::FormulaError* poi::ss::usermodel::FormulaError::FUNCTION_NOT_IMPLEMENTED = new ::poi::ss::usermodel::FormulaError(u"FUNCTION_NOT_IMPLEMENTED"_j, 9, int32_t(-30), u"~FUNCTION~NOT~IMPLEMENTED~"_j);
void poi::ss::usermodel::FormulaError::ctor(::java::lang::String* name, int ordinal, int32_t type, ::java::lang::String* repr)
{
    super::ctor(name, ordinal);
    this->type = static_cast< int8_t >(type);
    this->longType = type;
    this->repr = repr;
}

int8_t poi::ss::usermodel::FormulaError::getCode()
{
    return type;
}

int32_t poi::ss::usermodel::FormulaError::getLongCode()
{
    return longType;
}

java::lang::String* poi::ss::usermodel::FormulaError::getString()
{
    return repr;
}

java::util::Map*& poi::ss::usermodel::FormulaError::smap()
{
    clinit();
    return smap_;
}
java::util::Map* poi::ss::usermodel::FormulaError::smap_;

java::util::Map*& poi::ss::usermodel::FormulaError::bmap()
{
    clinit();
    return bmap_;
}
java::util::Map* poi::ss::usermodel::FormulaError::bmap_;

java::util::Map*& poi::ss::usermodel::FormulaError::imap()
{
    clinit();
    return imap_;
}
java::util::Map* poi::ss::usermodel::FormulaError::imap_;

bool poi::ss::usermodel::FormulaError::isValidCode(int32_t errorCode)
{
    clinit();
    for(auto error : *npc(values())) {
        if(npc(error)->getCode() == errorCode)
            return true;

        if(npc(error)->getLongCode() == errorCode)
            return true;

    }
    return false;
}

poi::ss::usermodel::FormulaError* poi::ss::usermodel::FormulaError::forInt(int8_t type) /* throws(IllegalArgumentException) */
{
    clinit();
    auto err = java_cast< FormulaError* >(npc(bmap_)->get(::java::lang::Byte::valueOf(type)));
    if(err == nullptr)
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Unknown error type: "_j)->append(type)->toString());

    return err;
}

poi::ss::usermodel::FormulaError* poi::ss::usermodel::FormulaError::forInt(int32_t type) /* throws(IllegalArgumentException) */
{
    clinit();
    auto err = java_cast< FormulaError* >(npc(imap_)->get(::java::lang::Integer::valueOf(type)));
    if(err == nullptr)
        err = java_cast< FormulaError* >(npc(bmap_)->get(::java::lang::Byte::valueOf(static_cast< int8_t >(type))));

    if(err == nullptr)
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Unknown error type: "_j)->append(type)->toString());

    return err;
}

poi::ss::usermodel::FormulaError* poi::ss::usermodel::FormulaError::forString(::java::lang::String* code) /* throws(IllegalArgumentException) */
{
    clinit();
    auto err = java_cast< FormulaError* >(npc(smap_)->get(code));
    if(err == nullptr)
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Unknown error code: "_j)->append(code)->toString());

    return err;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::usermodel::FormulaError::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.usermodel.FormulaError", 40);
    return c;
}

void poi::ss::usermodel::FormulaError::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        smap_ = new ::java::util::HashMap();
        bmap_ = new ::java::util::HashMap();
        imap_ = new ::java::util::HashMap();
        {
            for(auto error : *npc(values())) {
                npc(bmap_)->put(::java::lang::Byte::valueOf(npc(error)->getCode()), error);
                npc(imap_)->put(::java::lang::Integer::valueOf(npc(error)->getLongCode()), error);
                npc(smap_)->put(npc(error)->getString(), error);
            }
        }
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

poi::ss::usermodel::FormulaError* poi::ss::usermodel::FormulaError::valueOf(::java::lang::String* a0)
{
    if(CIRCULAR_REF->toString()->equals(a0))
        return CIRCULAR_REF;
    if(DIV0->toString()->equals(a0))
        return DIV0;
    if(FUNCTION_NOT_IMPLEMENTED->toString()->equals(a0))
        return FUNCTION_NOT_IMPLEMENTED;
    if(NA->toString()->equals(a0))
        return NA;
    if(NAME->toString()->equals(a0))
        return NAME;
    if(NULL_->toString()->equals(a0))
        return NULL_;
    if(NUM->toString()->equals(a0))
        return NUM;
    if(REF->toString()->equals(a0))
        return REF;
    if(VALUE->toString()->equals(a0))
        return VALUE;
    if(_NO_ERROR->toString()->equals(a0))
        return _NO_ERROR;
    throw new ::java::lang::IllegalArgumentException(a0);
}

poi::ss::usermodel::FormulaErrorArray* poi::ss::usermodel::FormulaError::values()
{
    return new poi::ss::usermodel::FormulaErrorArray({
        CIRCULAR_REF,
        DIV0,
        FUNCTION_NOT_IMPLEMENTED,
        NA,
        NAME,
        NULL_,
        NUM,
        REF,
        VALUE,
        _NO_ERROR,
    });
}

java::lang::Class* poi::ss::usermodel::FormulaError::getClass0()
{
    return class_();
}

