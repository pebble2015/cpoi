// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <javax/imageio/ImageReader.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace io
    {
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
    } // io

    namespace lang
    {
typedef ::SubArray< ::java::lang::Cloneable, ObjectArray > CloneableArray;
    } // lang

    namespace util
    {
typedef ::SubArray< ::java::util::Locale, ::java::lang::ObjectArray, ::java::lang::CloneableArray, ::java::io::SerializableArray > LocaleArray;
    } // util
} // java

extern void unimplemented_(const char16_t* name);
javax::imageio::ImageReader::ImageReader(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

javax::imageio::ImageReader::ImageReader(::javax::imageio::spi::ImageReaderSpi* originatingProvider)
    : ImageReader(*static_cast< ::default_init_tag* >(0))
{
    ctor(originatingProvider);
}


void ::javax::imageio::ImageReader::ctor(::javax::imageio::spi::ImageReaderSpi* originatingProvider)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::javax::imageio::ImageReader::ctor(::javax::imageio::spi::ImageReaderSpi* originatingProvider)");
}

void javax::imageio::ImageReader::abort()
{ /* stub */
    unimplemented_(u"void javax::imageio::ImageReader::abort()");
}

bool javax::imageio::ImageReader::abortRequested()
{ /* stub */
    unimplemented_(u"bool javax::imageio::ImageReader::abortRequested()");
    return 0;
}

void javax::imageio::ImageReader::addIIOReadProgressListener(::javax::imageio::event::IIOReadProgressListener* listener)
{ /* stub */
    unimplemented_(u"void javax::imageio::ImageReader::addIIOReadProgressListener(::javax::imageio::event::IIOReadProgressListener* listener)");
}

void javax::imageio::ImageReader::addIIOReadUpdateListener(::javax::imageio::event::IIOReadUpdateListener* listener)
{ /* stub */
    unimplemented_(u"void javax::imageio::ImageReader::addIIOReadUpdateListener(::javax::imageio::event::IIOReadUpdateListener* listener)");
}

void javax::imageio::ImageReader::addIIOReadWarningListener(::javax::imageio::event::IIOReadWarningListener* listener)
{ /* stub */
    unimplemented_(u"void javax::imageio::ImageReader::addIIOReadWarningListener(::javax::imageio::event::IIOReadWarningListener* listener)");
}

java::util::List* javax::imageio::ImageReader::addToList(::java::util::List* l, ::java::lang::Object* elt)
{ /* stub */
    clinit();
    unimplemented_(u"java::util::List* javax::imageio::ImageReader::addToList(::java::util::List* l, ::java::lang::Object* elt)");
    return 0;
}

bool javax::imageio::ImageReader::canReadRaster()
{ /* stub */
    unimplemented_(u"bool javax::imageio::ImageReader::canReadRaster()");
    return 0;
}

void javax::imageio::ImageReader::checkReadParamBandSettings(ImageReadParam* param, int32_t numSrcBands, int32_t numDstBands)
{ /* stub */
    clinit();
    unimplemented_(u"void javax::imageio::ImageReader::checkReadParamBandSettings(ImageReadParam* param, int32_t numSrcBands, int32_t numDstBands)");
}

void javax::imageio::ImageReader::clearAbortRequest()
{ /* stub */
    unimplemented_(u"void javax::imageio::ImageReader::clearAbortRequest()");
}

void javax::imageio::ImageReader::computeRegions(ImageReadParam* param, int32_t srcWidth, int32_t srcHeight, ::java::awt::image::BufferedImage* image, ::java::awt::Rectangle* srcRegion, ::java::awt::Rectangle* destRegion)
{ /* stub */
    clinit();
    unimplemented_(u"void javax::imageio::ImageReader::computeRegions(ImageReadParam* param, int32_t srcWidth, int32_t srcHeight, ::java::awt::image::BufferedImage* image, ::java::awt::Rectangle* srcRegion, ::java::awt::Rectangle* destRegion)");
}

void javax::imageio::ImageReader::dispose()
{ /* stub */
    unimplemented_(u"void javax::imageio::ImageReader::dispose()");
}

float javax::imageio::ImageReader::getAspectRatio(int32_t imageIndex)
{ /* stub */
    unimplemented_(u"float javax::imageio::ImageReader::getAspectRatio(int32_t imageIndex)");
    return 0;
}

