// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <java/awt/image/fwd-POI.hpp>
#include <javax/imageio/fwd-POI.hpp>
#include <javax/imageio/IIOParam.hpp>

struct default_init_tag;

class javax::imageio::ImageReadParam
    : public IIOParam
{

public:
    typedef IIOParam super;

public: /* protected */
    bool canSetSourceRenderSize_ {  };
    ::java::awt::image::BufferedImage* destination {  };
    ::int32_tArray* destinationBands {  };
    int32_t minProgressivePass {  };
    int32_t numProgressivePasses {  };
    ::java::awt::Dimension* sourceRenderSize {  };

protected:
    void ctor();

public:
    virtual bool canSetSourceRenderSize();
    virtual ::java::awt::image::BufferedImage* getDestination();
    virtual ::int32_tArray* getDestinationBands();
    virtual int32_t getSourceMaxProgressivePass();
    virtual int32_t getSourceMinProgressivePass();
    virtual int32_t getSourceNumProgressivePasses();
    virtual ::java::awt::Dimension* getSourceRenderSize();
    virtual void setDestination(::java::awt::image::BufferedImage* destination);
    virtual void setDestinationBands(::int32_tArray* destinationBands);
    void setDestinationType(ImageTypeSpecifier* destinationType) override;
    virtual void setSourceProgressivePasses(int32_t minPass, int32_t numPasses);
    virtual void setSourceRenderSize(::java::awt::Dimension* size);

    // Generated
    ImageReadParam();
protected:
    ImageReadParam(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
