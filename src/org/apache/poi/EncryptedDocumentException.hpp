// Generated from /POI/java/org/apache/poi/EncryptedDocumentException.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/fwd-POI.hpp>
#include <java/lang/IllegalStateException.hpp>

struct default_init_tag;

class org::apache::poi::EncryptedDocumentException
    : public ::java::lang::IllegalStateException
{

public:
    typedef ::java::lang::IllegalStateException super;

private:
    static constexpr int64_t serialVersionUID { int64_t(7276950444540469193LL) };
protected:
    void ctor(::java::lang::String* s);
    void ctor(::java::lang::String* message, ::java::lang::Throwable* cause);
    void ctor(::java::lang::Throwable* cause);

    // Generated

public:
    EncryptedDocumentException(::java::lang::String* s);
    EncryptedDocumentException(::java::lang::String* message, ::java::lang::Throwable* cause);
    EncryptedDocumentException(::java::lang::Throwable* cause);
protected:
    EncryptedDocumentException(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
