// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/nio/fwd-POI.hpp>
#include <java/util/zip/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/util/zip/Checksum.hpp>

struct default_init_tag;

class java::util::zip::CRC32
    : public virtual ::java::lang::Object
    , public virtual Checksum
{

public:
    typedef ::java::lang::Object super;

private:
    static bool $assertionsDisabled_;
    int32_t crc {  };

protected:
    void ctor();

public:
    int64_t getValue() override;
    void reset() override;
    void update(int32_t b) override;
    virtual void update(::int8_tArray* b);
    virtual void update(::java::nio::ByteBuffer* buffer);
    /*static int32_t update(int32_t crc, int32_t b); (private) */
    void update(::int8_tArray* b, int32_t off, int32_t len) override;
    /*static int32_t updateByteBuffer(int32_t adler, int64_t addr, int32_t off, int32_t len); (private) */
    /*static int32_t updateBytes(int32_t crc, ::int8_tArray* b, int32_t off, int32_t len); (private) */

    // Generated
    CRC32();
protected:
    CRC32(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

public: /* package */
    static bool& $assertionsDisabled();

private:
    virtual ::java::lang::Class* getClass0();
};
