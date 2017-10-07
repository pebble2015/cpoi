// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/util/function/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Iterator.hpp>

struct default_init_tag;

class java::util::Collections_EmptyIterator
    : public virtual ::java::lang::Object
    , public virtual Iterator
{

public:
    typedef ::java::lang::Object super;

private:
    static Collections_EmptyIterator* EMPTY_ITERATOR_;

    /*void ctor(); (private) */

public:
    void forEachRemaining(::java::util::function::Consumer* action) override;
    bool hasNext() override;
    ::java::lang::Object* next() override;
    void remove() override;

    // Generated
    Collections_EmptyIterator();
protected:
    Collections_EmptyIterator(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

public: /* package */
    static Collections_EmptyIterator*& EMPTY_ITERATOR();

private:
    virtual ::java::lang::Class* getClass0();
};
