// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/Cloneable.hpp>

struct default_init_tag;

class java::awt::BufferCapabilities
    : public virtual ::java::lang::Object
    , public virtual ::java::lang::Cloneable
{

public:
    typedef ::java::lang::Object super;

private:
    ImageCapabilities* backCaps {  };
    BufferCapabilities_FlipContents* flipContents {  };
    ImageCapabilities* frontCaps {  };

protected:
    void ctor(ImageCapabilities* frontCaps, ImageCapabilities* backCaps, BufferCapabilities_FlipContents* flipContents);

public:
    ::java::lang::Object* clone() override;
    virtual ImageCapabilities* getBackBufferCapabilities();
    virtual BufferCapabilities_FlipContents* getFlipContents();
    virtual ImageCapabilities* getFrontBufferCapabilities();
    virtual bool isFullScreenRequired();
    virtual bool isMultiBufferAvailable();
    virtual bool isPageFlipping();

    // Generated
    BufferCapabilities(ImageCapabilities* frontCaps, ImageCapabilities* backCaps, BufferCapabilities_FlipContents* flipContents);
protected:
    BufferCapabilities(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
