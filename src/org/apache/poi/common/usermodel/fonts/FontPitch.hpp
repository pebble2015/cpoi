// Generated from /POI/java/org/apache/poi/common/usermodel/fonts/FontPitch.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/common/usermodel/fonts/fwd-POI.hpp>
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
    namespace common
    {
        namespace usermodel
        {
            namespace fonts
            {
typedef ::SubArray< ::poi::common::usermodel::fonts::FontPitch, ::java::lang::EnumArray > FontPitchArray;
            } // fonts
        } // usermodel
    } // common
} // poi

struct default_init_tag;

class poi::common::usermodel::fonts::FontPitch final
    : public ::java::lang::Enum
{

public:
    typedef ::java::lang::Enum super;

public: /* package */
    static FontPitch *DEFAULT;
    static FontPitch *FIXED;
    static FontPitch *VARIABLE;

private:
    int32_t nativeId {  };
protected:
    void ctor(::java::lang::String* name, int ordinal, int32_t nativeId);

public:
    int32_t getNativeId();
    static FontPitch* valueOf(int32_t flag);
    static int8_t getNativeId(FontPitch* pitch, FontFamily* family);
    static FontPitch* valueOfPitchFamily(int8_t pitchAndFamily);

    // Generated

private:
    FontPitch(::java::lang::String* name, int ordinal, int32_t nativeId);
protected:
    FontPitch(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static ::java::lang::Enum* valueOf(::java::lang::Class* enumType, ::java::lang::String* name);
    static FontPitch* valueOf(::java::lang::String* a0);
    static FontPitchArray* values();

private:
    virtual ::java::lang::Class* getClass0();
};
