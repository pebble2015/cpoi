// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/util/HashMap_HashIterator.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/Map_Entry.hpp>

struct default_init_tag;

class java::util::HashMap_EntryIterator final
    : public HashMap_HashIterator
    , public Iterator
{

public:
    typedef HashMap_HashIterator super;

public: /* package */
    HashMap* this$0 {  };

protected:
    void ctor();

public:
    Map_Entry* next() override;

    // Generated

public: /* package */
    HashMap_EntryIterator(HashMap *HashMap_this);
protected:
    HashMap_EntryIterator(HashMap *HashMap_this, const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual bool hasNext();
    virtual void remove();

private:
    virtual ::java::lang::Class* getClass0();
};
