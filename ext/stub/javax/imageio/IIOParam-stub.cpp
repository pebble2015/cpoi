// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <javax/imageio/IIOParam.hpp>

extern void unimplemented_(const char16_t* name);
javax::imageio::IIOParam::IIOParam(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

javax::imageio::IIOParam::IIOParam()
    : IIOParam(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}


void ::javax::imageio::IIOParam::ctor()
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::javax::imageio::IIOParam::ctor()");
}

bool javax::imageio::IIOParam::activateController()
{ /* stub */
    unimplemented_(u"bool javax::imageio::IIOParam::activateController()");
    return 0;
}

javax::imageio::IIOParamController* javax::imageio::IIOParam::getController()
{ /* stub */
return controller ; /* getter */
}

javax::imageio::IIOParamController* javax::imageio::IIOParam::getDefaultController()
{ /* stub */
return defaultController ; /* getter */
}

java::awt::Point* javax::imageio::IIOParam::getDestinationOffset()
{ /* stub */
return destinationOffset ; /* getter */
}

javax::imageio::ImageTypeSpecifier* javax::imageio::IIOParam::getDestinationType()
{ /* stub */
return destinationType ; /* getter */
}

int32_tArray* javax::imageio::IIOParam::getSourceBands()
{ /* stub */
return sourceBands ; /* getter */
}

java::awt::Rectangle* javax::imageio::IIOParam::getSourceRegion()
{ /* stub */
return sourceRegion ; /* getter */
}

int32_t javax::imageio::IIOParam::getSourceXSubsampling()
{ /* stub */
return sourceXSubsampling ; /* getter */
}

int32_t javax::imageio::IIOParam::getSourceYSubsampling()
{ /* stub */
return sourceYSubsampling ; /* getter */
}

int32_t javax::imageio::IIOParam::getSubsamplingXOffset()
{ /* stub */
return subsamplingXOffset ; /* getter */
}

int32_t javax::imageio::IIOParam::getSubsamplingYOffset()
{ /* stub */
return subsamplingYOffset ; /* getter */
}

bool javax::imageio::IIOParam::hasController()
{ /* stub */
    unimplemented_(u"bool javax::imageio::IIOParam::hasController()");
    return 0;
}

void javax::imageio::IIOParam::setController(IIOParamController* controller)
{ /* stub */
    this->controller = controller; /* setter */
}

void javax::imageio::IIOParam::setDestinationOffset(::java::awt::Point* destinationOffset)
{ /* stub */
    this->destinationOffset = destinationOffset; /* setter */
}

void javax::imageio::IIOParam::setDestinationType(ImageTypeSpecifier* destinationType)
{ /* stub */
    this->destinationType = destinationType; /* setter */
}

void javax::imageio::IIOParam::setSourceBands(::int32_tArray* sourceBands)
{ /* stub */
    this->sourceBands = sourceBands; /* setter */
}

void javax::imageio::IIOParam::setSourceRegion(::java::awt::Rectangle* sourceRegion)
{ /* stub */
    this->sourceRegion = sourceRegion; /* setter */
}

void javax::imageio::IIOParam::setSourceSubsampling(int32_t sourceXSubsampling, int32_t sourceYSubsampling, int32_t subsamplingXOffset, int32_t subsamplingYOffset)
{ /* stub */
    unimplemented_(u"void javax::imageio::IIOParam::setSourceSubsampling(int32_t sourceXSubsampling, int32_t sourceYSubsampling, int32_t subsamplingXOffset, int32_t subsamplingYOffset)");
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* javax::imageio::IIOParam::class_()
{
    static ::java::lang::Class* c = ::class_(u"javax.imageio.IIOParam", 22);
    return c;
}

java::lang::Class* javax::imageio::IIOParam::getClass0()
{
    return class_();
}

