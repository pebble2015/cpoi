// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/util/AbstractSet.hpp>

struct default_init_tag;

class java::util::TreeMap_NavigableSubMap_EntrySetView
    : public AbstractSet
{

public:
    typedef AbstractSet super;

private:
    int32_t size_ {  };
    int32_t sizeModCount {  };

public: /* package */
    TreeMap_NavigableSubMap* this$0 {  };

protected:
    void ctor();

public:
    bool contains(::java::lang::Object* o) override;
    bool isEmpty() override;
    bool remove(::java::lang::Object* o) override;
    int32_t size() override;

    // Generated

public: /* package */
    TreeMap_NavigableSubMap_EntrySetView(TreeMap_NavigableSubMap *TreeMap_NavigableSubMap_this);
protected:
    TreeMap_NavigableSubMap_EntrySetView(TreeMap_NavigableSubMap *TreeMap_NavigableSubMap_this, const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    TreeMap_NavigableSubMap *TreeMap_NavigableSubMap_this;

private:
    virtual ::java::lang::Class* getClass0();
};
