// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::util::LinkedHashMap_LinkedHashIterator
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

public: /* package */
    LinkedHashMap_Entry* current {  };
    int32_t expectedModCount {  };
    LinkedHashMap_Entry* next {  };
    LinkedHashMap* this$0 {  };

protected:
    void ctor();

public:
    bool hasNext();

public: /* package */
    LinkedHashMap_Entry* nextNode();

public:
    void remove();

    // Generated

public: /* package */
    LinkedHashMap_LinkedHashIterator(LinkedHashMap *LinkedHashMap_this);
protected:
    LinkedHashMap_LinkedHashIterator(LinkedHashMap *LinkedHashMap_this, const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    LinkedHashMap *LinkedHashMap_this;

private:
    virtual ::java::lang::Class* getClass0();
};
