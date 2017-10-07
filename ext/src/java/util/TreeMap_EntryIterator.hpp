// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <java/util/fwd-POI.hpp>
#include <java/util/TreeMap_PrivateEntryIterator.hpp>
#include <java/util/Map_Entry.hpp>

struct default_init_tag;

class java::util::TreeMap_EntryIterator final
    : public TreeMap_PrivateEntryIterator
{

public:
    typedef TreeMap_PrivateEntryIterator super;

public: /* package */
    TreeMap* this$0 {  };

protected:
    void ctor(TreeMap_Entry* first);

public:
    Map_Entry* next() override;

    // Generated

public: /* package */
    TreeMap_EntryIterator(TreeMap *TreeMap_this, TreeMap_Entry* first);
protected:
    TreeMap_EntryIterator(TreeMap *TreeMap_this, const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
