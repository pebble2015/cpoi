// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFRow.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/hssf/usermodel/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Iterator.hpp>
#include <org/apache/poi/ss/usermodel/Cell.hpp>

struct default_init_tag;

class org::apache::poi::hssf::usermodel::HSSFRow_CellIterator
    : public virtual ::java::lang::Object
    , public virtual ::java::util::Iterator
{

public:
    typedef ::java::lang::Object super;

public: /* package */
    int32_t thisId {  };
    int32_t nextId {  };
protected:
    void ctor();

public:
    bool hasNext() override;
    ::org::apache::poi::ss::usermodel::Cell* next() override;
    void remove() override;

private:
    void findNext();

    // Generated

public:
    HSSFRow_CellIterator(HSSFRow *HSSFRow_this);
protected:
    HSSFRow_CellIterator(HSSFRow *HSSFRow_this, const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    void init();
    HSSFRow *HSSFRow_this;
    virtual ::java::lang::Class* getClass0();
    friend class HSSFRow;
};
