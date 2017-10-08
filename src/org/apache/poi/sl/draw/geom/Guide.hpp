// Generated from /POI/java/org/apache/poi/sl/draw/geom/Guide.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/sl/draw/binding/fwd-POI.hpp>
#include <org/apache/poi/sl/draw/geom/fwd-POI.hpp>
#include <java/lang/Object.hpp>
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
typedef ::SubArray< ::java::lang::CharSequence, ObjectArray > CharSequenceArray;
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::String, ObjectArray, ::java::io::SerializableArray, ComparableArray, CharSequenceArray > StringArray;
    } // lang
} // java

struct default_init_tag;

class poi::sl::draw::geom::Guide
    : public virtual ::java::lang::Object
    , public virtual Formula
{

public:
    typedef ::java::lang::Object super;

private:
    ::java::lang::String* name {  };
    ::java::lang::String* fmla {  };
    Guide_Op* op {  };
    ::java::lang::StringArray* operands {  };
protected:
    void ctor(::poi::sl::draw::binding::CTGeomGuide* gd);
    void ctor(::java::lang::String* nm, ::java::lang::String* fm);

public:
    virtual ::java::lang::String* getName();

public: /* package */
    virtual ::java::lang::String* getFormula();

public:
    double evaluate(Context* ctx) override;

    // Generated
    Guide(::poi::sl::draw::binding::CTGeomGuide* gd);
    Guide(::java::lang::String* nm, ::java::lang::String* fm);
protected:
    Guide(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class Guide_Op;
};
