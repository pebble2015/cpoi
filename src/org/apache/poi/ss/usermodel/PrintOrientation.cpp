// Generated from /POI/java/org/apache/poi/ss/usermodel/PrintOrientation.java
#include <org/apache/poi/ss/usermodel/PrintOrientation.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/Enum.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/NullPointerException.hpp>
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
typedef ::SubArray< ::org::apache::poi::ss::usermodel::PrintOrientation, ::java::lang::EnumArray > PrintOrientationArray;
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

org::apache::poi::ss::usermodel::PrintOrientation::PrintOrientation(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::usermodel::PrintOrientation::PrintOrientation(::java::lang::String* name, int ordinal, int32_t orientation) 
    : PrintOrientation(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal, orientation);
}

org::apache::poi::ss::usermodel::PrintOrientation* org::apache::poi::ss::usermodel::PrintOrientation::DEFAULT = new ::org::apache::poi::ss::usermodel::PrintOrientation(u"DEFAULT"_j, 0, int32_t(1));
org::apache::poi::ss::usermodel::PrintOrientation* org::apache::poi::ss::usermodel::PrintOrientation::PORTRAIT = new ::org::apache::poi::ss::usermodel::PrintOrientation(u"PORTRAIT"_j, 1, int32_t(2));
org::apache::poi::ss::usermodel::PrintOrientation* org::apache::poi::ss::usermodel::PrintOrientation::LANDSCAPE = new ::org::apache::poi::ss::usermodel::PrintOrientation(u"LANDSCAPE"_j, 2, int32_t(3));
void org::apache::poi::ss::usermodel::PrintOrientation::ctor(::java::lang::String* name, int ordinal, int32_t orientation)
{
    super::ctor(name, ordinal);
    this->orientation = orientation;
}

int32_t org::apache::poi::ss::usermodel::PrintOrientation::getValue()
{
    return orientation;
}

org::apache::poi::ss::usermodel::PrintOrientationArray*& org::apache::poi::ss::usermodel::PrintOrientation::_table()
{
    clinit();
    return _table_;
}
org::apache::poi::ss::usermodel::PrintOrientationArray* org::apache::poi::ss::usermodel::PrintOrientation::_table_;

org::apache::poi::ss::usermodel::PrintOrientation* org::apache::poi::ss::usermodel::PrintOrientation::valueOf(int32_t value)
{
    clinit();
    return (*_table_)[value];
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::usermodel::PrintOrientation::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.usermodel.PrintOrientation", 44);
    return c;
}

void org::apache::poi::ss::usermodel::PrintOrientation::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        _table_ = new PrintOrientationArray(int32_t(4));
        {
            for(auto c : *npc(values())) {
                _table_->set(npc(c)->getValue(), c);
            }
        }
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Enum* org::apache::poi::ss::usermodel::PrintOrientation::valueOf(::java::lang::Class* enumType, ::java::lang::String* name)
{
    return super::valueOf(enumType, name);
}

org::apache::poi::ss::usermodel::PrintOrientation* org::apache::poi::ss::usermodel::PrintOrientation::valueOf(::java::lang::String* a0)
{
    if(DEFAULT->toString()->equals(a0))
        return DEFAULT;
    if(LANDSCAPE->toString()->equals(a0))
        return LANDSCAPE;
    if(PORTRAIT->toString()->equals(a0))
        return PORTRAIT;
    throw new ::java::lang::IllegalArgumentException(a0);
}

org::apache::poi::ss::usermodel::PrintOrientationArray* org::apache::poi::ss::usermodel::PrintOrientation::values()
{
    return new org::apache::poi::ss::usermodel::PrintOrientationArray({
        DEFAULT,
        LANDSCAPE,
        PORTRAIT,
    });
}

java::lang::Class* org::apache::poi::ss::usermodel::PrintOrientation::getClass0()
{
    return class_();
}

