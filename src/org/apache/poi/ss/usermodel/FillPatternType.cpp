// Generated from /POI/java/org/apache/poi/ss/usermodel/FillPatternType.java
#include <org/apache/poi/ss/usermodel/FillPatternType.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/Enum.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <SubArray.hpp>
#include <ObjectArray.hpp>

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

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::ss::usermodel::FillPatternType::FillPatternType(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::usermodel::FillPatternType::FillPatternType(::java::lang::String* name, int ordinal, int32_t code) 
    : FillPatternType(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal, code);
}

poi::ss::usermodel::FillPatternType* poi::ss::usermodel::FillPatternType::NO_FILL = new ::poi::ss::usermodel::FillPatternType(u"NO_FILL"_j, 0, int32_t(0));
poi::ss::usermodel::FillPatternType* poi::ss::usermodel::FillPatternType::SOLID_FOREGROUND = new ::poi::ss::usermodel::FillPatternType(u"SOLID_FOREGROUND"_j, 1, int32_t(1));
poi::ss::usermodel::FillPatternType* poi::ss::usermodel::FillPatternType::FINE_DOTS = new ::poi::ss::usermodel::FillPatternType(u"FINE_DOTS"_j, 2, int32_t(2));
poi::ss::usermodel::FillPatternType* poi::ss::usermodel::FillPatternType::ALT_BARS = new ::poi::ss::usermodel::FillPatternType(u"ALT_BARS"_j, 3, int32_t(3));
poi::ss::usermodel::FillPatternType* poi::ss::usermodel::FillPatternType::SPARSE_DOTS = new ::poi::ss::usermodel::FillPatternType(u"SPARSE_DOTS"_j, 4, int32_t(4));
poi::ss::usermodel::FillPatternType* poi::ss::usermodel::FillPatternType::THICK_HORZ_BANDS = new ::poi::ss::usermodel::FillPatternType(u"THICK_HORZ_BANDS"_j, 5, int32_t(5));
poi::ss::usermodel::FillPatternType* poi::ss::usermodel::FillPatternType::THICK_VERT_BANDS = new ::poi::ss::usermodel::FillPatternType(u"THICK_VERT_BANDS"_j, 6, int32_t(6));
poi::ss::usermodel::FillPatternType* poi::ss::usermodel::FillPatternType::THICK_BACKWARD_DIAG = new ::poi::ss::usermodel::FillPatternType(u"THICK_BACKWARD_DIAG"_j, 7, int32_t(7));
poi::ss::usermodel::FillPatternType* poi::ss::usermodel::FillPatternType::THICK_FORWARD_DIAG = new ::poi::ss::usermodel::FillPatternType(u"THICK_FORWARD_DIAG"_j, 8, int32_t(8));
poi::ss::usermodel::FillPatternType* poi::ss::usermodel::FillPatternType::BIG_SPOTS = new ::poi::ss::usermodel::FillPatternType(u"BIG_SPOTS"_j, 9, int32_t(9));
poi::ss::usermodel::FillPatternType* poi::ss::usermodel::FillPatternType::BRICKS = new ::poi::ss::usermodel::FillPatternType(u"BRICKS"_j, 10, int32_t(10));
poi::ss::usermodel::FillPatternType* poi::ss::usermodel::FillPatternType::THIN_HORZ_BANDS = new ::poi::ss::usermodel::FillPatternType(u"THIN_HORZ_BANDS"_j, 11, int32_t(11));
poi::ss::usermodel::FillPatternType* poi::ss::usermodel::FillPatternType::THIN_VERT_BANDS = new ::poi::ss::usermodel::FillPatternType(u"THIN_VERT_BANDS"_j, 12, int32_t(12));
poi::ss::usermodel::FillPatternType* poi::ss::usermodel::FillPatternType::THIN_BACKWARD_DIAG = new ::poi::ss::usermodel::FillPatternType(u"THIN_BACKWARD_DIAG"_j, 13, int32_t(13));
poi::ss::usermodel::FillPatternType* poi::ss::usermodel::FillPatternType::THIN_FORWARD_DIAG = new ::poi::ss::usermodel::FillPatternType(u"THIN_FORWARD_DIAG"_j, 14, int32_t(14));
poi::ss::usermodel::FillPatternType* poi::ss::usermodel::FillPatternType::SQUARES = new ::poi::ss::usermodel::FillPatternType(u"SQUARES"_j, 15, int32_t(15));
poi::ss::usermodel::FillPatternType* poi::ss::usermodel::FillPatternType::DIAMONDS = new ::poi::ss::usermodel::FillPatternType(u"DIAMONDS"_j, 16, int32_t(16));
poi::ss::usermodel::FillPatternType* poi::ss::usermodel::FillPatternType::LESS_DOTS = new ::poi::ss::usermodel::FillPatternType(u"LESS_DOTS"_j, 17, int32_t(17));
poi::ss::usermodel::FillPatternType* poi::ss::usermodel::FillPatternType::LEAST_DOTS = new ::poi::ss::usermodel::FillPatternType(u"LEAST_DOTS"_j, 18, int32_t(18));
void poi::ss::usermodel::FillPatternType::ctor(::java::lang::String* name, int ordinal, int32_t code)
{
    super::ctor(name, ordinal);
    this->code = static_cast< int16_t >(code);
}

