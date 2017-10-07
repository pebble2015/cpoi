// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/util/function/fwd-POI.hpp>
#include <java/util/stream/fwd-POI.hpp>
#include <java/util/Collections_UnmodifiableCollection.hpp>
#include <java/util/Set.hpp>
#include <java/io/Serializable.hpp>

struct default_init_tag;

class java::util::Collections_UnmodifiableSet
    : public Collections_UnmodifiableCollection
    , public virtual Set
    , public virtual ::java::io::Serializable
{

public:
    typedef Collections_UnmodifiableCollection super;

private:
    static constexpr int64_t serialVersionUID { int64_t(-9215047833775013803LL) };

protected:
    void ctor(Set* s);

public:
    bool equals(::java::lang::Object* o) override;
    int32_t hashCode() override;

    // Generated

public: /* package */
    Collections_UnmodifiableSet(Set* s);
protected:
    Collections_UnmodifiableSet(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual void forEach(::java::util::function::Consumer* action);
    virtual ::java::util::stream::Stream* parallelStream();
    virtual bool removeIf(::java::util::function::Predicate* filter);
    virtual ::java::util::stream::Stream* stream();
    bool add(::java::lang::Object* e);
    bool addAll(Collection* c);
    void clear();
    bool contains(::java::lang::Object* o);
    bool containsAll(Collection* c);
    bool isEmpty();
    Iterator* iterator();
    bool remove(::java::lang::Object* o);
    bool removeAll(Collection* c);
    bool retainAll(Collection* c);
    int32_t size();
    Spliterator* spliterator();
    ::java::lang::ObjectArray* toArray_();
    ::java::lang::ObjectArray* toArray_(::java::lang::ObjectArray* a);

private:
    virtual ::java::lang::Class* getClass0();
};
