// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/util/function/fwd-POI.hpp>
#include <java/util/AbstractSet.hpp>

struct default_init_tag;

class java::util::LinkedHashMap_LinkedEntrySet final
    : public AbstractSet
{

public:
    typedef AbstractSet super;

public: /* package */
    LinkedHashMap* this$0 {  };

protected:
    void ctor();

public:
    void clear() override;
    bool contains(::java::lang::Object* o) override;
    void forEach(::java::util::function::Consumer* action) override;
    Iterator* iterator() override;
    bool remove(::java::lang::Object* o) override;
    int32_t size() override;
    Spliterator* spliterator() override;

    // Generated

public: /* package */
    LinkedHashMap_LinkedEntrySet(LinkedHashMap *LinkedHashMap_this);
protected:
    LinkedHashMap_LinkedEntrySet(LinkedHashMap *LinkedHashMap_this, const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    LinkedHashMap *LinkedHashMap_this;

private:
    virtual ::java::lang::Class* getClass0();
};
