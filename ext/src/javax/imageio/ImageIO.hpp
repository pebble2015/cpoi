// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/image/fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/lang/reflect/fwd-POI.hpp>
#include <java/net/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <javax/imageio/fwd-POI.hpp>
#include <javax/imageio/spi/fwd-POI.hpp>
#include <javax/imageio/stream/fwd-POI.hpp>
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
typedef ::SubArray< ::java::lang::CharSequence, ObjectArray > CharSequenceArray;
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::String, ObjectArray, ::java::io::SerializableArray, ComparableArray, CharSequenceArray > StringArray;
    } // lang
} // java

struct default_init_tag;

class javax::imageio::ImageIO final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static ::java::lang::reflect::Method* readerFileSuffixesMethod_;
    static ::java::lang::reflect::Method* readerFormatNamesMethod_;
    static ::java::lang::reflect::Method* readerMIMETypesMethod_;
    static ::javax::imageio::spi::IIORegistry* theRegistry_;
    static ::java::lang::reflect::Method* writerFileSuffixesMethod_;
    static ::java::lang::reflect::Method* writerFormatNamesMethod_;
    static ::java::lang::reflect::Method* writerMIMETypesMethod_;

    /*void ctor(); (private) */
    /*static bool contains(::java::lang::StringArray* names, ::java::lang::String* name); (private) */

public:
    static ::javax::imageio::stream::ImageInputStream* createImageInputStream(::java::lang::Object* input);
    static ::javax::imageio::stream::ImageOutputStream* createImageOutputStream(::java::lang::Object* output);
    /*static bool doWrite(::java::awt::image::RenderedImage* im, ImageWriter* writer, ::javax::imageio::stream::ImageOutputStream* output); (private) */
    static ::java::io::File* getCacheDirectory();
    /*static ImageIO_CacheInfo* getCacheInfo(); (private) */
    static ImageReader* getImageReader(ImageWriter* writer);
    static ::java::util::Iterator* getImageReaders(::java::lang::Object* input);
    static ::java::util::Iterator* getImageReadersByFormatName(::java::lang::String* formatName);
    static ::java::util::Iterator* getImageReadersByMIMEType(::java::lang::String* MIMEType);
    static ::java::util::Iterator* getImageReadersBySuffix(::java::lang::String* fileSuffix);
    static ::java::util::Iterator* getImageTranscoders(ImageReader* reader, ImageWriter* writer);
    static ImageWriter* getImageWriter(ImageReader* reader);
    static ::java::util::Iterator* getImageWriters(ImageTypeSpecifier* type, ::java::lang::String* formatName);
    static ::java::util::Iterator* getImageWritersByFormatName(::java::lang::String* formatName);
    static ::java::util::Iterator* getImageWritersByMIMEType(::java::lang::String* MIMEType);
    static ::java::util::Iterator* getImageWritersBySuffix(::java::lang::String* fileSuffix);
    static ::java::lang::StringArray* getReaderFileSuffixes();
    static ::java::lang::StringArray* getReaderFormatNames();
    static ::java::lang::StringArray* getReaderMIMETypes();
    /*static ::java::lang::StringArray* getReaderWriterInfo(::java::lang::Class* spiClass, ImageIO_SpiInfo* spiInfo); (private) */
    /*static ::java::lang::String* getTempDir(); (private) */
    static bool getUseCache();
    /*static ImageWriter* getWriter(::java::awt::image::RenderedImage* im, ::java::lang::String* formatName); (private) */
    static ::java::lang::StringArray* getWriterFileSuffixes();
    static ::java::lang::StringArray* getWriterFormatNames();
    static ::java::lang::StringArray* getWriterMIMETypes();
    /*static bool hasCachePermission(); (private) */
    static ::java::awt::image::BufferedImage* read(::java::io::File* input);
    static ::java::awt::image::BufferedImage* read(::java::io::InputStream* input);
    static ::java::awt::image::BufferedImage* read(::java::net::URL* input);
    static ::java::awt::image::BufferedImage* read(::javax::imageio::stream::ImageInputStream* stream);
    static void scanForPlugins();
    static void setCacheDirectory(::java::io::File* cacheDirectory);
    static void setUseCache(bool useCache);
    static bool write(::java::awt::image::RenderedImage* im, ::java::lang::String* formatName, ::javax::imageio::stream::ImageOutputStream* output);
    static bool write(::java::awt::image::RenderedImage* im, ::java::lang::String* formatName, ::java::io::File* output);
    static bool write(::java::awt::image::RenderedImage* im, ::java::lang::String* formatName, ::java::io::OutputStream* output);

    // Generated
    ImageIO();
protected:
    ImageIO(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    static ::java::lang::reflect::Method*& readerFileSuffixesMethod();
    static ::java::lang::reflect::Method*& readerFormatNamesMethod();
    static ::java::lang::reflect::Method*& readerMIMETypesMethod();
    static ::javax::imageio::spi::IIORegistry*& theRegistry();
    static ::java::lang::reflect::Method*& writerFileSuffixesMethod();
    static ::java::lang::reflect::Method*& writerFormatNamesMethod();
    static ::java::lang::reflect::Method*& writerMIMETypesMethod();
    virtual ::java::lang::Class* getClass0();
};
