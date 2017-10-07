// Generated from /POI/java/org/apache/poi/ss/usermodel/PrintOrientation.java

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
typedef ::SubArray< ::org::apache::poi::ss::usermodel::PrintOrientation, ::java::lang::EnumArray > PrintOrientationArray;
                } // usermodel
            } // ss
        } // poi
    } // apache
} // org

struct default_init_tag;

class org::apache::poi::ss::usermodel::PrintOrientation final
    : public ::java::lang::Enum
{

public:
    typedef ::java::lang::Enum super;

public: /* package */
    static PrintOrientation *DEFAULT;
    static PrintOrientation *PORTRAIT;
    static PrintOrientation *LANDSCAPE;

private:
    int32_t orientation {  };
protected:
    void ctor(::java::lang::String* name, int ordinal, int32_t orientation);

public:
    int32_t getValue();

private:
    static PrintOrientationArray* _table_;

public:
    static PrintOrientation* valueOf(int32_t value);

    // Generated

private:
    PrintOrientation(::java::lang::String* name, int ordinal, int32_t orientation);
protected:
    PrintOrientation(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    static ::java::lang::Enum* valueOf(::java::lang::Class* enumType, ::java::lang::String* name);

private:
    static PrintOrientationArray*& _table();

public:
    static PrintOrientation* valueOf(::java::lang::String* a0);
    static PrintOrientationArray* values();

private:
    virtual ::java::lang::Class* getClass0();
};
