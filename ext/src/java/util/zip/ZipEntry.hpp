// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/nio/file/attribute/fwd-POI.hpp>
#include <java/util/zip/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/util/zip/ZipConstants.hpp>
#include <java/lang/Cloneable.hpp>

struct default_init_tag;

class java::util::zip::ZipEntry
    : public virtual ::java::lang::Object
    , public virtual ZipConstants
    , public virtual ::java::lang::Cloneable
{

public:
    typedef ::java::lang::Object super;
    static constexpr int32_t DEFLATED { int32_t(8) };

public: /* package */
    static constexpr int64_t DOSTIME_BEFORE_1980 { int64_t(2162688LL) };

public:
    static constexpr int32_t STORED { int32_t(0) };

private:
    static constexpr int64_t UPPER_DOSTIME_BOUND { int64_t(4036608000000LL) };

public: /* package */
    ::java::nio::file::attribute::FileTime* atime {  };
    ::java::lang::String* comment {  };
    int64_t crc {  };
    int64_t csize {  };
    ::java::nio::file::attribute::FileTime* ctime {  };
    ::int8_tArray* extra {  };
    int32_t flag {  };
    int32_t method {  };
    ::java::nio::file::attribute::FileTime* mtime {  };
    ::java::lang::String* name {  };
    int64_t size {  };
    int64_t xdostime {  };

protected:
    void ctor();
    void ctor(::java::lang::String* name);
    void ctor(ZipEntry* e);

public:
    ::java::lang::Object* clone() override;
    virtual ::java::lang::String* getComment();
    virtual int64_t getCompressedSize();
    virtual int64_t getCrc();
    virtual ::java::nio::file::attribute::FileTime* getCreationTime();
    virtual ::int8_tArray* getExtra();
    virtual ::java::nio::file::attribute::FileTime* getLastAccessTime();
    virtual ::java::nio::file::attribute::FileTime* getLastModifiedTime();
    virtual int32_t getMethod();
    virtual ::java::lang::String* getName();
    virtual int64_t getSize();
    virtual int64_t getTime();
    int32_t hashCode() override;
    virtual bool isDirectory();
    virtual void setComment(::java::lang::String* comment);
    virtual void setCompressedSize(int64_t csize);
    virtual void setCrc(int64_t crc);
    virtual ZipEntry* setCreationTime(::java::nio::file::attribute::FileTime* time);
    virtual void setExtra(::int8_tArray* extra);

public: /* package */
    virtual void setExtra0(::int8_tArray* extra, bool doZIP64);

public:
    virtual ZipEntry* setLastAccessTime(::java::nio::file::attribute::FileTime* time);
    virtual ZipEntry* setLastModifiedTime(::java::nio::file::attribute::FileTime* time);
    virtual void setMethod(int32_t method);
    virtual void setSize(int64_t size);
    virtual void setTime(int64_t time);
    ::java::lang::String* toString() override;

    // Generated

public: /* package */
    ZipEntry();

public:
    ZipEntry(::java::lang::String* name);
    ZipEntry(ZipEntry* e);
protected:
    ZipEntry(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
