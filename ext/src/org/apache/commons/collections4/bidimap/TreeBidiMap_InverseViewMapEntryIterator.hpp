// Generated from /POI/commons-collections4-4.1.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/commons/collections4/bidimap/fwd-POI.hpp>
#include <org/apache/commons/collections4/bidimap/TreeBidiMap_ViewIterator.hpp>
#include <org/apache/commons/collections4/OrderedIterator.hpp>
#include <java/util/Map_Entry.hpp>

struct default_init_tag;

class org::apache::commons::collections4::bidimap::TreeBidiMap_InverseViewMapEntryIterator
    : public TreeBidiMap_ViewIterator
    , public virtual ::org::apache::commons::collections4::OrderedIterator
{

public:
    typedef TreeBidiMap_ViewIterator super;

public: /* package */
    TreeBidiMap* this$0 {  };

protected:
    void ctor();
    /*::java::util::Map_Entry* createEntry(TreeBidiMap_Node* node); (private) */

public:
    ::java::util::Map_Entry* next() override;
    ::java::util::Map_Entry* previous() override;

    // Generated

public: /* package */
    TreeBidiMap_InverseViewMapEntryIterator(TreeBidiMap *TreeBidiMap_this);
protected:
    TreeBidiMap_InverseViewMapEntryIterator(TreeBidiMap *TreeBidiMap_this, const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual bool hasNext();
    virtual void remove();
    virtual bool hasPrevious();

private:
    virtual ::java::lang::Class* getClass0();
};
