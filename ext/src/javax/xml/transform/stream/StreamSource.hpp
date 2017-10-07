// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <javax/xml/transform/stream/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <javax/xml/transform/Source.hpp>

struct default_init_tag;

class javax::xml::transform::stream::StreamSource
    : public virtual ::java::lang::Object
    , public virtual ::javax::xml::transform::Source
{

public:
    typedef ::java::lang::Object super;

private:
    static ::java::lang::String* FEATURE_;
    ::java::io::InputStream* inputStream {  };
    ::java::lang::String* publicId {  };
    ::java::io::Reader* reader {  };
    ::java::lang::String* systemId {  };

protected:
    void ctor();
    void ctor(::java::io::InputStream* inputStream);
    void ctor(::java::io::Reader* reader);
    void ctor(::java::lang::String* systemId);
    void ctor(::java::io::File* f);
    void ctor(::java::io::InputStream* inputStream, ::java::lang::String* systemId);
    void ctor(::java::io::Reader* reader, ::java::lang::String* systemId);

public:
    virtual ::java::io::InputStream* getInputStream();
    virtual ::java::lang::String* getPublicId();
    virtual ::java::io::Reader* getReader();
    ::java::lang::String* getSystemId() override;
    virtual void setInputStream(::java::io::InputStream* inputStream);
    virtual void setPublicId(::java::lang::String* publicId);
    virtual void setReader(::java::io::Reader* reader);
    void setSystemId(::java::lang::String* systemId) override;
    virtual void setSystemId(::java::io::File* f);

    // Generated
    StreamSource();
    StreamSource(::java::io::InputStream* inputStream);
    StreamSource(::java::io::Reader* reader);
    StreamSource(::java::lang::String* systemId);
    StreamSource(::java::io::File* f);
    StreamSource(::java::io::InputStream* inputStream, ::java::lang::String* systemId);
    StreamSource(::java::io::Reader* reader, ::java::lang::String* systemId);
protected:
    StreamSource(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static ::java::lang::String*& FEATURE();

private:
    virtual ::java::lang::Class* getClass0();
};
