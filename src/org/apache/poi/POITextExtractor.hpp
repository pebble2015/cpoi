// Generated from /POI/java/org/apache/poi/POITextExtractor.java

#pragma once

#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/io/Closeable.hpp>

struct default_init_tag;

class poi::POITextExtractor
    : public virtual ::java::lang::Object
    , public virtual ::java::io::Closeable
{

public:
    typedef ::java::lang::Object super;

private:
    ::java::io::Closeable* fsToClose {  };

public:
    virtual ::java::lang::String* getText() = 0;
    virtual POITextExtractor* getMetadataTextExtractor() = 0;
    virtual void setFilesystem(::java::io::Closeable* fs);
    void close() /* throws(IOException) */ override;

    // Generated
    POITextExtractor();
protected:
    void ctor();
    POITextExtractor(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    void init();
    virtual ::java::lang::Class* getClass0();
};
