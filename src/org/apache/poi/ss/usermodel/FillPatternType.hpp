// Generated from /POI/java/org/apache/poi/ss/usermodel/FillPatternType.java

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

namespace poi
{
    namespace ss
    {
        namespace usermodel
        {
typedef ::SubArray< ::poi::ss::usermodel::FillPatternType, ::java::lang::EnumArray > FillPatternTypeArray;
        } // usermodel
    } // ss
} // poi

struct default_init_tag;

class poi::ss::usermodel::FillPatternType final
    : public ::java::lang::Enum
{

public:
    typedef ::java::lang::Enum super;

public: /* package */
    static FillPatternType *NO_FILL;
    static FillPatternType *SOLID_FOREGROUND;
    static FillPatternType *FINE_DOTS;
    static FillPatternType *ALT_BARS;
    static FillPatternType *SPARSE_DOTS;
    static FillPatternType *THICK_HORZ_BANDS;
    static FillPatternType *THICK_VERT_BANDS;
    static FillPatternType *THICK_BACKWARD_DIAG;
    static FillPatternType *THICK_FORWARD_DIAG;
    static FillPatternType *BIG_SPOTS;
    static FillPatternType *BRICKS;
    static FillPatternType *THIN_HORZ_BANDS;
    static FillPatternType *THIN_VERT_BANDS;
    static FillPatternType *THIN_BACKWARD_DIAG;
    static FillPatternType *THIN_FORWARD_DIAG;
    static FillPatternType *SQUARES;
    static FillPatternType *DIAMONDS;
    static FillPatternType *LESS_DOTS;
    static FillPatternType *LEAST_DOTS;

private:
    int16_t code {  };
protected:
    void ctor(::java::lang::String* name, int ordinal, int32_t code);

public:
    int16_t getCode();

private:
    static int32_t length_;

public:
    static FillPatternType* forInt(int32_t code);

    // Generated

private:
    FillPatternType(::java::lang::String* name, int ordinal, int32_t code);
protected:
    FillPatternType(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static int32_t& length();

public:
    static FillPatternType* valueOf(::java::lang::String* a0);
    static FillPatternTypeArray* values();

private:
    virtual ::java::lang::Class* getClass0();
};
