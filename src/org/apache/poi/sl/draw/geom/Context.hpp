// Generated from /POI/java/org/apache/poi/sl/draw/geom/Context.java

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/geom/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/sl/draw/geom/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::sl::draw::geom::Context
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

public: /* package */
    ::java::util::Map* _ctx {  };
    IAdjustableShape* _props {  };
    ::java::awt::geom::Rectangle2D* _anchor {  };
protected:
    void ctor(CustomGeometry* geom, ::java::awt::geom::Rectangle2D* anchor, IAdjustableShape* props);

public:
    virtual ::java::awt::geom::Rectangle2D* getShapeAnchor();
    virtual Guide* getAdjustValue(::java::lang::String* name);
    virtual double getValue(::java::lang::String* key);
    virtual double evaluate(Formula* fmla);

    // Generated
    Context(CustomGeometry* geom, ::java::awt::geom::Rectangle2D* anchor, IAdjustableShape* props);
protected:
    Context(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    void init();
    virtual ::java::lang::Class* getClass0();
};
