// Generated from /POI/commons-collections4-4.1.jar

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/commons/collections4/bidimap/fwd-POI.hpp>
#include <java/util/AbstractSet.hpp>

struct default_init_tag;

class org::apache::commons::collections4::bidimap::TreeBidiMap_View
    : public ::java::util::AbstractSet
{

public:
    typedef ::java::util::AbstractSet super;

public: /* package */
    TreeBidiMap_DataElement* orderType {  };
    TreeBidiMap* this$0 {  };

protected:
    void ctor(TreeBidiMap_DataElement* orderType);

public:
    void clear() override;
    int32_t size() override;

    // Generated

public: /* package */
    TreeBidiMap_View(TreeBidiMap *TreeBidiMap_this, TreeBidiMap_DataElement* orderType);
protected:
    TreeBidiMap_View(TreeBidiMap *TreeBidiMap_this, const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    TreeBidiMap *TreeBidiMap_this;

private:
    virtual ::java::lang::Class* getClass0();
};
