// Generated from /POI/java/org/apache/poi/util/RecordFormatException.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/RuntimeException.hpp>

struct default_init_tag;

class poi::util::RecordFormatException
    : public ::java::lang::RuntimeException
{

public:
    typedef ::java::lang::RuntimeException super;
protected:
    void ctor(::java::lang::String* exception);
    void ctor(::java::lang::String* exception, ::java::lang::Throwable* thr);
    void ctor(::java::lang::Throwable* thr);

public:
    static void check(bool assertTrue, ::java::lang::String* message);

    // Generated
    RecordFormatException(::java::lang::String* exception);
    RecordFormatException(::java::lang::String* exception, ::java::lang::Throwable* thr);
    RecordFormatException(::java::lang::Throwable* thr);
protected:
    RecordFormatException(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
