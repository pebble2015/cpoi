// Generated from /POI/java/org/apache/poi/sl/draw/binding/ObjectFactory.java

#pragma once

#include <javax/xml/bind/fwd-POI.hpp>
#include <javax/xml/namespace_/fwd-POI.hpp>
#include <org/apache/poi/sl/draw/binding/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::poi::sl::draw::binding::ObjectFactory
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static ::javax::xml::namespace_::QName* _CTSRgbColorAlpha_QNAME_;
    static ::javax::xml::namespace_::QName* _CTSRgbColorLum_QNAME_;
    static ::javax::xml::namespace_::QName* _CTSRgbColorGamma_QNAME_;
    static ::javax::xml::namespace_::QName* _CTSRgbColorInvGamma_QNAME_;
    static ::javax::xml::namespace_::QName* _CTSRgbColorRedOff_QNAME_;
    static ::javax::xml::namespace_::QName* _CTSRgbColorAlphaMod_QNAME_;
    static ::javax::xml::namespace_::QName* _CTSRgbColorAlphaOff_QNAME_;
    static ::javax::xml::namespace_::QName* _CTSRgbColorGreenOff_QNAME_;
    static ::javax::xml::namespace_::QName* _CTSRgbColorRedMod_QNAME_;
    static ::javax::xml::namespace_::QName* _CTSRgbColorHue_QNAME_;
    static ::javax::xml::namespace_::QName* _CTSRgbColorSatOff_QNAME_;
    static ::javax::xml::namespace_::QName* _CTSRgbColorGreenMod_QNAME_;
    static ::javax::xml::namespace_::QName* _CTSRgbColorSat_QNAME_;
    static ::javax::xml::namespace_::QName* _CTSRgbColorBlue_QNAME_;
    static ::javax::xml::namespace_::QName* _CTSRgbColorRed_QNAME_;
    static ::javax::xml::namespace_::QName* _CTSRgbColorSatMod_QNAME_;
    static ::javax::xml::namespace_::QName* _CTSRgbColorHueOff_QNAME_;
    static ::javax::xml::namespace_::QName* _CTSRgbColorBlueMod_QNAME_;
    static ::javax::xml::namespace_::QName* _CTSRgbColorShade_QNAME_;
    static ::javax::xml::namespace_::QName* _CTSRgbColorLumMod_QNAME_;
    static ::javax::xml::namespace_::QName* _CTSRgbColorInv_QNAME_;
    static ::javax::xml::namespace_::QName* _CTSRgbColorLumOff_QNAME_;
    static ::javax::xml::namespace_::QName* _CTSRgbColorTint_QNAME_;
    static ::javax::xml::namespace_::QName* _CTSRgbColorGreen_QNAME_;
    static ::javax::xml::namespace_::QName* _CTSRgbColorComp_QNAME_;
    static ::javax::xml::namespace_::QName* _CTSRgbColorBlueOff_QNAME_;
    static ::javax::xml::namespace_::QName* _CTSRgbColorHueMod_QNAME_;
    static ::javax::xml::namespace_::QName* _CTSRgbColorGray_QNAME_;
protected:
    void ctor();

