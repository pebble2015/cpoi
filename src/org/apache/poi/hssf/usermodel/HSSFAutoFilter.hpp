// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFAutoFilter.java

#pragma once

#include <org/apache/poi/hssf/usermodel/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/ss/usermodel/AutoFilter.hpp>

struct default_init_tag;

class org::apache::poi::hssf::usermodel::HSSFAutoFilter final
    : public virtual ::java::lang::Object
    , public ::org::apache::poi::ss::usermodel::AutoFilter
{

public:
    typedef ::java::lang::Object super;

private:
    HSSFSheet* _sheet {  };
protected:
    void ctor(HSSFSheet* sheet);

    // Generated

public: /* package */
    HSSFAutoFilter(HSSFSheet* sheet);
protected:
    HSSFAutoFilter(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
