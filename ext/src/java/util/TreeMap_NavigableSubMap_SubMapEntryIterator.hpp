// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <java/util/fwd-POI.hpp>
#include <java/util/TreeMap_NavigableSubMap_SubMapIterator.hpp>
#include <java/util/Map_Entry.hpp>

struct default_init_tag;

class java::util::TreeMap_NavigableSubMap_SubMapEntryIterator final
    : public TreeMap_NavigableSubMap_SubMapIterator
{

public:
    typedef TreeMap_NavigableSubMap_SubMapIterator super;

public: /* package */
    TreeMap_NavigableSubMap* this$0 {  };

protected:
    void ctor(TreeMap_Entry* first, TreeMap_Entry* fence);

public:
    Map_Entry* next() override;
    void remove() override;

    // Generated

public: /* package */
    TreeMap_NavigableSubMap_SubMapEntryIterator(TreeMap_NavigableSubMap *TreeMap_NavigableSubMap_this, TreeMap_Entry* first, TreeMap_Entry* fence);
protected:
    TreeMap_NavigableSubMap_SubMapEntryIterator(TreeMap_NavigableSubMap *TreeMap_NavigableSubMap_this, const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
