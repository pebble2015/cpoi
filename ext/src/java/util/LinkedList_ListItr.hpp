// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/util/function/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/util/ListIterator.hpp>

struct default_init_tag;

class java::util::LinkedList_ListItr
    : public virtual ::java::lang::Object
    , public virtual ListIterator
{

public:
    typedef ::java::lang::Object super;

private:
    int32_t expectedModCount {  };
    LinkedList_Node* lastReturned {  };
    LinkedList_Node* next_ {  };
    int32_t nextIndex_ {  };

public: /* package */
    LinkedList* this$0 {  };

protected:
    void ctor(int32_t index);

public:
    void add(::java::lang::Object* e) override;

public: /* package */
    void checkForComodification();

public:
    void forEachRemaining(::java::util::function::Consumer* action) override;
    bool hasNext() override;
    bool hasPrevious() override;
    ::java::lang::Object* next() override;
    int32_t nextIndex() override;
    ::java::lang::Object* previous() override;
    int32_t previousIndex() override;
    void remove() override;
    void set(::java::lang::Object* e) override;

    // Generated

public: /* package */
    LinkedList_ListItr(LinkedList *LinkedList_this, int32_t index);
protected:
    LinkedList_ListItr(LinkedList *LinkedList_this, const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    LinkedList *LinkedList_this;

private:
    virtual ::java::lang::Class* getClass0();
};
