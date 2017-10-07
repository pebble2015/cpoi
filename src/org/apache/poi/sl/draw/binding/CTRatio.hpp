// Generated from /POI/java/org/apache/poi/sl/draw/binding/CTRatio.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/sl/draw/binding/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::poi::sl::draw::binding::CTRatio
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

public: /* protected */
    int64_t n {  };
    int64_t d {  };

public:
    virtual int64_t getN();
    virtual void setN(int64_t value);
    virtual bool isSetN();
    virtual int64_t getD();
    virtual void setD(int64_t value);
    virtual bool isSetD();

    // Generated
    CTRatio();
protected:
    CTRatio(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
