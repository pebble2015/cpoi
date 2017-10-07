// Generated from /POI/commons-collections4-4.1.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/commons/collections4/bidimap/fwd-POI.hpp>
#include <org/apache/commons/collections4/bidimap/TreeBidiMap_ViewIterator.hpp>
#include <org/apache/commons/collections4/OrderedMapIterator.hpp>
#include <java/lang/Comparable.hpp>

struct default_init_tag;

class org::apache::commons::collections4::bidimap::TreeBidiMap_ViewMapIterator
    : public TreeBidiMap_ViewIterator
    , public virtual ::org::apache::commons::collections4::OrderedMapIterator
{

public:
    typedef TreeBidiMap_ViewIterator super;

public: /* package */
    TreeBidiMap* this$0 {  };

protected:
    void ctor(TreeBidiMap_DataElement* orderType);

public:
    ::java::lang::Comparable* getKey() override;
    ::java::lang::Comparable* getValue() override;
    ::java::lang::Comparable* next() override;
    ::java::lang::Comparable* previous() override;
    virtual ::java::lang::Comparable* setValue(::java::lang::Comparable* obj);

    // Generated

public: /* package */
    TreeBidiMap_ViewMapIterator(TreeBidiMap *TreeBidiMap_this, TreeBidiMap_DataElement* orderType);
protected:
    TreeBidiMap_ViewMapIterator(TreeBidiMap *TreeBidiMap_this, const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    bool hasNext();
    void remove();
    bool hasPrevious();
    virtual ::java::lang::Object* setValue(::java::lang::Object* arg0) override;

private:
    virtual ::java::lang::Class* getClass0();
};
