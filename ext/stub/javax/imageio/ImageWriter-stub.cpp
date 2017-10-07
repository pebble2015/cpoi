// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <javax/imageio/ImageWriter.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace lang
    {
typedef ::SubArray< ::java::lang::Cloneable, ObjectArray > CloneableArray;
    } // lang

    namespace awt
    {
        namespace geom
        {
typedef ::SubArray< ::java::awt::geom::Dimension2D, ::java::lang::ObjectArray, ::java::lang::CloneableArray > Dimension2DArray;
        } // geom
    } // awt

    namespace io
    {
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
    } // io

    namespace awt
    {
typedef ::SubArray< ::java::awt::Dimension, ::java::awt::geom::Dimension2DArray, ::java::io::SerializableArray > DimensionArray;
    } // awt

    namespace util
    {
typedef ::SubArray< ::java::util::Locale, ::java::lang::ObjectArray, ::java::lang::CloneableArray, ::java::io::SerializableArray > LocaleArray;
    } // util
} // java

extern void unimplemented_(const char16_t* name);
javax::imageio::ImageWriter::ImageWriter(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

javax::imageio::ImageWriter::ImageWriter(::javax::imageio::spi::ImageWriterSpi* originatingProvider)
    : ImageWriter(*static_cast< ::default_init_tag* >(0))
{
    ctor(originatingProvider);
}


void ::javax::imageio::ImageWriter::ctor(::javax::imageio::spi::ImageWriterSpi* originatingProvider)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::javax::imageio::ImageWriter::ctor(::javax::imageio::spi::ImageWriterSpi* originatingProvider)");
}

void javax::imageio::ImageWriter::abort()
{ /* stub */
    unimplemented_(u"void javax::imageio::ImageWriter::abort()");
}

bool javax::imageio::ImageWriter::abortRequested()
{ /* stub */
    unimplemented_(u"bool javax::imageio::ImageWriter::abortRequested()");
    return 0;
}

void javax::imageio::ImageWriter::addIIOWriteProgressListener(::javax::imageio::event::IIOWriteProgressListener* listener)
{ /* stub */
    unimplemented_(u"void javax::imageio::ImageWriter::addIIOWriteProgressListener(::javax::imageio::event::IIOWriteProgressListener* listener)");
}

void javax::imageio::ImageWriter::addIIOWriteWarningListener(::javax::imageio::event::IIOWriteWarningListener* listener)
{ /* stub */
    unimplemented_(u"void javax::imageio::ImageWriter::addIIOWriteWarningListener(::javax::imageio::event::IIOWriteWarningListener* listener)");
}

bool javax::imageio::ImageWriter::canInsertEmpty(int32_t imageIndex)
{ /* stub */
    unimplemented_(u"bool javax::imageio::ImageWriter::canInsertEmpty(int32_t imageIndex)");
    return 0;
}

bool javax::imageio::ImageWriter::canInsertImage(int32_t imageIndex)
{ /* stub */
    unimplemented_(u"bool javax::imageio::ImageWriter::canInsertImage(int32_t imageIndex)");
    return 0;
}

bool javax::imageio::ImageWriter::canRemoveImage(int32_t imageIndex)
{ /* stub */
    unimplemented_(u"bool javax::imageio::ImageWriter::canRemoveImage(int32_t imageIndex)");
    return 0;
}

bool javax::imageio::ImageWriter::canReplaceImageMetadata(int32_t imageIndex)
{ /* stub */
    unimplemented_(u"bool javax::imageio::ImageWriter::canReplaceImageMetadata(int32_t imageIndex)");
    return 0;
}

bool javax::imageio::ImageWriter::canReplacePixels(int32_t imageIndex)
{ /* stub */
    unimplemented_(u"bool javax::imageio::ImageWriter::canReplacePixels(int32_t imageIndex)");
    return 0;
}

bool javax::imageio::ImageWriter::canReplaceStreamMetadata()
{ /* stub */
    unimplemented_(u"bool javax::imageio::ImageWriter::canReplaceStreamMetadata()");
    return 0;
}

