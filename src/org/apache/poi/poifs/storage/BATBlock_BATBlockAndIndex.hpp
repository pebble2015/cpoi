// Generated from /POI/java/org/apache/poi/poifs/storage/BATBlock.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/poifs/storage/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::poi::poifs::storage::BATBlock_BATBlockAndIndex
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    int32_t index {  };
    BATBlock* block {  };
protected:
    void ctor(int32_t index, BATBlock* block);

public:
    virtual int32_t getIndex();
    virtual BATBlock* getBlock();

    // Generated

private:
    BATBlock_BATBlockAndIndex(int32_t index, BATBlock* block);
protected:
    BATBlock_BATBlockAndIndex(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class BATBlock;
};
