// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/util/AbstractMap.hpp>
#include <java/util/NavigableMap.hpp>
#include <java/io/Serializable.hpp>

struct default_init_tag;

class java::util::TreeMap_NavigableSubMap
    : public AbstractMap
    , public virtual NavigableMap
    , public virtual ::java::io::Serializable
{

public:
    typedef AbstractMap super;

public: /* package */
    NavigableMap* descendingMapView {  };
    TreeMap_NavigableSubMap_EntrySetView* entrySetView {  };
    bool fromStart {  };
    ::java::lang::Object* hi {  };
    bool hiInclusive {  };
    ::java::lang::Object* lo {  };
    bool loInclusive {  };
    TreeMap* m {  };
    TreeMap_KeySet* navigableKeySetView {  };

private:
    static constexpr int64_t serialVersionUID { int64_t(-2102997345730753016LL) };

public: /* package */
    bool toEnd {  };

protected:
    void ctor(TreeMap* m, bool fromStart, ::java::lang::Object* lo, bool loInclusive, bool toEnd, ::java::lang::Object* hi, bool hiInclusive);

public: /* package */
    TreeMap_Entry* absCeiling(::java::lang::Object* key);
    TreeMap_Entry* absFloor(::java::lang::Object* key);
    TreeMap_Entry* absHighFence();
    TreeMap_Entry* absHigher(::java::lang::Object* key);
    TreeMap_Entry* absHighest();
    TreeMap_Entry* absLowFence();
    TreeMap_Entry* absLower(::java::lang::Object* key);
    TreeMap_Entry* absLowest();

public:
    Map_Entry* ceilingEntry(::java::lang::Object* key) override;
    ::java::lang::Object* ceilingKey(::java::lang::Object* key) override;
    bool containsKey(::java::lang::Object* key) override;

public: /* package */
    virtual Iterator* descendingKeyIterator() = 0;

public:
    NavigableSet* descendingKeySet() override;
    Map_Entry* firstEntry() override;
    ::java::lang::Object* firstKey() override;
    Map_Entry* floorEntry(::java::lang::Object* key) override;
    ::java::lang::Object* floorKey(::java::lang::Object* key) override;
    ::java::lang::Object* get(::java::lang::Object* key) override;
    SortedMap* headMap(::java::lang::Object* toKey) override;
    Map_Entry* higherEntry(::java::lang::Object* key) override;
    ::java::lang::Object* higherKey(::java::lang::Object* key) override;

public: /* package */
    bool inClosedRange(::java::lang::Object* key);
    bool inRange(::java::lang::Object* key);
    bool inRange(::java::lang::Object* key, bool inclusive);

public:
    bool isEmpty() override;

public: /* package */
    virtual Iterator* keyIterator() = 0;

public:
    Set* keySet() override;

public: /* package */
    virtual Spliterator* keySpliterator() = 0;

public:
    Map_Entry* lastEntry() override;
    ::java::lang::Object* lastKey() override;
    Map_Entry* lowerEntry(::java::lang::Object* key) override;
    ::java::lang::Object* lowerKey(::java::lang::Object* key) override;
    NavigableSet* navigableKeySet() override;
    Map_Entry* pollFirstEntry() override;
    Map_Entry* pollLastEntry() override;
    ::java::lang::Object* put(::java::lang::Object* key, ::java::lang::Object* value) override;
    ::java::lang::Object* remove(::java::lang::Object* key) override;
    int32_t size() override;

public: /* package */
    virtual TreeMap_Entry* subCeiling(::java::lang::Object* key) = 0;
    virtual TreeMap_Entry* subFloor(::java::lang::Object* key) = 0;
    virtual TreeMap_Entry* subHigher(::java::lang::Object* key) = 0;
    virtual TreeMap_Entry* subHighest() = 0;
    virtual TreeMap_Entry* subLower(::java::lang::Object* key) = 0;
    virtual TreeMap_Entry* subLowest() = 0;

public:
    SortedMap* subMap(::java::lang::Object* fromKey, ::java::lang::Object* toKey) override;
    SortedMap* tailMap(::java::lang::Object* fromKey) override;

public: /* package */
    bool tooHigh(::java::lang::Object* key);
    bool tooLow(::java::lang::Object* key);

    // Generated
    TreeMap_NavigableSubMap(TreeMap* m, bool fromStart, ::java::lang::Object* lo, bool loInclusive, bool toEnd, ::java::lang::Object* hi, bool hiInclusive);
protected:
    TreeMap_NavigableSubMap(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual void clear();
    virtual bool containsValue(::java::lang::Object* value);
    virtual bool equals(::java::lang::Object* o);
    virtual int32_t hashCode();
    virtual void putAll(Map* m);
    Collection* values();
    virtual NavigableMap* headMap(::java::lang::Object* toKey, bool inclusive) = 0;
    virtual NavigableMap* subMap(::java::lang::Object* fromKey, bool fromInclusive, ::java::lang::Object* toKey, bool toInclusive) = 0;
    virtual NavigableMap* tailMap(::java::lang::Object* fromKey, bool inclusive) = 0;
    virtual bool remove(::java::lang::Object* key, ::java::lang::Object* value);

private:
    virtual ::java::lang::Class* getClass0();
};
