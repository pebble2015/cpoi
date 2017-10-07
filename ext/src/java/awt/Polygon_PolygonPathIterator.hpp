// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <java/awt/geom/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/awt/geom/PathIterator.hpp>

struct default_init_tag;

class java::awt::Polygon_PolygonPathIterator
    : public virtual ::java::lang::Object
    , public virtual ::java::awt::geom::PathIterator
{

public:
    typedef ::java::lang::Object super;

public: /* package */
    int32_t index {  };
    Polygon* poly {  };
    Polygon* this$0 {  };
    ::java::awt::geom::AffineTransform* transform {  };

protected:
    void ctor(Polygon* pg, ::java::awt::geom::AffineTransform* at);

public:
    int32_t currentSegment(::floatArray* coords) override;
    int32_t currentSegment(::doubleArray* coords) override;
    int32_t getWindingRule() override;
    bool isDone() override;
    void next() override;

    // Generated
    Polygon_PolygonPathIterator(Polygon *Polygon_this, Polygon* pg, ::java::awt::geom::AffineTransform* at);
protected:
    Polygon_PolygonPathIterator(Polygon *Polygon_this, const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    Polygon *Polygon_this;

private:
    virtual ::java::lang::Class* getClass0();
};
