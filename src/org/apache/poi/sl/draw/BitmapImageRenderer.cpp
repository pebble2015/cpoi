// Generated from /POI/java/org/apache/poi/sl/draw/BitmapImageRenderer.java
#include <org/apache/poi/sl/draw/BitmapImageRenderer.hpp>

#include <java/awt/Dimension.hpp>
#include <java/awt/Graphics2D.hpp>
#include <java/awt/Graphics.hpp>
#include <java/awt/Insets.hpp>
#include <java/awt/RenderingHints.hpp>
#include <java/awt/Shape.hpp>
#include <java/awt/geom/AffineTransform.hpp>
#include <java/awt/geom/Rectangle2D.hpp>
#include <java/awt/image/AffineTransformOp.hpp>
#include <java/awt/image/BufferedImage.hpp>
#include <java/awt/image/BufferedImageOp.hpp>
#include <java/awt/image/RescaleOp.hpp>
#include <java/io/ByteArrayInputStream.hpp>
#include <java/io/IOException.hpp>
#include <java/io/InputStream.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/util/Iterator.hpp>
#include <javax/imageio/ImageIO.hpp>
#include <javax/imageio/ImageReadParam.hpp>
#include <javax/imageio/ImageReader.hpp>
#include <javax/imageio/ImageTypeSpecifier.hpp>
#include <javax/imageio/stream/ImageInputStream.hpp>
#include <javax/imageio/stream/MemoryCacheImageInputStream.hpp>
#include <org/apache/poi/sl/draw/ImageRenderer.hpp>
#include <org/apache/poi/util/POILogFactory.hpp>
#include <org/apache/poi/util/POILogger.hpp>
#include <Array.hpp>
#include <ObjectArray.hpp>

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(nullptr);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

namespace
{
    template<typename F>
    struct finally_
    {
        finally_(F f) : f(f), moved(false) { }
        finally_(finally_ &&x) : f(x.f), moved(false) { x.moved = true; }
        ~finally_() { if(!moved) f(); }
    private:
        finally_(const finally_&); finally_& operator=(const finally_&);
        F f;
        bool moved;
    };

