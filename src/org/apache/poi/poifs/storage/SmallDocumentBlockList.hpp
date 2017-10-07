// Generated from /POI/java/org/apache/poi/poifs/storage/SmallDocumentBlockList.java

#pragma once

#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/poifs/storage/fwd-POI.hpp>
#include <org/apache/poi/poifs/storage/BlockListImpl.hpp>

struct default_init_tag;

class org::apache::poi::poifs::storage::SmallDocumentBlockList
    : public BlockListImpl
{

public:
    typedef BlockListImpl super;
protected:
    void ctor(::java::util::List* blocks);

    // Generated

public:
    SmallDocumentBlockList(::java::util::List* blocks);
protected:
    SmallDocumentBlockList(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
