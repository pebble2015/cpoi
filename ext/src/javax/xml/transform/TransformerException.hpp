// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/security/fwd-POI.hpp>
#include <javax/xml/transform/fwd-POI.hpp>
#include <java/lang/Exception.hpp>

struct default_init_tag;

class javax::xml::transform::TransformerException
    : public ::java::lang::Exception
{

public:
    typedef ::java::lang::Exception super;

public: /* package */
    ::java::lang::Throwable* containedException {  };
    SourceLocator* locator {  };

private:
    static constexpr int64_t serialVersionUID { int64_t(975798773772956428LL) };

protected:
    void ctor(::java::lang::String* message);
    void ctor(::java::lang::Throwable* e);
    void ctor(::java::lang::String* message, ::java::lang::Throwable* e);
    void ctor(::java::lang::String* message, SourceLocator* locator);
    void ctor(::java::lang::String* message, SourceLocator* locator, ::java::lang::Throwable* e);

public:
    ::java::lang::Throwable* getCause() override;
    virtual ::java::lang::Throwable* getException();
    virtual ::java::lang::String* getLocationAsString();
    /*::java::lang::String* getLocationString(); (private) */
    virtual SourceLocator* getLocator();
    virtual ::java::lang::String* getMessageAndLocation();
    /*::java::security::ProtectionDomain* getNonPrivDomain(); (private) */
    ::java::lang::Throwable* initCause(::java::lang::Throwable* cause) override;
    void printStackTrace() override;
    void printStackTrace(::java::io::PrintStream* s) override;
    void printStackTrace(::java::io::PrintWriter* s) override;
    virtual void setLocator(SourceLocator* location);

    // Generated
    TransformerException(::java::lang::String* message);
    TransformerException(::java::lang::Throwable* e);
    TransformerException(::java::lang::String* message, ::java::lang::Throwable* e);
    TransformerException(::java::lang::String* message, SourceLocator* locator);
    TransformerException(::java::lang::String* message, SourceLocator* locator, ::java::lang::Throwable* e);
protected:
    TransformerException(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
