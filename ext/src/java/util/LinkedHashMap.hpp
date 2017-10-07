// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/util/function/fwd-POI.hpp>
#include <java/util/HashMap.hpp>
#include <java/util/Map.hpp>

struct default_init_tag;

class java::util::LinkedHashMap
    : public HashMap
    , public virtual Map
{

public:
    typedef HashMap super;

public: /* package */
    bool accessOrder {  };
    LinkedHashMap_Entry* head {  };

private:
    static constexpr int64_t serialVersionUID { int64_t(3801124242820219131LL) };

public: /* package */
    LinkedHashMap_Entry* tail {  };

protected:
    void ctor();
    void ctor(int32_t initialCapacity);
    void ctor(Map* m);
    void ctor(int32_t initialCapacity, float loadFactor);
    void ctor(int32_t initialCapacity, float loadFactor, bool accessOrder);

public: /* package */
    void afterNodeAccess(HashMap_Node* e) override;
    void afterNodeInsertion(bool evict) override;
    void afterNodeRemoval(HashMap_Node* e) override;

public:
    void clear() override;
    bool containsValue(::java::lang::Object* value) override;
    Set* entrySet() override;
    void forEach(::java::util::function::BiConsumer* action) override;
    ::java::lang::Object* get(::java::lang::Object* key) override;
    ::java::lang::Object* getOrDefault(::java::lang::Object* key, ::java::lang::Object* defaultValue) override;

public: /* package */
    void internalWriteEntries(::java::io::ObjectOutputStream* s) override;

public:
    Set* keySet() override;
    /*void linkNodeLast(LinkedHashMap_Entry* p); (private) */

public: /* package */
    HashMap_Node* newNode(int32_t hash, ::java::lang::Object* key, ::java::lang::Object* value, HashMap_Node* e) override;
    HashMap_TreeNode* newTreeNode(int32_t hash, ::java::lang::Object* key, ::java::lang::Object* value, HashMap_Node* next) override;
    void reinitialize() override;

public: /* protected */
    virtual bool removeEldestEntry(Map_Entry* eldest);

public:
    void replaceAll(::java::util::function::BiFunction* function) override;

public: /* package */
    HashMap_Node* replacementNode(HashMap_Node* p, HashMap_Node* next) override;
    HashMap_TreeNode* replacementTreeNode(HashMap_Node* p, HashMap_Node* next) override;
    /*void transferLinks(LinkedHashMap_Entry* src, LinkedHashMap_Entry* dst); (private) */

public:
    Collection* values() override;

    // Generated
    LinkedHashMap();
    LinkedHashMap(int32_t initialCapacity);
    LinkedHashMap(Map* m);
    LinkedHashMap(int32_t initialCapacity, float loadFactor);
    LinkedHashMap(int32_t initialCapacity, float loadFactor, bool accessOrder);
protected:
    LinkedHashMap(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual ::java::lang::Object* compute(::java::lang::Object* key, ::java::util::function::BiFunction* remappingFunction);
    virtual ::java::lang::Object* computeIfAbsent(::java::lang::Object* key, ::java::util::function::Function* mappingFunction);
    virtual ::java::lang::Object* computeIfPresent(::java::lang::Object* key, ::java::util::function::BiFunction* remappingFunction);
    virtual bool containsKey(::java::lang::Object* key);
    virtual bool equals(::java::lang::Object* o);
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
    virtual int32_t size();

private:
    virtual ::java::lang::Class* getClass0();
};
