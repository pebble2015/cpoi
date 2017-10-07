// Generated from /POI/java/org/apache/poi/sl/usermodel/StrokeStyle.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/sl/usermodel/fwd-POI.hpp>
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
                namespace usermodel
                {
typedef ::SubArray< ::org::apache::poi::sl::usermodel::StrokeStyle_LineCap, ::java::lang::EnumArray > StrokeStyle_LineCapArray;
                } // usermodel
            } // sl
        } // poi
    } // apache
} // org

struct default_init_tag;

class org::apache::poi::sl::usermodel::StrokeStyle_LineCap final
    : public ::java::lang::Enum
{

public:
    typedef ::java::lang::Enum super;

public: /* package */
    static StrokeStyle_LineCap *ROUND;
    static StrokeStyle_LineCap *SQUARE;
    static StrokeStyle_LineCap *FLAT;

public:
    int32_t nativeId {  };
    int32_t ooxmlId {  };
protected:
    void ctor(::java::lang::String* name, int ordinal, int32_t nativeId, int32_t ooxmlId);

public:
    static StrokeStyle_LineCap* fromNativeId(int32_t nativeId);
    static StrokeStyle_LineCap* fromOoxmlId(int32_t ooxmlId);

    // Generated

private:
    StrokeStyle_LineCap(::java::lang::String* name, int ordinal, int32_t nativeId, int32_t ooxmlId);
protected:
    StrokeStyle_LineCap(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static StrokeStyle_LineCap* valueOf(::java::lang::String* a0);
    static StrokeStyle_LineCapArray* values();

private:
    virtual ::java::lang::Class* getClass0();
    friend class StrokeStyle;
    friend class StrokeStyle_LineDash;
    friend class StrokeStyle_LineCompound;
};
