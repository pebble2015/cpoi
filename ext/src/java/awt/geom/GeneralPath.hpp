// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <java/awt/geom/fwd-POI.hpp>
#include <java/awt/geom/Path2D_Float.hpp>

struct default_init_tag;

class java::awt::geom::GeneralPath final
    : public Path2D_Float
{

public:
    typedef Path2D_Float super;

private:
    static constexpr int64_t serialVersionUID { int64_t(-8327096662768731142LL) };

protected:
    void ctor();
    void ctor(int32_t rule);
    void ctor(::java::awt::Shape* s);
    void ctor(int32_t rule, int32_t initialCapacity);
    void ctor(int32_t windingRule, ::int8_tArray* pointTypes, int32_t numTypes, ::floatArray* pointCoords, int32_t numCoords);

    // Generated

public:
    GeneralPath();
    GeneralPath(int32_t rule);
    GeneralPath(::java::awt::Shape* s);
    GeneralPath(int32_t rule, int32_t initialCapacity);

public: /* package */
    GeneralPath(int32_t windingRule, ::int8_tArray* pointTypes, int32_t numTypes, ::floatArray* pointCoords, int32_t numCoords);
protected:
    GeneralPath(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
