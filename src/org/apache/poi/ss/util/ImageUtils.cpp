// Generated from /POI/java/org/apache/poi/ss/util/ImageUtils.java
#include <org/apache/poi/ss/util/ImageUtils.hpp>

#include <java/awt/Dimension.hpp>
#include <java/awt/image/BufferedImage.hpp>
#include <java/io/ByteArrayInputStream.hpp>
#include <java/io/IOException.hpp>
#include <java/io/InputStream.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Double.hpp>
#include <java/lang/Float.hpp>
#include <java/lang/Math.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/Iterator.hpp>
#include <javax/imageio/ImageIO.hpp>
#include <javax/imageio/ImageReader.hpp>
#include <javax/imageio/metadata/IIOMetadata.hpp>
#include <javax/imageio/stream/ImageInputStream.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFClientAnchor.hpp>
#include <org/apache/poi/ss/usermodel/ClientAnchor.hpp>
#include <org/apache/poi/ss/usermodel/Picture.hpp>
#include <org/apache/poi/ss/usermodel/PictureData.hpp>
#include <org/apache/poi/ss/usermodel/Row.hpp>
#include <org/apache/poi/ss/usermodel/Sheet.hpp>
#include <org/apache/poi/ss/usermodel/Workbook.hpp>
#include <org/apache/poi/util/POILogFactory.hpp>
#include <org/apache/poi/util/POILogger.hpp>
#include <org/apache/poi/util/Units.hpp>
#include <org/w3c/dom/Element.hpp>
#include <org/w3c/dom/Node.hpp>
#include <org/w3c/dom/NodeList.hpp>
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
org::apache::poi::ss::util::ImageUtils::ImageUtils(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::util::ImageUtils::ImageUtils()
    : ImageUtils(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::util::POILogger*& org::apache::poi::ss::util::ImageUtils::logger()
{
    clinit();
    return logger_;
}
org::apache::poi::util::POILogger* org::apache::poi::ss::util::ImageUtils::logger_;

constexpr int32_t org::apache::poi::ss::util::ImageUtils::PIXEL_DPI;

java::awt::Dimension* org::apache::poi::ss::util::ImageUtils::getImageDimension(::java::io::InputStream* is, int32_t type)
{
    clinit();
    auto size = new ::java::awt::Dimension();
    switch (type) {
    case ::org::apache::poi::ss::usermodel::Workbook::PICTURE_TYPE_JPEG:
    case ::org::apache::poi::ss::usermodel::Workbook::PICTURE_TYPE_PNG:
    case ::org::apache::poi::ss::usermodel::Workbook::PICTURE_TYPE_DIB:
        try {
            auto iis = ::javax::imageio::ImageIO::createImageInputStream(is);
            {
                auto finally0 = finally([&] {
                    npc(iis)->close();
                });
                {
                    auto i = ::javax::imageio::ImageIO::getImageReaders(iis);
                    auto r = java_cast< ::javax::imageio::ImageReader* >(npc(i)->next());
                    {
                        auto finally1 = finally([&] {
                            npc(r)->dispose();
                        });
                        {
                            npc(r)->setInput(iis);
                            auto img = npc(r)->read(0);
                            auto dpi = getResolution(r);
                            if((*dpi)[int32_t(0)] == 0)
                                (*dpi)[int32_t(0)] = PIXEL_DPI;

                            if((*dpi)[int32_t(1)] == 0)
                                (*dpi)[int32_t(1)] = PIXEL_DPI;

                            npc(size)->width = npc(img)->getWidth() * PIXEL_DPI / (*dpi)[int32_t(0)];
                            npc(size)->height = npc(img)->getHeight() * PIXEL_DPI / (*dpi)[int32_t(1)];
                        }
                    }

                }
            }

        } catch (::java::io::IOException* e) {
            npc(logger_)->log(::org::apache::poi::util::POILogger::WARN, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(e)}));
        }
        break;
    default:
        npc(logger_)->log(::org::apache::poi::util::POILogger::WARN, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(u"Only JPEG, PNG and DIB pictures can be automatically sized"_j)}));
    }

    return size;
}

