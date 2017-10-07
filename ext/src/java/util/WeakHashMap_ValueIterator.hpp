// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/util/WeakHashMap_HashIterator.hpp>

struct default_init_tag;

class java::util::WeakHashMap_ValueIterator
    : public WeakHashMap_HashIterator
{

public:
    typedef WeakHashMap_HashIterator super;

public: /* package */
    WeakHashMap* this$0 {  };

    /*void ctor(); (private) */

public:
    ::java::lang::Object* next() override;

    // Generated
    WeakHashMap_ValueIterator(WeakHashMap *WeakHashMap_this);
protected:
    WeakHashMap_ValueIterator(WeakHashMap *WeakHashMap_this, const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
