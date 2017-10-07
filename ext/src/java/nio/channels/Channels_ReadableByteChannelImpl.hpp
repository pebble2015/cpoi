// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/nio/fwd-POI.hpp>
#include <java/nio/channels/fwd-POI.hpp>
#include <java/nio/channels/spi/AbstractInterruptibleChannel.hpp>
#include <java/nio/channels/ReadableByteChannel.hpp>

struct default_init_tag;

class java::nio::channels::Channels_ReadableByteChannelImpl
    : public ::java::nio::channels::spi::AbstractInterruptibleChannel
    , public virtual ReadableByteChannel
{

public:
    typedef ::java::nio::channels::spi::AbstractInterruptibleChannel super;

private:
    static constexpr int32_t TRANSFER_SIZE { int32_t(8192) };
    ::int8_tArray* buf {  };

public: /* package */
    ::java::io::InputStream* in {  };

private:
    bool open {  };
    ::java::lang::Object* readLock {  };

protected:
    void ctor(::java::io::InputStream* in);

public: /* protected */
    void implCloseChannel() override;

public:
    int32_t read(::java::nio::ByteBuffer* dst) override;

    // Generated

public: /* package */
    Channels_ReadableByteChannelImpl(::java::io::InputStream* in);
protected:
    Channels_ReadableByteChannelImpl(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    void close();
    virtual bool isOpen();

private:
    virtual ::java::lang::Class* getClass0();
};
