// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/text/fwd-POI.hpp>
#include <java/lang/Exception.hpp>

struct default_init_tag;

class java::text::ParseException
    : public ::java::lang::Exception
{

public:
    typedef ::java::lang::Exception super;

private:
    int32_t errorOffset {  };
    static constexpr int64_t serialVersionUID { int64_t(2703218443322787634LL) };

protected:
    void ctor(::java::lang::String* s, int32_t errorOffset);

public:
    virtual int32_t getErrorOffset();

    // Generated
    ParseException(::java::lang::String* s, int32_t errorOffset);
protected:
    ParseException(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
