// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/util/function/fwd-POI.hpp>
#include <java/util/ArrayList_Itr.hpp>
#include <java/util/ListIterator.hpp>

struct default_init_tag;

class java::util::ArrayList_ListItr
    : public ArrayList_Itr
    , public virtual ListIterator
{

public:
    typedef ArrayList_Itr super;

public: /* package */
    ArrayList* this$0 {  };

protected:
    void ctor(int32_t index);

public:
    void add(::java::lang::Object* e) override;
    bool hasPrevious() override;
    int32_t nextIndex() override;
    ::java::lang::Object* previous() override;
    int32_t previousIndex() override;
    void set(::java::lang::Object* e) override;

    // Generated

public: /* package */
    ArrayList_ListItr(ArrayList *ArrayList_this, int32_t index);
protected:
    ArrayList_ListItr(ArrayList *ArrayList_this, const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual void forEachRemaining(::java::util::function::Consumer* action);
    bool hasNext();
    ::java::lang::Object* next();
    void remove();

private:
    virtual ::java::lang::Class* getClass0();
};
