// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/font/fwd-POI.hpp>
#include <java/awt/geom/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::awt::font::FontRenderContext
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    ::java::lang::Object* aaHintValue {  };
    bool defaulting {  };
    ::java::lang::Object* fmHintValue {  };
    ::java::awt::geom::AffineTransform* tx {  };

protected:
    void ctor();
    void ctor(::java::awt::geom::AffineTransform* tx, bool isAntiAliased, bool usesFractionalMetrics);
    void ctor(::java::awt::geom::AffineTransform* tx, ::java::lang::Object* aaHint, ::java::lang::Object* fmHint);

public:
    bool equals(::java::lang::Object* obj) override;
    virtual bool equals(FontRenderContext* rhs);
    virtual ::java::lang::Object* getAntiAliasingHint();
    virtual ::java::lang::Object* getFractionalMetricsHint();
    virtual ::java::awt::geom::AffineTransform* getTransform();
    virtual int32_t getTransformType();
    int32_t hashCode() override;
    virtual bool isAntiAliased();
    virtual bool isTransformed();
    virtual bool usesFractionalMetrics();

    // Generated

public: /* protected */
    FontRenderContext();

public:
    FontRenderContext(::java::awt::geom::AffineTransform* tx, bool isAntiAliased, bool usesFractionalMetrics);
    FontRenderContext(::java::awt::geom::AffineTransform* tx, ::java::lang::Object* aaHint, ::java::lang::Object* fmHint);
protected:
    FontRenderContext(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
