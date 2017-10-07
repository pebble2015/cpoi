// Generated from /POI/java/org/apache/poi/sl/draw/geom/QuadToCommand.java

#pragma once

#include <java/awt/geom/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/sl/draw/binding/fwd-POI.hpp>
#include <org/apache/poi/sl/draw/geom/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/sl/draw/geom/PathCommand.hpp>

struct default_init_tag;

class org::apache::poi::sl::draw::geom::QuadToCommand
    : public virtual ::java::lang::Object
    , public virtual PathCommand
{

public:
    typedef ::java::lang::Object super;

private:
    ::java::lang::String* arg1 {  };
    ::java::lang::String* arg2 {  };
    ::java::lang::String* arg3 {  };
    ::java::lang::String* arg4 {  };
protected:
    void ctor(::org::apache::poi::sl::draw::binding::CTAdjPoint2D* pt1, ::org::apache::poi::sl::draw::binding::CTAdjPoint2D* pt2);

public:
    void execute(::java::awt::geom::Path2D_Double* path, Context* ctx) override;

    // Generated

public: /* package */
    QuadToCommand(::org::apache::poi::sl::draw::binding::CTAdjPoint2D* pt1, ::org::apache::poi::sl::draw::binding::CTAdjPoint2D* pt2);
protected:
    QuadToCommand(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
