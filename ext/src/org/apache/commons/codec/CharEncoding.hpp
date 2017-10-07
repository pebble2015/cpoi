// Generated from /POI/commons-codec-1.10.jar

#pragma once

#include <java/lang/fwd-POI.hpp>
#include <org/apache/commons/codec/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::commons::codec::CharEncoding
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static ::java::lang::String* ISO_8859_1_;
    static ::java::lang::String* US_ASCII_;
    static ::java::lang::String* UTF_16_;
    static ::java::lang::String* UTF_16BE_;
    static ::java::lang::String* UTF_16LE_;
    static ::java::lang::String* UTF_8_;

protected:
    void ctor();

    // Generated

public:
    CharEncoding();
protected:
    CharEncoding(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static ::java::lang::String*& ISO_8859_1();
    static ::java::lang::String*& US_ASCII();
    static ::java::lang::String*& UTF_16();
    static ::java::lang::String*& UTF_16BE();
    static ::java::lang::String*& UTF_16LE();
    static ::java::lang::String*& UTF_8();

private:
    virtual ::java::lang::Class* getClass0();
};