int32_tArray* org::apache::poi::ss::util::ImageUtils::getResolution(::javax::imageio::ImageReader* r) /* throws(IOException) */
{
    clinit();
    int32_t hdpi = int32_t(96), vdpi = int32_t(96);
    auto mm2inch = 25.4;
    ::org::w3c::dom::NodeList* lst;
    auto node = java_cast< ::org::w3c::dom::Element* >(npc(npc(r)->getImageMetadata(0))->getAsTree(u"javax_imageio_1.0"_j));
    lst = npc(node)->getElementsByTagName(u"HorizontalPixelSize"_j);
    if(lst != nullptr && npc(lst)->getLength() == 1)
        hdpi = static_cast< int32_t >((mm2inch / ::java::lang::Float::parseFloat(npc((java_cast< ::org::w3c::dom::Element* >(npc(lst)->item(0))))->getAttribute(u"value"_j))));

    lst = npc(node)->getElementsByTagName(u"VerticalPixelSize"_j);
    if(lst != nullptr && npc(lst)->getLength() == 1)
        vdpi = static_cast< int32_t >((mm2inch / ::java::lang::Float::parseFloat(npc((java_cast< ::org::w3c::dom::Element* >(npc(lst)->item(0))))->getAttribute(u"value"_j))));

    return new ::int32_tArray({
        hdpi
        , vdpi
    });
}

java::awt::Dimension* org::apache::poi::ss::util::ImageUtils::setPreferredSize(::org::apache::poi::ss::usermodel::Picture* picture, double scaleX, double scaleY)
{
    clinit();
    auto anchor = npc(picture)->getClientAnchor();
    auto isHSSF = (dynamic_cast< ::org::apache::poi::hssf::usermodel::HSSFClientAnchor* >(anchor) != nullptr);
    auto data = npc(picture)->getPictureData();
    auto sheet = npc(picture)->getSheet();
    auto imgSize = getImageDimension(new ::java::io::ByteArrayInputStream(npc(data)->getData()), npc(data)->getPictureType());
    auto anchorSize = ImageUtils::getDimensionFromAnchor(picture);
    auto const scaledWidth = (scaleX == ::java::lang::Double::MAX_VALUE) ? npc(imgSize)->getWidth() : npc(anchorSize)->getWidth() / ::org::apache::poi::util::Units::EMU_PER_PIXEL * scaleX;
    auto const scaledHeight = (scaleY == ::java::lang::Double::MAX_VALUE) ? npc(imgSize)->getHeight() : npc(anchorSize)->getHeight() / ::org::apache::poi::util::Units::EMU_PER_PIXEL * scaleY;
    double w = int32_t(0);
    int32_t col2 = npc(anchor)->getCol1();
    auto dx2 = int32_t(0);
    w = npc(sheet)->getColumnWidthInPixels(col2++);
    if(isHSSF) {
        w *= 1.0 - npc(anchor)->getDx1() / 1024.0;
    } else {
        w -= npc(anchor)->getDx1() / static_cast< double >(::org::apache::poi::util::Units::EMU_PER_PIXEL);
    }
    while (w < scaledWidth) {
        w += npc(sheet)->getColumnWidthInPixels(col2++);
    }
    if(w > scaledWidth) {
        double cw = npc(sheet)->getColumnWidthInPixels(--col2);
        auto delta = w - scaledWidth;
        if(isHSSF) {
            dx2 = static_cast< int32_t >(((cw - delta) / cw * int32_t(1024)));
        } else {
            dx2 = static_cast< int32_t >(((cw - delta) * ::org::apache::poi::util::Units::EMU_PER_PIXEL));
        }
        if(dx2 < 0)
            dx2 = 0;

    }
    npc(anchor)->setCol2(col2);
    npc(anchor)->setDx2(dx2);
    double h = int32_t(0);
    auto row2 = npc(anchor)->getRow1();
    auto dy2 = int32_t(0);
    h = getRowHeightInPixels(sheet, row2++);
    if(isHSSF) {
        h *= int32_t(1) - npc(anchor)->getDy1() / 256.0;
    } else {
        h -= npc(anchor)->getDy1() / static_cast< double >(::org::apache::poi::util::Units::EMU_PER_PIXEL);
    }
    while (h < scaledHeight) {
        h += getRowHeightInPixels(sheet, row2++);
    }
    if(h > scaledHeight) {
        auto ch = getRowHeightInPixels(sheet, --row2);
        auto delta = h - scaledHeight;
        if(isHSSF) {
            dy2 = static_cast< int32_t >(((ch - delta) / ch * int32_t(256)));
        } else {
            dy2 = static_cast< int32_t >(((ch - delta) * ::org::apache::poi::util::Units::EMU_PER_PIXEL));
        }
        if(dy2 < 0)
            dy2 = 0;

    }
    npc(anchor)->setRow2(row2);
    npc(anchor)->setDy2(dy2);
    auto dim = new ::java::awt::Dimension(static_cast< int32_t >(::java::lang::Math::round(scaledWidth * ::org::apache::poi::util::Units::EMU_PER_PIXEL)), static_cast< int32_t >(::java::lang::Math::round(scaledHeight * ::org::apache::poi::util::Units::EMU_PER_PIXEL)));
    return dim;
}

