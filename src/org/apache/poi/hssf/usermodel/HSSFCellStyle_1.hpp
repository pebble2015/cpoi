// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFCellStyle.java

#pragma once

#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/usermodel/fwd-POI.hpp>
#include <java/lang/ThreadLocal.hpp>
#include <java/lang/Short.hpp>

struct default_init_tag;

class poi::hssf::usermodel::HSSFCellStyle_1
    : public ::java::lang::ThreadLocal
{

public:
    typedef ::java::lang::ThreadLocal super;

public: /* protected */
    ::java::lang::Short* initialValue() override;

    // Generated

public:
    HSSFCellStyle_1();
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class HSSFCellStyle;
};