    template<typename F> finally_<F> finally(F f) { return finally_<F>(f); }
}
org::apache::poi::sl::draw::BitmapImageRenderer::BitmapImageRenderer(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::sl::draw::BitmapImageRenderer::BitmapImageRenderer()
    : BitmapImageRenderer(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::util::POILogger*& org::apache::poi::sl::draw::BitmapImageRenderer::LOG()
{
    clinit();
    return LOG_;
}
org::apache::poi::util::POILogger* org::apache::poi::sl::draw::BitmapImageRenderer::LOG_;

void org::apache::poi::sl::draw::BitmapImageRenderer::loadImage(::java::io::InputStream* data, ::java::lang::String* contentType) /* throws(IOException) */
{
    img = readImage(data, contentType);
}

void org::apache::poi::sl::draw::BitmapImageRenderer::loadImage(::int8_tArray* data, ::java::lang::String* contentType) /* throws(IOException) */
{
    img = readImage(new ::java::io::ByteArrayInputStream(data), contentType);
}

java::awt::image::BufferedImage* org::apache::poi::sl::draw::BitmapImageRenderer::readImage(::java::io::InputStream* data, ::java::lang::String* contentType) /* throws(IOException) */
{
    clinit();
    ::java::io::IOException* lastException = nullptr;
    ::java::awt::image::BufferedImage* img = nullptr;
    if(npc(data)->markSupported()) {
        npc(data)->mark(npc(data)->available());
    }
    ::javax::imageio::stream::ImageInputStream* iis = new ::javax::imageio::stream::MemoryCacheImageInputStream(data);
    {
        auto finally0 = finally([&] {
            npc(iis)->close();
        });
        {
            iis = new ::javax::imageio::stream::MemoryCacheImageInputStream(data);
            npc(iis)->mark();
            auto iter = ::javax::imageio::ImageIO::getImageReaders(iis);
            while (img == nullptr && npc(iter)->hasNext()) {
                auto reader = java_cast< ::javax::imageio::ImageReader* >(npc(iter)->next());
                auto param = npc(reader)->getDefaultReadParam();
                for (auto mode = int32_t(0); img == nullptr && mode < 3; mode++) {
                    lastException = nullptr;
                    try {
                        npc(iis)->reset();
                    } catch (::java::io::IOException* e) {
                        if(npc(data)->markSupported()) {
                            npc(data)->reset();
                            npc(data)->mark(npc(data)->available());
                            npc(iis)->close();
                            iis = new ::javax::imageio::stream::MemoryCacheImageInputStream(data);
                        } else {
                            lastException = e;
                            break;
                        }
                    }
                    npc(iis)->mark();
                    try {
                        switch (mode) {
                        case int32_t(0):
                            npc(reader)->setInput(iis, false, true);
                            img = npc(reader)->read(0, param);
                            break;
                        case int32_t(1): {
                                auto imageTypes = npc(reader)->getImageTypes(0);
                                while (npc(imageTypes)->hasNext()) {
                                    auto imageTypeSpecifier = java_cast< ::javax::imageio::ImageTypeSpecifier* >(npc(imageTypes)->next());
                                    auto bufferedImageType = npc(imageTypeSpecifier)->getBufferedImageType();
                                    if(bufferedImageType == ::java::awt::image::BufferedImage::TYPE_BYTE_GRAY) {
                                        npc(param)->setDestinationType(imageTypeSpecifier);
                                        break;
                                    }
                                }
                                npc(reader)->setInput(iis, false, true);
                                img = npc(reader)->read(0, param);
                                break;
                            }
                        case int32_t(2): {
                                npc(reader)->setInput(iis, false, true);
                                auto height = npc(reader)->getHeight(0);
                                auto width = npc(reader)->getWidth(0);
                                auto imageTypes = npc(reader)->getImageTypes(0);
                                if(npc(imageTypes)->hasNext()) {
                                    auto imageTypeSpecifier = java_cast< ::javax::imageio::ImageTypeSpecifier* >(npc(imageTypes)->next());
                                    img = npc(imageTypeSpecifier)->createBufferedImage(width, height);
                                    npc(param)->setDestination(img);
                                } else {
                                    lastException = new ::java::io::IOException(u"unable to load even a truncated version of the image."_j);
                                    break;
                                }
                                {
                                    auto finally1 = finally([&] {
                                        if(npc(img)->getType() != ::java::awt::image::BufferedImage::TYPE_INT_ARGB) {
                                            auto y = findTruncatedBlackBox(img, width, height);
                                            if(y < height) {
                                                auto argbImg = new ::java::awt::image::BufferedImage(width, height, ::java::awt::image::BufferedImage::TYPE_INT_ARGB);
                                                auto g = npc(argbImg)->createGraphics();
                                                npc(g)->clipRect(0, 0, width, y);
                                                npc(g)->drawImage(img, 0, 0, nullptr);
                                                npc(g)->dispose();
                                                npc(img)->flush();
                                                img = argbImg;
                                            }
                                        }
                                    });
                                    {
                                        npc(reader)->read(0, param);
                                    }
                                }

                                break;
                            }
                        }

                    } catch (::java::io::IOException* e) {
                        if(mode < 2) {
                            lastException = e;
                        }
                    } catch (::java::lang::RuntimeException* e) {
                        if(mode < 2) {
                            lastException = new ::java::io::IOException(::java::lang::StringBuilder().append(u"ImageIO runtime exception - "_j)->append((mode == 0 ? u"normal"_j : u"fallback"_j))->toString(), e);
                        }
                    }
                }
                npc(reader)->dispose();
            }
        }
    }

    if(img == nullptr) {
        if(lastException != nullptr) {
            throw lastException;
        }
        npc(LOG_)->log(::org::apache::poi::util::POILogger::WARN, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(::java::lang::StringBuilder().append(u"Content-type: "_j)->append(contentType)
            ->append(u" is not support. Image ignored."_j)->toString())}));
        return nullptr;
    }
    if(npc(img)->getType() != ::java::awt::image::BufferedImage::TYPE_INT_ARGB) {
        auto argbImg = new ::java::awt::image::BufferedImage(npc(img)->getWidth(), npc(img)->getHeight(), ::java::awt::image::BufferedImage::TYPE_INT_ARGB);
        auto g = npc(argbImg)->getGraphics();
        npc(g)->drawImage(img, 0, 0, nullptr);
        npc(g)->dispose();
        return argbImg;
    }
    return img;
}

int32_t org::apache::poi::sl::draw::BitmapImageRenderer::findTruncatedBlackBox(::java::awt::image::BufferedImage* img, int32_t width, int32_t height)
{
    clinit();
    auto h = height - int32_t(1);
    for (; h > 0; h--) {
        for (auto w = width - int32_t(1); w > 0; w -= width / int32_t(10)) {
            auto p = npc(img)->getRGB(w, h);
            if(p != -16777216) {
                return h + int32_t(1);
            }
        }
    }
    return 0;
}

java::awt::image::BufferedImage* org::apache::poi::sl::draw::BitmapImageRenderer::getImage()
{
    return img;
}

