// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <javax/imageio/stream/fwd-POI.hpp>
#include <sun/java2d/fwd-POI.hpp>
#include <javax/imageio/stream/ImageInputStreamImpl.hpp>

struct default_init_tag;

class javax::imageio::stream::MemoryCacheImageInputStream
    : public ImageInputStreamImpl
{

public:
    typedef ImageInputStreamImpl super;

private:
    MemoryCache* cache {  };
    ::sun::java2d::DisposerRecord* disposerRecord {  };
    ::java::lang::Object* disposerReferent {  };
    ::java::io::InputStream* stream {  };

protected:
    void ctor(::java::io::InputStream* stream);

public:
    void close() override;

public: /* protected */
    void finalize() override;

public:
    void flushBefore(int64_t pos) override;
    bool isCached() override;
    bool isCachedFile() override;
    bool isCachedMemory() override;
    int32_t read() override;
    int32_t read(::int8_tArray* b, int32_t off, int32_t len) override;

    // Generated
    MemoryCacheImageInputStream(::java::io::InputStream* stream);
protected:
    MemoryCacheImageInputStream(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    int32_t read(::int8_tArray* b);

private:
    virtual ::java::lang::Class* getClass0();
};
