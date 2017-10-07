// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <javax/xml/transform/stream/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <javax/xml/transform/Result.hpp>

struct default_init_tag;

class javax::xml::transform::stream::StreamResult
    : public virtual ::java::lang::Object
    , public virtual ::javax::xml::transform::Result
{

public:
    typedef ::java::lang::Object super;

private:
    static ::java::lang::String* FEATURE_;
    ::java::io::OutputStream* outputStream {  };
    ::java::lang::String* systemId {  };
    ::java::io::Writer* writer {  };

protected:
    void ctor();
    void ctor(::java::io::OutputStream* outputStream);
    void ctor(::java::io::Writer* writer);
    void ctor(::java::lang::String* systemId);
    void ctor(::java::io::File* f);

public:
    virtual ::java::io::OutputStream* getOutputStream();
    ::java::lang::String* getSystemId() override;
    virtual ::java::io::Writer* getWriter();
    virtual void setOutputStream(::java::io::OutputStream* outputStream);
    void setSystemId(::java::lang::String* systemId) override;
    virtual void setSystemId(::java::io::File* f);
    virtual void setWriter(::java::io::Writer* writer);

    // Generated
    StreamResult();
    StreamResult(::java::io::OutputStream* outputStream);
    StreamResult(::java::io::Writer* writer);
    StreamResult(::java::lang::String* systemId);
    StreamResult(::java::io::File* f);
protected:
    StreamResult(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static ::java::lang::String*& FEATURE();

private:
    virtual ::java::lang::Class* getClass0();
};