java::awt::Dimension* org::apache::poi::ss::util::ImageUtils::getDimensionFromAnchor(::org::apache::poi::ss::usermodel::Picture* picture)
{
    clinit();
    auto anchor = npc(picture)->getClientAnchor();
    auto isHSSF = (dynamic_cast< ::org::apache::poi::hssf::usermodel::HSSFClientAnchor* >(anchor) != nullptr);
    auto sheet = npc(picture)->getSheet();
    double w = int32_t(0);
    int32_t col2 = npc(anchor)->getCol1();
    w = npc(sheet)->getColumnWidthInPixels(col2++);
    if(isHSSF) {
        w *= int32_t(1) - npc(anchor)->getDx1() / 1024.0;
    } else {
        w -= npc(anchor)->getDx1() / static_cast< double >(::org::apache::poi::util::Units::EMU_PER_PIXEL);
    }
    while (col2 < npc(anchor)->getCol2()) {
        w += npc(sheet)->getColumnWidthInPixels(col2++);
    }
    if(isHSSF) {
        w += npc(sheet)->getColumnWidthInPixels(col2) * npc(anchor)->getDx2() / 1024.0;
    } else {
        w += npc(anchor)->getDx2() / static_cast< double >(::org::apache::poi::util::Units::EMU_PER_PIXEL);
    }
    double h = int32_t(0);
    auto row2 = npc(anchor)->getRow1();
    h = getRowHeightInPixels(sheet, row2++);
    if(isHSSF) {
        h *= int32_t(1) - npc(anchor)->getDy1() / 256.0;
    } else {
        h -= npc(anchor)->getDy1() / static_cast< double >(::org::apache::poi::util::Units::EMU_PER_PIXEL);
    }
    while (row2 < npc(anchor)->getRow2()) {
        h += getRowHeightInPixels(sheet, row2++);
    }
    if(isHSSF) {
        h += getRowHeightInPixels(sheet, row2) * npc(anchor)->getDy2() / int32_t(256);
    } else {
        h += npc(anchor)->getDy2() / static_cast< double >(::org::apache::poi::util::Units::EMU_PER_PIXEL);
    }
    w *= ::org::apache::poi::util::Units::EMU_PER_PIXEL;
    h *= ::org::apache::poi::util::Units::EMU_PER_PIXEL;
    return new ::java::awt::Dimension(static_cast< int32_t >(::java::lang::Math::rint(w)), static_cast< int32_t >(::java::lang::Math::rint(h)));
}

double org::apache::poi::ss::util::ImageUtils::getRowHeightInPixels(::org::apache::poi::ss::usermodel::Sheet* sheet, int32_t rowNum)
{
    clinit();
    auto r = npc(sheet)->getRow(rowNum);
    double points = (r == nullptr) ? npc(sheet)->getDefaultRowHeightInPoints() : npc(r)->getHeightInPoints();
    return ::org::apache::poi::util::Units::toEMU(points) / static_cast< double >(::org::apache::poi::util::Units::EMU_PER_PIXEL);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::util::ImageUtils::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.util.ImageUtils", 33);
    return c;
}

void org::apache::poi::ss::util::ImageUtils::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        logger_ = ::org::apache::poi::util::POILogFactory::getLogger(static_cast< ::java::lang::Class* >(ImageUtils::class_()));
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* org::apache::poi::ss::util::ImageUtils::getClass0()
{
    return class_();
}