bool javax::imageio::ImageWriter::canWriteEmpty()
{ /* stub */
    unimplemented_(u"bool javax::imageio::ImageWriter::canWriteEmpty()");
    return 0;
}

bool javax::imageio::ImageWriter::canWriteRasters()
{ /* stub */
    unimplemented_(u"bool javax::imageio::ImageWriter::canWriteRasters()");
    return 0;
}

bool javax::imageio::ImageWriter::canWriteSequence()
{ /* stub */
    unimplemented_(u"bool javax::imageio::ImageWriter::canWriteSequence()");
    return 0;
}

void javax::imageio::ImageWriter::clearAbortRequest()
{ /* stub */
    unimplemented_(u"void javax::imageio::ImageWriter::clearAbortRequest()");
}

void javax::imageio::ImageWriter::dispose()
{ /* stub */
    unimplemented_(u"void javax::imageio::ImageWriter::dispose()");
}

void javax::imageio::ImageWriter::endInsertEmpty()
{ /* stub */
    unimplemented_(u"void javax::imageio::ImageWriter::endInsertEmpty()");
}

void javax::imageio::ImageWriter::endReplacePixels()
{ /* stub */
    unimplemented_(u"void javax::imageio::ImageWriter::endReplacePixels()");
}

void javax::imageio::ImageWriter::endWriteEmpty()
{ /* stub */
    unimplemented_(u"void javax::imageio::ImageWriter::endWriteEmpty()");
}

void javax::imageio::ImageWriter::endWriteSequence()
{ /* stub */
    unimplemented_(u"void javax::imageio::ImageWriter::endWriteSequence()");
}

java::util::LocaleArray* javax::imageio::ImageWriter::getAvailableLocales()
{ /* stub */
return availableLocales ; /* getter */
}

javax::imageio::ImageWriteParam* javax::imageio::ImageWriter::getDefaultWriteParam()
{ /* stub */
    unimplemented_(u"javax::imageio::ImageWriteParam* javax::imageio::ImageWriter::getDefaultWriteParam()");
    return 0;
}

java::util::Locale* javax::imageio::ImageWriter::getLocale()
{ /* stub */
return locale ; /* getter */
}

int32_t javax::imageio::ImageWriter::getNumThumbnailsSupported(ImageTypeSpecifier* imageType, ImageWriteParam* param, ::javax::imageio::metadata::IIOMetadata* streamMetadata, ::javax::imageio::metadata::IIOMetadata* imageMetadata)
{ /* stub */
    unimplemented_(u"int32_t javax::imageio::ImageWriter::getNumThumbnailsSupported(ImageTypeSpecifier* imageType, ImageWriteParam* param, ::javax::imageio::metadata::IIOMetadata* streamMetadata, ::javax::imageio::metadata::IIOMetadata* imageMetadata)");
    return 0;
}

javax::imageio::spi::ImageWriterSpi* javax::imageio::ImageWriter::getOriginatingProvider()
{ /* stub */
return originatingProvider ; /* getter */
}

java::lang::Object* javax::imageio::ImageWriter::getOutput()
{ /* stub */
return output ; /* getter */
}

java::awt::DimensionArray* javax::imageio::ImageWriter::getPreferredThumbnailSizes(ImageTypeSpecifier* imageType, ImageWriteParam* param, ::javax::imageio::metadata::IIOMetadata* streamMetadata, ::javax::imageio::metadata::IIOMetadata* imageMetadata)
{ /* stub */
    unimplemented_(u"java::awt::DimensionArray* javax::imageio::ImageWriter::getPreferredThumbnailSizes(ImageTypeSpecifier* imageType, ImageWriteParam* param, ::javax::imageio::metadata::IIOMetadata* streamMetadata, ::javax::imageio::metadata::IIOMetadata* imageMetadata)");
    return 0;
}

