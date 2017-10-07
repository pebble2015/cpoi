// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <javax/imageio/ImageIO.hpp>

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

extern void unimplemented_(const char16_t* name);
javax::imageio::ImageIO::ImageIO(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::reflect::Method*& javax::imageio::ImageIO::readerFileSuffixesMethod()
{
    clinit();
    return readerFileSuffixesMethod_;
}
java::lang::reflect::Method* javax::imageio::ImageIO::readerFileSuffixesMethod_;
java::lang::reflect::Method*& javax::imageio::ImageIO::readerFormatNamesMethod()
{
    clinit();
    return readerFormatNamesMethod_;
}
java::lang::reflect::Method* javax::imageio::ImageIO::readerFormatNamesMethod_;
java::lang::reflect::Method*& javax::imageio::ImageIO::readerMIMETypesMethod()
{
    clinit();
    return readerMIMETypesMethod_;
}
java::lang::reflect::Method* javax::imageio::ImageIO::readerMIMETypesMethod_;
javax::imageio::spi::IIORegistry*& javax::imageio::ImageIO::theRegistry()
{
    clinit();
    return theRegistry_;
}
javax::imageio::spi::IIORegistry* javax::imageio::ImageIO::theRegistry_;
java::lang::reflect::Method*& javax::imageio::ImageIO::writerFileSuffixesMethod()
{
    clinit();
    return writerFileSuffixesMethod_;
}
java::lang::reflect::Method* javax::imageio::ImageIO::writerFileSuffixesMethod_;
java::lang::reflect::Method*& javax::imageio::ImageIO::writerFormatNamesMethod()
{
    clinit();
    return writerFormatNamesMethod_;
}
java::lang::reflect::Method* javax::imageio::ImageIO::writerFormatNamesMethod_;
java::lang::reflect::Method*& javax::imageio::ImageIO::writerMIMETypesMethod()
{
    clinit();
    return writerMIMETypesMethod_;
}
java::lang::reflect::Method* javax::imageio::ImageIO::writerMIMETypesMethod_;

/* private: void ::javax::imageio::ImageIO::ctor() */
/* private: bool javax::imageio::ImageIO::contains(::java::lang::StringArray* names, ::java::lang::String* name) */
javax::imageio::stream::ImageInputStream* javax::imageio::ImageIO::createImageInputStream(::java::lang::Object* input)
{ /* stub */
    clinit();
    unimplemented_(u"javax::imageio::stream::ImageInputStream* javax::imageio::ImageIO::createImageInputStream(::java::lang::Object* input)");
    return 0;
}

javax::imageio::stream::ImageOutputStream* javax::imageio::ImageIO::createImageOutputStream(::java::lang::Object* output)
{ /* stub */
    clinit();
    unimplemented_(u"javax::imageio::stream::ImageOutputStream* javax::imageio::ImageIO::createImageOutputStream(::java::lang::Object* output)");
    return 0;
}

/* private: bool javax::imageio::ImageIO::doWrite(::java::awt::image::RenderedImage* im, ImageWriter* writer, ::javax::imageio::stream::ImageOutputStream* output) */
java::io::File* javax::imageio::ImageIO::getCacheDirectory()
{ /* stub */
    clinit();
    unimplemented_(u"java::io::File* javax::imageio::ImageIO::getCacheDirectory()");
    return 0;
}

/* private: javax::imageio::ImageIO_CacheInfo* javax::imageio::ImageIO::getCacheInfo() */
javax::imageio::ImageReader* javax::imageio::ImageIO::getImageReader(ImageWriter* writer)
{ /* stub */
    clinit();
    unimplemented_(u"javax::imageio::ImageReader* javax::imageio::ImageIO::getImageReader(ImageWriter* writer)");
    return 0;
}

java::util::Iterator* javax::imageio::ImageIO::getImageReaders(::java::lang::Object* input)
{ /* stub */
    clinit();
    unimplemented_(u"java::util::Iterator* javax::imageio::ImageIO::getImageReaders(::java::lang::Object* input)");
    return 0;
}

java::util::Iterator* javax::imageio::ImageIO::getImageReadersByFormatName(::java::lang::String* formatName)
{ /* stub */
    clinit();
    unimplemented_(u"java::util::Iterator* javax::imageio::ImageIO::getImageReadersByFormatName(::java::lang::String* formatName)");
    return 0;
}

java::util::Iterator* javax::imageio::ImageIO::getImageReadersByMIMEType(::java::lang::String* MIMEType)
{ /* stub */
    clinit();
    unimplemented_(u"java::util::Iterator* javax::imageio::ImageIO::getImageReadersByMIMEType(::java::lang::String* MIMEType)");
    return 0;
}

java::util::Iterator* javax::imageio::ImageIO::getImageReadersBySuffix(::java::lang::String* fileSuffix)
{ /* stub */
    clinit();
    unimplemented_(u"java::util::Iterator* javax::imageio::ImageIO::getImageReadersBySuffix(::java::lang::String* fileSuffix)");
    return 0;
}

java::util::Iterator* javax::imageio::ImageIO::getImageTranscoders(ImageReader* reader, ImageWriter* writer)
{ /* stub */
    clinit();
    unimplemented_(u"java::util::Iterator* javax::imageio::ImageIO::getImageTranscoders(ImageReader* reader, ImageWriter* writer)");
    return 0;
}

javax::imageio::ImageWriter* javax::imageio::ImageIO::getImageWriter(ImageReader* reader)
{ /* stub */
    clinit();
    unimplemented_(u"javax::imageio::ImageWriter* javax::imageio::ImageIO::getImageWriter(ImageReader* reader)");
    return 0;
}

java::util::Iterator* javax::imageio::ImageIO::getImageWriters(ImageTypeSpecifier* type, ::java::lang::String* formatName)
{ /* stub */
    clinit();
    unimplemented_(u"java::util::Iterator* javax::imageio::ImageIO::getImageWriters(ImageTypeSpecifier* type, ::java::lang::String* formatName)");
    return 0;
}

java::util::Iterator* javax::imageio::ImageIO::getImageWritersByFormatName(::java::lang::String* formatName)
{ /* stub */
    clinit();
    unimplemented_(u"java::util::Iterator* javax::imageio::ImageIO::getImageWritersByFormatName(::java::lang::String* formatName)");
    return 0;
}

java::util::Iterator* javax::imageio::ImageIO::getImageWritersByMIMEType(::java::lang::String* MIMEType)
{ /* stub */
    clinit();
    unimplemented_(u"java::util::Iterator* javax::imageio::ImageIO::getImageWritersByMIMEType(::java::lang::String* MIMEType)");
    return 0;
}

java::util::Iterator* javax::imageio::ImageIO::getImageWritersBySuffix(::java::lang::String* fileSuffix)
{ /* stub */
    clinit();
    unimplemented_(u"java::util::Iterator* javax::imageio::ImageIO::getImageWritersBySuffix(::java::lang::String* fileSuffix)");
    return 0;
}

java::lang::StringArray* javax::imageio::ImageIO::getReaderFileSuffixes()
{ /* stub */
    clinit();
    unimplemented_(u"java::lang::StringArray* javax::imageio::ImageIO::getReaderFileSuffixes()");
    return 0;
}

java::lang::StringArray* javax::imageio::ImageIO::getReaderFormatNames()
{ /* stub */
    clinit();
    unimplemented_(u"java::lang::StringArray* javax::imageio::ImageIO::getReaderFormatNames()");
    return 0;
}

java::lang::StringArray* javax::imageio::ImageIO::getReaderMIMETypes()
{ /* stub */
    clinit();
    unimplemented_(u"java::lang::StringArray* javax::imageio::ImageIO::getReaderMIMETypes()");
    return 0;
}

/* private: java::lang::StringArray* javax::imageio::ImageIO::getReaderWriterInfo(::java::lang::Class* spiClass, ImageIO_SpiInfo* spiInfo) */
/* private: java::lang::String* javax::imageio::ImageIO::getTempDir() */
bool javax::imageio::ImageIO::getUseCache()
{ /* stub */
    clinit();
    unimplemented_(u"bool javax::imageio::ImageIO::getUseCache()");
    return 0;
}

/* private: javax::imageio::ImageWriter* javax::imageio::ImageIO::getWriter(::java::awt::image::RenderedImage* im, ::java::lang::String* formatName) */
java::lang::StringArray* javax::imageio::ImageIO::getWriterFileSuffixes()
{ /* stub */
    clinit();
    unimplemented_(u"java::lang::StringArray* javax::imageio::ImageIO::getWriterFileSuffixes()");
    return 0;
}

java::lang::StringArray* javax::imageio::ImageIO::getWriterFormatNames()
{ /* stub */
    clinit();
    unimplemented_(u"java::lang::StringArray* javax::imageio::ImageIO::getWriterFormatNames()");
    return 0;
}

java::lang::StringArray* javax::imageio::ImageIO::getWriterMIMETypes()
{ /* stub */
    clinit();
    unimplemented_(u"java::lang::StringArray* javax::imageio::ImageIO::getWriterMIMETypes()");
    return 0;
}

/* private: bool javax::imageio::ImageIO::hasCachePermission() */
java::awt::image::BufferedImage* javax::imageio::ImageIO::read(::java::io::File* input)
{ /* stub */
    clinit();
    unimplemented_(u"java::awt::image::BufferedImage* javax::imageio::ImageIO::read(::java::io::File* input)");
    return 0;
}

java::awt::image::BufferedImage* javax::imageio::ImageIO::read(::java::io::InputStream* input)
{ /* stub */
    clinit();
    unimplemented_(u"java::awt::image::BufferedImage* javax::imageio::ImageIO::read(::java::io::InputStream* input)");
    return 0;
}

java::awt::image::BufferedImage* javax::imageio::ImageIO::read(::java::net::URL* input)
{ /* stub */
    clinit();
    unimplemented_(u"java::awt::image::BufferedImage* javax::imageio::ImageIO::read(::java::net::URL* input)");
    return 0;
}

java::awt::image::BufferedImage* javax::imageio::ImageIO::read(::javax::imageio::stream::ImageInputStream* stream)
{ /* stub */
    clinit();
    unimplemented_(u"java::awt::image::BufferedImage* javax::imageio::ImageIO::read(::javax::imageio::stream::ImageInputStream* stream)");
    return 0;
}

void javax::imageio::ImageIO::scanForPlugins()
{ /* stub */
    clinit();
    unimplemented_(u"void javax::imageio::ImageIO::scanForPlugins()");
}

void javax::imageio::ImageIO::setCacheDirectory(::java::io::File* cacheDirectory)
{ /* stub */
    clinit();
    unimplemented_(u"void javax::imageio::ImageIO::setCacheDirectory(::java::io::File* cacheDirectory)");
}

void javax::imageio::ImageIO::setUseCache(bool useCache)
{ /* stub */
    clinit();
    unimplemented_(u"void javax::imageio::ImageIO::setUseCache(bool useCache)");
}

bool javax::imageio::ImageIO::write(::java::awt::image::RenderedImage* im, ::java::lang::String* formatName, ::javax::imageio::stream::ImageOutputStream* output)
{ /* stub */
    clinit();
    unimplemented_(u"bool javax::imageio::ImageIO::write(::java::awt::image::RenderedImage* im, ::java::lang::String* formatName, ::javax::imageio::stream::ImageOutputStream* output)");
    return 0;
}

bool javax::imageio::ImageIO::write(::java::awt::image::RenderedImage* im, ::java::lang::String* formatName, ::java::io::File* output)
{ /* stub */
    clinit();
    unimplemented_(u"bool javax::imageio::ImageIO::write(::java::awt::image::RenderedImage* im, ::java::lang::String* formatName, ::java::io::File* output)");
    return 0;
}

bool javax::imageio::ImageIO::write(::java::awt::image::RenderedImage* im, ::java::lang::String* formatName, ::java::io::OutputStream* output)
{ /* stub */
    clinit();
    unimplemented_(u"bool javax::imageio::ImageIO::write(::java::awt::image::RenderedImage* im, ::java::lang::String* formatName, ::java::io::OutputStream* output)");
    return 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* javax::imageio::ImageIO::class_()
{
    static ::java::lang::Class* c = ::class_(u"javax.imageio.ImageIO", 21);
    return c;
}

java::lang::Class* javax::imageio::ImageIO::getClass0()
{
    return class_();
}

