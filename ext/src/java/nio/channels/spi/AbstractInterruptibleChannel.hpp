// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <atomic>
#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/nio/channels/spi/fwd-POI.hpp>
#include <sun/nio/ch/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/nio/channels/Channel.hpp>
#include <java/nio/channels/InterruptibleChannel.hpp>

struct default_init_tag;

class java::nio::channels::spi::AbstractInterruptibleChannel
    : public virtual ::java::lang::Object
    , public virtual ::java::nio::channels::Channel
    , public virtual ::java::nio::channels::InterruptibleChannel
{

public:
    typedef ::java::lang::Object super;

private:
    ::java::lang::Object* closeLock {  };
    std::atomic< ::java::lang::Thread* > interrupted {  };
    ::sun::nio::ch::Interruptible* interruptor {  };
    std::atomic< bool > open {  };

protected:
    void ctor();

public: /* protected */
    void begin();

public: /* package */
    static void blockedOn(::sun::nio::ch::Interruptible* intr);

public:
    void close() override;

public: /* protected */
    void end(bool completed);
    virtual void implCloseChannel() = 0;

public:
    bool isOpen() override;

    // Generated

public: /* protected */
    AbstractInterruptibleChannel();
protected:
    AbstractInterruptibleChannel(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
