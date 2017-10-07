// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/color/fwd-POI.hpp>
#include <java/awt/image/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/awt/Transparency.hpp>

struct default_init_tag;

class java::awt::image::ColorModel
    : public virtual ::java::lang::Object
    , public virtual ::java::awt::Transparency
{

public:
    typedef ::java::lang::Object super;

private:
    static ColorModel* RGBdefault_;

public: /* package */
    ::java::awt::color::ColorSpace* colorSpace {  };
    int32_t colorSpaceType {  };

private:
    static ::java::util::Map* g16Tos8Map_;
    static ::java::util::Map* g8Tos8Map_;

public: /* package */
    bool isAlphaPremultiplied_ {  };
    bool is_sRGB {  };

private:
    static ::int8_tArray* l16Tos8_;
    static ::int8_tArray* l8Tos8_;
    static ::java::util::Map* lg16Toog16Map_;
    static ::java::util::Map* lg16Toog8Map_;
    static bool loaded_;

public: /* package */
    int32_t maxBits {  };
    ::int32_tArray* nBits {  };
    int32_t numColorComponents {  };
    int32_t numComponents {  };

private:
    int64_t pData {  };

public: /* protected */
    int32_t pixel_bits {  };

private:
    static ::int16_tArray* s8Tol16_;
    static ::int8_tArray* s8Tol8_;

public: /* package */
    bool supportsAlpha {  };

public: /* protected */
    int32_t transferType {  };

public: /* package */
    int32_t transparency {  };

protected:
    void ctor(int32_t bits);
    void ctor(int32_t pixel_bits, ::int32_tArray* bits, ::java::awt::color::ColorSpace* cspace, bool hasAlpha, bool isAlphaPremultiplied, int32_t transparency, int32_t transferType);

public:
    virtual ColorModel* coerceData(WritableRaster* raster, bool isAlphaPremultiplied);
    virtual SampleModel* createCompatibleSampleModel(int32_t w, int32_t h);
    virtual WritableRaster* createCompatibleWritableRaster(int32_t w, int32_t h);
    bool equals(::java::lang::Object* obj) override;
    void finalize() override;
    virtual int32_t getAlpha(int32_t pixel) = 0;
    virtual int32_t getAlpha(::java::lang::Object* inData);
    virtual WritableRaster* getAlphaRaster(WritableRaster* raster);
    virtual int32_t getBlue(int32_t pixel) = 0;
    virtual int32_t getBlue(::java::lang::Object* inData);
    ::java::awt::color::ColorSpace* getColorSpace();
    virtual ::int32_tArray* getComponentSize();
    virtual int32_t getComponentSize(int32_t componentIdx);
    virtual ::int32_tArray* getComponents(int32_t pixel, ::int32_tArray* components, int32_t offset);
    virtual ::int32_tArray* getComponents(::java::lang::Object* pixel, ::int32_tArray* components, int32_t offset);
    virtual int32_t getDataElement(::int32_tArray* components, int32_t offset);
    virtual int32_t getDataElement(::floatArray* normComponents, int32_t normOffset);
    virtual ::java::lang::Object* getDataElements(int32_t rgb, ::java::lang::Object* pixel);
    virtual ::java::lang::Object* getDataElements(::int32_tArray* components, int32_t offset, ::java::lang::Object* obj);
    virtual ::java::lang::Object* getDataElements(::floatArray* normComponents, int32_t normOffset, ::java::lang::Object* obj);

public: /* package */
    static int32_t getDefaultTransferType(int32_t pixel_bits);
    static ::int8_tArray* getGray16TosRGB8LUT(::java::awt::color::ICC_ColorSpace* grayCS);
    static ::int8_tArray* getGray8TosRGB8LUT(::java::awt::color::ICC_ColorSpace* grayCS);

public:
    virtual int32_t getGreen(int32_t pixel) = 0;
    virtual int32_t getGreen(::java::lang::Object* inData);

public: /* package */
    static ::int16_tArray* getLinearGray16ToOtherGray16LUT(::java::awt::color::ICC_ColorSpace* grayCS);
    static ::int8_tArray* getLinearGray16ToOtherGray8LUT(::java::awt::color::ICC_ColorSpace* grayCS);
    static ::int8_tArray* getLinearRGB16TosRGB8LUT();
    static ::int8_tArray* getLinearRGB8TosRGB8LUT();

public:
    virtual ::floatArray* getNormalizedComponents(::java::lang::Object* pixel, ::floatArray* normComponents, int32_t normOffset);
    virtual ::floatArray* getNormalizedComponents(::int32_tArray* components, int32_t offset, ::floatArray* normComponents, int32_t normOffset);
    virtual int32_t getNumColorComponents();
    virtual int32_t getNumComponents();
    virtual int32_t getPixelSize();
    virtual int32_t getRGB(int32_t pixel);
    virtual int32_t getRGB(::java::lang::Object* inData);
    static ColorModel* getRGBdefault();
    virtual int32_t getRed(int32_t pixel) = 0;
    virtual int32_t getRed(::java::lang::Object* inData);
    int32_t getTransferType();
    int32_t getTransparency() override;
    virtual ::int32_tArray* getUnnormalizedComponents(::floatArray* normComponents, int32_t normOffset, ::int32_tArray* components, int32_t offset);

public: /* package */
    static ::int16_tArray* getsRGB8ToLinearRGB16LUT();
    static ::int8_tArray* getsRGB8ToLinearRGB8LUT();

public:
    bool hasAlpha();
    int32_t hashCode() override;
    /*static void initIDs(); (private) */
    bool isAlphaPremultiplied();
    virtual bool isCompatibleRaster(Raster* raster);
    virtual bool isCompatibleSampleModel(SampleModel* sm);

public: /* package */
    static bool isLinearGRAYspace(::java::awt::color::ColorSpace* cs);
    static bool isLinearRGBspace(::java::awt::color::ColorSpace* cs);
    static void loadLibraries();

public:
    ::java::lang::String* toString() override;

    // Generated
    ColorModel(int32_t bits);

public: /* protected */
    ColorModel(int32_t pixel_bits, ::int32_tArray* bits, ::java::awt::color::ColorSpace* cspace, bool hasAlpha, bool isAlphaPremultiplied, int32_t transparency, int32_t transferType);
protected:
    ColorModel(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    static ColorModel*& RGBdefault();

public: /* package */
    static ::java::util::Map*& g16Tos8Map();
    static ::java::util::Map*& g8Tos8Map();
    static ::int8_tArray*& l16Tos8();
    static ::int8_tArray*& l8Tos8();
    static ::java::util::Map*& lg16Toog16Map();
    static ::java::util::Map*& lg16Toog8Map();

private:
    static bool& loaded();

public: /* package */
    static ::int16_tArray*& s8Tol16();
    static ::int8_tArray*& s8Tol8();

private:
    virtual ::java::lang::Class* getClass0();
};
