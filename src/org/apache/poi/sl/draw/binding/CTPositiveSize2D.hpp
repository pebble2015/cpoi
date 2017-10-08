// Generated from /POI/java/org/apache/poi/sl/draw/binding/CTPositiveSize2D.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/sl/draw/binding/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::sl::draw::binding::CTPositiveSize2D
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

public: /* protected */
    int64_t cx {  };
    int64_t cy {  };

public:
    virtual int64_t getCx();
    virtual void setCx(int64_t value);
    virtual bool isSetCx();
    virtual int64_t getCy();
    virtual void setCy(int64_t value);
    virtual bool isSetCy();

    // Generated
    CTPositiveSize2D();
protected:
    CTPositiveSize2D(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
