// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <java/awt/image/fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <javax/imageio/fwd-POI.hpp>
#include <javax/imageio/event/fwd-POI.hpp>
#include <javax/imageio/metadata/fwd-POI.hpp>
#include <javax/imageio/spi/fwd-POI.hpp>
#include <java/lang/Object.hpp>

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

struct default_init_tag;

class javax::imageio::ImageReader
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    bool abortFlag {  };

public: /* protected */
    ::java::util::LocaleArray* availableLocales {  };
    bool ignoreMetadata {  };
    ::java::lang::Object* input {  };
    ::java::util::Locale* locale {  };
    int32_t minIndex {  };
    ::javax::imageio::spi::ImageReaderSpi* originatingProvider {  };
    ::java::util::List* progressListeners {  };
    bool seekForwardOnly {  };
    ::java::util::List* updateListeners {  };
    ::java::util::List* warningListeners {  };
    ::java::util::List* warningLocales {  };

protected:
    void ctor(::javax::imageio::spi::ImageReaderSpi* originatingProvider);

public:
    virtual void abort();

public: /* protected */
    virtual bool abortRequested();

public:
    virtual void addIIOReadProgressListener(::javax::imageio::event::IIOReadProgressListener* listener);
    virtual void addIIOReadUpdateListener(::javax::imageio::event::IIOReadUpdateListener* listener);
    virtual void addIIOReadWarningListener(::javax::imageio::event::IIOReadWarningListener* listener);

public: /* package */
    static ::java::util::List* addToList(::java::util::List* l, ::java::lang::Object* elt);

public:
    virtual bool canReadRaster();

public: /* protected */
    static void checkReadParamBandSettings(ImageReadParam* param, int32_t numSrcBands, int32_t numDstBands);
    virtual void clearAbortRequest();
    static void computeRegions(ImageReadParam* param, int32_t srcWidth, int32_t srcHeight, ::java::awt::image::BufferedImage* image, ::java::awt::Rectangle* srcRegion, ::java::awt::Rectangle* destRegion);

public:
    virtual void dispose();
    virtual float getAspectRatio(int32_t imageIndex);
    virtual ::java::util::LocaleArray* getAvailableLocales();
    virtual ImageReadParam* getDefaultReadParam();

public: /* protected */
    static ::java::awt::image::BufferedImage* getDestination(ImageReadParam* param, ::java::util::Iterator* imageTypes, int32_t width, int32_t height);

public:
    virtual ::java::lang::String* getFormatName();
    virtual int32_t getHeight(int32_t imageIndex) = 0;
    virtual ::javax::imageio::metadata::IIOMetadata* getImageMetadata(int32_t imageIndex) = 0;
    virtual ::javax::imageio::metadata::IIOMetadata* getImageMetadata(int32_t imageIndex, ::java::lang::String* formatName, ::java::util::Set* nodeNames);
    virtual ::java::util::Iterator* getImageTypes(int32_t imageIndex) = 0;
    virtual ::java::lang::Object* getInput();
    virtual ::java::util::Locale* getLocale();
    /*::javax::imageio::metadata::IIOMetadata* getMetadata(::java::lang::String* formatName, ::java::util::Set* nodeNames, bool wantStream, int32_t imageIndex); (private) */
    virtual int32_t getMinIndex();
    virtual int32_t getNumImages(bool allowSearch) = 0;
    virtual int32_t getNumThumbnails(int32_t imageIndex);
    virtual ::javax::imageio::spi::ImageReaderSpi* getOriginatingProvider();
    virtual ImageTypeSpecifier* getRawImageType(int32_t imageIndex);

public: /* protected */
    static ::java::awt::Rectangle* getSourceRegion(ImageReadParam* param, int32_t srcWidth, int32_t srcHeight);

public:
    virtual ::javax::imageio::metadata::IIOMetadata* getStreamMetadata() = 0;
    virtual ::javax::imageio::metadata::IIOMetadata* getStreamMetadata(::java::lang::String* formatName, ::java::util::Set* nodeNames);
    virtual int32_t getThumbnailHeight(int32_t imageIndex, int32_t thumbnailIndex);
    virtual int32_t getThumbnailWidth(int32_t imageIndex, int32_t thumbnailIndex);
    virtual int32_t getTileGridXOffset(int32_t imageIndex);
    virtual int32_t getTileGridYOffset(int32_t imageIndex);
    virtual int32_t getTileHeight(int32_t imageIndex);
    virtual int32_t getTileWidth(int32_t imageIndex);
    virtual int32_t getWidth(int32_t imageIndex) = 0;
    virtual bool hasThumbnails(int32_t imageIndex);
    virtual bool isIgnoringMetadata();
    virtual bool isImageTiled(int32_t imageIndex);
    virtual bool isRandomAccessEasy(int32_t imageIndex);
    virtual bool isSeekForwardOnly();

