// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/util/LinkedHashMap.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/Object.hpp>

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(nullptr);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

extern void unimplemented_(const char16_t* name);
java::util::LinkedHashMap::LinkedHashMap(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::LinkedHashMap::LinkedHashMap()
    : LinkedHashMap(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::util::LinkedHashMap::LinkedHashMap(int32_t initialCapacity)
    : LinkedHashMap(*static_cast< ::default_init_tag* >(0))
{
    ctor(initialCapacity);
}

java::util::LinkedHashMap::LinkedHashMap(Map* m)
    : LinkedHashMap(*static_cast< ::default_init_tag* >(0))
{
    ctor(m);
}

java::util::LinkedHashMap::LinkedHashMap(int32_t initialCapacity, float loadFactor)
    : LinkedHashMap(*static_cast< ::default_init_tag* >(0))
{
    ctor(initialCapacity, loadFactor);
}

java::util::LinkedHashMap::LinkedHashMap(int32_t initialCapacity, float loadFactor, bool accessOrder)
    : LinkedHashMap(*static_cast< ::default_init_tag* >(0))
{
    ctor(initialCapacity, loadFactor, accessOrder);
}

constexpr int64_t java::util::LinkedHashMap::serialVersionUID;

void ::java::util::LinkedHashMap::ctor()
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::util::LinkedHashMap::ctor()");
}

void ::java::util::LinkedHashMap::ctor(int32_t initialCapacity)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::util::LinkedHashMap::ctor(int32_t initialCapacity)");
}

void ::java::util::LinkedHashMap::ctor(Map* m)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::util::LinkedHashMap::ctor(Map* m)");
}

void ::java::util::LinkedHashMap::ctor(int32_t initialCapacity, float loadFactor)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::util::LinkedHashMap::ctor(int32_t initialCapacity, float loadFactor)");
}

void ::java::util::LinkedHashMap::ctor(int32_t initialCapacity, float loadFactor, bool accessOrder)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::util::LinkedHashMap::ctor(int32_t initialCapacity, float loadFactor, bool accessOrder)");
}

void java::util::LinkedHashMap::afterNodeAccess(HashMap_Node* e)
{ /* stub */
    unimplemented_(u"void java::util::LinkedHashMap::afterNodeAccess(HashMap_Node* e)");
}

void java::util::LinkedHashMap::afterNodeInsertion(bool evict)
{ /* stub */
    unimplemented_(u"void java::util::LinkedHashMap::afterNodeInsertion(bool evict)");
}

void java::util::LinkedHashMap::afterNodeRemoval(HashMap_Node* e)
{ /* stub */
    unimplemented_(u"void java::util::LinkedHashMap::afterNodeRemoval(HashMap_Node* e)");
}

void java::util::LinkedHashMap::clear()
{ /* stub */
    unimplemented_(u"void java::util::LinkedHashMap::clear()");
}

bool java::util::LinkedHashMap::containsValue(::java::lang::Object* value)
{ /* stub */
    unimplemented_(u"bool java::util::LinkedHashMap::containsValue(::java::lang::Object* value)");
    return 0;
}

java::util::Set* java::util::LinkedHashMap::entrySet()
{ /* stub */
    unimplemented_(u"java::util::Set* java::util::LinkedHashMap::entrySet()");
    return 0;
}

void java::util::LinkedHashMap::forEach(::java::util::function::BiConsumer* action)
{ /* stub */
    unimplemented_(u"void java::util::LinkedHashMap::forEach(::java::util::function::BiConsumer* action)");
}

java::lang::Object* java::util::LinkedHashMap::get(::java::lang::Object* key)
{ /* stub */
    unimplemented_(u"java::lang::Object* java::util::LinkedHashMap::get(::java::lang::Object* key)");
    return 0;
}

java::lang::Object* java::util::LinkedHashMap::getOrDefault(::java::lang::Object* key, ::java::lang::Object* defaultValue)
{ /* stub */
    unimplemented_(u"java::lang::Object* java::util::LinkedHashMap::getOrDefault(::java::lang::Object* key, ::java::lang::Object* defaultValue)");
    return 0;
}

void java::util::LinkedHashMap::internalWriteEntries(::java::io::ObjectOutputStream* s)
{ /* stub */
    unimplemented_(u"void java::util::LinkedHashMap::internalWriteEntries(::java::io::ObjectOutputStream* s)");
}

java::util::Set* java::util::LinkedHashMap::keySet()
{ /* stub */
    unimplemented_(u"java::util::Set* java::util::LinkedHashMap::keySet()");
    return 0;
}

/* private: void java::util::LinkedHashMap::linkNodeLast(LinkedHashMap_Entry* p) */
java::util::HashMap_Node* java::util::LinkedHashMap::newNode(int32_t hash, ::java::lang::Object* key, ::java::lang::Object* value, HashMap_Node* e)
{ /* stub */
    unimplemented_(u"java::util::HashMap_Node* java::util::LinkedHashMap::newNode(int32_t hash, ::java::lang::Object* key, ::java::lang::Object* value, HashMap_Node* e)");
    return 0;
}