void javax::imageio::ImageWriter::prepareInsertEmpty(int32_t imageIndex, ImageTypeSpecifier* imageType, int32_t width, int32_t height, ::javax::imageio::metadata::IIOMetadata* imageMetadata, ::java::util::List* thumbnails, ImageWriteParam* param)
{ /* stub */
    unimplemented_(u"void javax::imageio::ImageWriter::prepareInsertEmpty(int32_t imageIndex, ImageTypeSpecifier* imageType, int32_t width, int32_t height, ::javax::imageio::metadata::IIOMetadata* imageMetadata, ::java::util::List* thumbnails, ImageWriteParam* param)");
}

void javax::imageio::ImageWriter::prepareReplacePixels(int32_t imageIndex, ::java::awt::Rectangle* region)
{ /* stub */
    unimplemented_(u"void javax::imageio::ImageWriter::prepareReplacePixels(int32_t imageIndex, ::java::awt::Rectangle* region)");
}

void javax::imageio::ImageWriter::prepareWriteEmpty(::javax::imageio::metadata::IIOMetadata* streamMetadata, ImageTypeSpecifier* imageType, int32_t width, int32_t height, ::javax::imageio::metadata::IIOMetadata* imageMetadata, ::java::util::List* thumbnails, ImageWriteParam* param)
{ /* stub */
    unimplemented_(u"void javax::imageio::ImageWriter::prepareWriteEmpty(::javax::imageio::metadata::IIOMetadata* streamMetadata, ImageTypeSpecifier* imageType, int32_t width, int32_t height, ::javax::imageio::metadata::IIOMetadata* imageMetadata, ::java::util::List* thumbnails, ImageWriteParam* param)");
}

void javax::imageio::ImageWriter::prepareWriteSequence(::javax::imageio::metadata::IIOMetadata* streamMetadata)
{ /* stub */
    unimplemented_(u"void javax::imageio::ImageWriter::prepareWriteSequence(::javax::imageio::metadata::IIOMetadata* streamMetadata)");
}

void javax::imageio::ImageWriter::processImageComplete()
{ /* stub */
    unimplemented_(u"void javax::imageio::ImageWriter::processImageComplete()");
}

void javax::imageio::ImageWriter::processImageProgress(float percentageDone)
{ /* stub */
    unimplemented_(u"void javax::imageio::ImageWriter::processImageProgress(float percentageDone)");
}

void javax::imageio::ImageWriter::processImageStarted(int32_t imageIndex)
{ /* stub */
    unimplemented_(u"void javax::imageio::ImageWriter::processImageStarted(int32_t imageIndex)");
}

void javax::imageio::ImageWriter::processThumbnailComplete()
{ /* stub */
    unimplemented_(u"void javax::imageio::ImageWriter::processThumbnailComplete()");
}

void javax::imageio::ImageWriter::processThumbnailProgress(float percentageDone)
{ /* stub */
    unimplemented_(u"void javax::imageio::ImageWriter::processThumbnailProgress(float percentageDone)");
}

void javax::imageio::ImageWriter::processThumbnailStarted(int32_t imageIndex, int32_t thumbnailIndex)
{ /* stub */
    unimplemented_(u"void javax::imageio::ImageWriter::processThumbnailStarted(int32_t imageIndex, int32_t thumbnailIndex)");
}

void javax::imageio::ImageWriter::processWarningOccurred(int32_t imageIndex, ::java::lang::String* warning)
{ /* stub */
    unimplemented_(u"void javax::imageio::ImageWriter::processWarningOccurred(int32_t imageIndex, ::java::lang::String* warning)");
}

void javax::imageio::ImageWriter::processWarningOccurred(int32_t imageIndex, ::java::lang::String* baseName, ::java::lang::String* keyword)
{ /* stub */
    unimplemented_(u"void javax::imageio::ImageWriter::processWarningOccurred(int32_t imageIndex, ::java::lang::String* baseName, ::java::lang::String* keyword)");
}

void javax::imageio::ImageWriter::processWriteAborted()
{ /* stub */
    unimplemented_(u"void javax::imageio::ImageWriter::processWriteAborted()");
}

void javax::imageio::ImageWriter::removeAllIIOWriteProgressListeners()
{ /* stub */
    unimplemented_(u"void javax::imageio::ImageWriter::removeAllIIOWriteProgressListeners()");
}

