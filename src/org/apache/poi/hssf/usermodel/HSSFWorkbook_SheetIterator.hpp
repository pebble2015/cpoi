// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFWorkbook.java

#pragma once

#include <fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/usermodel/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Iterator.hpp>
#include <org/apache/poi/ss/usermodel/Sheet.hpp>

struct default_init_tag;

class org::apache::poi::hssf::usermodel::HSSFWorkbook_SheetIterator final
    : public virtual ::java::lang::Object
    , public ::java::util::Iterator
{

public:
    typedef ::java::lang::Object super;

private:
    ::java::util::Iterator* it {  };
    ::org::apache::poi::ss::usermodel::Sheet* cursor {  };
protected:
    void ctor();

public:
    bool hasNext() override;
    ::org::apache::poi::ss::usermodel::Sheet* next() /* throws(NoSuchElementException) */ override;
    void remove() /* throws(IllegalStateException) */ override;

    // Generated
    HSSFWorkbook_SheetIterator(HSSFWorkbook *HSSFWorkbook_this);
protected:
    HSSFWorkbook_SheetIterator(HSSFWorkbook *HSSFWorkbook_this, const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    void init();
    HSSFWorkbook *HSSFWorkbook_this;
    virtual ::java::lang::Class* getClass0();
    friend class HSSFWorkbook;
    friend class HSSFWorkbook_SheetRecordCollector;
};
