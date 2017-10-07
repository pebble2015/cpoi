// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/util/AbstractSet.hpp>
#include <java/util/NavigableSet.hpp>

struct default_init_tag;

class java::util::TreeMap_KeySet final
    : public AbstractSet
    , public NavigableSet
{

public:
    typedef AbstractSet super;

private:
    NavigableMap* m {  };

protected:
    void ctor(NavigableMap* map);

public:
    ::java::lang::Object* ceiling(::java::lang::Object* e) override;
    void clear() override;
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
    bool remove(::java::lang::Object* o) override;
    int32_t size() override;
    Spliterator* spliterator() override;
    SortedSet* subSet(::java::lang::Object* fromElement, ::java::lang::Object* toElement) override;
    NavigableSet* subSet(::java::lang::Object* fromElement, bool fromInclusive, ::java::lang::Object* toElement, bool toInclusive) override;
    SortedSet* tailSet(::java::lang::Object* fromElement) override;
    NavigableSet* tailSet(::java::lang::Object* fromElement, bool inclusive) override;

    // Generated

public: /* package */
    TreeMap_KeySet(NavigableMap* map);
protected:
    TreeMap_KeySet(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    bool add(::java::lang::Object* e);
    bool addAll(Collection* c);
    bool containsAll(Collection* c);
    bool equals(::java::lang::Object* o);
    int32_t hashCode();
    bool removeAll(Collection* c);
    bool retainAll(Collection* c);
    ::java::lang::ObjectArray* toArray_();
    ::java::lang::ObjectArray* toArray_(::java::lang::ObjectArray* a);

private:
    virtual ::java::lang::Class* getClass0();
};
