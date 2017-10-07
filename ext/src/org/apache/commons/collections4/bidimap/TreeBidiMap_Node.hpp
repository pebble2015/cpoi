// Generated from /POI/commons-collections4-4.1.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/commons/collections4/fwd-POI.hpp>
#include <org/apache/commons/collections4/bidimap/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Map_Entry.hpp>
#include <org/apache/commons/collections4/KeyValue.hpp>
#include <java/lang/Comparable.hpp>

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

class org::apache::commons::collections4::bidimap::TreeBidiMap_Node
    : public virtual ::java::lang::Object
    , public virtual ::java::util::Map_Entry
    , public virtual ::org::apache::commons::collections4::KeyValue
{

public:
    typedef ::java::lang::Object super;

private:
    ::boolArray* blackColor {  };
    bool calculatedHashCode {  };
    int32_t hashcodeValue {  };
    ::java::lang::Comparable* key {  };
    TreeBidiMap_NodeArray* leftNode {  };
    TreeBidiMap_NodeArray* parentNode {  };
    TreeBidiMap_NodeArray* rightNode {  };
    ::java::lang::Comparable* value {  };

protected:
    void ctor(::java::lang::Comparable* key, ::java::lang::Comparable* value);
    /*void copyColor(TreeBidiMap_Node* node, TreeBidiMap_DataElement* dataElement); (private) */

public:
    bool equals(::java::lang::Object* obj) override;
    /*::java::lang::Object* getData(TreeBidiMap_DataElement* dataElement); (private) */
    ::java::lang::Comparable* getKey() override;
    /*TreeBidiMap_Node* getLeft(TreeBidiMap_DataElement* dataElement); (private) */
    /*TreeBidiMap_Node* getParent(TreeBidiMap_DataElement* dataElement); (private) */
    /*TreeBidiMap_Node* getRight(TreeBidiMap_DataElement* dataElement); (private) */
    ::java::lang::Comparable* getValue() override;
    int32_t hashCode() override;
    /*bool isBlack(TreeBidiMap_DataElement* dataElement); (private) */
    /*bool isLeftChild(TreeBidiMap_DataElement* dataElement); (private) */
    /*bool isRed(TreeBidiMap_DataElement* dataElement); (private) */
    /*bool isRightChild(TreeBidiMap_DataElement* dataElement); (private) */
    /*void setBlack(TreeBidiMap_DataElement* dataElement); (private) */
    /*void setLeft(TreeBidiMap_Node* node, TreeBidiMap_DataElement* dataElement); (private) */
    /*void setParent(TreeBidiMap_Node* node, TreeBidiMap_DataElement* dataElement); (private) */
    /*void setRed(TreeBidiMap_DataElement* dataElement); (private) */
    /*void setRight(TreeBidiMap_Node* node, TreeBidiMap_DataElement* dataElement); (private) */
    virtual ::java::lang::Comparable* setValue(::java::lang::Comparable* ignored);
    /*void swapColors(TreeBidiMap_Node* node, TreeBidiMap_DataElement* dataElement); (private) */

    // Generated

public: /* package */
    TreeBidiMap_Node(::java::lang::Comparable* key, ::java::lang::Comparable* value);
protected:
    TreeBidiMap_Node(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual ::java::lang::Object* setValue(::java::lang::Object* value) override;

private:
    virtual ::java::lang::Class* getClass0();
};
