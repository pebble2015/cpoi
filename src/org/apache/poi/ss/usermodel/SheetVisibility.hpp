// Generated from /POI/java/org/apache/poi/ss/usermodel/SheetVisibility.java

#pragma once

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
typedef ::SubArray< ::org::apache::poi::ss::usermodel::SheetVisibility, ::java::lang::EnumArray > SheetVisibilityArray;
                } // usermodel
            } // ss
        } // poi
    } // apache
} // org

struct default_init_tag;

class org::apache::poi::ss::usermodel::SheetVisibility final
    : public ::java::lang::Enum
{

public:
    typedef ::java::lang::Enum super;

public: /* package */
    static SheetVisibility *VISIBLE;
    static SheetVisibility *HIDDEN;
    static SheetVisibility *VERY_HIDDEN;

    // Generated

public:
    SheetVisibility(::java::lang::String* name, int ordinal);
protected:
    SheetVisibility(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static SheetVisibility* valueOf(::java::lang::String* a0);
    static SheetVisibilityArray* values();

private:
    virtual ::java::lang::Class* getClass0();
};
