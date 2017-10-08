// Generated from /POI/java/org/apache/poi/poifs/filesystem/Ole10NativeException.java

#pragma once

#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/poifs/filesystem/fwd-POI.hpp>
#include <java/lang/Exception.hpp>

struct default_init_tag;

class poi::poifs::filesystem::Ole10NativeException
    : public ::java::lang::Exception
{

public:
    typedef ::java::lang::Exception super;
protected:
    void ctor(::java::lang::String* message);

    // Generated

public:
    Ole10NativeException(::java::lang::String* message);
protected:
    Ole10NativeException(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
