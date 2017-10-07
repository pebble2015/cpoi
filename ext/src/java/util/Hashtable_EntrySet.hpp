// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/util/AbstractSet.hpp>

struct default_init_tag;

class java::util::Hashtable_EntrySet
    : public AbstractSet
{

public:
    typedef AbstractSet super;

public: /* package */
    Hashtable* this$0 {  };

    /*void ctor(); (private) */

public:
    virtual bool add(Map_Entry* o);
    void clear() override;
    bool contains(::java::lang::Object* o) override;
    Iterator* iterator() override;
    bool remove(::java::lang::Object* o) override;
    int32_t size() override;

    // Generated
    Hashtable_EntrySet(Hashtable *Hashtable_this);
protected:
    Hashtable_EntrySet(Hashtable *Hashtable_this, const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    bool add(::java::lang::Object* e) override;
    Hashtable *Hashtable_this;

private:
    virtual ::java::lang::Class* getClass0();
};