java::util::LocaleArray* javax::imageio::ImageReader::getAvailableLocales()
{ /* stub */
return availableLocales ; /* getter */
}

javax::imageio::ImageReadParam* javax::imageio::ImageReader::getDefaultReadParam()
{ /* stub */
    unimplemented_(u"javax::imageio::ImageReadParam* javax::imageio::ImageReader::getDefaultReadParam()");
    return 0;
}

java::awt::image::BufferedImage* javax::imageio::ImageReader::getDestination(ImageReadParam* param, ::java::util::Iterator* imageTypes, int32_t width, int32_t height)
{ /* stub */
    clinit();
    unimplemented_(u"java::awt::image::BufferedImage* javax::imageio::ImageReader::getDestination(ImageReadParam* param, ::java::util::Iterator* imageTypes, int32_t width, int32_t height)");
    return 0;
}

java::lang::String* javax::imageio::ImageReader::getFormatName()
{ /* stub */
    unimplemented_(u"java::lang::String* javax::imageio::ImageReader::getFormatName()");
    return 0;
}

javax::imageio::metadata::IIOMetadata* javax::imageio::ImageReader::getImageMetadata(int32_t imageIndex, ::java::lang::String* formatName, ::java::util::Set* nodeNames)
{ /* stub */
    unimplemented_(u"javax::imageio::metadata::IIOMetadata* javax::imageio::ImageReader::getImageMetadata(int32_t imageIndex, ::java::lang::String* formatName, ::java::util::Set* nodeNames)");
    return 0;
}

java::lang::Object* javax::imageio::ImageReader::getInput()
{ /* stub */
return input ; /* getter */
}

java::util::Locale* javax::imageio::ImageReader::getLocale()
{ /* stub */
return locale ; /* getter */
}

/* private: javax::imageio::metadata::IIOMetadata* javax::imageio::ImageReader::getMetadata(::java::lang::String* formatName, ::java::util::Set* nodeNames, bool wantStream, int32_t imageIndex) */
int32_t javax::imageio::ImageReader::getMinIndex()
{ /* stub */
return minIndex ; /* getter */
}

int32_t javax::imageio::ImageReader::getNumThumbnails(int32_t imageIndex)
{ /* stub */
    unimplemented_(u"int32_t javax::imageio::ImageReader::getNumThumbnails(int32_t imageIndex)");
    return 0;
}

javax::imageio::spi::ImageReaderSpi* javax::imageio::ImageReader::getOriginatingProvider()
{ /* stub */
return originatingProvider ; /* getter */
}

javax::imageio::ImageTypeSpecifier* javax::imageio::ImageReader::getRawImageType(int32_t imageIndex)
{ /* stub */
    unimplemented_(u"javax::imageio::ImageTypeSpecifier* javax::imageio::ImageReader::getRawImageType(int32_t imageIndex)");
    return 0;
}

java::awt::Rectangle* javax::imageio::ImageReader::getSourceRegion(ImageReadParam* param, int32_t srcWidth, int32_t srcHeight)
{ /* stub */
    clinit();
    unimplemented_(u"java::awt::Rectangle* javax::imageio::ImageReader::getSourceRegion(ImageReadParam* param, int32_t srcWidth, int32_t srcHeight)");
    return 0;
}

javax::imageio::metadata::IIOMetadata* javax::imageio::ImageReader::getStreamMetadata(::java::lang::String* formatName, ::java::util::Set* nodeNames)
{ /* stub */
    unimplemented_(u"javax::imageio::metadata::IIOMetadata* javax::imageio::ImageReader::getStreamMetadata(::java::lang::String* formatName, ::java::util::Set* nodeNames)");
    return 0;
}

int32_t javax::imageio::ImageReader::getThumbnailHeight(int32_t imageIndex, int32_t thumbnailIndex)
{ /* stub */
    unimplemented_(u"int32_t javax::imageio::ImageReader::getThumbnailHeight(int32_t imageIndex, int32_t thumbnailIndex)");
    return 0;
}

int32_t javax::imageio::ImageReader::getThumbnailWidth(int32_t imageIndex, int32_t thumbnailIndex)
{ /* stub */
    unimplemented_(u"int32_t javax::imageio::ImageReader::getThumbnailWidth(int32_t imageIndex, int32_t thumbnailIndex)");
    return 0;
}

