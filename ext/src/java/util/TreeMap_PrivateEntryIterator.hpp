// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Iterator.hpp>

struct default_init_tag;

class java::util::TreeMap_PrivateEntryIterator
    : public virtual ::java::lang::Object
    , public virtual Iterator
{

public:
    typedef ::java::lang::Object super;

public: /* package */
    int32_t expectedModCount {  };
    TreeMap_Entry* lastReturned {  };
    TreeMap_Entry* next {  };
    TreeMap* this$0 {  };

protected:
    void ctor(TreeMap_Entry* first);

public:
    bool hasNext() override;

public: /* package */
    TreeMap_Entry* nextEntry();
    TreeMap_Entry* prevEntry();

public:
    void remove() override;

    // Generated

public: /* package */
    TreeMap_PrivateEntryIterator(TreeMap *TreeMap_this, TreeMap_Entry* first);
protected:
    TreeMap_PrivateEntryIterator(TreeMap *TreeMap_this, const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    TreeMap *TreeMap_this;

private:
    virtual ::java::lang::Class* getClass0();
};
