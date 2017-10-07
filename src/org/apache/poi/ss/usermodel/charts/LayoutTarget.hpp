// Generated from /POI/java/org/apache/poi/ss/usermodel/charts/LayoutTarget.java

#pragma once

#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/charts/fwd-POI.hpp>
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
                    namespace charts
                    {
typedef ::SubArray< ::org::apache::poi::ss::usermodel::charts::LayoutTarget, ::java::lang::EnumArray > LayoutTargetArray;
                    } // charts
                } // usermodel
            } // ss
        } // poi
    } // apache
} // org

struct default_init_tag;

class org::apache::poi::ss::usermodel::charts::LayoutTarget final
    : public ::java::lang::Enum
{

public:
    typedef ::java::lang::Enum super;

public: /* package */
    static LayoutTarget *INNER;
    static LayoutTarget *OUTER;

    // Generated

public:
    LayoutTarget(::java::lang::String* name, int ordinal);
protected:
    LayoutTarget(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static LayoutTarget* valueOf(::java::lang::String* a0);
    static LayoutTargetArray* values();

private:
    virtual ::java::lang::Class* getClass0();
};