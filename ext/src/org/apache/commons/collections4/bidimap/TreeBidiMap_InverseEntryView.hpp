// Generated from /POI/commons-collections4-4.1.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/commons/collections4/bidimap/fwd-POI.hpp>
#include <org/apache/commons/collections4/bidimap/TreeBidiMap_View.hpp>

struct default_init_tag;

class org::apache::commons::collections4::bidimap::TreeBidiMap_InverseEntryView
    : public TreeBidiMap_View
{

public:
    typedef TreeBidiMap_View super;

public: /* package */
    TreeBidiMap* this$0 {  };

protected:
    void ctor();

public:
    bool contains(::java::lang::Object* obj) override;
    ::java::util::Iterator* iterator() override;
    bool remove(::java::lang::Object* obj) override;

    // Generated

public: /* package */
    TreeBidiMap_InverseEntryView(TreeBidiMap *TreeBidiMap_this);
protected:
    TreeBidiMap_InverseEntryView(TreeBidiMap *TreeBidiMap_this, const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
