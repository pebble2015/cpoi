// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <javax/imageio/stream/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <sun/java2d/DisposerRecord.hpp>

struct default_init_tag;

class javax::imageio::stream::MemoryCacheImageInputStream_StreamDisposerRecord
    : public virtual ::java::lang::Object
    , public virtual ::sun::java2d::DisposerRecord
{

public:
    typedef ::java::lang::Object super;

private:
    MemoryCache* cache {  };

protected:
    void ctor(MemoryCache* cache);

public:
    void dispose() override;

    // Generated
    MemoryCacheImageInputStream_StreamDisposerRecord(MemoryCache* cache);
protected:
    MemoryCacheImageInputStream_StreamDisposerRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
