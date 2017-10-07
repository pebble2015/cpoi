// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/geom/fwd-POI.hpp>
#include <java/awt/geom/Path2D_Iterator.hpp>

struct default_init_tag;

class java::awt::geom::Path2D_Float_TxIterator
    : public Path2D_Iterator
{

public:
    typedef Path2D_Iterator super;

public: /* package */
    AffineTransform* affine {  };
    ::floatArray* floatCoords {  };

protected:
    void ctor(Path2D_Float* p2df, AffineTransform* at);

public:
    int32_t currentSegment(::floatArray* coords) override;
    int32_t currentSegment(::doubleArray* coords) override;

    // Generated

public: /* package */
    Path2D_Float_TxIterator(Path2D_Float* p2df, AffineTransform* at);
protected:
    Path2D_Float_TxIterator(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
