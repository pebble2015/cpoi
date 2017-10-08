// Generated from /POI/java/org/apache/poi/ss/usermodel/PageOrder.java
#include <org/apache/poi/ss/usermodel/PageOrder.hpp>

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

namespace poi
{
    namespace ss
    {
        namespace usermodel
        {
typedef ::SubArray< ::poi::ss::usermodel::PageOrder, ::java::lang::EnumArray > PageOrderArray;
        } // usermodel
    } // ss
} // poi

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::ss::usermodel::PageOrder::PageOrder(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::usermodel::PageOrder::PageOrder(::java::lang::String* name, int ordinal, int32_t order) 
    : PageOrder(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal, order);
}

poi::ss::usermodel::PageOrder* poi::ss::usermodel::PageOrder::DOWN_THEN_OVER = new ::poi::ss::usermodel::PageOrder(u"DOWN_THEN_OVER"_j, 0, int32_t(1));
poi::ss::usermodel::PageOrder* poi::ss::usermodel::PageOrder::OVER_THEN_DOWN = new ::poi::ss::usermodel::PageOrder(u"OVER_THEN_DOWN"_j, 1, int32_t(2));
void poi::ss::usermodel::PageOrder::ctor(::java::lang::String* name, int ordinal, int32_t order)
{
    super::ctor(name, ordinal);
    this->order = order;
}

int32_t poi::ss::usermodel::PageOrder::getValue()
{
    return order;
}

poi::ss::usermodel::PageOrderArray*& poi::ss::usermodel::PageOrder::_table()
{
    clinit();
    return _table_;
}
poi::ss::usermodel::PageOrderArray* poi::ss::usermodel::PageOrder::_table_;

poi::ss::usermodel::PageOrder* poi::ss::usermodel::PageOrder::valueOf(int32_t value)
{
    clinit();
    return (*_table_)[value];
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::usermodel::PageOrder::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.usermodel.PageOrder", 37);
    return c;
}

void poi::ss::usermodel::PageOrder::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        _table_ = new PageOrderArray(int32_t(3));
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

java::lang::Enum* poi::ss::usermodel::PageOrder::valueOf(::java::lang::Class* enumType, ::java::lang::String* name)
{
    return super::valueOf(enumType, name);
}

poi::ss::usermodel::PageOrder* poi::ss::usermodel::PageOrder::valueOf(::java::lang::String* a0)
{
    if(DOWN_THEN_OVER->toString()->equals(a0))
        return DOWN_THEN_OVER;
    if(OVER_THEN_DOWN->toString()->equals(a0))
        return OVER_THEN_DOWN;
    throw new ::java::lang::IllegalArgumentException(a0);
}

poi::ss::usermodel::PageOrderArray* poi::ss::usermodel::PageOrder::values()
{
    return new poi::ss::usermodel::PageOrderArray({
        DOWN_THEN_OVER,
        OVER_THEN_DOWN,
    });
}

java::lang::Class* poi::ss::usermodel::PageOrder::getClass0()
{
    return class_();
}

