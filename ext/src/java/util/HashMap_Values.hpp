// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/util/function/fwd-POI.hpp>
#include <java/util/AbstractCollection.hpp>

struct default_init_tag;

class java::util::HashMap_Values final
    : public AbstractCollection
{

public:
    typedef AbstractCollection super;

public: /* package */
    HashMap* this$0 {  };

protected:
    void ctor();

public:
    void clear() override;
    bool contains(::java::lang::Object* o) override;
    void forEach(::java::util::function::Consumer* action) override;
    Iterator* iterator() override;
    int32_t size() override;
    Spliterator* spliterator() override;

    // Generated

public: /* package */
    HashMap_Values(HashMap *HashMap_this);
protected:
    HashMap_Values(HashMap *HashMap_this, const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    HashMap *HashMap_this;

private:
    virtual ::java::lang::Class* getClass0();
};