public:
    virtual CTPositiveSize2D* createCTPositiveSize2D();
    virtual CTSphereCoords* createCTSphereCoords();
    virtual CTPositivePercentage* createCTPositivePercentage();
    virtual CTAdjPoint2D* createCTAdjPoint2D();
    virtual CTPath2DCubicBezierTo* createCTPath2DCubicBezierTo();
    virtual CTEmbeddedWAVAudioFile* createCTEmbeddedWAVAudioFile();
    virtual CTPresetGeometry2D* createCTPresetGeometry2D();
    virtual CTSchemeColor* createCTSchemeColor();
    virtual CTInverseTransform* createCTInverseTransform();
    virtual CTScRgbColor* createCTScRgbColor();
    virtual CTPositiveFixedAngle* createCTPositiveFixedAngle();
    virtual CTInverseGammaTransform* createCTInverseGammaTransform();
    virtual CTColorMRU* createCTColorMRU();
    virtual CTPath2DArcTo* createCTPath2DArcTo();
    virtual CTSystemColor* createCTSystemColor();
    virtual CTGroupTransform2D* createCTGroupTransform2D();
    virtual CTPoint2D* createCTPoint2D();
    virtual CTGeomRect* createCTGeomRect();
    virtual CTScale2D* createCTScale2D();
    virtual CTGeomGuide* createCTGeomGuide();
    virtual CTXYAdjustHandle* createCTXYAdjustHandle();
    virtual CTCustomGeometry2D* createCTCustomGeometry2D();
    virtual CTOfficeArtExtension* createCTOfficeArtExtension();
    virtual CTGrayscaleTransform* createCTGrayscaleTransform();
    virtual CTPath2DClose* createCTPath2DClose();
    virtual CTComplementTransform* createCTComplementTransform();
    virtual CTPoint3D* createCTPoint3D();
    virtual CTPositiveFixedPercentage* createCTPositiveFixedPercentage();
    virtual CTPath2D* createCTPath2D();
    virtual CTAdjustHandleList* createCTAdjustHandleList();
    virtual CTConnectionSiteList* createCTConnectionSiteList();
    virtual CTPresetTextShape* createCTPresetTextShape();
    virtual CTSRgbColor* createCTSRgbColor();
    virtual CTPath2DMoveTo* createCTPath2DMoveTo();
    virtual CTRelativeRect* createCTRelativeRect();
    virtual CTPath2DList* createCTPath2DList();
    virtual CTPolarAdjustHandle* createCTPolarAdjustHandle();
    virtual CTPercentage* createCTPercentage();
    virtual CTHslColor* createCTHslColor();
    virtual CTRatio* createCTRatio();
    virtual CTGeomGuideList* createCTGeomGuideList();
    virtual CTTransform2D* createCTTransform2D();
    virtual CTGammaTransform* createCTGammaTransform();
    virtual CTPath2DQuadBezierTo* createCTPath2DQuadBezierTo();
    virtual CTAngle* createCTAngle();
    virtual CTConnectionSite* createCTConnectionSite();
    virtual CTHyperlink* createCTHyperlink();
    virtual CTFixedPercentage* createCTFixedPercentage();
    virtual CTPath2DLineTo* createCTPath2DLineTo();
    virtual CTColor* createCTColor();
    virtual CTPresetColor* createCTPresetColor();
    virtual CTVector3D* createCTVector3D();
    virtual CTOfficeArtExtensionList* createCTOfficeArtExtensionList();
    virtual CTConnection* createCTConnection();
    virtual ::javax::xml::bind::JAXBElement* createCTSRgbColorAlpha(CTPositiveFixedPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTSRgbColorLum(CTPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTSRgbColorGamma(CTGammaTransform* value);
    virtual ::javax::xml::bind::JAXBElement* createCTSRgbColorInvGamma(CTInverseGammaTransform* value);
    virtual ::javax::xml::bind::JAXBElement* createCTSRgbColorRedOff(CTPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTSRgbColorAlphaMod(CTPositivePercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTSRgbColorAlphaOff(CTFixedPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTSRgbColorGreenOff(CTPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTSRgbColorRedMod(CTPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTSRgbColorHue(CTPositiveFixedAngle* value);
    virtual ::javax::xml::bind::JAXBElement* createCTSRgbColorSatOff(CTPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTSRgbColorGreenMod(CTPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTSRgbColorSat(CTPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTSRgbColorBlue(CTPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTSRgbColorRed(CTPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTSRgbColorSatMod(CTPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTSRgbColorHueOff(CTAngle* value);
    virtual ::javax::xml::bind::JAXBElement* createCTSRgbColorBlueMod(CTPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTSRgbColorShade(CTPositiveFixedPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTSRgbColorLumMod(CTPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTSRgbColorInv(CTInverseTransform* value);
    virtual ::javax::xml::bind::JAXBElement* createCTSRgbColorLumOff(CTPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTSRgbColorTint(CTPositiveFixedPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTSRgbColorGreen(CTPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTSRgbColorComp(CTComplementTransform* value);
    virtual ::javax::xml::bind::JAXBElement* createCTSRgbColorBlueOff(CTPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTSRgbColorHueMod(CTPositivePercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTSRgbColorGray(CTGrayscaleTransform* value);
    virtual ::javax::xml::bind::JAXBElement* createCTSystemColorLum(CTPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTSystemColorAlpha(CTPositiveFixedPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTSystemColorGamma(CTGammaTransform* value);
    virtual ::javax::xml::bind::JAXBElement* createCTSystemColorInvGamma(CTInverseGammaTransform* value);
    virtual ::javax::xml::bind::JAXBElement* createCTSystemColorAlphaMod(CTPositivePercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTSystemColorRedOff(CTPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTSystemColorAlphaOff(CTFixedPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTSystemColorGreenOff(CTPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTSystemColorRedMod(CTPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTSystemColorHue(CTPositiveFixedAngle* value);
    virtual ::javax::xml::bind::JAXBElement* createCTSystemColorSatOff(CTPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTSystemColorGreenMod(CTPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTSystemColorBlue(CTPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTSystemColorSat(CTPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTSystemColorRed(CTPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTSystemColorSatMod(CTPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTSystemColorBlueMod(CTPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTSystemColorHueOff(CTAngle* value);
    virtual ::javax::xml::bind::JAXBElement* createCTSystemColorShade(CTPositiveFixedPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTSystemColorLumMod(CTPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTSystemColorInv(CTInverseTransform* value);
    virtual ::javax::xml::bind::JAXBElement* createCTSystemColorLumOff(CTPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTSystemColorTint(CTPositiveFixedPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTSystemColorGreen(CTPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTSystemColorComp(CTComplementTransform* value);
    virtual ::javax::xml::bind::JAXBElement* createCTSystemColorBlueOff(CTPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTSystemColorHueMod(CTPositivePercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTSystemColorGray(CTGrayscaleTransform* value);
    virtual ::javax::xml::bind::JAXBElement* createCTSchemeColorLum(CTPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTSchemeColorAlpha(CTPositiveFixedPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTSchemeColorGamma(CTGammaTransform* value);
    virtual ::javax::xml::bind::JAXBElement* createCTSchemeColorInvGamma(CTInverseGammaTransform* value);
    virtual ::javax::xml::bind::JAXBElement* createCTSchemeColorRedOff(CTPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTSchemeColorAlphaMod(CTPositivePercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTSchemeColorAlphaOff(CTFixedPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTSchemeColorGreenOff(CTPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTSchemeColorHue(CTPositiveFixedAngle* value);
    virtual ::javax::xml::bind::JAXBElement* createCTSchemeColorRedMod(CTPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTSchemeColorSatOff(CTPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTSchemeColorGreenMod(CTPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTSchemeColorBlue(CTPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTSchemeColorSat(CTPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTSchemeColorRed(CTPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTSchemeColorSatMod(CTPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTSchemeColorHueOff(CTAngle* value);
    virtual ::javax::xml::bind::JAXBElement* createCTSchemeColorBlueMod(CTPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTSchemeColorShade(CTPositiveFixedPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTSchemeColorLumMod(CTPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTSchemeColorInv(CTInverseTransform* value);
    virtual ::javax::xml::bind::JAXBElement* createCTSchemeColorLumOff(CTPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTSchemeColorTint(CTPositiveFixedPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTSchemeColorGreen(CTPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTSchemeColorComp(CTComplementTransform* value);
    virtual ::javax::xml::bind::JAXBElement* createCTSchemeColorBlueOff(CTPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTSchemeColorHueMod(CTPositivePercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTSchemeColorGray(CTGrayscaleTransform* value);
    virtual ::javax::xml::bind::JAXBElement* createCTScRgbColorLum(CTPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTScRgbColorAlpha(CTPositiveFixedPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTScRgbColorGamma(CTGammaTransform* value);
    virtual ::javax::xml::bind::JAXBElement* createCTScRgbColorInvGamma(CTInverseGammaTransform* value);
    virtual ::javax::xml::bind::JAXBElement* createCTScRgbColorRedOff(CTPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTScRgbColorAlphaMod(CTPositivePercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTScRgbColorAlphaOff(CTFixedPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTScRgbColorGreenOff(CTPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTScRgbColorHue(CTPositiveFixedAngle* value);
    virtual ::javax::xml::bind::JAXBElement* createCTScRgbColorRedMod(CTPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTScRgbColorSatOff(CTPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTScRgbColorGreenMod(CTPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTScRgbColorSat(CTPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTScRgbColorBlue(CTPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTScRgbColorRed(CTPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTScRgbColorSatMod(CTPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTScRgbColorHueOff(CTAngle* value);
    virtual ::javax::xml::bind::JAXBElement* createCTScRgbColorBlueMod(CTPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTScRgbColorShade(CTPositiveFixedPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTScRgbColorLumMod(CTPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTScRgbColorInv(CTInverseTransform* value);
    virtual ::javax::xml::bind::JAXBElement* createCTScRgbColorLumOff(CTPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTScRgbColorTint(CTPositiveFixedPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTScRgbColorGreen(CTPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTScRgbColorComp(CTComplementTransform* value);
    virtual ::javax::xml::bind::JAXBElement* createCTScRgbColorBlueOff(CTPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTScRgbColorHueMod(CTPositivePercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTScRgbColorGray(CTGrayscaleTransform* value);
    virtual ::javax::xml::bind::JAXBElement* createCTHslColorAlpha(CTPositiveFixedPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTHslColorLum(CTPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTHslColorGamma(CTGammaTransform* value);
    virtual ::javax::xml::bind::JAXBElement* createCTHslColorInvGamma(CTInverseGammaTransform* value);
    virtual ::javax::xml::bind::JAXBElement* createCTHslColorAlphaMod(CTPositivePercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTHslColorRedOff(CTPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTHslColorAlphaOff(CTFixedPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTHslColorGreenOff(CTPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTHslColorHue(CTPositiveFixedAngle* value);
    virtual ::javax::xml::bind::JAXBElement* createCTHslColorRedMod(CTPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTHslColorSatOff(CTPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTHslColorGreenMod(CTPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTHslColorBlue(CTPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTHslColorSat(CTPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTHslColorRed(CTPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTHslColorSatMod(CTPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTHslColorBlueMod(CTPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTHslColorHueOff(CTAngle* value);
    virtual ::javax::xml::bind::JAXBElement* createCTHslColorShade(CTPositiveFixedPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTHslColorLumMod(CTPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTHslColorInv(CTInverseTransform* value);
    virtual ::javax::xml::bind::JAXBElement* createCTHslColorLumOff(CTPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTHslColorTint(CTPositiveFixedPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTHslColorGreen(CTPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTHslColorComp(CTComplementTransform* value);
    virtual ::javax::xml::bind::JAXBElement* createCTHslColorBlueOff(CTPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTHslColorHueMod(CTPositivePercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTHslColorGray(CTGrayscaleTransform* value);
    virtual ::javax::xml::bind::JAXBElement* createCTPresetColorLum(CTPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTPresetColorAlpha(CTPositiveFixedPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTPresetColorGamma(CTGammaTransform* value);
    virtual ::javax::xml::bind::JAXBElement* createCTPresetColorInvGamma(CTInverseGammaTransform* value);
    virtual ::javax::xml::bind::JAXBElement* createCTPresetColorRedOff(CTPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTPresetColorAlphaMod(CTPositivePercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTPresetColorAlphaOff(CTFixedPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTPresetColorGreenOff(CTPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTPresetColorHue(CTPositiveFixedAngle* value);
    virtual ::javax::xml::bind::JAXBElement* createCTPresetColorRedMod(CTPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTPresetColorSatOff(CTPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTPresetColorGreenMod(CTPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTPresetColorBlue(CTPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTPresetColorSat(CTPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTPresetColorRed(CTPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTPresetColorSatMod(CTPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTPresetColorBlueMod(CTPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTPresetColorHueOff(CTAngle* value);
    virtual ::javax::xml::bind::JAXBElement* createCTPresetColorShade(CTPositiveFixedPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTPresetColorLumMod(CTPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTPresetColorInv(CTInverseTransform* value);
    virtual ::javax::xml::bind::JAXBElement* createCTPresetColorLumOff(CTPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTPresetColorTint(CTPositiveFixedPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTPresetColorGreen(CTPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTPresetColorComp(CTComplementTransform* value);
    virtual ::javax::xml::bind::JAXBElement* createCTPresetColorBlueOff(CTPercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTPresetColorHueMod(CTPositivePercentage* value);
    virtual ::javax::xml::bind::JAXBElement* createCTPresetColorGray(CTGrayscaleTransform* value);

    // Generated
    ObjectFactory();
protected:
    ObjectFactory(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static ::javax::xml::namespace_::QName*& _CTSRgbColorAlpha_QNAME();
    static ::javax::xml::namespace_::QName*& _CTSRgbColorLum_QNAME();
    static ::javax::xml::namespace_::QName*& _CTSRgbColorGamma_QNAME();
    static ::javax::xml::namespace_::QName*& _CTSRgbColorInvGamma_QNAME();
    static ::javax::xml::namespace_::QName*& _CTSRgbColorRedOff_QNAME();
    static ::javax::xml::namespace_::QName*& _CTSRgbColorAlphaMod_QNAME();
    static ::javax::xml::namespace_::QName*& _CTSRgbColorAlphaOff_QNAME();
    static ::javax::xml::namespace_::QName*& _CTSRgbColorGreenOff_QNAME();
    static ::javax::xml::namespace_::QName*& _CTSRgbColorRedMod_QNAME();
    static ::javax::xml::namespace_::QName*& _CTSRgbColorHue_QNAME();
    static ::javax::xml::namespace_::QName*& _CTSRgbColorSatOff_QNAME();
    static ::javax::xml::namespace_::QName*& _CTSRgbColorGreenMod_QNAME();
    static ::javax::xml::namespace_::QName*& _CTSRgbColorSat_QNAME();
    static ::javax::xml::namespace_::QName*& _CTSRgbColorBlue_QNAME();
    static ::javax::xml::namespace_::QName*& _CTSRgbColorRed_QNAME();
    static ::javax::xml::namespace_::QName*& _CTSRgbColorSatMod_QNAME();
    static ::javax::xml::namespace_::QName*& _CTSRgbColorHueOff_QNAME();
    static ::javax::xml::namespace_::QName*& _CTSRgbColorBlueMod_QNAME();
    static ::javax::xml::namespace_::QName*& _CTSRgbColorShade_QNAME();
    static ::javax::xml::namespace_::QName*& _CTSRgbColorLumMod_QNAME();
    static ::javax::xml::namespace_::QName*& _CTSRgbColorInv_QNAME();
    static ::javax::xml::namespace_::QName*& _CTSRgbColorLumOff_QNAME();
    static ::javax::xml::namespace_::QName*& _CTSRgbColorTint_QNAME();
    static ::javax::xml::namespace_::QName*& _CTSRgbColorGreen_QNAME();
    static ::javax::xml::namespace_::QName*& _CTSRgbColorComp_QNAME();
    static ::javax::xml::namespace_::QName*& _CTSRgbColorBlueOff_QNAME();
    static ::javax::xml::namespace_::QName*& _CTSRgbColorHueMod_QNAME();
    static ::javax::xml::namespace_::QName*& _CTSRgbColorGray_QNAME();
    virtual ::java::lang::Class* getClass0();
};