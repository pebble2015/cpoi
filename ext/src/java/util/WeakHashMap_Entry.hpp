// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/lang/ref/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/lang/ref/WeakReference.hpp>
#include <java/util/Map_Entry.hpp>

struct default_init_tag;

class java::util::WeakHashMap_Entry
    : public ::java::lang::ref::WeakReference
    , public virtual Map_Entry
{

public:
    typedef ::java::lang::ref::WeakReference super;

public: /* package */
    int32_t hash {  };
    WeakHashMap_Entry* next {  };
    ::java::lang::Object* value {  };

protected:
    void ctor(::java::lang::Object* key, ::java::lang::Object* value, ::java::lang::ref::ReferenceQueue* queue, int32_t hash, WeakHashMap_Entry* next);

public:
    bool equals(::java::lang::Object* o) override;
    ::java::lang::Object* getKey() override;
    ::java::lang::Object* getValue() override;
    int32_t hashCode() override;
    ::java::lang::Object* setValue(::java::lang::Object* newValue) override;
    ::java::lang::String* toString() override;

    // Generated

public: /* package */
    WeakHashMap_Entry(::java::lang::Object* key, ::java::lang::Object* value, ::java::lang::ref::ReferenceQueue* queue, int32_t hash, WeakHashMap_Entry* next);
protected:
    WeakHashMap_Entry(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
