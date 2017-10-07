// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/awt/Stroke.hpp>

struct default_init_tag;

class java::awt::BasicStroke
    : public virtual ::java::lang::Object
    , public virtual Stroke
{

public:
    typedef ::java::lang::Object super;
    static constexpr int32_t CAP_BUTT { int32_t(0) };
    static constexpr int32_t CAP_ROUND { int32_t(1) };
    static constexpr int32_t CAP_SQUARE { int32_t(2) };
    static constexpr int32_t JOIN_BEVEL { int32_t(2) };
    static constexpr int32_t JOIN_MITER { int32_t(0) };
    static constexpr int32_t JOIN_ROUND { int32_t(1) };

public: /* package */
    int32_t cap {  };
    ::floatArray* dash {  };
    float dash_phase {  };
    int32_t join {  };
    float miterlimit {  };
    float width {  };

protected:
    void ctor();
    void ctor(float width);
    void ctor(float width, int32_t cap, int32_t join);
    void ctor(float width, int32_t cap, int32_t join, float miterlimit);
    void ctor(float width, int32_t cap, int32_t join, float miterlimit, ::floatArray* dash, float dash_phase);

public:
    Shape* createStrokedShape(Shape* s) override;
    bool equals(::java::lang::Object* obj) override;
    virtual ::floatArray* getDashArray_();
    virtual float getDashPhase();
    virtual int32_t getEndCap();
    virtual int32_t getLineJoin();
    virtual float getLineWidth();
    virtual float getMiterLimit();
    int32_t hashCode() override;

    // Generated
    BasicStroke();
    BasicStroke(float width);
    BasicStroke(float width, int32_t cap, int32_t join);
    BasicStroke(float width, int32_t cap, int32_t join, float miterlimit);
    BasicStroke(float width, int32_t cap, int32_t join, float miterlimit, ::floatArray* dash, float dash_phase);
protected:
    BasicStroke(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
