// Generated from /POI/java/org/apache/poi/ss/usermodel/DateUtil.java

#pragma once

#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <java/lang/Exception.hpp>

struct default_init_tag;

class org::apache::poi::ss::usermodel::DateUtil_FormatException final
    : public ::java::lang::Exception
{

public:
    typedef ::java::lang::Exception super;
protected:
    void ctor(::java::lang::String* msg);

    // Generated

public:
    DateUtil_FormatException(::java::lang::String* msg);
protected:
    DateUtil_FormatException(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class DateUtil;
    friend class DateUtil_1;
};
