// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <javax/imageio/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class javax::imageio::IIOParam
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

public: /* protected */
    IIOParamController* controller {  };
    IIOParamController* defaultController {  };
    ::java::awt::Point* destinationOffset {  };
    ImageTypeSpecifier* destinationType {  };
    ::int32_tArray* sourceBands {  };
    ::java::awt::Rectangle* sourceRegion {  };
    int32_t sourceXSubsampling {  };
    int32_t sourceYSubsampling {  };
    int32_t subsamplingXOffset {  };
    int32_t subsamplingYOffset {  };

protected:
    void ctor();

public:
    virtual bool activateController();
    virtual IIOParamController* getController();
    virtual IIOParamController* getDefaultController();
    virtual ::java::awt::Point* getDestinationOffset();
    virtual ImageTypeSpecifier* getDestinationType();
    virtual ::int32_tArray* getSourceBands();
    virtual ::java::awt::Rectangle* getSourceRegion();
    virtual int32_t getSourceXSubsampling();
    virtual int32_t getSourceYSubsampling();
    virtual int32_t getSubsamplingXOffset();
    virtual int32_t getSubsamplingYOffset();
    virtual bool hasController();
    virtual void setController(IIOParamController* controller);
    virtual void setDestinationOffset(::java::awt::Point* destinationOffset);
    virtual void setDestinationType(ImageTypeSpecifier* destinationType);
    virtual void setSourceBands(::int32_tArray* sourceBands);
    virtual void setSourceRegion(::java::awt::Rectangle* sourceRegion);
    virtual void setSourceSubsampling(int32_t sourceXSubsampling, int32_t sourceYSubsampling, int32_t subsamplingXOffset, int32_t subsamplingYOffset);

    // Generated

public: /* protected */
    IIOParam();
protected:
    IIOParam(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
