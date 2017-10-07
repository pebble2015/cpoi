// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/color/fwd-POI.hpp>
#include <java/awt/image/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <javax/imageio/fwd-POI.hpp>
#include <java/lang/Object.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace javax
{
    namespace imageio
    {
typedef ::SubArray< ::javax::imageio::ImageTypeSpecifier, ::java::lang::ObjectArray > ImageTypeSpecifierArray;
    } // imageio
} // javax

struct default_init_tag;

class javax::imageio::ImageTypeSpecifier
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static ImageTypeSpecifierArray* BISpecifier_;

public: /* protected */
    ::java::awt::image::ColorModel* colorModel {  };

private:
    static ::java::awt::color::ColorSpace* sRGB_;

public: /* protected */
    ::java::awt::image::SampleModel* sampleModel {  };

    /*void ctor(); (private) */
protected:
    void ctor(::java::awt::image::RenderedImage* image);
    void ctor(::java::awt::image::ColorModel* colorModel, ::java::awt::image::SampleModel* sampleModel);

public:
    static ImageTypeSpecifier* createBanded(::java::awt::color::ColorSpace* colorSpace, ::int32_tArray* bankIndices, ::int32_tArray* bandOffsets, int32_t dataType, bool hasAlpha, bool isAlphaPremultiplied);
    virtual ::java::awt::image::BufferedImage* createBufferedImage(int32_t width, int32_t height);

public: /* package */
    static ::java::awt::image::ColorModel* createComponentCM(::java::awt::color::ColorSpace* colorSpace, int32_t numBands, int32_t dataType, bool hasAlpha, bool isAlphaPremultiplied);

public:
    static ImageTypeSpecifier* createFromBufferedImageType(int32_t bufferedImageType);
    static ImageTypeSpecifier* createFromRenderedImage(::java::awt::image::RenderedImage* image);
    static ImageTypeSpecifier* createGrayscale(int32_t bits, int32_t dataType, bool isSigned);
    static ImageTypeSpecifier* createGrayscale(int32_t bits, int32_t dataType, bool isSigned, bool isAlphaPremultiplied);
    static ImageTypeSpecifier* createIndexed(::int8_tArray* redLUT, ::int8_tArray* greenLUT, ::int8_tArray* blueLUT, ::int8_tArray* alphaLUT, int32_t bits, int32_t dataType);
    static ImageTypeSpecifier* createInterleaved(::java::awt::color::ColorSpace* colorSpace, ::int32_tArray* bandOffsets, int32_t dataType, bool hasAlpha, bool isAlphaPremultiplied);
    static ImageTypeSpecifier* createPacked(::java::awt::color::ColorSpace* colorSpace, int32_t redMask, int32_t greenMask, int32_t blueMask, int32_t alphaMask, int32_t transferType, bool isAlphaPremultiplied);
    /*static ImageTypeSpecifier* createSpecifier(int32_t type); (private) */
    bool equals(::java::lang::Object* o) override;
    virtual int32_t getBitsPerBand(int32_t band);
    virtual int32_t getBufferedImageType();
    virtual ::java::awt::image::ColorModel* getColorModel();
    virtual int32_t getNumBands();
    virtual int32_t getNumComponents();
    virtual ::java::awt::image::SampleModel* getSampleModel();
    virtual ::java::awt::image::SampleModel* getSampleModel(int32_t width, int32_t height);
    /*static ImageTypeSpecifier* getSpecifier(int32_t type); (private) */
    int32_t hashCode() override;

    // Generated
    ImageTypeSpecifier(::java::awt::image::RenderedImage* image);
    ImageTypeSpecifier(::java::awt::image::ColorModel* colorModel, ::java::awt::image::SampleModel* sampleModel);
protected:
    ImageTypeSpecifier(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    static ImageTypeSpecifierArray*& BISpecifier();
    static ::java::awt::color::ColorSpace*& sRGB();
    virtual ::java::lang::Class* getClass0();
};
