// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/util/LinkedHashMap_LinkedHashIterator.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/Map_Entry.hpp>

struct default_init_tag;

class java::util::LinkedHashMap_LinkedEntryIterator final
    : public LinkedHashMap_LinkedHashIterator
    , public Iterator
{

public:
    typedef LinkedHashMap_LinkedHashIterator super;

public: /* package */
    LinkedHashMap* this$0 {  };

protected:
    void ctor();

public:
    Map_Entry* next() override;

    // Generated

public: /* package */
    LinkedHashMap_LinkedEntryIterator(LinkedHashMap *LinkedHashMap_this);
protected:
    LinkedHashMap_LinkedEntryIterator(LinkedHashMap *LinkedHashMap_this, const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual bool hasNext();
    virtual void remove();

private:
    virtual ::java::lang::Class* getClass0();
};
