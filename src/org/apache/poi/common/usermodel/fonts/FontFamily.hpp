// Generated from /POI/java/org/apache/poi/common/usermodel/fonts/FontFamily.java

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
                    namespace fonts
                    {
typedef ::SubArray< ::org::apache::poi::common::usermodel::fonts::FontFamily, ::java::lang::EnumArray > FontFamilyArray;
                    } // fonts
                } // usermodel
            } // common
        } // poi
    } // apache
} // org

struct default_init_tag;

class org::apache::poi::common::usermodel::fonts::FontFamily final
    : public ::java::lang::Enum
{

public:
    typedef ::java::lang::Enum super;

public: /* package */
    static FontFamily *FF_DONTCARE;
    static FontFamily *FF_ROMAN;
    static FontFamily *FF_SWISS;
    static FontFamily *FF_MODERN;
    static FontFamily *FF_SCRIPT;
    static FontFamily *FF_DECORATIVE;

private:
    int32_t nativeId {  };
protected:
    void ctor(::java::lang::String* name, int ordinal, int32_t nativeId);

public:
    int32_t getFlag();
    static FontFamily* valueOf(int32_t nativeId);
    static FontFamily* valueOfPitchFamily(int8_t pitchAndFamily);

    // Generated

private:
    FontFamily(::java::lang::String* name, int ordinal, int32_t nativeId);
protected:
    FontFamily(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static ::java::lang::Enum* valueOf(::java::lang::Class* enumType, ::java::lang::String* name);
    static FontFamily* valueOf(::java::lang::String* a0);
    static FontFamilyArray* values();

private:
    virtual ::java::lang::Class* getClass0();
};
