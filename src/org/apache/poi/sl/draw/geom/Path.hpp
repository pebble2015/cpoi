// Generated from /POI/java/org/apache/poi/sl/draw/geom/Path.java

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/geom/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/sl/draw/binding/fwd-POI.hpp>
#include <org/apache/poi/sl/draw/geom/fwd-POI.hpp>
#include <org/apache/poi/sl/usermodel/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::sl::draw::geom::Path
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    ::java::util::List* commands {  };

public: /* package */
    ::poi::sl::usermodel::PaintStyle_PaintModifier* _fill {  };
    bool _stroke {  };
    int64_t _w {  }, _h {  };
protected:
    void ctor();
    void ctor(bool fill, bool stroke);
    void ctor(::poi::sl::draw::binding::CTPath2D* spPath);

public:
    virtual void addCommand(PathCommand* cmd);
    virtual ::java::awt::geom::Path2D_Double* getPath(Context* ctx);
    virtual bool isStroked();
    virtual bool isFilled();
    virtual ::poi::sl::usermodel::PaintStyle_PaintModifier* getFill();
    virtual int64_t getW();
    virtual int64_t getH();

    // Generated
    Path();
    Path(bool fill, bool stroke);
    Path(::poi::sl::draw::binding::CTPath2D* spPath);
protected:
    Path(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
