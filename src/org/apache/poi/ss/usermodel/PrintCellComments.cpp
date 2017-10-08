// Generated from /POI/java/org/apache/poi/ss/usermodel/PrintCellComments.java
#include <org/apache/poi/ss/usermodel/PrintCellComments.hpp>

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
typedef ::SubArray< ::poi::ss::usermodel::PrintCellComments, ::java::lang::EnumArray > PrintCellCommentsArray;
        } // usermodel
    } // ss
} // poi

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::ss::usermodel::PrintCellComments::PrintCellComments(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::usermodel::PrintCellComments::PrintCellComments(::java::lang::String* name, int ordinal, int32_t comments) 
    : PrintCellComments(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal, comments);
}

poi::ss::usermodel::PrintCellComments* poi::ss::usermodel::PrintCellComments::NONE = new ::poi::ss::usermodel::PrintCellComments(u"NONE"_j, 0, int32_t(1));
poi::ss::usermodel::PrintCellComments* poi::ss::usermodel::PrintCellComments::AS_DISPLAYED = new ::poi::ss::usermodel::PrintCellComments(u"AS_DISPLAYED"_j, 1, int32_t(2));
poi::ss::usermodel::PrintCellComments* poi::ss::usermodel::PrintCellComments::AT_END = new ::poi::ss::usermodel::PrintCellComments(u"AT_END"_j, 2, int32_t(3));
void poi::ss::usermodel::PrintCellComments::ctor(::java::lang::String* name, int ordinal, int32_t comments)
{
    super::ctor(name, ordinal);
    this->comments = comments;
}

int32_t poi::ss::usermodel::PrintCellComments::getValue()
{
    return comments;
}

poi::ss::usermodel::PrintCellCommentsArray*& poi::ss::usermodel::PrintCellComments::_table()
{
    clinit();
    return _table_;
}
poi::ss::usermodel::PrintCellCommentsArray* poi::ss::usermodel::PrintCellComments::_table_;

poi::ss::usermodel::PrintCellComments* poi::ss::usermodel::PrintCellComments::valueOf(int32_t value)
{
    clinit();
    return (*_table_)[value];
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::usermodel::PrintCellComments::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.usermodel.PrintCellComments", 45);
    return c;
}

void poi::ss::usermodel::PrintCellComments::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        _table_ = new PrintCellCommentsArray(int32_t(4));
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

java::lang::Enum* poi::ss::usermodel::PrintCellComments::valueOf(::java::lang::Class* enumType, ::java::lang::String* name)
{
    return super::valueOf(enumType, name);
}

poi::ss::usermodel::PrintCellComments* poi::ss::usermodel::PrintCellComments::valueOf(::java::lang::String* a0)
{
    if(AS_DISPLAYED->toString()->equals(a0))
        return AS_DISPLAYED;
    if(AT_END->toString()->equals(a0))
        return AT_END;
    if(NONE->toString()->equals(a0))
        return NONE;
    throw new ::java::lang::IllegalArgumentException(a0);
}

poi::ss::usermodel::PrintCellCommentsArray* poi::ss::usermodel::PrintCellComments::values()
{
    return new poi::ss::usermodel::PrintCellCommentsArray({
        AS_DISPLAYED,
        AT_END,
        NONE,
    });
}

java::lang::Class* poi::ss::usermodel::PrintCellComments::getClass0()
{
    return class_();
}

