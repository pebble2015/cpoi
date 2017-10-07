// Generated from /POI/commons-collections4-4.1.jar

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/commons/collections4/bidimap/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::commons::collections4::bidimap::TreeBidiMap_ViewIterator
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    int32_t expectedModifications {  };

public: /* package */
    TreeBidiMap_Node* lastReturnedNode {  };

private:
    TreeBidiMap_Node* nextNode {  };
    TreeBidiMap_DataElement* orderType {  };
    TreeBidiMap_Node* previousNode {  };

public: /* package */
    TreeBidiMap* this$0 {  };

protected:
    void ctor(TreeBidiMap_DataElement* orderType);

public:
    bool hasNext();
    virtual bool hasPrevious();

public: /* protected */
    virtual TreeBidiMap_Node* navigateNext();
    virtual TreeBidiMap_Node* navigatePrevious();

public:
    void remove();

    // Generated

public: /* package */
    TreeBidiMap_ViewIterator(TreeBidiMap *TreeBidiMap_this, TreeBidiMap_DataElement* orderType);
protected:
    TreeBidiMap_ViewIterator(TreeBidiMap *TreeBidiMap_this, const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    TreeBidiMap *TreeBidiMap_this;

private:
    virtual ::java::lang::Class* getClass0();
};
