// Generated from /POI/java/org/apache/poi/sl/draw/geom/Guide.java

#pragma once

#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/sl/draw/geom/fwd-POI.hpp>
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
            namespace sl
            {
                namespace draw
                {
                    namespace geom
                    {
typedef ::SubArray< ::org::apache::poi::sl::draw::geom::Guide_Op, ::java::lang::EnumArray > Guide_OpArray;
                    } // geom
                } // draw
            } // sl
        } // poi
    } // apache
} // org

struct default_init_tag;

class org::apache::poi::sl::draw::geom::Guide_Op final
    : public ::java::lang::Enum
{

public:
    typedef ::java::lang::Enum super;

public: /* package */
    static Guide_Op *muldiv;
    static Guide_Op *addsub;
    static Guide_Op *adddiv;
    static Guide_Op *ifelse;
    static Guide_Op *val;
    static Guide_Op *abs;
    static Guide_Op *sqrt;
    static Guide_Op *max;
    static Guide_Op *min;
    static Guide_Op *at2;
    static Guide_Op *sin;
    static Guide_Op *cos;
    static Guide_Op *tan;
    static Guide_Op *cat2;
    static Guide_Op *sat2;
    static Guide_Op *pin;
    static Guide_Op *mod;

    // Generated

public:
    Guide_Op(::java::lang::String* name, int ordinal);
protected:
    Guide_Op(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static Guide_Op* valueOf(::java::lang::String* a0);
    static Guide_OpArray* values();

private:
    virtual ::java::lang::Class* getClass0();
    friend class Guide;
};
