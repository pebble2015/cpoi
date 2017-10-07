// Generated from /POI/java/org/apache/poi/ss/usermodel/DateUtil.java

#pragma once

#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <java/lang/ThreadLocal.hpp>
#include <java/lang/Integer.hpp>

struct default_init_tag;

class org::apache::poi::ss::usermodel::DateUtil_1
    : public ::java::lang::ThreadLocal
{

public:
    typedef ::java::lang::ThreadLocal super;

public: /* protected */
    ::java::lang::Integer* initialValue() override;

    // Generated

public:
    DateUtil_1();
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class DateUtil;
    friend class DateUtil_FormatException;
};
