// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/util/function/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Iterator.hpp>

struct default_init_tag;

class java::util::Vector_Itr
    : public virtual ::java::lang::Object
    , public virtual Iterator
{

public:
    typedef ::java::lang::Object super;

public: /* package */
    int32_t cursor {  };
    int32_t expectedModCount {  };
    int32_t lastRet {  };
    Vector* this$0 {  };

    /*void ctor(); (private) */
    void checkForComodification();

public:
    void forEachRemaining(::java::util::function::Consumer* action) override;
    bool hasNext() override;
    ::java::lang::Object* next() override;
    void remove() override;

    // Generated
    Vector_Itr(Vector *Vector_this);
protected:
    Vector_Itr(Vector *Vector_this, const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    Vector *Vector_this;

private:
    virtual ::java::lang::Class* getClass0();
};
