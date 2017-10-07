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
typedef ::SubArray< ::org::apache::poi::sl::usermodel::StrokeStyle_LineDash, ::java::lang::EnumArray > StrokeStyle_LineDashArray;
                } // usermodel
            } // sl
        } // poi
    } // apache
} // org

struct default_init_tag;

class org::apache::poi::sl::usermodel::StrokeStyle_LineDash final
    : public ::java::lang::Enum
{

public:
    typedef ::java::lang::Enum super;

public: /* package */
    static StrokeStyle_LineDash *SOLID;
    static StrokeStyle_LineDash *DOT;
    static StrokeStyle_LineDash *DASH;
    static StrokeStyle_LineDash *DASH_DOT;
    static StrokeStyle_LineDash *LG_DASH;
    static StrokeStyle_LineDash *LG_DASH_DOT;
    static StrokeStyle_LineDash *LG_DASH_DOT_DOT;
    static StrokeStyle_LineDash *SYS_DASH;
    static StrokeStyle_LineDash *SYS_DOT;
    static StrokeStyle_LineDash *SYS_DASH_DOT;
    static StrokeStyle_LineDash *SYS_DASH_DOT_DOT;

public:
    ::int32_tArray* pattern {  };
    int32_t nativeId {  };
    int32_t ooxmlId {  };
protected:
    void ctor(::java::lang::String* name, int ordinal, int32_t nativeId, int32_t ooxmlId, ::int32_tArray*/*...*/ pattern);

public:
    static StrokeStyle_LineDash* fromNativeId(int32_t nativeId);
    static StrokeStyle_LineDash* fromOoxmlId(int32_t ooxmlId);

    // Generated

private:
    StrokeStyle_LineDash(::java::lang::String* name, int ordinal, int32_t nativeId, int32_t ooxmlId, ::int32_tArray* pattern);
protected:
    StrokeStyle_LineDash(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static StrokeStyle_LineDash* valueOf(::java::lang::String* a0);
    static StrokeStyle_LineDashArray* values();

private:
    virtual ::java::lang::Class* getClass0();
    friend class StrokeStyle;
    friend class StrokeStyle_LineCap;
    friend class StrokeStyle_LineCompound;
};
