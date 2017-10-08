// Generated from /POI/java/org/apache/poi/sl/draw/geom/BuiltInGuide.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/sl/draw/geom/fwd-POI.hpp>
#include <java/lang/Enum.hpp>
#include <org/apache/poi/sl/draw/geom/Formula.hpp>

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
    namespace sl
    {
        namespace draw
        {
            namespace geom
            {
typedef ::SubArray< ::poi::sl::draw::geom::Formula, ::java::lang::ObjectArray > FormulaArray;
typedef ::SubArray< ::poi::sl::draw::geom::BuiltInGuide, ::java::lang::EnumArray, FormulaArray > BuiltInGuideArray;
            } // geom
        } // draw
    } // sl
} // poi

struct default_init_tag;

class poi::sl::draw::geom::BuiltInGuide final
    : public ::java::lang::Enum
    , public Formula
{

public:
    typedef ::java::lang::Enum super;

public: /* package */
    static BuiltInGuide *_3cd4;
    static BuiltInGuide *_3cd8;
    static BuiltInGuide *_5cd8;
    static BuiltInGuide *_7cd8;
    static BuiltInGuide *_b;
    static BuiltInGuide *_cd2;
    static BuiltInGuide *_cd4;
    static BuiltInGuide *_cd8;
    static BuiltInGuide *_hc;
    static BuiltInGuide *_h;
    static BuiltInGuide *_hd2;
    static BuiltInGuide *_hd3;
    static BuiltInGuide *_hd4;
    static BuiltInGuide *_hd5;
    static BuiltInGuide *_hd6;
    static BuiltInGuide *_hd8;
    static BuiltInGuide *_l;
    static BuiltInGuide *_ls;
    static BuiltInGuide *_r;
    static BuiltInGuide *_ss;
    static BuiltInGuide *_ssd2;
    static BuiltInGuide *_ssd4;
    static BuiltInGuide *_ssd6;
    static BuiltInGuide *_ssd8;
    static BuiltInGuide *_ssd16;
    static BuiltInGuide *_ssd32;
    static BuiltInGuide *_t;
    static BuiltInGuide *_vc;
    static BuiltInGuide *_w;
    static BuiltInGuide *_wd2;
    static BuiltInGuide *_wd3;
    static BuiltInGuide *_wd4;
    static BuiltInGuide *_wd5;
    static BuiltInGuide *_wd6;
    static BuiltInGuide *_wd8;
    static BuiltInGuide *_wd10;
    static BuiltInGuide *_wd32;

public:
    ::java::lang::String* getName();
    double evaluate(Context* ctx) override;

    // Generated
    BuiltInGuide(::java::lang::String* name, int ordinal);
protected:
    BuiltInGuide(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static BuiltInGuide* valueOf(::java::lang::String* a0);
    static BuiltInGuideArray* values();

private:
    virtual ::java::lang::Class* getClass0();
};
