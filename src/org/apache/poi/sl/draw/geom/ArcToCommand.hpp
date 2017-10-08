// Generated from /POI/java/org/apache/poi/sl/draw/geom/ArcToCommand.java

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/geom/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/sl/draw/binding/fwd-POI.hpp>
#include <org/apache/poi/sl/draw/geom/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/sl/draw/geom/PathCommand.hpp>

struct default_init_tag;

class poi::sl::draw::geom::ArcToCommand
    : public virtual ::java::lang::Object
    , public virtual PathCommand
{

public:
    typedef ::java::lang::Object super;

private:
    ::java::lang::String* hr {  };
    ::java::lang::String* wr {  };
    ::java::lang::String* stAng {  };
    ::java::lang::String* swAng {  };
protected:
    void ctor(::poi::sl::draw::binding::CTPath2DArcTo* arc);

public:
    void execute(::java::awt::geom::Path2D_Double* path, Context* ctx) override;

private:
    double convertOoxml2AwtAngle(double ooAngle, double width, double height);

    // Generated

public: /* package */
    ArcToCommand(::poi::sl::draw::binding::CTPath2DArcTo* arc);
protected:
    ArcToCommand(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
