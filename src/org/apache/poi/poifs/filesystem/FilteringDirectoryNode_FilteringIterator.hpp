// Generated from /POI/java/org/apache/poi/poifs/filesystem/FilteringDirectoryNode.java

#pragma once

#include <fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/poifs/filesystem/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Iterator.hpp>
#include <org/apache/poi/poifs/filesystem/Entry.hpp>

struct default_init_tag;

class poi::poifs::filesystem::FilteringDirectoryNode_FilteringIterator
    : public virtual ::java::lang::Object
    , public virtual ::java::util::Iterator
{

public:
    typedef ::java::lang::Object super;

private:
    ::java::util::Iterator* parent {  };
    Entry* next_ {  };
protected:
    void ctor();

private:
    void locateNext();

public:
    bool hasNext() override;
    Entry* next() override;
    void remove() override;

    // Generated

private:
    FilteringDirectoryNode_FilteringIterator(FilteringDirectoryNode *FilteringDirectoryNode_this);
protected:
    FilteringDirectoryNode_FilteringIterator(FilteringDirectoryNode *FilteringDirectoryNode_this, const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    FilteringDirectoryNode *FilteringDirectoryNode_this;

private:
    virtual ::java::lang::Class* getClass0();
    friend class FilteringDirectoryNode;
};
