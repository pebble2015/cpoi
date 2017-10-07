// Generated from /POI/java/org/apache/poi/sl/draw/geom/ClosePathCommand.java

#pragma once

#include <java/awt/geom/fwd-POI.hpp>
#include <org/apache/poi/sl/draw/geom/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/sl/draw/geom/PathCommand.hpp>

struct default_init_tag;

class org::apache::poi::sl::draw::geom::ClosePathCommand
    : public virtual ::java::lang::Object
    , public virtual PathCommand
{

public:
    typedef ::java::lang::Object super;
protected:
    void ctor();

public:
    void execute(::java::awt::geom::Path2D_Double* path, Context* ctx) override;

    // Generated

public: /* package */
    ClosePathCommand();
protected:
    ClosePathCommand(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
