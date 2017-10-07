// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/util/AbstractMap.hpp>
#include <java/util/SortedMap.hpp>
#include <java/io/Serializable.hpp>

struct default_init_tag;

class java::util::TreeMap_SubMap
    : public AbstractMap
    , public virtual SortedMap
    , public virtual ::java::io::Serializable
{

public:
    typedef AbstractMap super;

private:
    ::java::lang::Object* fromKey {  };
    bool fromStart {  };
    static constexpr int64_t serialVersionUID { int64_t(-6520786458950516097LL) };

public: /* package */
    TreeMap* this$0 {  };

private:
    bool toEnd {  };
    ::java::lang::Object* toKey {  };

    /*void ctor(); (private) */

public:
    Comparator* comparator() override;
    Set* entrySet() override;
    ::java::lang::Object* firstKey() override;
    SortedMap* headMap(::java::lang::Object* toKey) override;
    ::java::lang::Object* lastKey() override;
    /*::java::lang::Object* readResolve(); (private) */
    SortedMap* subMap(::java::lang::Object* fromKey, ::java::lang::Object* toKey) override;
    SortedMap* tailMap(::java::lang::Object* fromKey) override;

    // Generated
    TreeMap_SubMap(TreeMap *TreeMap_this);
protected:
    TreeMap_SubMap(TreeMap *TreeMap_this, const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual void clear();
    virtual bool containsKey(::java::lang::Object* key);
    virtual bool containsValue(::java::lang::Object* value);
    virtual bool equals(::java::lang::Object* o);
    virtual ::java::lang::Object* get(::java::lang::Object* key);
    virtual int32_t hashCode();
    virtual bool isEmpty();
    virtual ::java::lang::Object* put(::java::lang::Object* key, ::java::lang::Object* value);
    virtual void putAll(Map* m);
    virtual ::java::lang::Object* remove(::java::lang::Object* key);
    virtual int32_t size();
    Set* keySet();
    Collection* values();
    virtual bool remove(::java::lang::Object* key, ::java::lang::Object* value);
    TreeMap *TreeMap_this;

private:
    virtual ::java::lang::Class* getClass0();
};
