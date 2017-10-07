// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/util/function/fwd-POI.hpp>
#include <java/util/stream/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Collection.hpp>
#include <java/io/Serializable.hpp>

struct default_init_tag;

class java::util::Collections_UnmodifiableCollection
    : public virtual ::java::lang::Object
    , public virtual Collection
    , public virtual ::java::io::Serializable
{

public:
    typedef ::java::lang::Object super;

public: /* package */
    Collection* c {  };

private:
    static constexpr int64_t serialVersionUID { int64_t(1820017752578914078LL) };

protected:
    void ctor(Collection* c);

public:
    bool add(::java::lang::Object* e) override;
    bool addAll(Collection* coll) override;
    void clear() override;
    bool contains(::java::lang::Object* o) override;
    bool containsAll(Collection* coll) override;
    void forEach(::java::util::function::Consumer* action) override;
    bool isEmpty() override;
    Iterator* iterator() override;
    ::java::util::stream::Stream* parallelStream() override;
    bool remove(::java::lang::Object* o) override;
    bool removeAll(Collection* coll) override;
    bool removeIf(::java::util::function::Predicate* filter) override;
    bool retainAll(Collection* coll) override;
    int32_t size() override;
    Spliterator* spliterator() override;
    ::java::util::stream::Stream* stream() override;
    ::java::lang::ObjectArray* toArray_() override;
    ::java::lang::ObjectArray* toArray_(::java::lang::ObjectArray* a) override;
    ::java::lang::String* toString() override;

    // Generated

public: /* package */
    Collections_UnmodifiableCollection(Collection* c);
protected:
    Collections_UnmodifiableCollection(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual bool equals(::java::lang::Object* o);
    virtual int32_t hashCode();

private:
    virtual ::java::lang::Class* getClass0();
};
