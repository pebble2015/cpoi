// Generated from /POI/java/org/apache/poi/ss/usermodel/IconMultiStateFormatting.java
#include <org/apache/poi/ss/usermodel/IconMultiStateFormatting_IconSet.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/Enum.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
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
typedef ::SubArray< ::org::apache::poi::ss::usermodel::IconMultiStateFormatting_IconSet, ::java::lang::EnumArray > IconMultiStateFormatting_IconSetArray;
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

org::apache::poi::ss::usermodel::IconMultiStateFormatting_IconSet::IconMultiStateFormatting_IconSet(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::usermodel::IconMultiStateFormatting_IconSet::IconMultiStateFormatting_IconSet(::java::lang::String* name, int ordinal, int32_t id, int32_t num, ::java::lang::String* name1) 
    : IconMultiStateFormatting_IconSet(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal, id,num,name1);
}

org::apache::poi::ss::usermodel::IconMultiStateFormatting_IconSet* org::apache::poi::ss::usermodel::IconMultiStateFormatting_IconSet::GYR_3_ARROW = new ::org::apache::poi::ss::usermodel::IconMultiStateFormatting_IconSet(u"GYR_3_ARROW"_j, 0, int32_t(0), int32_t(3), u"3Arrows"_j);
org::apache::poi::ss::usermodel::IconMultiStateFormatting_IconSet* org::apache::poi::ss::usermodel::IconMultiStateFormatting_IconSet::GREY_3_ARROWS = new ::org::apache::poi::ss::usermodel::IconMultiStateFormatting_IconSet(u"GREY_3_ARROWS"_j, 1, int32_t(1), int32_t(3), u"3ArrowsGray"_j);
org::apache::poi::ss::usermodel::IconMultiStateFormatting_IconSet* org::apache::poi::ss::usermodel::IconMultiStateFormatting_IconSet::GYR_3_FLAGS = new ::org::apache::poi::ss::usermodel::IconMultiStateFormatting_IconSet(u"GYR_3_FLAGS"_j, 2, int32_t(2), int32_t(3), u"3Flags"_j);
org::apache::poi::ss::usermodel::IconMultiStateFormatting_IconSet* org::apache::poi::ss::usermodel::IconMultiStateFormatting_IconSet::GYR_3_TRAFFIC_LIGHTS = new ::org::apache::poi::ss::usermodel::IconMultiStateFormatting_IconSet(u"GYR_3_TRAFFIC_LIGHTS"_j, 3, int32_t(3), int32_t(3), u"3TrafficLights1"_j);
org::apache::poi::ss::usermodel::IconMultiStateFormatting_IconSet* org::apache::poi::ss::usermodel::IconMultiStateFormatting_IconSet::GYR_3_TRAFFIC_LIGHTS_BOX = new ::org::apache::poi::ss::usermodel::IconMultiStateFormatting_IconSet(u"GYR_3_TRAFFIC_LIGHTS_BOX"_j, 4, int32_t(4), int32_t(3), u"3TrafficLights2"_j);
org::apache::poi::ss::usermodel::IconMultiStateFormatting_IconSet* org::apache::poi::ss::usermodel::IconMultiStateFormatting_IconSet::GYR_3_SHAPES = new ::org::apache::poi::ss::usermodel::IconMultiStateFormatting_IconSet(u"GYR_3_SHAPES"_j, 5, int32_t(5), int32_t(3), u"3Signs"_j);
org::apache::poi::ss::usermodel::IconMultiStateFormatting_IconSet* org::apache::poi::ss::usermodel::IconMultiStateFormatting_IconSet::GYR_3_SYMBOLS_CIRCLE = new ::org::apache::poi::ss::usermodel::IconMultiStateFormatting_IconSet(u"GYR_3_SYMBOLS_CIRCLE"_j, 6, int32_t(6), int32_t(3), u"3Symbols"_j);
org::apache::poi::ss::usermodel::IconMultiStateFormatting_IconSet* org::apache::poi::ss::usermodel::IconMultiStateFormatting_IconSet::GYR_3_SYMBOLS = new ::org::apache::poi::ss::usermodel::IconMultiStateFormatting_IconSet(u"GYR_3_SYMBOLS"_j, 7, int32_t(7), int32_t(3), u"3Symbols2"_j);
org::apache::poi::ss::usermodel::IconMultiStateFormatting_IconSet* org::apache::poi::ss::usermodel::IconMultiStateFormatting_IconSet::GYR_4_ARROWS = new ::org::apache::poi::ss::usermodel::IconMultiStateFormatting_IconSet(u"GYR_4_ARROWS"_j, 8, int32_t(8), int32_t(4), u"4Arrows"_j);
org::apache::poi::ss::usermodel::IconMultiStateFormatting_IconSet* org::apache::poi::ss::usermodel::IconMultiStateFormatting_IconSet::GREY_4_ARROWS = new ::org::apache::poi::ss::usermodel::IconMultiStateFormatting_IconSet(u"GREY_4_ARROWS"_j, 9, int32_t(9), int32_t(4), u"4ArrowsGray"_j);
org::apache::poi::ss::usermodel::IconMultiStateFormatting_IconSet* org::apache::poi::ss::usermodel::IconMultiStateFormatting_IconSet::RB_4_TRAFFIC_LIGHTS = new ::org::apache::poi::ss::usermodel::IconMultiStateFormatting_IconSet(u"RB_4_TRAFFIC_LIGHTS"_j, 10, int32_t(10), int32_t(4), u"4RedToBlack"_j);
org::apache::poi::ss::usermodel::IconMultiStateFormatting_IconSet* org::apache::poi::ss::usermodel::IconMultiStateFormatting_IconSet::RATINGS_4 = new ::org::apache::poi::ss::usermodel::IconMultiStateFormatting_IconSet(u"RATINGS_4"_j, 11, int32_t(11), int32_t(4), u"4Rating"_j);
org::apache::poi::ss::usermodel::IconMultiStateFormatting_IconSet* org::apache::poi::ss::usermodel::IconMultiStateFormatting_IconSet::GYRB_4_TRAFFIC_LIGHTS = new ::org::apache::poi::ss::usermodel::IconMultiStateFormatting_IconSet(u"GYRB_4_TRAFFIC_LIGHTS"_j, 12, int32_t(12), int32_t(4), u"4TrafficLights"_j);
org::apache::poi::ss::usermodel::IconMultiStateFormatting_IconSet* org::apache::poi::ss::usermodel::IconMultiStateFormatting_IconSet::GYYYR_5_ARROWS = new ::org::apache::poi::ss::usermodel::IconMultiStateFormatting_IconSet(u"GYYYR_5_ARROWS"_j, 13, int32_t(13), int32_t(5), u"5Arrows"_j);
org::apache::poi::ss::usermodel::IconMultiStateFormatting_IconSet* org::apache::poi::ss::usermodel::IconMultiStateFormatting_IconSet::GREY_5_ARROWS = new ::org::apache::poi::ss::usermodel::IconMultiStateFormatting_IconSet(u"GREY_5_ARROWS"_j, 14, int32_t(14), int32_t(5), u"5ArrowsGray"_j);
org::apache::poi::ss::usermodel::IconMultiStateFormatting_IconSet* org::apache::poi::ss::usermodel::IconMultiStateFormatting_IconSet::RATINGS_5 = new ::org::apache::poi::ss::usermodel::IconMultiStateFormatting_IconSet(u"RATINGS_5"_j, 15, int32_t(15), int32_t(5), u"5Rating"_j);
org::apache::poi::ss::usermodel::IconMultiStateFormatting_IconSet* org::apache::poi::ss::usermodel::IconMultiStateFormatting_IconSet::QUARTERS_5 = new ::org::apache::poi::ss::usermodel::IconMultiStateFormatting_IconSet(u"QUARTERS_5"_j, 16, int32_t(16), int32_t(5), u"5Quarters"_j);
org::apache::poi::ss::usermodel::IconMultiStateFormatting_IconSet*& org::apache::poi::ss::usermodel::IconMultiStateFormatting_IconSet::DEFAULT_ICONSET()
{
    clinit();
    return DEFAULT_ICONSET_;
}
org::apache::poi::ss::usermodel::IconMultiStateFormatting_IconSet* org::apache::poi::ss::usermodel::IconMultiStateFormatting_IconSet::DEFAULT_ICONSET_;