int32_t javax::imageio::ImageReader::getTileGridXOffset(int32_t imageIndex)
{ /* stub */
    unimplemented_(u"int32_t javax::imageio::ImageReader::getTileGridXOffset(int32_t imageIndex)");
    return 0;
}

int32_t javax::imageio::ImageReader::getTileGridYOffset(int32_t imageIndex)
{ /* stub */
    unimplemented_(u"int32_t javax::imageio::ImageReader::getTileGridYOffset(int32_t imageIndex)");
    return 0;
}

int32_t javax::imageio::ImageReader::getTileHeight(int32_t imageIndex)
{ /* stub */
    unimplemented_(u"int32_t javax::imageio::ImageReader::getTileHeight(int32_t imageIndex)");
    return 0;
}

int32_t javax::imageio::ImageReader::getTileWidth(int32_t imageIndex)
{ /* stub */
    unimplemented_(u"int32_t javax::imageio::ImageReader::getTileWidth(int32_t imageIndex)");
    return 0;
}

bool javax::imageio::ImageReader::hasThumbnails(int32_t imageIndex)
{ /* stub */
    unimplemented_(u"bool javax::imageio::ImageReader::hasThumbnails(int32_t imageIndex)");
    return 0;
}

bool javax::imageio::ImageReader::isIgnoringMetadata()
{ /* stub */
    unimplemented_(u"bool javax::imageio::ImageReader::isIgnoringMetadata()");
    return 0;
}

bool javax::imageio::ImageReader::isImageTiled(int32_t imageIndex)
{ /* stub */
    unimplemented_(u"bool javax::imageio::ImageReader::isImageTiled(int32_t imageIndex)");
    return 0;
}

bool javax::imageio::ImageReader::isRandomAccessEasy(int32_t imageIndex)
{ /* stub */
    unimplemented_(u"bool javax::imageio::ImageReader::isRandomAccessEasy(int32_t imageIndex)");
    return 0;
}

bool javax::imageio::ImageReader::isSeekForwardOnly()
{ /* stub */
    unimplemented_(u"bool javax::imageio::ImageReader::isSeekForwardOnly()");
    return 0;
}

void javax::imageio::ImageReader::processImageComplete()
{ /* stub */
    unimplemented_(u"void javax::imageio::ImageReader::processImageComplete()");
}

void javax::imageio::ImageReader::processImageProgress(float percentageDone)
{ /* stub */
    unimplemented_(u"void javax::imageio::ImageReader::processImageProgress(float percentageDone)");
}

void javax::imageio::ImageReader::processImageStarted(int32_t imageIndex)
{ /* stub */
    unimplemented_(u"void javax::imageio::ImageReader::processImageStarted(int32_t imageIndex)");
}

void javax::imageio::ImageReader::processImageUpdate(::java::awt::image::BufferedImage* theImage, int32_t minX, int32_t minY, int32_t width, int32_t height, int32_t periodX, int32_t periodY, ::int32_tArray* bands)
{ /* stub */
    unimplemented_(u"void javax::imageio::ImageReader::processImageUpdate(::java::awt::image::BufferedImage* theImage, int32_t minX, int32_t minY, int32_t width, int32_t height, int32_t periodX, int32_t periodY, ::int32_tArray* bands)");
}

void javax::imageio::ImageReader::processPassComplete(::java::awt::image::BufferedImage* theImage)
{ /* stub */
    unimplemented_(u"void javax::imageio::ImageReader::processPassComplete(::java::awt::image::BufferedImage* theImage)");
}

void javax::imageio::ImageReader::processPassStarted(::java::awt::image::BufferedImage* theImage, int32_t pass, int32_t minPass, int32_t maxPass, int32_t minX, int32_t minY, int32_t periodX, int32_t periodY, ::int32_tArray* bands)
{ /* stub */
    unimplemented_(u"void javax::imageio::ImageReader::processPassStarted(::java::awt::image::BufferedImage* theImage, int32_t pass, int32_t minPass, int32_t maxPass, int32_t minX, int32_t minY, int32_t periodX, int32_t periodY, ::int32_tArray* bands)");
}

void javax::imageio::ImageReader::processReadAborted()
{ /* stub */
    unimplemented_(u"void javax::imageio::ImageReader::processReadAborted()");
}

void javax::imageio::ImageReader::processSequenceComplete()
{ /* stub */
    unimplemented_(u"void javax::imageio::ImageReader::processSequenceComplete()");
}

