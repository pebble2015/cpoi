// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/util/Queue.hpp>

struct java::util::Deque
    : public virtual Queue
{

    /*bool add(::java::lang::Object* e); (already declared) */
    virtual void addFirst(::java::lang::Object* e) = 0;
    virtual void addLast(::java::lang::Object* e) = 0;
    /*bool contains(::java::lang::Object* o); (already declared) */
    virtual Iterator* descendingIterator() = 0;
    /*::java::lang::Object* element(); (already declared) */
    virtual ::java::lang::Object* getFirst() = 0;
    virtual ::java::lang::Object* getLast() = 0;
    /*Iterator* iterator(); (already declared) */
    /*bool offer(::java::lang::Object* e); (already declared) */
    virtual bool offerFirst(::java::lang::Object* e) = 0;
    virtual bool offerLast(::java::lang::Object* e) = 0;
    /*::java::lang::Object* peek(); (already declared) */
    virtual ::java::lang::Object* peekFirst() = 0;
    virtual ::java::lang::Object* peekLast() = 0;
    /*::java::lang::Object* poll(); (already declared) */
    virtual ::java::lang::Object* pollFirst() = 0;
    virtual ::java::lang::Object* pollLast() = 0;
    virtual ::java::lang::Object* pop() = 0;
    virtual void push(::java::lang::Object* e) = 0;
    /*::java::lang::Object* remove(); (already declared) */
    /*bool remove(::java::lang::Object* o); (already declared) */
    virtual ::java::lang::Object* removeFirst() = 0;
    virtual bool removeFirstOccurrence(::java::lang::Object* o) = 0;
    virtual ::java::lang::Object* removeLast() = 0;
    virtual bool removeLastOccurrence(::java::lang::Object* o) = 0;
    /*int32_t size(); (already declared) */

    // Generated
    static ::java::lang::Class *class_();
};
