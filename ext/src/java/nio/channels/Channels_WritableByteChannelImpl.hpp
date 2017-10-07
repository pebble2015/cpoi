// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/nio/fwd-POI.hpp>
#include <java/nio/channels/fwd-POI.hpp>
#include <java/nio/channels/spi/AbstractInterruptibleChannel.hpp>
#include <java/nio/channels/WritableByteChannel.hpp>

struct default_init_tag;

class java::nio::channels::Channels_WritableByteChannelImpl
    : public ::java::nio::channels::spi::AbstractInterruptibleChannel
    , public virtual WritableByteChannel
{

public:
    typedef ::java::nio::channels::spi::AbstractInterruptibleChannel super;

private:
    static constexpr int32_t TRANSFER_SIZE { int32_t(8192) };
    ::int8_tArray* buf {  };
    bool open {  };

public: /* package */
    ::java::io::OutputStream* out {  };

private:
    ::java::lang::Object* writeLock {  };

protected:
    void ctor(::java::io::OutputStream* out);

public: /* protected */
    void implCloseChannel() override;

public:
    int32_t write(::java::nio::ByteBuffer* src) override;

    // Generated

public: /* package */
    Channels_WritableByteChannelImpl(::java::io::OutputStream* out);
protected:
    Channels_WritableByteChannelImpl(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    void close();
    virtual bool isOpen();

private:
    virtual ::java::lang::Class* getClass0();
};