void javax::imageio::ImageReader::processSequenceStarted(int32_t minIndex)
{ /* stub */
    unimplemented_(u"void javax::imageio::ImageReader::processSequenceStarted(int32_t minIndex)");
}

void javax::imageio::ImageReader::processThumbnailComplete()
{ /* stub */
    unimplemented_(u"void javax::imageio::ImageReader::processThumbnailComplete()");
}

void javax::imageio::ImageReader::processThumbnailPassComplete(::java::awt::image::BufferedImage* theThumbnail)
{ /* stub */
    unimplemented_(u"void javax::imageio::ImageReader::processThumbnailPassComplete(::java::awt::image::BufferedImage* theThumbnail)");
}

void javax::imageio::ImageReader::processThumbnailPassStarted(::java::awt::image::BufferedImage* theThumbnail, int32_t pass, int32_t minPass, int32_t maxPass, int32_t minX, int32_t minY, int32_t periodX, int32_t periodY, ::int32_tArray* bands)
{ /* stub */
    unimplemented_(u"void javax::imageio::ImageReader::processThumbnailPassStarted(::java::awt::image::BufferedImage* theThumbnail, int32_t pass, int32_t minPass, int32_t maxPass, int32_t minX, int32_t minY, int32_t periodX, int32_t periodY, ::int32_tArray* bands)");
}

void javax::imageio::ImageReader::processThumbnailProgress(float percentageDone)
{ /* stub */
    unimplemented_(u"void javax::imageio::ImageReader::processThumbnailProgress(float percentageDone)");
}

void javax::imageio::ImageReader::processThumbnailStarted(int32_t imageIndex, int32_t thumbnailIndex)
{ /* stub */
    unimplemented_(u"void javax::imageio::ImageReader::processThumbnailStarted(int32_t imageIndex, int32_t thumbnailIndex)");
}

void javax::imageio::ImageReader::processThumbnailUpdate(::java::awt::image::BufferedImage* theThumbnail, int32_t minX, int32_t minY, int32_t width, int32_t height, int32_t periodX, int32_t periodY, ::int32_tArray* bands)
{ /* stub */
    unimplemented_(u"void javax::imageio::ImageReader::processThumbnailUpdate(::java::awt::image::BufferedImage* theThumbnail, int32_t minX, int32_t minY, int32_t width, int32_t height, int32_t periodX, int32_t periodY, ::int32_tArray* bands)");
}

void javax::imageio::ImageReader::processWarningOccurred(::java::lang::String* warning)
{ /* stub */
    unimplemented_(u"void javax::imageio::ImageReader::processWarningOccurred(::java::lang::String* warning)");
}

void javax::imageio::ImageReader::processWarningOccurred(::java::lang::String* baseName, ::java::lang::String* keyword)
{ /* stub */
    unimplemented_(u"void javax::imageio::ImageReader::processWarningOccurred(::java::lang::String* baseName, ::java::lang::String* keyword)");
}

java::awt::image::BufferedImage* javax::imageio::ImageReader::read(int32_t imageIndex)
{ /* stub */
    unimplemented_(u"java::awt::image::BufferedImage* javax::imageio::ImageReader::read(int32_t imageIndex)");
    return 0;
}

java::util::Iterator* javax::imageio::ImageReader::readAll(::java::util::Iterator* params)
{ /* stub */
    unimplemented_(u"java::util::Iterator* javax::imageio::ImageReader::readAll(::java::util::Iterator* params)");
    return 0;
}

javax::imageio::IIOImage* javax::imageio::ImageReader::readAll(int32_t imageIndex, ImageReadParam* param)
{ /* stub */
    unimplemented_(u"javax::imageio::IIOImage* javax::imageio::ImageReader::readAll(int32_t imageIndex, ImageReadParam* param)");
    return 0;
}

java::awt::image::RenderedImage* javax::imageio::ImageReader::readAsRenderedImage(int32_t imageIndex, ImageReadParam* param)
{ /* stub */
    unimplemented_(u"java::awt::image::RenderedImage* javax::imageio::ImageReader::readAsRenderedImage(int32_t imageIndex, ImageReadParam* param)");
    return 0;
}