java::util::HashMap_TreeNode* java::util::LinkedHashMap::newTreeNode(int32_t hash, ::java::lang::Object* key, ::java::lang::Object* value, HashMap_Node* next)
{ /* stub */
    unimplemented_(u"java::util::HashMap_TreeNode* java::util::LinkedHashMap::newTreeNode(int32_t hash, ::java::lang::Object* key, ::java::lang::Object* value, HashMap_Node* next)");
    return 0;
}

void java::util::LinkedHashMap::reinitialize()
{ /* stub */
    unimplemented_(u"void java::util::LinkedHashMap::reinitialize()");
}

bool java::util::LinkedHashMap::removeEldestEntry(Map_Entry* eldest)
{ /* stub */
    unimplemented_(u"bool java::util::LinkedHashMap::removeEldestEntry(Map_Entry* eldest)");
    return 0;
}

void java::util::LinkedHashMap::replaceAll(::java::util::function::BiFunction* function)
{ /* stub */
    unimplemented_(u"void java::util::LinkedHashMap::replaceAll(::java::util::function::BiFunction* function)");
}

java::util::HashMap_Node* java::util::LinkedHashMap::replacementNode(HashMap_Node* p, HashMap_Node* next)
{ /* stub */
    unimplemented_(u"java::util::HashMap_Node* java::util::LinkedHashMap::replacementNode(HashMap_Node* p, HashMap_Node* next)");
    return 0;
}

java::util::HashMap_TreeNode* java::util::LinkedHashMap::replacementTreeNode(HashMap_Node* p, HashMap_Node* next)
{ /* stub */
    unimplemented_(u"java::util::HashMap_TreeNode* java::util::LinkedHashMap::replacementTreeNode(HashMap_Node* p, HashMap_Node* next)");
    return 0;
}

/* private: void java::util::LinkedHashMap::transferLinks(LinkedHashMap_Entry* src, LinkedHashMap_Entry* dst) */
java::util::Collection* java::util::LinkedHashMap::values()
{ /* stub */
    unimplemented_(u"java::util::Collection* java::util::LinkedHashMap::values()");
    return 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::LinkedHashMap::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.LinkedHashMap", 23);
    return c;
}

java::lang::Object* java::util::LinkedHashMap::compute(::java::lang::Object* key, ::java::util::function::BiFunction* remappingFunction)
{
    return java_cast< ::java::lang::Object* >(HashMap::compute(key, remappingFunction));
}

java::lang::Object* java::util::LinkedHashMap::computeIfAbsent(::java::lang::Object* key, ::java::util::function::Function* mappingFunction)
{
    return java_cast< ::java::lang::Object* >(HashMap::computeIfAbsent(key, mappingFunction));
}

java::lang::Object* java::util::LinkedHashMap::computeIfPresent(::java::lang::Object* key, ::java::util::function::BiFunction* remappingFunction)
{
    return java_cast< ::java::lang::Object* >(HashMap::computeIfPresent(key, remappingFunction));
}

bool java::util::LinkedHashMap::containsKey(::java::lang::Object* key)
{
    return HashMap::containsKey(key);
}

bool java::util::LinkedHashMap::equals(::java::lang::Object* o)
{
    return AbstractMap::equals(o);
}

int32_t java::util::LinkedHashMap::hashCode()
{
    return AbstractMap::hashCode();
}

bool java::util::LinkedHashMap::isEmpty()
{
    return HashMap::isEmpty();
}

java::lang::Object* java::util::LinkedHashMap::merge(::java::lang::Object* key, ::java::lang::Object* value, ::java::util::function::BiFunction* remappingFunction)
{
    return java_cast< ::java::lang::Object* >(HashMap::merge(key, value, remappingFunction));
}

java::lang::Object* java::util::LinkedHashMap::put(::java::lang::Object* key, ::java::lang::Object* value)
{
    return java_cast< ::java::lang::Object* >(HashMap::put(key, value));
}

void java::util::LinkedHashMap::putAll(Map* m)
{
    HashMap::putAll(m);
}

java::lang::Object* java::util::LinkedHashMap::putIfAbsent(::java::lang::Object* key, ::java::lang::Object* value)
{
    return java_cast< ::java::lang::Object* >(HashMap::putIfAbsent(key, value));
}

java::lang::Object* java::util::LinkedHashMap::remove(::java::lang::Object* key)
{
    return java_cast< ::java::lang::Object* >(HashMap::remove(key));
}

bool java::util::LinkedHashMap::remove(::java::lang::Object* key, ::java::lang::Object* value)
{
    return HashMap::remove(key, value);
}

java::lang::Object* java::util::LinkedHashMap::replace(::java::lang::Object* key, ::java::lang::Object* value)
{
    return java_cast< ::java::lang::Object* >(HashMap::replace(key, value));
}

bool java::util::LinkedHashMap::replace(::java::lang::Object* key, ::java::lang::Object* oldValue, ::java::lang::Object* newValue)
{
    return HashMap::replace(key, oldValue, newValue);
}

int32_t java::util::LinkedHashMap::size()
{
    return HashMap::size();
}

java::lang::Class* java::util::LinkedHashMap::getClass0()
{
    return class_();
}