public: /* protected */
    virtual void processImageComplete();
    virtual void processImageProgress(float percentageDone);
    virtual void processImageStarted(int32_t imageIndex);
    virtual void processImageUpdate(::java::awt::image::BufferedImage* theImage, int32_t minX, int32_t minY, int32_t width, int32_t height, int32_t periodX, int32_t periodY, ::int32_tArray* bands);
    virtual void processPassComplete(::java::awt::image::BufferedImage* theImage);
    virtual void processPassStarted(::java::awt::image::BufferedImage* theImage, int32_t pass, int32_t minPass, int32_t maxPass, int32_t minX, int32_t minY, int32_t periodX, int32_t periodY, ::int32_tArray* bands);
    virtual void processReadAborted();
    virtual void processSequenceComplete();
    virtual void processSequenceStarted(int32_t minIndex);
    virtual void processThumbnailComplete();
    virtual void processThumbnailPassComplete(::java::awt::image::BufferedImage* theThumbnail);
    virtual void processThumbnailPassStarted(::java::awt::image::BufferedImage* theThumbnail, int32_t pass, int32_t minPass, int32_t maxPass, int32_t minX, int32_t minY, int32_t periodX, int32_t periodY, ::int32_tArray* bands);
    virtual void processThumbnailProgress(float percentageDone);
    virtual void processThumbnailStarted(int32_t imageIndex, int32_t thumbnailIndex);
    virtual void processThumbnailUpdate(::java::awt::image::BufferedImage* theThumbnail, int32_t minX, int32_t minY, int32_t width, int32_t height, int32_t periodX, int32_t periodY, ::int32_tArray* bands);
    virtual void processWarningOccurred(::java::lang::String* warning);
    virtual void processWarningOccurred(::java::lang::String* baseName, ::java::lang::String* keyword);

public:
    virtual ::java::awt::image::BufferedImage* read(int32_t imageIndex);
    virtual ::java::awt::image::BufferedImage* read(int32_t imageIndex, ImageReadParam* param) = 0;
    virtual ::java::util::Iterator* readAll(::java::util::Iterator* params);
    virtual IIOImage* readAll(int32_t imageIndex, ImageReadParam* param);
    virtual ::java::awt::image::RenderedImage* readAsRenderedImage(int32_t imageIndex, ImageReadParam* param);
    virtual ::java::awt::image::Raster* readRaster(int32_t imageIndex, ImageReadParam* param);
    virtual ::java::awt::image::BufferedImage* readThumbnail(int32_t imageIndex, int32_t thumbnailIndex);
    virtual ::java::awt::image::BufferedImage* readTile(int32_t imageIndex, int32_t tileX, int32_t tileY);
    virtual ::java::awt::image::Raster* readTileRaster(int32_t imageIndex, int32_t tileX, int32_t tileY);
    virtual bool readerSupportsThumbnails();
    virtual void removeAllIIOReadProgressListeners();
    virtual void removeAllIIOReadUpdateListeners();
    virtual void removeAllIIOReadWarningListeners();

public: /* package */
    static ::java::util::List* removeFromList(::java::util::List* l, ::java::lang::Object* elt);

public:
    virtual void removeIIOReadProgressListener(::javax::imageio::event::IIOReadProgressListener* listener);
    virtual void removeIIOReadUpdateListener(::javax::imageio::event::IIOReadUpdateListener* listener);
    virtual void removeIIOReadWarningListener(::javax::imageio::event::IIOReadWarningListener* listener);
    virtual void reset();
    virtual void setInput(::java::lang::Object* input);
    virtual void setInput(::java::lang::Object* input, bool seekForwardOnly);
    virtual void setInput(::java::lang::Object* input, bool seekForwardOnly, bool ignoreMetadata);
    virtual void setLocale(::java::util::Locale* locale);

    // Generated

public: /* protected */
    ImageReader(::javax::imageio::spi::ImageReaderSpi* originatingProvider);
protected:
    ImageReader(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