void javax::imageio::ImageWriter::removeAllIIOWriteWarningListeners()
{ /* stub */
    unimplemented_(u"void javax::imageio::ImageWriter::removeAllIIOWriteWarningListeners()");
}

void javax::imageio::ImageWriter::removeIIOWriteProgressListener(::javax::imageio::event::IIOWriteProgressListener* listener)
{ /* stub */
    unimplemented_(u"void javax::imageio::ImageWriter::removeIIOWriteProgressListener(::javax::imageio::event::IIOWriteProgressListener* listener)");
}

void javax::imageio::ImageWriter::removeIIOWriteWarningListener(::javax::imageio::event::IIOWriteWarningListener* listener)
{ /* stub */
    unimplemented_(u"void javax::imageio::ImageWriter::removeIIOWriteWarningListener(::javax::imageio::event::IIOWriteWarningListener* listener)");
}

void javax::imageio::ImageWriter::removeImage(int32_t imageIndex)
{ /* stub */
    unimplemented_(u"void javax::imageio::ImageWriter::removeImage(int32_t imageIndex)");
}

void javax::imageio::ImageWriter::replaceImageMetadata(int32_t imageIndex, ::javax::imageio::metadata::IIOMetadata* imageMetadata)
{ /* stub */
    unimplemented_(u"void javax::imageio::ImageWriter::replaceImageMetadata(int32_t imageIndex, ::javax::imageio::metadata::IIOMetadata* imageMetadata)");
}

void javax::imageio::ImageWriter::replacePixels(::java::awt::image::RenderedImage* image, ImageWriteParam* param)
{ /* stub */
    unimplemented_(u"void javax::imageio::ImageWriter::replacePixels(::java::awt::image::RenderedImage* image, ImageWriteParam* param)");
}

void javax::imageio::ImageWriter::replacePixels(::java::awt::image::Raster* raster, ImageWriteParam* param)
{ /* stub */
    unimplemented_(u"void javax::imageio::ImageWriter::replacePixels(::java::awt::image::Raster* raster, ImageWriteParam* param)");
}

void javax::imageio::ImageWriter::replaceStreamMetadata(::javax::imageio::metadata::IIOMetadata* streamMetadata)
{ /* stub */
    unimplemented_(u"void javax::imageio::ImageWriter::replaceStreamMetadata(::javax::imageio::metadata::IIOMetadata* streamMetadata)");
}

void javax::imageio::ImageWriter::reset()
{ /* stub */
    unimplemented_(u"void javax::imageio::ImageWriter::reset()");
}

void javax::imageio::ImageWriter::setLocale(::java::util::Locale* locale)
{ /* stub */
    this->locale = locale; /* setter */
}

void javax::imageio::ImageWriter::setOutput(::java::lang::Object* output)
{ /* stub */
    this->output = output; /* setter */
}

/* private: void javax::imageio::ImageWriter::unsupported() */
void javax::imageio::ImageWriter::write(IIOImage* image)
{ /* stub */
    unimplemented_(u"void javax::imageio::ImageWriter::write(IIOImage* image)");
}

void javax::imageio::ImageWriter::write(::java::awt::image::RenderedImage* image)
{ /* stub */
    unimplemented_(u"void javax::imageio::ImageWriter::write(::java::awt::image::RenderedImage* image)");
}

void javax::imageio::ImageWriter::writeInsert(int32_t imageIndex, IIOImage* image, ImageWriteParam* param)
{ /* stub */
    unimplemented_(u"void javax::imageio::ImageWriter::writeInsert(int32_t imageIndex, IIOImage* image, ImageWriteParam* param)");
}

void javax::imageio::ImageWriter::writeToSequence(IIOImage* image, ImageWriteParam* param)
{ /* stub */
    unimplemented_(u"void javax::imageio::ImageWriter::writeToSequence(IIOImage* image, ImageWriteParam* param)");
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* javax::imageio::ImageWriter::class_()
{
    static ::java::lang::Class* c = ::class_(u"javax.imageio.ImageWriter", 25);
    return c;
}

java::lang::Class* javax::imageio::ImageWriter::getClass0()
{
    return class_();
}

