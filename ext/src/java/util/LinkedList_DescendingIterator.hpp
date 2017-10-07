// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Iterator.hpp>

struct default_init_tag;

class java::util::LinkedList_DescendingIterator
    : public virtual ::java::lang::Object
    , public virtual Iterator
{

public:
    typedef ::java::lang::Object super;

private:
    LinkedList_ListItr* itr {  };

public: /* package */
    LinkedList* this$0 {  };

    /*void ctor(); (private) */

public:
    bool hasNext() override;
    ::java::lang::Object* next() override;
    void remove() override;

    // Generated
    LinkedList_DescendingIterator(LinkedList *LinkedList_this);
protected:
    LinkedList_DescendingIterator(LinkedList *LinkedList_this, const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    LinkedList *LinkedList_this;

private:
    virtual ::java::lang::Class* getClass0();
};
