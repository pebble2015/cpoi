// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/lang/ref/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/util/function/fwd-POI.hpp>
#include <java/util/AbstractMap.hpp>
#include <java/util/Map.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace lang
    {
        namespace ref
        {
typedef ::SubArray< ::java::lang::ref::Reference, ::java::lang::ObjectArray > ReferenceArray;
typedef ::SubArray< ::java::lang::ref::WeakReference, ReferenceArray > WeakReferenceArray;
        } // ref
    } // lang

    namespace util
    {
typedef ::SubArray< ::java::util::Map_Entry, ::java::lang::ObjectArray > Map_EntryArray;
typedef ::SubArray< ::java::util::WeakHashMap_Entry, ::java::lang::ref::WeakReferenceArray, Map_EntryArray > WeakHashMap_EntryArray;
    } // util
} // java

struct default_init_tag;

class java::util::WeakHashMap
    : public AbstractMap
    , public virtual Map
{

public:
    typedef AbstractMap super;

private:
    static constexpr int32_t DEFAULT_INITIAL_CAPACITY { int32_t(16) };
    static constexpr float DEFAULT_LOAD_FACTOR { 0.75f };
    static constexpr int32_t MAXIMUM_CAPACITY { int32_t(1073741824) };
    static ::java::lang::Object* NULL_KEY_;
    Set* entrySet_ {  };
    float loadFactor {  };

public: /* package */
    int32_t modCount {  };

private:
    ::java::lang::ref::ReferenceQueue* queue {  };
    int32_t size_ {  };

public: /* package */
    WeakHashMap_EntryArray* table {  };

private:
    int32_t threshold {  };

protected:
    void ctor();
    void ctor(int32_t initialCapacity);
    void ctor(Map* m);
    void ctor(int32_t initialCapacity, float loadFactor);

public:
    void clear() override;
    bool containsKey(::java::lang::Object* key) override;
    /*bool containsNullValue(); (private) */
    bool containsValue(::java::lang::Object* value) override;
    Set* entrySet() override;
    /*static bool eq(::java::lang::Object* x, ::java::lang::Object* y); (private) */
    /*void expungeStaleEntries(); (private) */
    void forEach(::java::util::function::BiConsumer* action) override;
    ::java::lang::Object* get(::java::lang::Object* key) override;

public: /* package */
    virtual WeakHashMap_Entry* getEntry(::java::lang::Object* key);
    /*WeakHashMap_EntryArray* getTable(); (private) */
    int32_t hash(::java::lang::Object* k);
    /*static int32_t indexFor(int32_t h, int32_t length); (private) */

public:
    bool isEmpty() override;
    Set* keySet() override;
    /*static ::java::lang::Object* maskNull(::java::lang::Object* key); (private) */
    /*WeakHashMap_EntryArray* newTable(int32_t n); (private) */
    ::java::lang::Object* put(::java::lang::Object* key, ::java::lang::Object* value) override;
    void putAll(Map* m) override;
    ::java::lang::Object* remove(::java::lang::Object* key) override;

public: /* package */
    virtual bool removeMapping(::java::lang::Object* o);

public:
    void replaceAll(::java::util::function::BiFunction* function) override;

public: /* package */
    virtual void resize(int32_t newCapacity);

public:
    int32_t size() override;
    /*void transfer(WeakHashMap_EntryArray* src, WeakHashMap_EntryArray* dest); (private) */

public: /* package */
    static ::java::lang::Object* unmaskNull(::java::lang::Object* key);

public:
    Collection* values() override;

    // Generated
    WeakHashMap();
    WeakHashMap(int32_t initialCapacity);
    WeakHashMap(Map* m);
    WeakHashMap(int32_t initialCapacity, float loadFactor);
protected:
    WeakHashMap(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual bool equals(::java::lang::Object* o);
    virtual int32_t hashCode();
    virtual bool remove(::java::lang::Object* key, ::java::lang::Object* value);

private:
    static ::java::lang::Object*& NULL_KEY();
    virtual ::java::lang::Class* getClass0();
};
