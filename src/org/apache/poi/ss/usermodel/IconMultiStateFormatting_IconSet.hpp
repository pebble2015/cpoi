// Generated from /POI/java/org/apache/poi/ss/usermodel/IconMultiStateFormatting.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <java/lang/Enum.hpp>

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
typedef ::SubArray< ::poi::ss::usermodel::IconMultiStateFormatting_IconSet, ::java::lang::EnumArray > IconMultiStateFormatting_IconSetArray;
        } // usermodel
    } // ss
} // poi

struct default_init_tag;

class poi::ss::usermodel::IconMultiStateFormatting_IconSet final
    : public ::java::lang::Enum
{

public:
    typedef ::java::lang::Enum super;

public: /* package */
    static IconMultiStateFormatting_IconSet *GYR_3_ARROW;
    static IconMultiStateFormatting_IconSet *GREY_3_ARROWS;
    static IconMultiStateFormatting_IconSet *GYR_3_FLAGS;
    static IconMultiStateFormatting_IconSet *GYR_3_TRAFFIC_LIGHTS;
    static IconMultiStateFormatting_IconSet *GYR_3_TRAFFIC_LIGHTS_BOX;
    static IconMultiStateFormatting_IconSet *GYR_3_SHAPES;
    static IconMultiStateFormatting_IconSet *GYR_3_SYMBOLS_CIRCLE;
    static IconMultiStateFormatting_IconSet *GYR_3_SYMBOLS;
    static IconMultiStateFormatting_IconSet *GYR_4_ARROWS;
    static IconMultiStateFormatting_IconSet *GREY_4_ARROWS;
    static IconMultiStateFormatting_IconSet *RB_4_TRAFFIC_LIGHTS;
    static IconMultiStateFormatting_IconSet *RATINGS_4;
    static IconMultiStateFormatting_IconSet *GYRB_4_TRAFFIC_LIGHTS;
    static IconMultiStateFormatting_IconSet *GYYYR_5_ARROWS;
    static IconMultiStateFormatting_IconSet *GREY_5_ARROWS;
    static IconMultiStateFormatting_IconSet *RATINGS_5;
    static IconMultiStateFormatting_IconSet *QUARTERS_5;

private:
    static IconMultiStateFormatting_IconSet* DEFAULT_ICONSET_;

public:
    int32_t id {  };
    int32_t num {  };
    ::java::lang::String* name_ {  };
    ::java::lang::String* toString() override;
    static IconMultiStateFormatting_IconSet* byId(int32_t id);
    static IconMultiStateFormatting_IconSet* byName(::java::lang::String* name);
protected:
    void ctor(::java::lang::String* name, int ordinal, int32_t id, int32_t num, ::java::lang::String* name1);

    // Generated

private:
    IconMultiStateFormatting_IconSet(::java::lang::String* name, int ordinal, int32_t id, int32_t num, ::java::lang::String* name1);
protected:
    IconMultiStateFormatting_IconSet(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

public: /* protected */
    static IconMultiStateFormatting_IconSet*& DEFAULT_ICONSET();

public:
    static IconMultiStateFormatting_IconSet* valueOf(::java::lang::String* a0);
    static IconMultiStateFormatting_IconSetArray* values();

private:
    virtual ::java::lang::Class* getClass0();
    friend class IconMultiStateFormatting;
};