java::awt::image::Raster* javax::imageio::ImageReader::readRaster(int32_t imageIndex, ImageReadParam* param)
{ /* stub */
    unimplemented_(u"java::awt::image::Raster* javax::imageio::ImageReader::readRaster(int32_t imageIndex, ImageReadParam* param)");
    return 0;
}

java::awt::image::BufferedImage* javax::imageio::ImageReader::readThumbnail(int32_t imageIndex, int32_t thumbnailIndex)
{ /* stub */
    unimplemented_(u"java::awt::image::BufferedImage* javax::imageio::ImageReader::readThumbnail(int32_t imageIndex, int32_t thumbnailIndex)");
    return 0;
}

java::awt::image::BufferedImage* javax::imageio::ImageReader::readTile(int32_t imageIndex, int32_t tileX, int32_t tileY)
{ /* stub */
    unimplemented_(u"java::awt::image::BufferedImage* javax::imageio::ImageReader::readTile(int32_t imageIndex, int32_t tileX, int32_t tileY)");
    return 0;
}

java::awt::image::Raster* javax::imageio::ImageReader::readTileRaster(int32_t imageIndex, int32_t tileX, int32_t tileY)
{ /* stub */
    unimplemented_(u"java::awt::image::Raster* javax::imageio::ImageReader::readTileRaster(int32_t imageIndex, int32_t tileX, int32_t tileY)");
    return 0;
}

bool javax::imageio::ImageReader::readerSupportsThumbnails()
{ /* stub */
    unimplemented_(u"bool javax::imageio::ImageReader::readerSupportsThumbnails()");
    return 0;
}

void javax::imageio::ImageReader::removeAllIIOReadProgressListeners()
{ /* stub */
    unimplemented_(u"void javax::imageio::ImageReader::removeAllIIOReadProgressListeners()");
}

void javax::imageio::ImageReader::removeAllIIOReadUpdateListeners()
{ /* stub */
    unimplemented_(u"void javax::imageio::ImageReader::removeAllIIOReadUpdateListeners()");
}

void javax::imageio::ImageReader::removeAllIIOReadWarningListeners()
{ /* stub */
    unimplemented_(u"void javax::imageio::ImageReader::removeAllIIOReadWarningListeners()");
}

java::util::List* javax::imageio::ImageReader::removeFromList(::java::util::List* l, ::java::lang::Object* elt)
{ /* stub */
    clinit();
    unimplemented_(u"java::util::List* javax::imageio::ImageReader::removeFromList(::java::util::List* l, ::java::lang::Object* elt)");
    return 0;
}

void javax::imageio::ImageReader::removeIIOReadProgressListener(::javax::imageio::event::IIOReadProgressListener* listener)
{ /* stub */
    unimplemented_(u"void javax::imageio::ImageReader::removeIIOReadProgressListener(::javax::imageio::event::IIOReadProgressListener* listener)");
}

void javax::imageio::ImageReader::removeIIOReadUpdateListener(::javax::imageio::event::IIOReadUpdateListener* listener)
{ /* stub */
    unimplemented_(u"void javax::imageio::ImageReader::removeIIOReadUpdateListener(::javax::imageio::event::IIOReadUpdateListener* listener)");
}

void javax::imageio::ImageReader::removeIIOReadWarningListener(::javax::imageio::event::IIOReadWarningListener* listener)
{ /* stub */
    unimplemented_(u"void javax::imageio::ImageReader::removeIIOReadWarningListener(::javax::imageio::event::IIOReadWarningListener* listener)");
}

void javax::imageio::ImageReader::reset()
{ /* stub */
    unimplemented_(u"void javax::imageio::ImageReader::reset()");
}

void javax::imageio::ImageReader::setInput(::java::lang::Object* input)
{ /* stub */
    this->input = input; /* setter */
}

void javax::imageio::ImageReader::setInput(::java::lang::Object* input, bool seekForwardOnly)
{ /* stub */
}

void javax::imageio::ImageReader::setInput(::java::lang::Object* input, bool seekForwardOnly, bool ignoreMetadata)
{ /* stub */
}

void javax::imageio::ImageReader::setLocale(::java::util::Locale* locale)
{ /* stub */
    this->locale = locale; /* setter */
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* javax::imageio::ImageReader::class_()
{
    static ::java::lang::Class* c = ::class_(u"javax.imageio.ImageReader", 25);
    return c;
}

java::lang::Class* javax::imageio::ImageReader::getClass0()
{
    return class_();
}

