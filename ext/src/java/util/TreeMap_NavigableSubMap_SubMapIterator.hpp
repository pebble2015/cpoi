// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Iterator.hpp>

struct default_init_tag;

class java::util::TreeMap_NavigableSubMap_SubMapIterator
    : public virtual ::java::lang::Object
    , public virtual Iterator
{

public:
    typedef ::java::lang::Object super;

public: /* package */
    int32_t expectedModCount {  };
    ::java::lang::Object* fenceKey {  };
    TreeMap_Entry* lastReturned {  };
    TreeMap_Entry* next {  };
    TreeMap_NavigableSubMap* this$0 {  };

protected:
    void ctor(TreeMap_Entry* first, TreeMap_Entry* fence);

public:
    bool hasNext() override;

public: /* package */
    TreeMap_Entry* nextEntry();
    TreeMap_Entry* prevEntry();
    void removeAscending();
    void removeDescending();

    // Generated
    TreeMap_NavigableSubMap_SubMapIterator(TreeMap_NavigableSubMap *TreeMap_NavigableSubMap_this, TreeMap_Entry* first, TreeMap_Entry* fence);
protected:
    TreeMap_NavigableSubMap_SubMapIterator(TreeMap_NavigableSubMap *TreeMap_NavigableSubMap_this, const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    TreeMap_NavigableSubMap *TreeMap_NavigableSubMap_this;

private:
    virtual ::java::lang::Class* getClass0();
};
