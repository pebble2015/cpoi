// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <atomic>
#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <javax/xml/bind/fwd-POI.hpp>
#include <java/lang/Exception.hpp>

struct default_init_tag;

class javax::xml::bind::JAXBException
    : public ::java::lang::Exception
{

public:
    typedef ::java::lang::Exception super;

private:
    ::java::lang::String* errorCode {  };
    std::atomic< ::java::lang::Throwable* > linkedException {  };

public: /* package */
    static constexpr int64_t serialVersionUID { int64_t(-5621384651494307979LL) };

protected:
    void ctor(::java::lang::String* message);
    void ctor(::java::lang::Throwable* exception);
    void ctor(::java::lang::String* message, ::java::lang::String* errorCode);
    void ctor(::java::lang::String* message, ::java::lang::Throwable* exception);
    void ctor(::java::lang::String* message, ::java::lang::String* errorCode, ::java::lang::Throwable* exception);

public:
    ::java::lang::Throwable* getCause() override;
    virtual ::java::lang::String* getErrorCode();
    virtual ::java::lang::Throwable* getLinkedException();
    void printStackTrace() override;
    void printStackTrace(::java::io::PrintStream* s) override;
    void printStackTrace(::java::io::PrintWriter* s) override;
    virtual void setLinkedException(::java::lang::Throwable* exception);
    ::java::lang::String* toString() override;

    // Generated
    JAXBException(::java::lang::String* message);
    JAXBException(::java::lang::Throwable* exception);
    JAXBException(::java::lang::String* message, ::java::lang::String* errorCode);
    JAXBException(::java::lang::String* message, ::java::lang::Throwable* exception);
    JAXBException(::java::lang::String* message, ::java::lang::String* errorCode, ::java::lang::Throwable* exception);
protected:
    JAXBException(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
