// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/util/AbstractSet.hpp>

struct default_init_tag;

class java::util::TreeMap_EntrySet
    : public AbstractSet
{

public:
    typedef AbstractSet super;

public: /* package */
    TreeMap* this$0 {  };

protected:
    void ctor();

public:
    void clear() override;
    bool contains(::java::lang::Object* o) override;
    Iterator* iterator() override;
    bool remove(::java::lang::Object* o) override;
    int32_t size() override;
    Spliterator* spliterator() override;

    // Generated

public: /* package */
    TreeMap_EntrySet(TreeMap *TreeMap_this);
protected:
    TreeMap_EntrySet(TreeMap *TreeMap_this, const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    TreeMap *TreeMap_this;

private:
    virtual ::java::lang::Class* getClass0();
};