java::lang::String* org::apache::poi::ss::usermodel::IconMultiStateFormatting_IconSet::toString()
{
    return ::java::lang::StringBuilder().append(id)->append(u" - "_j)
        ->append(name_)->toString();
}

org::apache::poi::ss::usermodel::IconMultiStateFormatting_IconSet* org::apache::poi::ss::usermodel::IconMultiStateFormatting_IconSet::byId(int32_t id)
{
    clinit();
    return (*values())[id];
}

org::apache::poi::ss::usermodel::IconMultiStateFormatting_IconSet* org::apache::poi::ss::usermodel::IconMultiStateFormatting_IconSet::byName(::java::lang::String* name)
{
    clinit();
    for(auto set : *npc(values())) {
        if(npc(npc(set)->name_)->equals(static_cast< ::java::lang::Object* >(name)))
            return set;

    }
    return nullptr;
}

void org::apache::poi::ss::usermodel::IconMultiStateFormatting_IconSet::ctor(::java::lang::String* name, int ordinal, int32_t id, int32_t num, ::java::lang::String* name1)
{
    super::ctor(name, ordinal);
    this->id = id;
    this->num = num;
    this->name_ = name;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::usermodel::IconMultiStateFormatting_IconSet::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.usermodel.IconMultiStateFormatting.IconSet", 60);
    return c;
}

