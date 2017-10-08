// Generated from /POI/java/org/apache/poi/sl/draw/geom/Outline.java

#pragma once

#include <java/awt/fwd-POI.hpp>
#include <org/apache/poi/sl/draw/geom/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::sl::draw::geom::Outline
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    ::java::awt::Shape* shape {  };
    Path* path {  };
protected:
    void ctor(::java::awt::Shape* shape, Path* path);

public:
    virtual Path* getPath();
    virtual ::java::awt::Shape* getOutline();

    // Generated
    Outline(::java::awt::Shape* shape, Path* path);
protected:
    Outline(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
