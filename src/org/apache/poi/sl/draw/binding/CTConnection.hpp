// Generated from /POI/java/org/apache/poi/sl/draw/binding/CTConnection.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/sl/draw/binding/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::poi::sl::draw::binding::CTConnection
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

public: /* protected */
    int64_t id {  };
    int64_t idx {  };

public:
    virtual int64_t getId();
    virtual void setId(int64_t value);
    virtual bool isSetId();
    virtual int64_t getIdx();
    virtual void setIdx(int64_t value);
    virtual bool isSetIdx();

    // Generated
    CTConnection();
protected:
    CTConnection(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
