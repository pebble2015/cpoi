// Generated from /POI/java/org/apache/poi/common/usermodel/HyperlinkType.java
#include <org/apache/poi/common/usermodel/HyperlinkType.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
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

namespace org
{
    namespace apache
    {
        namespace poi
        {
            namespace common
            {
                namespace usermodel
                {
typedef ::SubArray< ::org::apache::poi::common::usermodel::HyperlinkType, ::java::lang::EnumArray > HyperlinkTypeArray;
                } // usermodel
            } // common
        } // poi
    } // apache
} // org

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

org::apache::poi::common::usermodel::HyperlinkType::HyperlinkType(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::common::usermodel::HyperlinkType::HyperlinkType(::java::lang::String* name, int ordinal, int32_t code) 
    : HyperlinkType(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal, code);
}

org::apache::poi::common::usermodel::HyperlinkType* org::apache::poi::common::usermodel::HyperlinkType::NONE = new ::org::apache::poi::common::usermodel::HyperlinkType(u"NONE"_j, 0, -int32_t(1));
org::apache::poi::common::usermodel::HyperlinkType* org::apache::poi::common::usermodel::HyperlinkType::URL = new ::org::apache::poi::common::usermodel::HyperlinkType(u"URL"_j, 1, int32_t(1));
org::apache::poi::common::usermodel::HyperlinkType* org::apache::poi::common::usermodel::HyperlinkType::DOCUMENT = new ::org::apache::poi::common::usermodel::HyperlinkType(u"DOCUMENT"_j, 2, int32_t(2));
org::apache::poi::common::usermodel::HyperlinkType* org::apache::poi::common::usermodel::HyperlinkType::EMAIL = new ::org::apache::poi::common::usermodel::HyperlinkType(u"EMAIL"_j, 3, int32_t(3));
org::apache::poi::common::usermodel::HyperlinkType* org::apache::poi::common::usermodel::HyperlinkType::FILE = new ::org::apache::poi::common::usermodel::HyperlinkType(u"FILE"_j, 4, int32_t(4));
void org::apache::poi::common::usermodel::HyperlinkType::ctor(::java::lang::String* name, int ordinal, int32_t code)
{
    super::ctor(name, ordinal);
    this->code = code;
}

java::util::Map*& org::apache::poi::common::usermodel::HyperlinkType::map()
{
    clinit();
    return map_;
}
java::util::Map* org::apache::poi::common::usermodel::HyperlinkType::map_;

int32_t org::apache::poi::common::usermodel::HyperlinkType::getCode()
{
    return code;
}

org::apache::poi::common::usermodel::HyperlinkType* org::apache::poi::common::usermodel::HyperlinkType::forInt(int32_t code)
{
    clinit();
    auto type = java_cast< HyperlinkType* >(npc(map_)->get(::java::lang::Integer::valueOf(code)));
    if(type == nullptr) {
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Invalid type: "_j)->append(code)->toString());
    }
    return type;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::common::usermodel::HyperlinkType::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.common.usermodel.HyperlinkType", 45);
    return c;
}

void org::apache::poi::common::usermodel::HyperlinkType::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        map_ = new ::java::util::HashMap();
        {
            for(auto type : *npc(values())) {
                npc(map_)->put(::java::lang::Integer::valueOf(npc(type)->getCode()), type);
            }
        }
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

org::apache::poi::common::usermodel::HyperlinkType* org::apache::poi::common::usermodel::HyperlinkType::valueOf(::java::lang::String* a0)
{
    if(DOCUMENT->toString()->equals(a0))
        return DOCUMENT;
    if(EMAIL->toString()->equals(a0))
        return EMAIL;
    if(FILE->toString()->equals(a0))
        return FILE;
    if(NONE->toString()->equals(a0))
        return NONE;
    if(URL->toString()->equals(a0))
        return URL;
    throw new ::java::lang::IllegalArgumentException(a0);
}

org::apache::poi::common::usermodel::HyperlinkTypeArray* org::apache::poi::common::usermodel::HyperlinkType::values()
{
    return new org::apache::poi::common::usermodel::HyperlinkTypeArray({
        DOCUMENT,
        EMAIL,
        FILE,
        NONE,
        URL,
    });
}

java::lang::Class* org::apache::poi::common::usermodel::HyperlinkType::getClass0()
{
    return class_();
}