int16_t poi::ss::usermodel::FillPatternType::getCode()
{
    return code;
}

int32_t& poi::ss::usermodel::FillPatternType::length()
{
    clinit();
    return length_;
}
int32_t poi::ss::usermodel::FillPatternType::length_;

poi::ss::usermodel::FillPatternType* poi::ss::usermodel::FillPatternType::forInt(int32_t code)
{
    clinit();
    if(code < 0 || code > length_) {
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Invalid FillPatternType code: "_j)->append(code)->toString());
    }
    return (*values())[code];
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::usermodel::FillPatternType::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.usermodel.FillPatternType", 43);
    return c;
}

void poi::ss::usermodel::FillPatternType::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        length_ = npc(values())->length;
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

poi::ss::usermodel::FillPatternType* poi::ss::usermodel::FillPatternType::valueOf(::java::lang::String* a0)
{
    if(ALT_BARS->toString()->equals(a0))
        return ALT_BARS;
    if(BIG_SPOTS->toString()->equals(a0))
        return BIG_SPOTS;
    if(BRICKS->toString()->equals(a0))
        return BRICKS;
    if(DIAMONDS->toString()->equals(a0))
        return DIAMONDS;
    if(FINE_DOTS->toString()->equals(a0))
        return FINE_DOTS;
    if(LEAST_DOTS->toString()->equals(a0))
        return LEAST_DOTS;
    if(LESS_DOTS->toString()->equals(a0))
        return LESS_DOTS;
    if(NO_FILL->toString()->equals(a0))
        return NO_FILL;
    if(SOLID_FOREGROUND->toString()->equals(a0))
        return SOLID_FOREGROUND;
    if(SPARSE_DOTS->toString()->equals(a0))
        return SPARSE_DOTS;
    if(SQUARES->toString()->equals(a0))
        return SQUARES;
    if(THICK_BACKWARD_DIAG->toString()->equals(a0))
        return THICK_BACKWARD_DIAG;
    if(THICK_FORWARD_DIAG->toString()->equals(a0))
        return THICK_FORWARD_DIAG;
    if(THICK_HORZ_BANDS->toString()->equals(a0))
        return THICK_HORZ_BANDS;
    if(THICK_VERT_BANDS->toString()->equals(a0))
        return THICK_VERT_BANDS;
    if(THIN_BACKWARD_DIAG->toString()->equals(a0))
        return THIN_BACKWARD_DIAG;
    if(THIN_FORWARD_DIAG->toString()->equals(a0))
        return THIN_FORWARD_DIAG;
    if(THIN_HORZ_BANDS->toString()->equals(a0))
        return THIN_HORZ_BANDS;
    if(THIN_VERT_BANDS->toString()->equals(a0))
        return THIN_VERT_BANDS;
    throw new ::java::lang::IllegalArgumentException(a0);
}

poi::ss::usermodel::FillPatternTypeArray* poi::ss::usermodel::FillPatternType::values()
{
    return new poi::ss::usermodel::FillPatternTypeArray({
        ALT_BARS,
        BIG_SPOTS,
        BRICKS,
        DIAMONDS,
        FINE_DOTS,
        LEAST_DOTS,
        LESS_DOTS,
        NO_FILL,
        SOLID_FOREGROUND,
        SPARSE_DOTS,
        SQUARES,
        THICK_BACKWARD_DIAG,
        THICK_FORWARD_DIAG,
        THICK_HORZ_BANDS,
        THICK_VERT_BANDS,
        THIN_BACKWARD_DIAG,
        THIN_FORWARD_DIAG,
        THIN_HORZ_BANDS,
        THIN_VERT_BANDS,
    });
}

java::lang::Class* poi::ss::usermodel::FillPatternType::getClass0()
{
    return class_();
}

