// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFDateUtil.java

#pragma once

#include <fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/usermodel/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/DateUtil.hpp>

struct default_init_tag;

class poi::hssf::usermodel::HSSFDateUtil
    : public ::poi::ss::usermodel::DateUtil
{

public:
    typedef ::poi::ss::usermodel::DateUtil super;

public: /* protected */
    static int32_t absoluteDay(::java::util::Calendar* cal, bool use1904windowing);

    // Generated

public:
    HSSFDateUtil();
protected:
    HSSFDateUtil(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
