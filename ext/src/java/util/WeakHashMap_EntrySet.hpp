// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/util/AbstractSet.hpp>

struct default_init_tag;

class java::util::WeakHashMap_EntrySet
    : public AbstractSet
{

public:
    typedef AbstractSet super;

public: /* package */
    WeakHashMap* this$0 {  };

    /*void ctor(); (private) */

public:
    void clear() override;
    bool contains(::java::lang::Object* o) override;
    /*List* deepCopy(); (private) */
    Iterator* iterator() override;
    bool remove(::java::lang::Object* o) override;
    int32_t size() override;
    Spliterator* spliterator() override;
    ::java::lang::ObjectArray* toArray_() override;
    ::java::lang::ObjectArray* toArray_(::java::lang::ObjectArray* a) override;

    // Generated
    WeakHashMap_EntrySet(WeakHashMap *WeakHashMap_this);
protected:
    WeakHashMap_EntrySet(WeakHashMap *WeakHashMap_this, const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    WeakHashMap *WeakHashMap_this;

private:
    virtual ::java::lang::Class* getClass0();
};
