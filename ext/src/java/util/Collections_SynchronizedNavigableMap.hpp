// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/util/function/fwd-POI.hpp>
#include <java/util/Collections_SynchronizedSortedMap.hpp>
#include <java/util/NavigableMap.hpp>
#include <java/util/NavigableSet.hpp>

struct default_init_tag;

class java::util::Collections_SynchronizedNavigableMap
    : public Collections_SynchronizedSortedMap
    , public virtual NavigableMap
{

public:
    typedef Collections_SynchronizedSortedMap super;

private:
    NavigableMap* nm {  };
    static constexpr int64_t serialVersionUID { int64_t(699392247599746807LL) };

protected:
    void ctor(NavigableMap* m);
    void ctor(NavigableMap* m, ::java::lang::Object* mutex);

public:
    Map_Entry* ceilingEntry(::java::lang::Object* key) override;
    ::java::lang::Object* ceilingKey(::java::lang::Object* key) override;
    NavigableSet* descendingKeySet() override;
    NavigableMap* descendingMap() override;
    Map_Entry* firstEntry() override;
    Map_Entry* floorEntry(::java::lang::Object* key) override;
    ::java::lang::Object* floorKey(::java::lang::Object* key) override;
    SortedMap* headMap(::java::lang::Object* toKey) override;
    NavigableMap* headMap(::java::lang::Object* toKey, bool inclusive) override;
    Map_Entry* higherEntry(::java::lang::Object* key) override;
    ::java::lang::Object* higherKey(::java::lang::Object* key) override;
    NavigableSet* keySet() override;
    Map_Entry* lastEntry() override;
    Map_Entry* lowerEntry(::java::lang::Object* key) override;
    ::java::lang::Object* lowerKey(::java::lang::Object* key) override;
    NavigableSet* navigableKeySet() override;
    Map_Entry* pollFirstEntry() override;
    Map_Entry* pollLastEntry() override;
    SortedMap* subMap(::java::lang::Object* fromKey, ::java::lang::Object* toKey) override;
    NavigableMap* subMap(::java::lang::Object* fromKey, bool fromInclusive, ::java::lang::Object* toKey, bool toInclusive) override;
    SortedMap* tailMap(::java::lang::Object* fromKey) override;
    NavigableMap* tailMap(::java::lang::Object* fromKey, bool inclusive) override;

    // Generated

public: /* package */
    Collections_SynchronizedNavigableMap(NavigableMap* m);
    Collections_SynchronizedNavigableMap(NavigableMap* m, ::java::lang::Object* mutex);
protected:
    Collections_SynchronizedNavigableMap(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual void clear();
    virtual ::java::lang::Object* compute(::java::lang::Object* key, ::java::util::function::BiFunction* remappingFunction);
    virtual ::java::lang::Object* computeIfAbsent(::java::lang::Object* key, ::java::util::function::Function* mappingFunction);
    virtual ::java::lang::Object* computeIfPresent(::java::lang::Object* key, ::java::util::function::BiFunction* remappingFunction);
    virtual bool containsKey(::java::lang::Object* key);
    virtual bool containsValue(::java::lang::Object* value);
    virtual bool equals(::java::lang::Object* o);
    virtual void forEach(::java::util::function::BiConsumer* action);
    virtual ::java::lang::Object* get(::java::lang::Object* key);
    virtual ::java::lang::Object* getOrDefault(::java::lang::Object* key, ::java::lang::Object* defaultValue);
    virtual int32_t hashCode();
    virtual bool isEmpty();
    virtual ::java::lang::Object* merge(::java::lang::Object* key, ::java::lang::Object* value, ::java::util::function::BiFunction* remappingFunction);
    virtual ::java::lang::Object* put(::java::lang::Object* key, ::java::lang::Object* value);
    virtual void putAll(Map* m);
    virtual ::java::lang::Object* putIfAbsent(::java::lang::Object* key, ::java::lang::Object* value);
    virtual ::java::lang::Object* remove(::java::lang::Object* key);
    virtual bool remove(::java::lang::Object* key, ::java::lang::Object* value);
    virtual ::java::lang::Object* replace(::java::lang::Object* key, ::java::lang::Object* value);
    virtual bool replace(::java::lang::Object* key, ::java::lang::Object* oldValue, ::java::lang::Object* newValue);
    virtual void replaceAll(::java::util::function::BiFunction* function);
    virtual int32_t size();
    virtual Comparator* comparator();
    Set* entrySet();
    virtual ::java::lang::Object* firstKey();
    virtual ::java::lang::Object* lastKey();
    Collection* values();

private:
    virtual ::java::lang::Class* getClass0();
};
