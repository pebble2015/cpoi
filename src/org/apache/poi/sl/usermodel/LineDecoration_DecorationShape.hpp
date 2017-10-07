// Generated from /POI/java/org/apache/poi/sl/usermodel/LineDecoration.java

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
typedef ::SubArray< ::org::apache::poi::sl::usermodel::LineDecoration_DecorationShape, ::java::lang::EnumArray > LineDecoration_DecorationShapeArray;
                } // usermodel
            } // sl
        } // poi
    } // apache
} // org

struct default_init_tag;

class org::apache::poi::sl::usermodel::LineDecoration_DecorationShape final
    : public ::java::lang::Enum
{

public:
    typedef ::java::lang::Enum super;

public: /* package */
    static LineDecoration_DecorationShape *NONE;
    static LineDecoration_DecorationShape *TRIANGLE;
    static LineDecoration_DecorationShape *STEALTH;
    static LineDecoration_DecorationShape *DIAMOND;
    static LineDecoration_DecorationShape *OVAL;
    static LineDecoration_DecorationShape *ARROW;

public:
    int32_t nativeId {  };
    int32_t ooxmlId {  };
protected:
    void ctor(::java::lang::String* name, int ordinal, int32_t nativeId, int32_t ooxmlId);

public:
    static LineDecoration_DecorationShape* fromNativeId(int32_t nativeId);
    static LineDecoration_DecorationShape* fromOoxmlId(int32_t ooxmlId);

    // Generated

private:
    LineDecoration_DecorationShape(::java::lang::String* name, int ordinal, int32_t nativeId, int32_t ooxmlId);
protected:
    LineDecoration_DecorationShape(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static LineDecoration_DecorationShape* valueOf(::java::lang::String* a0);
    static LineDecoration_DecorationShapeArray* values();

private:
    virtual ::java::lang::Class* getClass0();
    friend class LineDecoration;
    friend class LineDecoration_DecorationSize;
};
