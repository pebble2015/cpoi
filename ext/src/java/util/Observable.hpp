// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::util::Observable
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    bool changed {  };
    Vector* obs {  };

protected:
    void ctor();

public:
    virtual void addObserver(Observer* o);

public: /* protected */
    virtual void clearChanged();

public:
    virtual int32_t countObservers();
    virtual void deleteObserver(Observer* o);
    virtual void deleteObservers();
    virtual bool hasChanged();
    virtual void notifyObservers();
    virtual void notifyObservers(::java::lang::Object* arg);

public: /* protected */
    virtual void setChanged();

    // Generated

public:
    Observable();
protected:
    Observable(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
