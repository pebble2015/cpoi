// Generated from /POI/commons-collections4-4.1.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/commons/collections4/fwd-POI.hpp>
#include <org/apache/commons/collections4/bidimap/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/commons/collections4/OrderedBidiMap.hpp>
#include <java/io/Serializable.hpp>
#include <java/lang/Comparable.hpp>
#include <java/util/Set.hpp>
#include <org/apache/commons/collections4/OrderedMapIterator.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace util
    {
typedef ::SubArray< ::java::util::Map_Entry, ::java::lang::ObjectArray > Map_EntryArray;
    } // util
} // java

namespace org
{
    namespace apache
    {
        namespace commons
        {
            namespace collections4
            {
typedef ::SubArray< ::org::apache::commons::collections4::KeyValue, ::java::lang::ObjectArray > KeyValueArray;

                namespace bidimap
                {
typedef ::SubArray< ::org::apache::commons::collections4::bidimap::TreeBidiMap_Node, ::java::lang::ObjectArray, ::java::util::Map_EntryArray, ::org::apache::commons::collections4::KeyValueArray > TreeBidiMap_NodeArray;
                } // bidimap
            } // collections4
        } // commons
    } // apache
} // org

struct default_init_tag;

class org::apache::commons::collections4::bidimap::TreeBidiMap
    : public virtual ::java::lang::Object
    , public virtual ::org::apache::commons::collections4::OrderedBidiMap
    , public virtual ::java::io::Serializable
{

public:
    typedef ::java::lang::Object super;

private:
    ::java::util::Set* entrySet_ {  };
    TreeBidiMap_Inverse* inverse {  };
    ::java::util::Set* keySet_ {  };
    int32_t modifications {  };
    int32_t nodeCount {  };
    TreeBidiMap_NodeArray* rootNode {  };
    static constexpr int64_t serialVersionUID { int64_t(721969328361807LL) };
    ::java::util::Set* valuesSet {  };

protected:
    void ctor();
    void ctor(::java::util::Map* map);
    /*static void checkKey(::java::lang::Object* key); (private) */
    /*static void checkKeyAndValue(::java::lang::Object* key, ::java::lang::Object* value); (private) */
    /*static void checkNonNullComparable(::java::lang::Object* o, TreeBidiMap_DataElement* dataElement); (private) */
    /*static void checkValue(::java::lang::Object* value); (private) */

public:
    void clear() override;
    /*static int32_t compare(::java::lang::Comparable* o1, ::java::lang::Comparable* o2); (private) */
    bool containsKey(::java::lang::Object* key) override;
    bool containsValue(::java::lang::Object* value) override;
    /*void copyColor(TreeBidiMap_Node* from, TreeBidiMap_Node* to, TreeBidiMap_DataElement* dataElement); (private) */
    /*bool doEquals(::java::lang::Object* arg0, TreeBidiMap_DataElement* arg1); (private) */
    /*int32_t doHashCode(TreeBidiMap_DataElement* arg0); (private) */
    /*void doPut(::java::lang::Comparable* arg0, ::java::lang::Comparable* arg1); (private) */
    /*void doRedBlackDelete(TreeBidiMap_Node* arg0); (private) */
    /*void doRedBlackDeleteFixup(TreeBidiMap_Node* arg0, TreeBidiMap_DataElement* arg1); (private) */
    /*void doRedBlackInsert(TreeBidiMap_Node* arg0, TreeBidiMap_DataElement* arg1); (private) */
    /*::java::lang::Comparable* doRemoveKey(::java::lang::Object* key); (private) */
    /*::java::lang::Comparable* doRemoveValue(::java::lang::Object* value); (private) */
    /*::java::lang::String* doToString(TreeBidiMap_DataElement* arg0); (private) */
    ::java::util::Set* entrySet() override;
    bool equals(::java::lang::Object* obj) override;
    ::java::lang::Comparable* firstKey() override;
    ::java::lang::Comparable* get(::java::lang::Object* key) override;
    /*TreeBidiMap_Node* getGrandParent(TreeBidiMap_Node* node, TreeBidiMap_DataElement* dataElement); (private) */
    ::java::lang::Comparable* getKey(::java::lang::Object* value) override;
    /*TreeBidiMap_Node* getLeftChild(TreeBidiMap_Node* node, TreeBidiMap_DataElement* dataElement); (private) */
    /*::org::apache::commons::collections4::MapIterator* getMapIterator(TreeBidiMap_DataElement* dataElement); (private) */
    /*TreeBidiMap_Node* getParent(TreeBidiMap_Node* node, TreeBidiMap_DataElement* dataElement); (private) */
    /*TreeBidiMap_Node* getRightChild(TreeBidiMap_Node* node, TreeBidiMap_DataElement* dataElement); (private) */
    /*TreeBidiMap_Node* greatestNode(TreeBidiMap_Node* node, TreeBidiMap_DataElement* dataElement); (private) */
    /*void grow(); (private) */
    int32_t hashCode() override;
    /*void insertValue(TreeBidiMap_Node* arg0); (private) */
    ::org::apache::commons::collections4::OrderedBidiMap* inverseBidiMap() override;
    /*static bool isBlack(TreeBidiMap_Node* node, TreeBidiMap_DataElement* dataElement); (private) */
    bool isEmpty() override;
    /*static bool isRed(TreeBidiMap_Node* node, TreeBidiMap_DataElement* dataElement); (private) */
    ::java::util::Set* keySet() override;
    ::java::lang::Comparable* lastKey() override;
    /*TreeBidiMap_Node* leastNode(TreeBidiMap_Node* node, TreeBidiMap_DataElement* dataElement); (private) */
    /*TreeBidiMap_Node* lookup(::java::lang::Object* arg0, TreeBidiMap_DataElement* arg1); (private) */
    /*TreeBidiMap_Node* lookupKey(::java::lang::Object* key); (private) */
    /*TreeBidiMap_Node* lookupValue(::java::lang::Object* value); (private) */
    /*static void makeBlack(TreeBidiMap_Node* node, TreeBidiMap_DataElement* dataElement); (private) */
    /*static void makeRed(TreeBidiMap_Node* node, TreeBidiMap_DataElement* dataElement); (private) */
    ::org::apache::commons::collections4::OrderedMapIterator* mapIterator() override;
    /*void modify(); (private) */
    /*TreeBidiMap_Node* nextGreater(TreeBidiMap_Node* arg0, TreeBidiMap_DataElement* arg1); (private) */
    virtual ::java::lang::Comparable* nextKey(::java::lang::Comparable* key);
    /*TreeBidiMap_Node* nextSmaller(TreeBidiMap_Node* arg0, TreeBidiMap_DataElement* arg1); (private) */
    virtual ::java::lang::Comparable* previousKey(::java::lang::Comparable* key);
    virtual ::java::lang::Comparable* put(::java::lang::Comparable* key, ::java::lang::Comparable* value);
    void putAll(::java::util::Map* arg0) override;
    /*void readObject(::java::io::ObjectInputStream* arg0); (private) */
    ::java::lang::Comparable* remove(::java::lang::Object* key) override;
    ::java::lang::Comparable* removeValue(::java::lang::Object* value) override;
    /*void rotateLeft(TreeBidiMap_Node* node, TreeBidiMap_DataElement* dataElement); (private) */
    /*void rotateRight(TreeBidiMap_Node* node, TreeBidiMap_DataElement* dataElement); (private) */
    /*void shrink(); (private) */
    int32_t size() override;
    /*void swapPosition(TreeBidiMap_Node* x, TreeBidiMap_Node* y, TreeBidiMap_DataElement* dataElement); (private) */
    ::java::lang::String* toString() override;
    ::java::util::Set* values() override;
    /*void writeObject(::java::io::ObjectOutputStream* arg0); (private) */

    // Generated
    TreeBidiMap();
    TreeBidiMap(::java::util::Map* map);
protected:
    TreeBidiMap(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual ::java::lang::Object* nextKey(::java::lang::Object* arg0) override;
    virtual ::java::lang::Object* previousKey(::java::lang::Object* arg0) override;
    ::java::lang::Object* put(::java::lang::Object* arg0, ::java::lang::Object* arg1) override;
    virtual bool remove(::java::lang::Object* key, ::java::lang::Object* value);

private:
    virtual ::java::lang::Class* getClass0();
};
