// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/util/HashSet.hpp>
#include <java/util/Set.hpp>
#include <java/lang/Cloneable.hpp>
#include <java/io/Serializable.hpp>

struct default_init_tag;

class java::util::LinkedHashSet
    : public HashSet
    , public virtual Set
    , public virtual ::java::lang::Cloneable
    , public virtual ::java::io::Serializable
{

public:
    typedef HashSet super;

private:
    static constexpr int64_t serialVersionUID { int64_t(-2851667679971038690LL) };

protected:
    void ctor();
    void ctor(int32_t initialCapacity);
    void ctor(Collection* c);
    void ctor(int32_t initialCapacity, float loadFactor);

public:
    Spliterator* spliterator() override;

    // Generated
    LinkedHashSet();
    LinkedHashSet(int32_t initialCapacity);
    LinkedHashSet(Collection* c);
    LinkedHashSet(int32_t initialCapacity, float loadFactor);
protected:
    LinkedHashSet(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    bool add(::java::lang::Object* e);
    bool addAll(Collection* c);
    void clear();
    bool contains(::java::lang::Object* o);
    bool containsAll(Collection* c);
    bool equals(::java::lang::Object* o);
    int32_t hashCode();
    bool isEmpty();
    Iterator* iterator();
    bool remove(::java::lang::Object* o);
    bool removeAll(Collection* c);
    bool retainAll(Collection* c);
    int32_t size();
    ::java::lang::ObjectArray* toArray_();
    ::java::lang::ObjectArray* toArray_(::java::lang::ObjectArray* a);

private:
    virtual ::java::lang::Class* getClass0();
};
