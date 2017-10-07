// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/util/function/fwd-POI.hpp>
#include <java/util/AbstractMap.hpp>
#include <java/util/NavigableMap.hpp>
#include <java/lang/Cloneable.hpp>
#include <java/io/Serializable.hpp>

struct default_init_tag;

class java::util::TreeMap
    : public AbstractMap
    , public virtual NavigableMap
    , public virtual ::java::lang::Cloneable
    , public virtual ::java::io::Serializable
{

public:
    typedef AbstractMap super;

private:
    static constexpr bool BLACK { true };
    static constexpr bool RED { false };
    static ::java::lang::Object* UNBOUNDED_;
    Comparator* comparator_ {  };
    NavigableMap* descendingMap_ {  };
    TreeMap_EntrySet* entrySet_ {  };
    int32_t modCount {  };
    TreeMap_KeySet* navigableKeySet_ {  };
    TreeMap_Entry* root {  };
    static constexpr int64_t serialVersionUID { int64_t(919286545866124006LL) };
    int32_t size_ {  };

protected:
    void ctor();
    void ctor(Comparator* comparator);
    void ctor(Map* m);
    void ctor(SortedMap* m);

public: /* package */
    virtual void addAllForTreeSet(SortedSet* set, ::java::lang::Object* defaultVal);
    /*void buildFromSorted(int32_t size, Iterator* it, ::java::io::ObjectInputStream* str, ::java::lang::Object* defaultVal); (private) */
    /*TreeMap_Entry* buildFromSorted(int32_t level, int32_t lo, int32_t hi, int32_t redLevel, Iterator* it, ::java::io::ObjectInputStream* str, ::java::lang::Object* defaultVal); (private) */

public:
    Map_Entry* ceilingEntry(::java::lang::Object* key) override;
    ::java::lang::Object* ceilingKey(::java::lang::Object* key) override;
    void clear() override;
    ::java::lang::Object* clone() override;
    /*static bool colorOf(TreeMap_Entry* p); (private) */
    Comparator* comparator() override;

public: /* package */
    int32_t compare(::java::lang::Object* k1, ::java::lang::Object* k2);
    /*static int32_t computeRedLevel(int32_t sz); (private) */

public:
    bool containsKey(::java::lang::Object* key) override;
    bool containsValue(::java::lang::Object* value) override;
    /*void deleteEntry(TreeMap_Entry* p); (private) */

public: /* package */
    virtual Iterator* descendingKeyIterator();

public:
    NavigableSet* descendingKeySet() override;

public: /* package */
    Spliterator* descendingKeySpliterator();

public:
    NavigableMap* descendingMap() override;
    Set* entrySet() override;

public: /* package */
    static Map_Entry* exportEntry(TreeMap_Entry* e);

public:
    Map_Entry* firstEntry() override;
    ::java::lang::Object* firstKey() override;
    /*void fixAfterDeletion(TreeMap_Entry* x); (private) */
    /*void fixAfterInsertion(TreeMap_Entry* x); (private) */
    Map_Entry* floorEntry(::java::lang::Object* key) override;
    ::java::lang::Object* floorKey(::java::lang::Object* key) override;
    void forEach(::java::util::function::BiConsumer* action) override;
    ::java::lang::Object* get(::java::lang::Object* key) override;

public: /* package */
    TreeMap_Entry* getCeilingEntry(::java::lang::Object* key);
    TreeMap_Entry* getEntry(::java::lang::Object* key);
    TreeMap_Entry* getEntryUsingComparator(::java::lang::Object* key);
    TreeMap_Entry* getFirstEntry();
    TreeMap_Entry* getFloorEntry(::java::lang::Object* key);
    TreeMap_Entry* getHigherEntry(::java::lang::Object* key);
    TreeMap_Entry* getLastEntry();
    TreeMap_Entry* getLowerEntry(::java::lang::Object* key);

public:
    SortedMap* headMap(::java::lang::Object* toKey) override;
    NavigableMap* headMap(::java::lang::Object* toKey, bool inclusive) override;
    Map_Entry* higherEntry(::java::lang::Object* key) override;
    ::java::lang::Object* higherKey(::java::lang::Object* key) override;

public: /* package */
    static ::java::lang::Object* key(TreeMap_Entry* e);
    virtual Iterator* keyIterator();
    static ::java::lang::Object* keyOrNull(TreeMap_Entry* e);

public:
    Set* keySet() override;

public: /* package */
    Spliterator* keySpliterator();
    static Spliterator* keySpliteratorFor(NavigableMap* m);

public:
    Map_Entry* lastEntry() override;
    ::java::lang::Object* lastKey() override;
    /*static TreeMap_Entry* leftOf(TreeMap_Entry* p); (private) */
    Map_Entry* lowerEntry(::java::lang::Object* key) override;
    ::java::lang::Object* lowerKey(::java::lang::Object* key) override;
    NavigableSet* navigableKeySet() override;
    /*static TreeMap_Entry* parentOf(TreeMap_Entry* p); (private) */
    Map_Entry* pollFirstEntry() override;
    Map_Entry* pollLastEntry() override;

public: /* package */
    static TreeMap_Entry* predecessor(TreeMap_Entry* t);

public:
    ::java::lang::Object* put(::java::lang::Object* key, ::java::lang::Object* value) override;
    void putAll(Map* map) override;
    /*void readObject(::java::io::ObjectInputStream* s); (private) */

public: /* package */
    virtual void readTreeSet(int32_t size, ::java::io::ObjectInputStream* s, ::java::lang::Object* defaultVal);

public:
    ::java::lang::Object* remove(::java::lang::Object* key) override;
    ::java::lang::Object* replace(::java::lang::Object* key, ::java::lang::Object* value) override;
    bool replace(::java::lang::Object* key, ::java::lang::Object* oldValue, ::java::lang::Object* newValue) override;
    void replaceAll(::java::util::function::BiFunction* function) override;
    /*static TreeMap_Entry* rightOf(TreeMap_Entry* p); (private) */
    /*void rotateLeft(TreeMap_Entry* p); (private) */
    /*void rotateRight(TreeMap_Entry* p); (private) */
    /*static void setColor(TreeMap_Entry* p, bool c); (private) */
    int32_t size() override;
    SortedMap* subMap(::java::lang::Object* fromKey, ::java::lang::Object* toKey) override;
    NavigableMap* subMap(::java::lang::Object* fromKey, bool fromInclusive, ::java::lang::Object* toKey, bool toInclusive) override;

public: /* package */
    static TreeMap_Entry* successor(TreeMap_Entry* t);

public:
    SortedMap* tailMap(::java::lang::Object* fromKey) override;
    NavigableMap* tailMap(::java::lang::Object* fromKey, bool inclusive) override;

public: /* package */
    static bool valEquals(::java::lang::Object* o1, ::java::lang::Object* o2);

public:
    Collection* values() override;
    /*void writeObject(::java::io::ObjectOutputStream* s); (private) */

    // Generated
    TreeMap();
    TreeMap(Comparator* comparator);
    TreeMap(Map* m);
    TreeMap(SortedMap* m);
protected:
    TreeMap(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual bool equals(::java::lang::Object* o);
    virtual int32_t hashCode();
    virtual bool isEmpty();
    virtual bool remove(::java::lang::Object* key, ::java::lang::Object* value);

private:
    static ::java::lang::Object*& UNBOUNDED();
    virtual ::java::lang::Class* getClass0();
};
