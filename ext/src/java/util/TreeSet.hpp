// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/util/AbstractSet.hpp>
#include <java/util/NavigableSet.hpp>
#include <java/lang/Cloneable.hpp>
#include <java/io/Serializable.hpp>

struct default_init_tag;

class java::util::TreeSet
    : public AbstractSet
    , public virtual NavigableSet
    , public virtual ::java::lang::Cloneable
    , public virtual ::java::io::Serializable
{

public:
    typedef AbstractSet super;

private:
    static ::java::lang::Object* PRESENT_;
    NavigableMap* m {  };
    static constexpr int64_t serialVersionUID { int64_t(-2479143000061671589LL) };

protected:
    void ctor();
    void ctor(NavigableMap* m);
    void ctor(Comparator* comparator);
    void ctor(Collection* c);
    void ctor(SortedSet* s);

public:
    bool add(::java::lang::Object* e) override;
    bool addAll(Collection* c) override;
    ::java::lang::Object* ceiling(::java::lang::Object* e) override;
    void clear() override;
    ::java::lang::Object* clone() override;
    Comparator* comparator() override;
    bool contains(::java::lang::Object* o) override;
    Iterator* descendingIterator() override;
    NavigableSet* descendingSet() override;
    ::java::lang::Object* first() override;
    ::java::lang::Object* floor(::java::lang::Object* e) override;
    SortedSet* headSet(::java::lang::Object* toElement) override;
    NavigableSet* headSet(::java::lang::Object* toElement, bool inclusive) override;
    ::java::lang::Object* higher(::java::lang::Object* e) override;
    bool isEmpty() override;
    Iterator* iterator() override;
    ::java::lang::Object* last() override;
    ::java::lang::Object* lower(::java::lang::Object* e) override;
    ::java::lang::Object* pollFirst() override;
    ::java::lang::Object* pollLast() override;
    /*void readObject(::java::io::ObjectInputStream* s); (private) */
    bool remove(::java::lang::Object* o) override;
    int32_t size() override;
    Spliterator* spliterator() override;
    SortedSet* subSet(::java::lang::Object* fromElement, ::java::lang::Object* toElement) override;
    NavigableSet* subSet(::java::lang::Object* fromElement, bool fromInclusive, ::java::lang::Object* toElement, bool toInclusive) override;
    SortedSet* tailSet(::java::lang::Object* fromElement) override;
    NavigableSet* tailSet(::java::lang::Object* fromElement, bool inclusive) override;
    /*void writeObject(::java::io::ObjectOutputStream* s); (private) */

    // Generated
    TreeSet();

public: /* package */
    TreeSet(NavigableMap* m);

public:
    TreeSet(Comparator* comparator);
    TreeSet(Collection* c);
    TreeSet(SortedSet* s);
protected:
    TreeSet(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    bool containsAll(Collection* c);
    bool equals(::java::lang::Object* o);
    int32_t hashCode();
    bool removeAll(Collection* c);
    bool retainAll(Collection* c);
    ::java::lang::ObjectArray* toArray_();
    ::java::lang::ObjectArray* toArray_(::java::lang::ObjectArray* a);

private:
    static ::java::lang::Object*& PRESENT();
    virtual ::java::lang::Class* getClass0();
};