java::awt::image::BufferedImage* org::apache::poi::sl::draw::BitmapImageRenderer::getImage(::java::awt::Dimension* dim)
{
    double w_old = npc(img)->getWidth();
    double h_old = npc(img)->getHeight();
    auto scaled = new ::java::awt::image::BufferedImage(static_cast< int32_t >(w_old), static_cast< int32_t >(h_old), ::java::awt::image::BufferedImage::TYPE_INT_ARGB);
    auto w_new = npc(dim)->getWidth();
    auto h_new = npc(dim)->getHeight();
    auto at = new ::java::awt::geom::AffineTransform();
    npc(at)->scale(w_new / w_old, h_new / h_old);
    auto scaleOp = new ::java::awt::image::AffineTransformOp(at, ::java::awt::image::AffineTransformOp::TYPE_BILINEAR);
    npc(scaleOp)->filter(img, scaled);
    return scaled;
}

java::awt::Dimension* org::apache::poi::sl::draw::BitmapImageRenderer::getDimension()
{
    return (img == nullptr) ? new ::java::awt::Dimension(int32_t(0), int32_t(0)) : new ::java::awt::Dimension(npc(img)->getWidth(), npc(img)->getHeight());
}

void org::apache::poi::sl::draw::BitmapImageRenderer::setAlpha(double alpha)
{
    if(img == nullptr)
        return;

    auto dim = getDimension();
    auto newImg = new ::java::awt::image::BufferedImage(static_cast< int32_t >(npc(dim)->getWidth()), static_cast< int32_t >(npc(dim)->getHeight()), ::java::awt::image::BufferedImage::TYPE_INT_ARGB);
    auto g = npc(newImg)->createGraphics();
    auto op = new ::java::awt::image::RescaleOp(new ::floatArray({
        1.0f
        , 1.0f
        , 1.0f
        , static_cast< float >(alpha)
    }), new ::floatArray({
        static_cast< float >(int32_t(0))
        , static_cast< float >(int32_t(0))
        , static_cast< float >(int32_t(0))
        , static_cast< float >(int32_t(0))
    }), static_cast< ::java::awt::RenderingHints* >(nullptr));
    npc(g)->drawImage(img, static_cast< ::java::awt::image::BufferedImageOp* >(op), int32_t(0), int32_t(0));
    npc(g)->dispose();
    img = newImg;
}

bool org::apache::poi::sl::draw::BitmapImageRenderer::drawImage(::java::awt::Graphics2D* graphics, ::java::awt::geom::Rectangle2D* anchor)
{
    return drawImage(graphics, anchor, static_cast< ::java::awt::Insets* >(nullptr));
}

bool org::apache::poi::sl::draw::BitmapImageRenderer::drawImage(::java::awt::Graphics2D* graphics, ::java::awt::geom::Rectangle2D* anchor, ::java::awt::Insets* clip)
{
    if(img == nullptr)
        return false;

    auto isClipped = true;
    if(clip == nullptr) {
        isClipped = false;
        clip = new ::java::awt::Insets(int32_t(0), int32_t(0), int32_t(0), int32_t(0));
    }
    auto iw = npc(img)->getWidth();
    auto ih = npc(img)->getHeight();
    auto cw = (int32_t(100000) - npc(clip)->left - npc(clip)->right) / 100000.0;
    auto ch = (int32_t(100000) - npc(clip)->top - npc(clip)->bottom) / 100000.0;
    auto sx = npc(anchor)->getWidth() / (iw * cw);
    auto sy = npc(anchor)->getHeight() / (ih * ch);
    auto tx = npc(anchor)->getX() - (iw * sx * npc(clip)->left / 100000.0);
    auto ty = npc(anchor)->getY() - (ih * sy * npc(clip)->top / 100000.0);
    auto at = new ::java::awt::geom::AffineTransform(sx, static_cast< double >(int32_t(0)), static_cast< double >(int32_t(0)), sy, tx, ty);
    auto clipOld = npc(graphics)->getClip();
    if(isClipped)
        npc(graphics)->clip(npc(anchor)->getBounds2D());

    npc(graphics)->drawRenderedImage(img, at);
    npc(graphics)->setClip(clipOld);
    return true;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::sl::draw::BitmapImageRenderer::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.draw.BitmapImageRenderer", 42);
    return c;
}

void org::apache::poi::sl::draw::BitmapImageRenderer::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        LOG_ = ::org::apache::poi::util::POILogFactory::getLogger(static_cast< ::java::lang::Class* >(ImageRenderer::class_()));
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* org::apache::poi::sl::draw::BitmapImageRenderer::getClass0()
{
    return class_();
}

