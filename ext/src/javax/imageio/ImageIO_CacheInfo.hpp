// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <javax/imageio/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class javax::imageio::ImageIO_CacheInfo
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

public: /* package */
    ::java::io::File* cacheDirectory {  };
    ::java::lang::Boolean* hasPermission {  };
    bool useCache {  };

protected:
    void ctor();

public:
    virtual ::java::io::File* getCacheDirectory();
    virtual ::java::lang::Boolean* getHasPermission();
    virtual bool getUseCache();
    virtual void setCacheDirectory(::java::io::File* cacheDirectory);
    virtual void setHasPermission(::java::lang::Boolean* hasPermission);
    virtual void setUseCache(bool useCache);

    // Generated
    ImageIO_CacheInfo();
protected:
    ImageIO_CacheInfo(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
