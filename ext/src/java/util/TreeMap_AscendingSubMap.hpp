// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/util/TreeMap_NavigableSubMap.hpp>

struct default_init_tag;

class java::util::TreeMap_AscendingSubMap final
    : public TreeMap_NavigableSubMap
{

public:
    typedef TreeMap_NavigableSubMap super;

private:
    static constexpr int64_t serialVersionUID { int64_t(912986545866124060LL) };

protected:
    void ctor(TreeMap* m, bool fromStart, ::java::lang::Object* lo, bool loInclusive, bool toEnd, ::java::lang::Object* hi, bool hiInclusive);

public:
    Comparator* comparator() override;

public: /* package */
    Iterator* descendingKeyIterator() override;

public:
    NavigableMap* descendingMap() override;
    Set* entrySet() override;
    NavigableMap* headMap(::java::lang::Object* toKey, bool inclusive) override;

public: /* package */
    Iterator* keyIterator() override;
    Spliterator* keySpliterator() override;
    TreeMap_Entry* subCeiling(::java::lang::Object* key) override;
    TreeMap_Entry* subFloor(::java::lang::Object* key) override;
    TreeMap_Entry* subHigher(::java::lang::Object* key) override;
    TreeMap_Entry* subHighest() override;
    TreeMap_Entry* subLower(::java::lang::Object* key) override;
    TreeMap_Entry* subLowest() override;

public:
    NavigableMap* subMap(::java::lang::Object* fromKey, bool fromInclusive, ::java::lang::Object* toKey, bool toInclusive) override;
    NavigableMap* tailMap(::java::lang::Object* fromKey, bool inclusive) override;

    // Generated

public: /* package */
    TreeMap_AscendingSubMap(TreeMap* m, bool fromStart, ::java::lang::Object* lo, bool loInclusive, bool toEnd, ::java::lang::Object* hi, bool hiInclusive);
protected:
    TreeMap_AscendingSubMap(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    SortedMap* headMap(::java::lang::Object* toKey);
    SortedMap* subMap(::java::lang::Object* fromKey, ::java::lang::Object* toKey);
    SortedMap* tailMap(::java::lang::Object* fromKey);

private:
    virtual ::java::lang::Class* getClass0();
};
