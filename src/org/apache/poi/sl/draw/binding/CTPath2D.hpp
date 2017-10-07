// Generated from /POI/java/org/apache/poi/sl/draw/binding/CTPath2D.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/sl/draw/binding/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::poi::sl::draw::binding::CTPath2D
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

public: /* protected */
    ::java::util::List* closeOrMoveToOrLnTo {  };
    ::java::lang::Long* w {  };
    ::java::lang::Long* h {  };
    STPathFillMode* fill {  };
    ::java::lang::Boolean* stroke {  };
    ::java::lang::Boolean* extrusionOk {  };

public:
    virtual ::java::util::List* getCloseOrMoveToOrLnTo();
    virtual bool isSetCloseOrMoveToOrLnTo();
    virtual void unsetCloseOrMoveToOrLnTo();
    virtual int64_t getW();
    virtual void setW(int64_t value);
    virtual bool isSetW();
    virtual void unsetW();
    virtual int64_t getH();
    virtual void setH(int64_t value);
    virtual bool isSetH();
    virtual void unsetH();
    virtual STPathFillMode* getFill();
    virtual void setFill(STPathFillMode* value);
    virtual bool isSetFill();
    virtual bool isStroke();
    virtual void setStroke(bool value);
    virtual bool isSetStroke();
    virtual void unsetStroke();
    virtual bool isExtrusionOk();
    virtual void setExtrusionOk(bool value);
    virtual bool isSetExtrusionOk();
    virtual void unsetExtrusionOk();

    // Generated
    CTPath2D();
protected:
    CTPath2D(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
