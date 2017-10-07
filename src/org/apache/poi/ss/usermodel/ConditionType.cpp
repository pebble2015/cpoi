// Generated from /POI/java/org/apache/poi/ss/usermodel/ConditionType.java
#include <org/apache/poi/ss/usermodel/ConditionType.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/util/HashMap.hpp>
#include <java/util/Map.hpp>

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

org::apache::poi::ss::usermodel::ConditionType::ConditionType(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::usermodel::ConditionType::ConditionType(int32_t id, ::java::lang::String* type) 
    : ConditionType(*static_cast< ::default_init_tag* >(0))
{
    ctor(id,type);
}

java::util::Map*& org::apache::poi::ss::usermodel::ConditionType::lookup()
{
    clinit();
    return lookup_;
}
java::util::Map* org::apache::poi::ss::usermodel::ConditionType::lookup_;

org::apache::poi::ss::usermodel::ConditionType*& org::apache::poi::ss::usermodel::ConditionType::CELL_VALUE_IS()
{
    clinit();
    return CELL_VALUE_IS_;
}
org::apache::poi::ss::usermodel::ConditionType* org::apache::poi::ss::usermodel::ConditionType::CELL_VALUE_IS_;

org::apache::poi::ss::usermodel::ConditionType*& org::apache::poi::ss::usermodel::ConditionType::FORMULA()
{
    clinit();
    return FORMULA_;
}
org::apache::poi::ss::usermodel::ConditionType* org::apache::poi::ss::usermodel::ConditionType::FORMULA_;

org::apache::poi::ss::usermodel::ConditionType*& org::apache::poi::ss::usermodel::ConditionType::COLOR_SCALE()
{
    clinit();
    return COLOR_SCALE_;
}
org::apache::poi::ss::usermodel::ConditionType* org::apache::poi::ss::usermodel::ConditionType::COLOR_SCALE_;

org::apache::poi::ss::usermodel::ConditionType*& org::apache::poi::ss::usermodel::ConditionType::DATA_BAR()
{
    clinit();
    return DATA_BAR_;
}
org::apache::poi::ss::usermodel::ConditionType* org::apache::poi::ss::usermodel::ConditionType::DATA_BAR_;

org::apache::poi::ss::usermodel::ConditionType*& org::apache::poi::ss::usermodel::ConditionType::FILTER()
{
    clinit();
    return FILTER_;
}
org::apache::poi::ss::usermodel::ConditionType* org::apache::poi::ss::usermodel::ConditionType::FILTER_;

org::apache::poi::ss::usermodel::ConditionType*& org::apache::poi::ss::usermodel::ConditionType::ICON_SET()
{
    clinit();
    return ICON_SET_;
}
org::apache::poi::ss::usermodel::ConditionType* org::apache::poi::ss::usermodel::ConditionType::ICON_SET_;

java::lang::String* org::apache::poi::ss::usermodel::ConditionType::toString()
{
    return ::java::lang::StringBuilder().append(id)->append(u" - "_j)
        ->append(type)->toString();
}

org::apache::poi::ss::usermodel::ConditionType* org::apache::poi::ss::usermodel::ConditionType::forId(int8_t id)
{
    clinit();
    return forId(static_cast< int32_t >(id));
}

org::apache::poi::ss::usermodel::ConditionType* org::apache::poi::ss::usermodel::ConditionType::forId(int32_t id)
{
    clinit();
    return java_cast< ConditionType* >(npc(lookup_)->get(::java::lang::Integer::valueOf(id)));
}

void org::apache::poi::ss::usermodel::ConditionType::ctor(int32_t id, ::java::lang::String* type)
{
    super::ctor();
    this->id = static_cast< int8_t >(id);
    this->type = type;
    npc(lookup_)->put(::java::lang::Integer::valueOf(id), this);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::usermodel::ConditionType::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.usermodel.ConditionType", 41);
    return c;
}

void org::apache::poi::ss::usermodel::ConditionType::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        lookup_ = new ::java::util::HashMap();
        CELL_VALUE_IS_ = new ConditionType(int32_t(1), u"cellIs"_j);
        FORMULA_ = new ConditionType(int32_t(2), u"expression"_j);
        COLOR_SCALE_ = new ConditionType(int32_t(3), u"colorScale"_j);
        DATA_BAR_ = new ConditionType(int32_t(4), u"dataBar"_j);
        FILTER_ = new ConditionType(int32_t(5), nullptr);
        ICON_SET_ = new ConditionType(int32_t(6), u"iconSet"_j);
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* org::apache::poi::ss::usermodel::ConditionType::getClass0()
{
    return class_();
}

