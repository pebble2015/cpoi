// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/awt/Container_EventTargetFilter.hpp>

struct default_init_tag;

class java::awt::Container_MouseEventTargetFilter
    : public virtual ::java::lang::Object
    , public virtual Container_EventTargetFilter
{

public:
    typedef ::java::lang::Object super;

private:
    static Container_EventTargetFilter* FILTER_;

    /*void ctor(); (private) */

public:
    bool accept(Component* comp) override;

    // Generated
    Container_MouseEventTargetFilter();
protected:
    Container_MouseEventTargetFilter(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

public: /* package */
    static Container_EventTargetFilter*& FILTER();

private:
    virtual ::java::lang::Class* getClass0();
};
