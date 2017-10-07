// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <java/awt/geom/fwd-POI.hpp>
#include <java/awt/image/fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <javax/imageio/fwd-POI.hpp>
#include <javax/imageio/event/fwd-POI.hpp>
#include <javax/imageio/metadata/fwd-POI.hpp>
#include <javax/imageio/spi/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <javax/imageio/ImageTranscoder.hpp>

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

struct default_init_tag;

class javax::imageio::ImageWriter
    : public virtual ::java::lang::Object
    , public virtual ImageTranscoder
{

public:
    typedef ::java::lang::Object super;

private:
    bool abortFlag {  };

public: /* protected */
    ::java::util::LocaleArray* availableLocales {  };
    ::java::util::Locale* locale {  };
    ::javax::imageio::spi::ImageWriterSpi* originatingProvider {  };
    ::java::lang::Object* output {  };
    ::java::util::List* progressListeners {  };
    ::java::util::List* warningListeners {  };
    ::java::util::List* warningLocales {  };

protected:
    void ctor(::javax::imageio::spi::ImageWriterSpi* originatingProvider);

public:
    virtual void abort();

public: /* protected */
    virtual bool abortRequested();

public:
    virtual void addIIOWriteProgressListener(::javax::imageio::event::IIOWriteProgressListener* listener);
    virtual void addIIOWriteWarningListener(::javax::imageio::event::IIOWriteWarningListener* listener);
    virtual bool canInsertEmpty(int32_t imageIndex);
    virtual bool canInsertImage(int32_t imageIndex);
    virtual bool canRemoveImage(int32_t imageIndex);
    virtual bool canReplaceImageMetadata(int32_t imageIndex);
    virtual bool canReplacePixels(int32_t imageIndex);
    virtual bool canReplaceStreamMetadata();
    virtual bool canWriteEmpty();
    virtual bool canWriteRasters();
    virtual bool canWriteSequence();

public: /* protected */
    virtual void clearAbortRequest();
    /*::javax::imageio::metadata::IIOMetadata* convertImageMetadata(::javax::imageio::metadata::IIOMetadata* inData, ImageTypeSpecifier* imageType, ImageWriteParam* param); (already declared) */
    /*::javax::imageio::metadata::IIOMetadata* convertStreamMetadata(::javax::imageio::metadata::IIOMetadata* inData, ImageWriteParam* param); (already declared) */

public:
    virtual void dispose();
    virtual void endInsertEmpty();
    virtual void endReplacePixels();
    virtual void endWriteEmpty();
    virtual void endWriteSequence();
    virtual ::java::util::LocaleArray* getAvailableLocales();
    virtual ::javax::imageio::metadata::IIOMetadata* getDefaultImageMetadata(ImageTypeSpecifier* imageType, ImageWriteParam* param) = 0;
    virtual ::javax::imageio::metadata::IIOMetadata* getDefaultStreamMetadata(ImageWriteParam* param) = 0;
    virtual ImageWriteParam* getDefaultWriteParam();
    virtual ::java::util::Locale* getLocale();
    virtual int32_t getNumThumbnailsSupported(ImageTypeSpecifier* imageType, ImageWriteParam* param, ::javax::imageio::metadata::IIOMetadata* streamMetadata, ::javax::imageio::metadata::IIOMetadata* imageMetadata);
    virtual ::javax::imageio::spi::ImageWriterSpi* getOriginatingProvider();
    virtual ::java::lang::Object* getOutput();
    virtual ::java::awt::DimensionArray* getPreferredThumbnailSizes(ImageTypeSpecifier* imageType, ImageWriteParam* param, ::javax::imageio::metadata::IIOMetadata* streamMetadata, ::javax::imageio::metadata::IIOMetadata* imageMetadata);
    virtual void prepareInsertEmpty(int32_t imageIndex, ImageTypeSpecifier* imageType, int32_t width, int32_t height, ::javax::imageio::metadata::IIOMetadata* imageMetadata, ::java::util::List* thumbnails, ImageWriteParam* param);
    virtual void prepareReplacePixels(int32_t imageIndex, ::java::awt::Rectangle* region);
    virtual void prepareWriteEmpty(::javax::imageio::metadata::IIOMetadata* streamMetadata, ImageTypeSpecifier* imageType, int32_t width, int32_t height, ::javax::imageio::metadata::IIOMetadata* imageMetadata, ::java::util::List* thumbnails, ImageWriteParam* param);
    virtual void prepareWriteSequence(::javax::imageio::metadata::IIOMetadata* streamMetadata);

public: /* protected */
    virtual void processImageComplete();
    virtual void processImageProgress(float percentageDone);
    virtual void processImageStarted(int32_t imageIndex);
    virtual void processThumbnailComplete();
    virtual void processThumbnailProgress(float percentageDone);
    virtual void processThumbnailStarted(int32_t imageIndex, int32_t thumbnailIndex);
    virtual void processWarningOccurred(int32_t imageIndex, ::java::lang::String* warning);
    virtual void processWarningOccurred(int32_t imageIndex, ::java::lang::String* baseName, ::java::lang::String* keyword);
    virtual void processWriteAborted();

public:
    virtual void removeAllIIOWriteProgressListeners();
    virtual void removeAllIIOWriteWarningListeners();
    virtual void removeIIOWriteProgressListener(::javax::imageio::event::IIOWriteProgressListener* listener);
    virtual void removeIIOWriteWarningListener(::javax::imageio::event::IIOWriteWarningListener* listener);
    virtual void removeImage(int32_t imageIndex);
    virtual void replaceImageMetadata(int32_t imageIndex, ::javax::imageio::metadata::IIOMetadata* imageMetadata);
    virtual void replacePixels(::java::awt::image::RenderedImage* image, ImageWriteParam* param);
    virtual void replacePixels(::java::awt::image::Raster* raster, ImageWriteParam* param);
    virtual void replaceStreamMetadata(::javax::imageio::metadata::IIOMetadata* streamMetadata);
    virtual void reset();
    virtual void setLocale(::java::util::Locale* locale);
    virtual void setOutput(::java::lang::Object* output);
    /*void unsupported(); (private) */
    virtual void write(IIOImage* image);
    virtual void write(::java::awt::image::RenderedImage* image);
    virtual void write(::javax::imageio::metadata::IIOMetadata* streamMetadata, IIOImage* image, ImageWriteParam* param) = 0;
    virtual void writeInsert(int32_t imageIndex, IIOImage* image, ImageWriteParam* param);
    virtual void writeToSequence(IIOImage* image, ImageWriteParam* param);

    // Generated

public: /* protected */
    ImageWriter(::javax::imageio::spi::ImageWriterSpi* originatingProvider);
protected:
    ImageWriter(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