void org::apache::poi::ss::usermodel::IconMultiStateFormatting_IconSet::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        DEFAULT_ICONSET_ = IconMultiStateFormatting_IconSet::GYR_3_TRAFFIC_LIGHTS;
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

org::apache::poi::ss::usermodel::IconMultiStateFormatting_IconSet* org::apache::poi::ss::usermodel::IconMultiStateFormatting_IconSet::valueOf(::java::lang::String* a0)
{
    if(GREY_3_ARROWS->toString()->equals(a0))
        return GREY_3_ARROWS;
    if(GREY_4_ARROWS->toString()->equals(a0))
        return GREY_4_ARROWS;
    if(GREY_5_ARROWS->toString()->equals(a0))
        return GREY_5_ARROWS;
    if(GYRB_4_TRAFFIC_LIGHTS->toString()->equals(a0))
        return GYRB_4_TRAFFIC_LIGHTS;
    if(GYR_3_ARROW->toString()->equals(a0))
        return GYR_3_ARROW;
    if(GYR_3_FLAGS->toString()->equals(a0))
        return GYR_3_FLAGS;
    if(GYR_3_SHAPES->toString()->equals(a0))
        return GYR_3_SHAPES;
    if(GYR_3_SYMBOLS->toString()->equals(a0))
        return GYR_3_SYMBOLS;
    if(GYR_3_SYMBOLS_CIRCLE->toString()->equals(a0))
        return GYR_3_SYMBOLS_CIRCLE;
    if(GYR_3_TRAFFIC_LIGHTS->toString()->equals(a0))
        return GYR_3_TRAFFIC_LIGHTS;
    if(GYR_3_TRAFFIC_LIGHTS_BOX->toString()->equals(a0))
        return GYR_3_TRAFFIC_LIGHTS_BOX;
    if(GYR_4_ARROWS->toString()->equals(a0))
        return GYR_4_ARROWS;
    if(GYYYR_5_ARROWS->toString()->equals(a0))
        return GYYYR_5_ARROWS;
    if(QUARTERS_5->toString()->equals(a0))
        return QUARTERS_5;
    if(RATINGS_4->toString()->equals(a0))
        return RATINGS_4;
    if(RATINGS_5->toString()->equals(a0))
        return RATINGS_5;
    if(RB_4_TRAFFIC_LIGHTS->toString()->equals(a0))
        return RB_4_TRAFFIC_LIGHTS;
    throw new ::java::lang::IllegalArgumentException(a0);
}

org::apache::poi::ss::usermodel::IconMultiStateFormatting_IconSetArray* org::apache::poi::ss::usermodel::IconMultiStateFormatting_IconSet::values()
{
    return new org::apache::poi::ss::usermodel::IconMultiStateFormatting_IconSetArray({
        GREY_3_ARROWS,
        GREY_4_ARROWS,
        GREY_5_ARROWS,
        GYRB_4_TRAFFIC_LIGHTS,
        GYR_3_ARROW,
        GYR_3_FLAGS,
        GYR_3_SHAPES,
        GYR_3_SYMBOLS,
        GYR_3_SYMBOLS_CIRCLE,
        GYR_3_TRAFFIC_LIGHTS,
        GYR_3_TRAFFIC_LIGHTS_BOX,
        GYR_4_ARROWS,
        GYYYR_5_ARROWS,
        QUARTERS_5,
        RATINGS_4,
        RATINGS_5,
        RB_4_TRAFFIC_LIGHTS,
    });
}

java::lang::Class* org::apache::poi::ss::usermodel::IconMultiStateFormatting_IconSet::getClass0()
{
    return class_();
}

