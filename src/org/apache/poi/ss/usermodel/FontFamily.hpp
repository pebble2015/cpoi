// Generated from /POI/java/org/apache/poi/ss/usermodel/FontFamily.java

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
typedef ::SubArray< ::org::apache::poi::ss::usermodel::FontFamily, ::java::lang::EnumArray > FontFamilyArray;
                } // usermodel
            } // ss
        } // poi
    } // apache
} // org

struct default_init_tag;

class org::apache::poi::ss::usermodel::FontFamily final
    : public ::java::lang::Enum
{

public:
    typedef ::java::lang::Enum super;

public: /* package */
    static FontFamily *NOT_APPLICABLE;
    static FontFamily *ROMAN;
    static FontFamily *SWISS;
    static FontFamily *MODERN;
    static FontFamily *SCRIPT;
    static FontFamily *DECORATIVE;

private:
    int32_t family {  };
protected:
    void ctor(::java::lang::String* name, int ordinal, int32_t value);

public:
    int32_t getValue();

private:
    static FontFamilyArray* _table_;

public:
    static FontFamily* valueOf(int32_t family);

    // Generated

private:
    FontFamily(::java::lang::String* name, int ordinal, int32_t value);
protected:
    FontFamily(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    static ::java::lang::Enum* valueOf(::java::lang::Class* enumType, ::java::lang::String* name);

private:
    static FontFamilyArray*& _table();

public:
    static FontFamily* valueOf(::java::lang::String* a0);
    static FontFamilyArray* values();

private:
    virtual ::java::lang::Class* getClass0();
};
