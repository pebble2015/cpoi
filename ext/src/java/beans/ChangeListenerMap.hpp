// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/beans/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace util
    {
typedef ::SubArray< ::java::util::EventListener, ::java::lang::ObjectArray > EventListenerArray;
    } // util
} // java

struct default_init_tag;

class java::beans::ChangeListenerMap
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    ::java::util::Map* map {  };

protected:
    void ctor();

public:
    void add(::java::lang::String* name, ::java::util::EventListener* listener);
    virtual ::java::util::EventListener* extract(::java::util::EventListener* listener) = 0;
    ::java::util::EventListenerArray* get(::java::lang::String* name);
    ::java::util::Set* getEntries();
    ::java::util::EventListenerArray* getListeners();
    ::java::util::EventListenerArray* getListeners(::java::lang::String* name);
    bool hasListeners(::java::lang::String* name);

public: /* protected */
    virtual ::java::util::EventListenerArray* newArray_(int32_t length) = 0;
    virtual ::java::util::EventListener* newProxy(::java::lang::String* name, ::java::util::EventListener* listener) = 0;

public:
    void remove(::java::lang::String* name, ::java::util::EventListener* listener);
    void set(::java::lang::String* name, ::java::util::EventListenerArray* listeners);

    // Generated

public: /* package */
    ChangeListenerMap();
protected:
    ChangeListenerMap(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
