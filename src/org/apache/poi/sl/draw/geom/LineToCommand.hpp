// Generated from /POI/java/org/apache/poi/sl/draw/geom/LineToCommand.java

#pragma once

#include <java/awt/geom/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/sl/draw/binding/fwd-POI.hpp>
#include <org/apache/poi/sl/draw/geom/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/sl/draw/geom/PathCommand.hpp>

struct default_init_tag;

class poi::sl::draw::geom::LineToCommand
    : public virtual ::java::lang::Object
    , public virtual PathCommand
{

public:
    typedef ::java::lang::Object super;

private:
    ::java::lang::String* arg1 {  };
    ::java::lang::String* arg2 {  };
protected:
    void ctor(::poi::sl::draw::binding::CTAdjPoint2D* pt);
    void ctor(::java::lang::String* s1, ::java::lang::String* s2);

public:
    void execute(::java::awt::geom::Path2D_Double* path, Context* ctx) override;

    // Generated

public: /* package */
    LineToCommand(::poi::sl::draw::binding::CTAdjPoint2D* pt);
    LineToCommand(::java::lang::String* s1, ::java::lang::String* s2);
protected:
    LineToCommand(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
