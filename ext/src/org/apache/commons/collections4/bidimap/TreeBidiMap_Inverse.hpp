// Generated from /POI/commons-collections4-4.1.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/commons/collections4/fwd-POI.hpp>
#include <org/apache/commons/collections4/bidimap/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/commons/collections4/OrderedBidiMap.hpp>
#include <java/lang/Comparable.hpp>
#include <java/util/Set.hpp>
#include <org/apache/commons/collections4/OrderedMapIterator.hpp>

struct default_init_tag;

class org::apache::commons::collections4::bidimap::TreeBidiMap_Inverse
    : public virtual ::java::lang::Object
    , public virtual ::org::apache::commons::collections4::OrderedBidiMap
{

public:
    typedef ::java::lang::Object super;

private:
    ::java::util::Set* inverseEntrySet {  };
    ::java::util::Set* inverseKeySet {  };
    ::java::util::Set* inverseValuesSet {  };

public: /* package */
    TreeBidiMap* this$0 {  };

protected:
    void ctor();

public:
    void clear() override;
    bool containsKey(::java::lang::Object* key) override;
    bool containsValue(::java::lang::Object* value) override;
    ::java::util::Set* entrySet() override;
    bool equals(::java::lang::Object* obj) override;
    ::java::lang::Comparable* firstKey() override;
    ::java::lang::Comparable* get(::java::lang::Object* key) override;
    ::java::lang::Comparable* getKey(::java::lang::Object* value) override;
    int32_t hashCode() override;
    ::org::apache::commons::collections4::OrderedBidiMap* inverseBidiMap() override;
    bool isEmpty() override;
    ::java::util::Set* keySet() override;
    ::java::lang::Comparable* lastKey() override;
    ::org::apache::commons::collections4::OrderedMapIterator* mapIterator() override;
    virtual ::java::lang::Comparable* nextKey(::java::lang::Comparable* key);
    virtual ::java::lang::Comparable* previousKey(::java::lang::Comparable* key);
    virtual ::java::lang::Comparable* put(::java::lang::Comparable* key, ::java::lang::Comparable* value);
    void putAll(::java::util::Map* arg0) override;
    ::java::lang::Comparable* remove(::java::lang::Object* key) override;
    ::java::lang::Comparable* removeValue(::java::lang::Object* value) override;
    int32_t size() override;
    ::java::lang::String* toString() override;
    ::java::util::Set* values() override;

    // Generated

public: /* package */
    TreeBidiMap_Inverse(TreeBidiMap *TreeBidiMap_this);
protected:
    TreeBidiMap_Inverse(TreeBidiMap *TreeBidiMap_this, const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual ::java::lang::Object* nextKey(::java::lang::Object* arg0) override;
    virtual ::java::lang::Object* previousKey(::java::lang::Object* arg0) override;
    ::java::lang::Object* put(::java::lang::Object* arg0, ::java::lang::Object* arg1) override;
    virtual bool remove(::java::lang::Object* key, ::java::lang::Object* value);
    TreeBidiMap *TreeBidiMap_this;

private:
    virtual ::java::lang::Class* getClass0();
};
