// Generated from /POI/java/org/apache/poi/sl/draw/binding/ObjectFactory.java
#include <org/apache/poi/sl/draw/binding/ObjectFactory.hpp>

#include <java/lang/Class.hpp>
#include <java/lang/String.hpp>
#include <javax/xml/bind/JAXBElement.hpp>
#include <javax/xml/namespace_/QName.hpp>
#include <org/apache/poi/sl/draw/binding/CTAdjPoint2D.hpp>
#include <org/apache/poi/sl/draw/binding/CTAdjustHandleList.hpp>
#include <org/apache/poi/sl/draw/binding/CTAngle.hpp>
#include <org/apache/poi/sl/draw/binding/CTColor.hpp>
#include <org/apache/poi/sl/draw/binding/CTColorMRU.hpp>
#include <org/apache/poi/sl/draw/binding/CTComplementTransform.hpp>
#include <org/apache/poi/sl/draw/binding/CTConnection.hpp>
#include <org/apache/poi/sl/draw/binding/CTConnectionSite.hpp>
#include <org/apache/poi/sl/draw/binding/CTConnectionSiteList.hpp>
#include <org/apache/poi/sl/draw/binding/CTCustomGeometry2D.hpp>
#include <org/apache/poi/sl/draw/binding/CTEmbeddedWAVAudioFile.hpp>
#include <org/apache/poi/sl/draw/binding/CTFixedPercentage.hpp>
#include <org/apache/poi/sl/draw/binding/CTGammaTransform.hpp>
#include <org/apache/poi/sl/draw/binding/CTGeomGuide.hpp>
#include <org/apache/poi/sl/draw/binding/CTGeomGuideList.hpp>
#include <org/apache/poi/sl/draw/binding/CTGeomRect.hpp>
#include <org/apache/poi/sl/draw/binding/CTGrayscaleTransform.hpp>
#include <org/apache/poi/sl/draw/binding/CTGroupTransform2D.hpp>
#include <org/apache/poi/sl/draw/binding/CTHslColor.hpp>
#include <org/apache/poi/sl/draw/binding/CTHyperlink.hpp>
#include <org/apache/poi/sl/draw/binding/CTInverseGammaTransform.hpp>
#include <org/apache/poi/sl/draw/binding/CTInverseTransform.hpp>
#include <org/apache/poi/sl/draw/binding/CTOfficeArtExtension.hpp>
#include <org/apache/poi/sl/draw/binding/CTOfficeArtExtensionList.hpp>
#include <org/apache/poi/sl/draw/binding/CTPath2D.hpp>
#include <org/apache/poi/sl/draw/binding/CTPath2DArcTo.hpp>
#include <org/apache/poi/sl/draw/binding/CTPath2DClose.hpp>
#include <org/apache/poi/sl/draw/binding/CTPath2DCubicBezierTo.hpp>
#include <org/apache/poi/sl/draw/binding/CTPath2DLineTo.hpp>
#include <org/apache/poi/sl/draw/binding/CTPath2DList.hpp>
#include <org/apache/poi/sl/draw/binding/CTPath2DMoveTo.hpp>
#include <org/apache/poi/sl/draw/binding/CTPath2DQuadBezierTo.hpp>
#include <org/apache/poi/sl/draw/binding/CTPercentage.hpp>
#include <org/apache/poi/sl/draw/binding/CTPoint2D.hpp>
#include <org/apache/poi/sl/draw/binding/CTPoint3D.hpp>
#include <org/apache/poi/sl/draw/binding/CTPolarAdjustHandle.hpp>
#include <org/apache/poi/sl/draw/binding/CTPositiveFixedAngle.hpp>
#include <org/apache/poi/sl/draw/binding/CTPositiveFixedPercentage.hpp>
#include <org/apache/poi/sl/draw/binding/CTPositivePercentage.hpp>
#include <org/apache/poi/sl/draw/binding/CTPositiveSize2D.hpp>
#include <org/apache/poi/sl/draw/binding/CTPresetColor.hpp>
#include <org/apache/poi/sl/draw/binding/CTPresetGeometry2D.hpp>
#include <org/apache/poi/sl/draw/binding/CTPresetTextShape.hpp>
#include <org/apache/poi/sl/draw/binding/CTRatio.hpp>
#include <org/apache/poi/sl/draw/binding/CTRelativeRect.hpp>
#include <org/apache/poi/sl/draw/binding/CTSRgbColor.hpp>
#include <org/apache/poi/sl/draw/binding/CTScRgbColor.hpp>
#include <org/apache/poi/sl/draw/binding/CTScale2D.hpp>
#include <org/apache/poi/sl/draw/binding/CTSchemeColor.hpp>
#include <org/apache/poi/sl/draw/binding/CTSphereCoords.hpp>
#include <org/apache/poi/sl/draw/binding/CTSystemColor.hpp>
#include <org/apache/poi/sl/draw/binding/CTTransform2D.hpp>
#include <org/apache/poi/sl/draw/binding/CTVector3D.hpp>
#include <org/apache/poi/sl/draw/binding/CTXYAdjustHandle.hpp>

org::apache::poi::sl::draw::binding::ObjectFactory::ObjectFactory(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::sl::draw::binding::ObjectFactory::ObjectFactory() 
    : ObjectFactory(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

javax::xml::namespace_::QName*& org::apache::poi::sl::draw::binding::ObjectFactory::_CTSRgbColorAlpha_QNAME()
{
    clinit();
    return _CTSRgbColorAlpha_QNAME_;
}
javax::xml::namespace_::QName* org::apache::poi::sl::draw::binding::ObjectFactory::_CTSRgbColorAlpha_QNAME_;

javax::xml::namespace_::QName*& org::apache::poi::sl::draw::binding::ObjectFactory::_CTSRgbColorLum_QNAME()
{
    clinit();
    return _CTSRgbColorLum_QNAME_;
}
javax::xml::namespace_::QName* org::apache::poi::sl::draw::binding::ObjectFactory::_CTSRgbColorLum_QNAME_;

javax::xml::namespace_::QName*& org::apache::poi::sl::draw::binding::ObjectFactory::_CTSRgbColorGamma_QNAME()
{
    clinit();
    return _CTSRgbColorGamma_QNAME_;
}
javax::xml::namespace_::QName* org::apache::poi::sl::draw::binding::ObjectFactory::_CTSRgbColorGamma_QNAME_;

javax::xml::namespace_::QName*& org::apache::poi::sl::draw::binding::ObjectFactory::_CTSRgbColorInvGamma_QNAME()
{
    clinit();
    return _CTSRgbColorInvGamma_QNAME_;
}
javax::xml::namespace_::QName* org::apache::poi::sl::draw::binding::ObjectFactory::_CTSRgbColorInvGamma_QNAME_;

javax::xml::namespace_::QName*& org::apache::poi::sl::draw::binding::ObjectFactory::_CTSRgbColorRedOff_QNAME()
{
    clinit();
    return _CTSRgbColorRedOff_QNAME_;
}
javax::xml::namespace_::QName* org::apache::poi::sl::draw::binding::ObjectFactory::_CTSRgbColorRedOff_QNAME_;

javax::xml::namespace_::QName*& org::apache::poi::sl::draw::binding::ObjectFactory::_CTSRgbColorAlphaMod_QNAME()
{
    clinit();
    return _CTSRgbColorAlphaMod_QNAME_;
}
javax::xml::namespace_::QName* org::apache::poi::sl::draw::binding::ObjectFactory::_CTSRgbColorAlphaMod_QNAME_;

javax::xml::namespace_::QName*& org::apache::poi::sl::draw::binding::ObjectFactory::_CTSRgbColorAlphaOff_QNAME()
{
    clinit();
    return _CTSRgbColorAlphaOff_QNAME_;
}
javax::xml::namespace_::QName* org::apache::poi::sl::draw::binding::ObjectFactory::_CTSRgbColorAlphaOff_QNAME_;

javax::xml::namespace_::QName*& org::apache::poi::sl::draw::binding::ObjectFactory::_CTSRgbColorGreenOff_QNAME()
{
    clinit();
    return _CTSRgbColorGreenOff_QNAME_;
}
javax::xml::namespace_::QName* org::apache::poi::sl::draw::binding::ObjectFactory::_CTSRgbColorGreenOff_QNAME_;

javax::xml::namespace_::QName*& org::apache::poi::sl::draw::binding::ObjectFactory::_CTSRgbColorRedMod_QNAME()
{
    clinit();
    return _CTSRgbColorRedMod_QNAME_;
}
javax::xml::namespace_::QName* org::apache::poi::sl::draw::binding::ObjectFactory::_CTSRgbColorRedMod_QNAME_;

javax::xml::namespace_::QName*& org::apache::poi::sl::draw::binding::ObjectFactory::_CTSRgbColorHue_QNAME()
{
    clinit();
    return _CTSRgbColorHue_QNAME_;
}
javax::xml::namespace_::QName* org::apache::poi::sl::draw::binding::ObjectFactory::_CTSRgbColorHue_QNAME_;

javax::xml::namespace_::QName*& org::apache::poi::sl::draw::binding::ObjectFactory::_CTSRgbColorSatOff_QNAME()
{
    clinit();
    return _CTSRgbColorSatOff_QNAME_;
}
javax::xml::namespace_::QName* org::apache::poi::sl::draw::binding::ObjectFactory::_CTSRgbColorSatOff_QNAME_;

javax::xml::namespace_::QName*& org::apache::poi::sl::draw::binding::ObjectFactory::_CTSRgbColorGreenMod_QNAME()
{
    clinit();
    return _CTSRgbColorGreenMod_QNAME_;
}
javax::xml::namespace_::QName* org::apache::poi::sl::draw::binding::ObjectFactory::_CTSRgbColorGreenMod_QNAME_;

javax::xml::namespace_::QName*& org::apache::poi::sl::draw::binding::ObjectFactory::_CTSRgbColorSat_QNAME()
{
    clinit();
    return _CTSRgbColorSat_QNAME_;
}
javax::xml::namespace_::QName* org::apache::poi::sl::draw::binding::ObjectFactory::_CTSRgbColorSat_QNAME_;

javax::xml::namespace_::QName*& org::apache::poi::sl::draw::binding::ObjectFactory::_CTSRgbColorBlue_QNAME()
{
    clinit();
    return _CTSRgbColorBlue_QNAME_;
}
javax::xml::namespace_::QName* org::apache::poi::sl::draw::binding::ObjectFactory::_CTSRgbColorBlue_QNAME_;

javax::xml::namespace_::QName*& org::apache::poi::sl::draw::binding::ObjectFactory::_CTSRgbColorRed_QNAME()
{
    clinit();
    return _CTSRgbColorRed_QNAME_;
}
javax::xml::namespace_::QName* org::apache::poi::sl::draw::binding::ObjectFactory::_CTSRgbColorRed_QNAME_;

javax::xml::namespace_::QName*& org::apache::poi::sl::draw::binding::ObjectFactory::_CTSRgbColorSatMod_QNAME()
{
    clinit();
    return _CTSRgbColorSatMod_QNAME_;
}
javax::xml::namespace_::QName* org::apache::poi::sl::draw::binding::ObjectFactory::_CTSRgbColorSatMod_QNAME_;

javax::xml::namespace_::QName*& org::apache::poi::sl::draw::binding::ObjectFactory::_CTSRgbColorHueOff_QNAME()
{
    clinit();
    return _CTSRgbColorHueOff_QNAME_;
}
javax::xml::namespace_::QName* org::apache::poi::sl::draw::binding::ObjectFactory::_CTSRgbColorHueOff_QNAME_;

javax::xml::namespace_::QName*& org::apache::poi::sl::draw::binding::ObjectFactory::_CTSRgbColorBlueMod_QNAME()
{
    clinit();
    return _CTSRgbColorBlueMod_QNAME_;
}
javax::xml::namespace_::QName* org::apache::poi::sl::draw::binding::ObjectFactory::_CTSRgbColorBlueMod_QNAME_;

javax::xml::namespace_::QName*& org::apache::poi::sl::draw::binding::ObjectFactory::_CTSRgbColorShade_QNAME()
{
    clinit();
    return _CTSRgbColorShade_QNAME_;
}
javax::xml::namespace_::QName* org::apache::poi::sl::draw::binding::ObjectFactory::_CTSRgbColorShade_QNAME_;

javax::xml::namespace_::QName*& org::apache::poi::sl::draw::binding::ObjectFactory::_CTSRgbColorLumMod_QNAME()
{
    clinit();
    return _CTSRgbColorLumMod_QNAME_;
}
javax::xml::namespace_::QName* org::apache::poi::sl::draw::binding::ObjectFactory::_CTSRgbColorLumMod_QNAME_;

javax::xml::namespace_::QName*& org::apache::poi::sl::draw::binding::ObjectFactory::_CTSRgbColorInv_QNAME()
{
    clinit();
    return _CTSRgbColorInv_QNAME_;
}
javax::xml::namespace_::QName* org::apache::poi::sl::draw::binding::ObjectFactory::_CTSRgbColorInv_QNAME_;

javax::xml::namespace_::QName*& org::apache::poi::sl::draw::binding::ObjectFactory::_CTSRgbColorLumOff_QNAME()
{
    clinit();
    return _CTSRgbColorLumOff_QNAME_;
}
javax::xml::namespace_::QName* org::apache::poi::sl::draw::binding::ObjectFactory::_CTSRgbColorLumOff_QNAME_;

javax::xml::namespace_::QName*& org::apache::poi::sl::draw::binding::ObjectFactory::_CTSRgbColorTint_QNAME()
{
    clinit();
    return _CTSRgbColorTint_QNAME_;
}
javax::xml::namespace_::QName* org::apache::poi::sl::draw::binding::ObjectFactory::_CTSRgbColorTint_QNAME_;

javax::xml::namespace_::QName*& org::apache::poi::sl::draw::binding::ObjectFactory::_CTSRgbColorGreen_QNAME()
{
    clinit();
    return _CTSRgbColorGreen_QNAME_;
}
javax::xml::namespace_::QName* org::apache::poi::sl::draw::binding::ObjectFactory::_CTSRgbColorGreen_QNAME_;

javax::xml::namespace_::QName*& org::apache::poi::sl::draw::binding::ObjectFactory::_CTSRgbColorComp_QNAME()
{
    clinit();
    return _CTSRgbColorComp_QNAME_;
}
javax::xml::namespace_::QName* org::apache::poi::sl::draw::binding::ObjectFactory::_CTSRgbColorComp_QNAME_;

javax::xml::namespace_::QName*& org::apache::poi::sl::draw::binding::ObjectFactory::_CTSRgbColorBlueOff_QNAME()
{
    clinit();
    return _CTSRgbColorBlueOff_QNAME_;
}
javax::xml::namespace_::QName* org::apache::poi::sl::draw::binding::ObjectFactory::_CTSRgbColorBlueOff_QNAME_;

javax::xml::namespace_::QName*& org::apache::poi::sl::draw::binding::ObjectFactory::_CTSRgbColorHueMod_QNAME()
{
    clinit();
    return _CTSRgbColorHueMod_QNAME_;
}
javax::xml::namespace_::QName* org::apache::poi::sl::draw::binding::ObjectFactory::_CTSRgbColorHueMod_QNAME_;

javax::xml::namespace_::QName*& org::apache::poi::sl::draw::binding::ObjectFactory::_CTSRgbColorGray_QNAME()
{
    clinit();
    return _CTSRgbColorGray_QNAME_;
}
javax::xml::namespace_::QName* org::apache::poi::sl::draw::binding::ObjectFactory::_CTSRgbColorGray_QNAME_;

void org::apache::poi::sl::draw::binding::ObjectFactory::ctor()
{
    super::ctor();
}

org::apache::poi::sl::draw::binding::CTPositiveSize2D* org::apache::poi::sl::draw::binding::ObjectFactory::createCTPositiveSize2D()
{
    return new CTPositiveSize2D();
}

org::apache::poi::sl::draw::binding::CTSphereCoords* org::apache::poi::sl::draw::binding::ObjectFactory::createCTSphereCoords()
{
    return new CTSphereCoords();
}

org::apache::poi::sl::draw::binding::CTPositivePercentage* org::apache::poi::sl::draw::binding::ObjectFactory::createCTPositivePercentage()
{
    return new CTPositivePercentage();
}

org::apache::poi::sl::draw::binding::CTAdjPoint2D* org::apache::poi::sl::draw::binding::ObjectFactory::createCTAdjPoint2D()
{
    return new CTAdjPoint2D();
}

org::apache::poi::sl::draw::binding::CTPath2DCubicBezierTo* org::apache::poi::sl::draw::binding::ObjectFactory::createCTPath2DCubicBezierTo()
{
    return new CTPath2DCubicBezierTo();
}

org::apache::poi::sl::draw::binding::CTEmbeddedWAVAudioFile* org::apache::poi::sl::draw::binding::ObjectFactory::createCTEmbeddedWAVAudioFile()
{
    return new CTEmbeddedWAVAudioFile();
}

org::apache::poi::sl::draw::binding::CTPresetGeometry2D* org::apache::poi::sl::draw::binding::ObjectFactory::createCTPresetGeometry2D()
{
    return new CTPresetGeometry2D();
}

org::apache::poi::sl::draw::binding::CTSchemeColor* org::apache::poi::sl::draw::binding::ObjectFactory::createCTSchemeColor()
{
    return new CTSchemeColor();
}

org::apache::poi::sl::draw::binding::CTInverseTransform* org::apache::poi::sl::draw::binding::ObjectFactory::createCTInverseTransform()
{
    return new CTInverseTransform();
}

org::apache::poi::sl::draw::binding::CTScRgbColor* org::apache::poi::sl::draw::binding::ObjectFactory::createCTScRgbColor()
{
    return new CTScRgbColor();
}

org::apache::poi::sl::draw::binding::CTPositiveFixedAngle* org::apache::poi::sl::draw::binding::ObjectFactory::createCTPositiveFixedAngle()
{
    return new CTPositiveFixedAngle();
}

org::apache::poi::sl::draw::binding::CTInverseGammaTransform* org::apache::poi::sl::draw::binding::ObjectFactory::createCTInverseGammaTransform()
{
    return new CTInverseGammaTransform();
}

org::apache::poi::sl::draw::binding::CTColorMRU* org::apache::poi::sl::draw::binding::ObjectFactory::createCTColorMRU()
{
    return new CTColorMRU();
}

org::apache::poi::sl::draw::binding::CTPath2DArcTo* org::apache::poi::sl::draw::binding::ObjectFactory::createCTPath2DArcTo()
{
    return new CTPath2DArcTo();
}

org::apache::poi::sl::draw::binding::CTSystemColor* org::apache::poi::sl::draw::binding::ObjectFactory::createCTSystemColor()
{
    return new CTSystemColor();
}

org::apache::poi::sl::draw::binding::CTGroupTransform2D* org::apache::poi::sl::draw::binding::ObjectFactory::createCTGroupTransform2D()
{
    return new CTGroupTransform2D();
}

org::apache::poi::sl::draw::binding::CTPoint2D* org::apache::poi::sl::draw::binding::ObjectFactory::createCTPoint2D()
{
    return new CTPoint2D();
}

org::apache::poi::sl::draw::binding::CTGeomRect* org::apache::poi::sl::draw::binding::ObjectFactory::createCTGeomRect()
{
    return new CTGeomRect();
}

org::apache::poi::sl::draw::binding::CTScale2D* org::apache::poi::sl::draw::binding::ObjectFactory::createCTScale2D()
{
    return new CTScale2D();
}

org::apache::poi::sl::draw::binding::CTGeomGuide* org::apache::poi::sl::draw::binding::ObjectFactory::createCTGeomGuide()
{
    return new CTGeomGuide();
}

org::apache::poi::sl::draw::binding::CTXYAdjustHandle* org::apache::poi::sl::draw::binding::ObjectFactory::createCTXYAdjustHandle()
{
    return new CTXYAdjustHandle();
}

org::apache::poi::sl::draw::binding::CTCustomGeometry2D* org::apache::poi::sl::draw::binding::ObjectFactory::createCTCustomGeometry2D()
{
    return new CTCustomGeometry2D();
}

org::apache::poi::sl::draw::binding::CTOfficeArtExtension* org::apache::poi::sl::draw::binding::ObjectFactory::createCTOfficeArtExtension()
{
    return new CTOfficeArtExtension();
}

org::apache::poi::sl::draw::binding::CTGrayscaleTransform* org::apache::poi::sl::draw::binding::ObjectFactory::createCTGrayscaleTransform()
{
    return new CTGrayscaleTransform();
}

org::apache::poi::sl::draw::binding::CTPath2DClose* org::apache::poi::sl::draw::binding::ObjectFactory::createCTPath2DClose()
{
    return new CTPath2DClose();
}

org::apache::poi::sl::draw::binding::CTComplementTransform* org::apache::poi::sl::draw::binding::ObjectFactory::createCTComplementTransform()
{
    return new CTComplementTransform();
}

org::apache::poi::sl::draw::binding::CTPoint3D* org::apache::poi::sl::draw::binding::ObjectFactory::createCTPoint3D()
{
    return new CTPoint3D();
}

org::apache::poi::sl::draw::binding::CTPositiveFixedPercentage* org::apache::poi::sl::draw::binding::ObjectFactory::createCTPositiveFixedPercentage()
{
    return new CTPositiveFixedPercentage();
}

org::apache::poi::sl::draw::binding::CTPath2D* org::apache::poi::sl::draw::binding::ObjectFactory::createCTPath2D()
{
    return new CTPath2D();
}

org::apache::poi::sl::draw::binding::CTAdjustHandleList* org::apache::poi::sl::draw::binding::ObjectFactory::createCTAdjustHandleList()
{
    return new CTAdjustHandleList();
}

org::apache::poi::sl::draw::binding::CTConnectionSiteList* org::apache::poi::sl::draw::binding::ObjectFactory::createCTConnectionSiteList()
{
    return new CTConnectionSiteList();
}

org::apache::poi::sl::draw::binding::CTPresetTextShape* org::apache::poi::sl::draw::binding::ObjectFactory::createCTPresetTextShape()
{
    return new CTPresetTextShape();
}

org::apache::poi::sl::draw::binding::CTSRgbColor* org::apache::poi::sl::draw::binding::ObjectFactory::createCTSRgbColor()
{
    return new CTSRgbColor();
}

org::apache::poi::sl::draw::binding::CTPath2DMoveTo* org::apache::poi::sl::draw::binding::ObjectFactory::createCTPath2DMoveTo()
{
    return new CTPath2DMoveTo();
}

org::apache::poi::sl::draw::binding::CTRelativeRect* org::apache::poi::sl::draw::binding::ObjectFactory::createCTRelativeRect()
{
    return new CTRelativeRect();
}

org::apache::poi::sl::draw::binding::CTPath2DList* org::apache::poi::sl::draw::binding::ObjectFactory::createCTPath2DList()
{
    return new CTPath2DList();
}

org::apache::poi::sl::draw::binding::CTPolarAdjustHandle* org::apache::poi::sl::draw::binding::ObjectFactory::createCTPolarAdjustHandle()
{
    return new CTPolarAdjustHandle();
}

org::apache::poi::sl::draw::binding::CTPercentage* org::apache::poi::sl::draw::binding::ObjectFactory::createCTPercentage()
{
    return new CTPercentage();
}

org::apache::poi::sl::draw::binding::CTHslColor* org::apache::poi::sl::draw::binding::ObjectFactory::createCTHslColor()
{
    return new CTHslColor();
}

org::apache::poi::sl::draw::binding::CTRatio* org::apache::poi::sl::draw::binding::ObjectFactory::createCTRatio()
{
    return new CTRatio();
}

org::apache::poi::sl::draw::binding::CTGeomGuideList* org::apache::poi::sl::draw::binding::ObjectFactory::createCTGeomGuideList()
{
    return new CTGeomGuideList();
}

org::apache::poi::sl::draw::binding::CTTransform2D* org::apache::poi::sl::draw::binding::ObjectFactory::createCTTransform2D()
{
    return new CTTransform2D();
}

org::apache::poi::sl::draw::binding::CTGammaTransform* org::apache::poi::sl::draw::binding::ObjectFactory::createCTGammaTransform()
{
    return new CTGammaTransform();
}

org::apache::poi::sl::draw::binding::CTPath2DQuadBezierTo* org::apache::poi::sl::draw::binding::ObjectFactory::createCTPath2DQuadBezierTo()
{
    return new CTPath2DQuadBezierTo();
}

org::apache::poi::sl::draw::binding::CTAngle* org::apache::poi::sl::draw::binding::ObjectFactory::createCTAngle()
{
    return new CTAngle();
}

org::apache::poi::sl::draw::binding::CTConnectionSite* org::apache::poi::sl::draw::binding::ObjectFactory::createCTConnectionSite()
{
    return new CTConnectionSite();
}

org::apache::poi::sl::draw::binding::CTHyperlink* org::apache::poi::sl::draw::binding::ObjectFactory::createCTHyperlink()
{
    return new CTHyperlink();
}

org::apache::poi::sl::draw::binding::CTFixedPercentage* org::apache::poi::sl::draw::binding::ObjectFactory::createCTFixedPercentage()
{
    return new CTFixedPercentage();
}

org::apache::poi::sl::draw::binding::CTPath2DLineTo* org::apache::poi::sl::draw::binding::ObjectFactory::createCTPath2DLineTo()
{
    return new CTPath2DLineTo();
}

org::apache::poi::sl::draw::binding::CTColor* org::apache::poi::sl::draw::binding::ObjectFactory::createCTColor()
{
    return new CTColor();
}

org::apache::poi::sl::draw::binding::CTPresetColor* org::apache::poi::sl::draw::binding::ObjectFactory::createCTPresetColor()
{
    return new CTPresetColor();
}

org::apache::poi::sl::draw::binding::CTVector3D* org::apache::poi::sl::draw::binding::ObjectFactory::createCTVector3D()
{
    return new CTVector3D();
}

org::apache::poi::sl::draw::binding::CTOfficeArtExtensionList* org::apache::poi::sl::draw::binding::ObjectFactory::createCTOfficeArtExtensionList()
{
    return new CTOfficeArtExtensionList();
}

org::apache::poi::sl::draw::binding::CTConnection* org::apache::poi::sl::draw::binding::ObjectFactory::createCTConnection()
{
    return new CTConnection();
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTSRgbColorAlpha(CTPositiveFixedPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorAlpha_QNAME_, CTPositiveFixedPercentage::class_(), CTSRgbColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTSRgbColorLum(CTPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorLum_QNAME_, CTPercentage::class_(), CTSRgbColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTSRgbColorGamma(CTGammaTransform* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorGamma_QNAME_, CTGammaTransform::class_(), CTSRgbColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTSRgbColorInvGamma(CTInverseGammaTransform* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorInvGamma_QNAME_, CTInverseGammaTransform::class_(), CTSRgbColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTSRgbColorRedOff(CTPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorRedOff_QNAME_, CTPercentage::class_(), CTSRgbColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTSRgbColorAlphaMod(CTPositivePercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorAlphaMod_QNAME_, CTPositivePercentage::class_(), CTSRgbColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTSRgbColorAlphaOff(CTFixedPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorAlphaOff_QNAME_, CTFixedPercentage::class_(), CTSRgbColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTSRgbColorGreenOff(CTPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorGreenOff_QNAME_, CTPercentage::class_(), CTSRgbColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTSRgbColorRedMod(CTPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorRedMod_QNAME_, CTPercentage::class_(), CTSRgbColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTSRgbColorHue(CTPositiveFixedAngle* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorHue_QNAME_, CTPositiveFixedAngle::class_(), CTSRgbColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTSRgbColorSatOff(CTPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorSatOff_QNAME_, CTPercentage::class_(), CTSRgbColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTSRgbColorGreenMod(CTPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorGreenMod_QNAME_, CTPercentage::class_(), CTSRgbColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTSRgbColorSat(CTPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorSat_QNAME_, CTPercentage::class_(), CTSRgbColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTSRgbColorBlue(CTPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorBlue_QNAME_, CTPercentage::class_(), CTSRgbColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTSRgbColorRed(CTPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorRed_QNAME_, CTPercentage::class_(), CTSRgbColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTSRgbColorSatMod(CTPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorSatMod_QNAME_, CTPercentage::class_(), CTSRgbColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTSRgbColorHueOff(CTAngle* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorHueOff_QNAME_, CTAngle::class_(), CTSRgbColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTSRgbColorBlueMod(CTPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorBlueMod_QNAME_, CTPercentage::class_(), CTSRgbColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTSRgbColorShade(CTPositiveFixedPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorShade_QNAME_, CTPositiveFixedPercentage::class_(), CTSRgbColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTSRgbColorLumMod(CTPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorLumMod_QNAME_, CTPercentage::class_(), CTSRgbColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTSRgbColorInv(CTInverseTransform* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorInv_QNAME_, CTInverseTransform::class_(), CTSRgbColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTSRgbColorLumOff(CTPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorLumOff_QNAME_, CTPercentage::class_(), CTSRgbColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTSRgbColorTint(CTPositiveFixedPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorTint_QNAME_, CTPositiveFixedPercentage::class_(), CTSRgbColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTSRgbColorGreen(CTPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorGreen_QNAME_, CTPercentage::class_(), CTSRgbColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTSRgbColorComp(CTComplementTransform* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorComp_QNAME_, CTComplementTransform::class_(), CTSRgbColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTSRgbColorBlueOff(CTPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorBlueOff_QNAME_, CTPercentage::class_(), CTSRgbColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTSRgbColorHueMod(CTPositivePercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorHueMod_QNAME_, CTPositivePercentage::class_(), CTSRgbColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTSRgbColorGray(CTGrayscaleTransform* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorGray_QNAME_, CTGrayscaleTransform::class_(), CTSRgbColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTSystemColorLum(CTPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorLum_QNAME_, CTPercentage::class_(), CTSystemColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTSystemColorAlpha(CTPositiveFixedPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorAlpha_QNAME_, CTPositiveFixedPercentage::class_(), CTSystemColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTSystemColorGamma(CTGammaTransform* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorGamma_QNAME_, CTGammaTransform::class_(), CTSystemColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTSystemColorInvGamma(CTInverseGammaTransform* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorInvGamma_QNAME_, CTInverseGammaTransform::class_(), CTSystemColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTSystemColorAlphaMod(CTPositivePercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorAlphaMod_QNAME_, CTPositivePercentage::class_(), CTSystemColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTSystemColorRedOff(CTPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorRedOff_QNAME_, CTPercentage::class_(), CTSystemColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTSystemColorAlphaOff(CTFixedPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorAlphaOff_QNAME_, CTFixedPercentage::class_(), CTSystemColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTSystemColorGreenOff(CTPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorGreenOff_QNAME_, CTPercentage::class_(), CTSystemColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTSystemColorRedMod(CTPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorRedMod_QNAME_, CTPercentage::class_(), CTSystemColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTSystemColorHue(CTPositiveFixedAngle* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorHue_QNAME_, CTPositiveFixedAngle::class_(), CTSystemColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTSystemColorSatOff(CTPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorSatOff_QNAME_, CTPercentage::class_(), CTSystemColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTSystemColorGreenMod(CTPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorGreenMod_QNAME_, CTPercentage::class_(), CTSystemColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTSystemColorBlue(CTPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorBlue_QNAME_, CTPercentage::class_(), CTSystemColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTSystemColorSat(CTPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorSat_QNAME_, CTPercentage::class_(), CTSystemColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTSystemColorRed(CTPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorRed_QNAME_, CTPercentage::class_(), CTSystemColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTSystemColorSatMod(CTPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorSatMod_QNAME_, CTPercentage::class_(), CTSystemColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTSystemColorBlueMod(CTPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorBlueMod_QNAME_, CTPercentage::class_(), CTSystemColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTSystemColorHueOff(CTAngle* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorHueOff_QNAME_, CTAngle::class_(), CTSystemColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTSystemColorShade(CTPositiveFixedPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorShade_QNAME_, CTPositiveFixedPercentage::class_(), CTSystemColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTSystemColorLumMod(CTPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorLumMod_QNAME_, CTPercentage::class_(), CTSystemColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTSystemColorInv(CTInverseTransform* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorInv_QNAME_, CTInverseTransform::class_(), CTSystemColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTSystemColorLumOff(CTPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorLumOff_QNAME_, CTPercentage::class_(), CTSystemColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTSystemColorTint(CTPositiveFixedPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorTint_QNAME_, CTPositiveFixedPercentage::class_(), CTSystemColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTSystemColorGreen(CTPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorGreen_QNAME_, CTPercentage::class_(), CTSystemColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTSystemColorComp(CTComplementTransform* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorComp_QNAME_, CTComplementTransform::class_(), CTSystemColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTSystemColorBlueOff(CTPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorBlueOff_QNAME_, CTPercentage::class_(), CTSystemColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTSystemColorHueMod(CTPositivePercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorHueMod_QNAME_, CTPositivePercentage::class_(), CTSystemColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTSystemColorGray(CTGrayscaleTransform* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorGray_QNAME_, CTGrayscaleTransform::class_(), CTSystemColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTSchemeColorLum(CTPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorLum_QNAME_, CTPercentage::class_(), CTSchemeColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTSchemeColorAlpha(CTPositiveFixedPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorAlpha_QNAME_, CTPositiveFixedPercentage::class_(), CTSchemeColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTSchemeColorGamma(CTGammaTransform* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorGamma_QNAME_, CTGammaTransform::class_(), CTSchemeColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTSchemeColorInvGamma(CTInverseGammaTransform* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorInvGamma_QNAME_, CTInverseGammaTransform::class_(), CTSchemeColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTSchemeColorRedOff(CTPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorRedOff_QNAME_, CTPercentage::class_(), CTSchemeColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTSchemeColorAlphaMod(CTPositivePercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorAlphaMod_QNAME_, CTPositivePercentage::class_(), CTSchemeColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTSchemeColorAlphaOff(CTFixedPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorAlphaOff_QNAME_, CTFixedPercentage::class_(), CTSchemeColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTSchemeColorGreenOff(CTPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorGreenOff_QNAME_, CTPercentage::class_(), CTSchemeColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTSchemeColorHue(CTPositiveFixedAngle* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorHue_QNAME_, CTPositiveFixedAngle::class_(), CTSchemeColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTSchemeColorRedMod(CTPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorRedMod_QNAME_, CTPercentage::class_(), CTSchemeColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTSchemeColorSatOff(CTPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorSatOff_QNAME_, CTPercentage::class_(), CTSchemeColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTSchemeColorGreenMod(CTPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorGreenMod_QNAME_, CTPercentage::class_(), CTSchemeColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTSchemeColorBlue(CTPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorBlue_QNAME_, CTPercentage::class_(), CTSchemeColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTSchemeColorSat(CTPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorSat_QNAME_, CTPercentage::class_(), CTSchemeColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTSchemeColorRed(CTPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorRed_QNAME_, CTPercentage::class_(), CTSchemeColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTSchemeColorSatMod(CTPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorSatMod_QNAME_, CTPercentage::class_(), CTSchemeColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTSchemeColorHueOff(CTAngle* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorHueOff_QNAME_, CTAngle::class_(), CTSchemeColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTSchemeColorBlueMod(CTPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorBlueMod_QNAME_, CTPercentage::class_(), CTSchemeColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTSchemeColorShade(CTPositiveFixedPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorShade_QNAME_, CTPositiveFixedPercentage::class_(), CTSchemeColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTSchemeColorLumMod(CTPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorLumMod_QNAME_, CTPercentage::class_(), CTSchemeColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTSchemeColorInv(CTInverseTransform* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorInv_QNAME_, CTInverseTransform::class_(), CTSchemeColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTSchemeColorLumOff(CTPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorLumOff_QNAME_, CTPercentage::class_(), CTSchemeColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTSchemeColorTint(CTPositiveFixedPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorTint_QNAME_, CTPositiveFixedPercentage::class_(), CTSchemeColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTSchemeColorGreen(CTPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorGreen_QNAME_, CTPercentage::class_(), CTSchemeColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTSchemeColorComp(CTComplementTransform* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorComp_QNAME_, CTComplementTransform::class_(), CTSchemeColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTSchemeColorBlueOff(CTPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorBlueOff_QNAME_, CTPercentage::class_(), CTSchemeColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTSchemeColorHueMod(CTPositivePercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorHueMod_QNAME_, CTPositivePercentage::class_(), CTSchemeColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTSchemeColorGray(CTGrayscaleTransform* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorGray_QNAME_, CTGrayscaleTransform::class_(), CTSchemeColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTScRgbColorLum(CTPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorLum_QNAME_, CTPercentage::class_(), CTScRgbColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTScRgbColorAlpha(CTPositiveFixedPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorAlpha_QNAME_, CTPositiveFixedPercentage::class_(), CTScRgbColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTScRgbColorGamma(CTGammaTransform* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorGamma_QNAME_, CTGammaTransform::class_(), CTScRgbColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTScRgbColorInvGamma(CTInverseGammaTransform* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorInvGamma_QNAME_, CTInverseGammaTransform::class_(), CTScRgbColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTScRgbColorRedOff(CTPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorRedOff_QNAME_, CTPercentage::class_(), CTScRgbColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTScRgbColorAlphaMod(CTPositivePercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorAlphaMod_QNAME_, CTPositivePercentage::class_(), CTScRgbColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTScRgbColorAlphaOff(CTFixedPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorAlphaOff_QNAME_, CTFixedPercentage::class_(), CTScRgbColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTScRgbColorGreenOff(CTPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorGreenOff_QNAME_, CTPercentage::class_(), CTScRgbColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTScRgbColorHue(CTPositiveFixedAngle* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorHue_QNAME_, CTPositiveFixedAngle::class_(), CTScRgbColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTScRgbColorRedMod(CTPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorRedMod_QNAME_, CTPercentage::class_(), CTScRgbColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTScRgbColorSatOff(CTPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorSatOff_QNAME_, CTPercentage::class_(), CTScRgbColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTScRgbColorGreenMod(CTPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorGreenMod_QNAME_, CTPercentage::class_(), CTScRgbColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTScRgbColorSat(CTPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorSat_QNAME_, CTPercentage::class_(), CTScRgbColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTScRgbColorBlue(CTPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorBlue_QNAME_, CTPercentage::class_(), CTScRgbColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTScRgbColorRed(CTPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorRed_QNAME_, CTPercentage::class_(), CTScRgbColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTScRgbColorSatMod(CTPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorSatMod_QNAME_, CTPercentage::class_(), CTScRgbColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTScRgbColorHueOff(CTAngle* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorHueOff_QNAME_, CTAngle::class_(), CTScRgbColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTScRgbColorBlueMod(CTPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorBlueMod_QNAME_, CTPercentage::class_(), CTScRgbColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTScRgbColorShade(CTPositiveFixedPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorShade_QNAME_, CTPositiveFixedPercentage::class_(), CTScRgbColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTScRgbColorLumMod(CTPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorLumMod_QNAME_, CTPercentage::class_(), CTScRgbColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTScRgbColorInv(CTInverseTransform* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorInv_QNAME_, CTInverseTransform::class_(), CTScRgbColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTScRgbColorLumOff(CTPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorLumOff_QNAME_, CTPercentage::class_(), CTScRgbColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTScRgbColorTint(CTPositiveFixedPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorTint_QNAME_, CTPositiveFixedPercentage::class_(), CTScRgbColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTScRgbColorGreen(CTPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorGreen_QNAME_, CTPercentage::class_(), CTScRgbColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTScRgbColorComp(CTComplementTransform* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorComp_QNAME_, CTComplementTransform::class_(), CTScRgbColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTScRgbColorBlueOff(CTPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorBlueOff_QNAME_, CTPercentage::class_(), CTScRgbColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTScRgbColorHueMod(CTPositivePercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorHueMod_QNAME_, CTPositivePercentage::class_(), CTScRgbColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTScRgbColorGray(CTGrayscaleTransform* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorGray_QNAME_, CTGrayscaleTransform::class_(), CTScRgbColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTHslColorAlpha(CTPositiveFixedPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorAlpha_QNAME_, CTPositiveFixedPercentage::class_(), CTHslColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTHslColorLum(CTPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorLum_QNAME_, CTPercentage::class_(), CTHslColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTHslColorGamma(CTGammaTransform* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorGamma_QNAME_, CTGammaTransform::class_(), CTHslColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTHslColorInvGamma(CTInverseGammaTransform* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorInvGamma_QNAME_, CTInverseGammaTransform::class_(), CTHslColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTHslColorAlphaMod(CTPositivePercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorAlphaMod_QNAME_, CTPositivePercentage::class_(), CTHslColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTHslColorRedOff(CTPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorRedOff_QNAME_, CTPercentage::class_(), CTHslColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTHslColorAlphaOff(CTFixedPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorAlphaOff_QNAME_, CTFixedPercentage::class_(), CTHslColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTHslColorGreenOff(CTPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorGreenOff_QNAME_, CTPercentage::class_(), CTHslColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTHslColorHue(CTPositiveFixedAngle* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorHue_QNAME_, CTPositiveFixedAngle::class_(), CTHslColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTHslColorRedMod(CTPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorRedMod_QNAME_, CTPercentage::class_(), CTHslColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTHslColorSatOff(CTPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorSatOff_QNAME_, CTPercentage::class_(), CTHslColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTHslColorGreenMod(CTPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorGreenMod_QNAME_, CTPercentage::class_(), CTHslColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTHslColorBlue(CTPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorBlue_QNAME_, CTPercentage::class_(), CTHslColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTHslColorSat(CTPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorSat_QNAME_, CTPercentage::class_(), CTHslColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTHslColorRed(CTPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorRed_QNAME_, CTPercentage::class_(), CTHslColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTHslColorSatMod(CTPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorSatMod_QNAME_, CTPercentage::class_(), CTHslColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTHslColorBlueMod(CTPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorBlueMod_QNAME_, CTPercentage::class_(), CTHslColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTHslColorHueOff(CTAngle* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorHueOff_QNAME_, CTAngle::class_(), CTHslColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTHslColorShade(CTPositiveFixedPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorShade_QNAME_, CTPositiveFixedPercentage::class_(), CTHslColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTHslColorLumMod(CTPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorLumMod_QNAME_, CTPercentage::class_(), CTHslColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTHslColorInv(CTInverseTransform* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorInv_QNAME_, CTInverseTransform::class_(), CTHslColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTHslColorLumOff(CTPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorLumOff_QNAME_, CTPercentage::class_(), CTHslColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTHslColorTint(CTPositiveFixedPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorTint_QNAME_, CTPositiveFixedPercentage::class_(), CTHslColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTHslColorGreen(CTPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorGreen_QNAME_, CTPercentage::class_(), CTHslColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTHslColorComp(CTComplementTransform* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorComp_QNAME_, CTComplementTransform::class_(), CTHslColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTHslColorBlueOff(CTPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorBlueOff_QNAME_, CTPercentage::class_(), CTHslColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTHslColorHueMod(CTPositivePercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorHueMod_QNAME_, CTPositivePercentage::class_(), CTHslColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTHslColorGray(CTGrayscaleTransform* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorGray_QNAME_, CTGrayscaleTransform::class_(), CTHslColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTPresetColorLum(CTPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorLum_QNAME_, CTPercentage::class_(), CTPresetColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTPresetColorAlpha(CTPositiveFixedPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorAlpha_QNAME_, CTPositiveFixedPercentage::class_(), CTPresetColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTPresetColorGamma(CTGammaTransform* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorGamma_QNAME_, CTGammaTransform::class_(), CTPresetColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTPresetColorInvGamma(CTInverseGammaTransform* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorInvGamma_QNAME_, CTInverseGammaTransform::class_(), CTPresetColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTPresetColorRedOff(CTPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorRedOff_QNAME_, CTPercentage::class_(), CTPresetColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTPresetColorAlphaMod(CTPositivePercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorAlphaMod_QNAME_, CTPositivePercentage::class_(), CTPresetColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTPresetColorAlphaOff(CTFixedPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorAlphaOff_QNAME_, CTFixedPercentage::class_(), CTPresetColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTPresetColorGreenOff(CTPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorGreenOff_QNAME_, CTPercentage::class_(), CTPresetColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTPresetColorHue(CTPositiveFixedAngle* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorHue_QNAME_, CTPositiveFixedAngle::class_(), CTPresetColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTPresetColorRedMod(CTPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorRedMod_QNAME_, CTPercentage::class_(), CTPresetColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTPresetColorSatOff(CTPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorSatOff_QNAME_, CTPercentage::class_(), CTPresetColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTPresetColorGreenMod(CTPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorGreenMod_QNAME_, CTPercentage::class_(), CTPresetColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTPresetColorBlue(CTPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorBlue_QNAME_, CTPercentage::class_(), CTPresetColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTPresetColorSat(CTPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorSat_QNAME_, CTPercentage::class_(), CTPresetColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTPresetColorRed(CTPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorRed_QNAME_, CTPercentage::class_(), CTPresetColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTPresetColorSatMod(CTPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorSatMod_QNAME_, CTPercentage::class_(), CTPresetColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTPresetColorBlueMod(CTPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorBlueMod_QNAME_, CTPercentage::class_(), CTPresetColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTPresetColorHueOff(CTAngle* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorHueOff_QNAME_, CTAngle::class_(), CTPresetColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTPresetColorShade(CTPositiveFixedPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorShade_QNAME_, CTPositiveFixedPercentage::class_(), CTPresetColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTPresetColorLumMod(CTPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorLumMod_QNAME_, CTPercentage::class_(), CTPresetColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTPresetColorInv(CTInverseTransform* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorInv_QNAME_, CTInverseTransform::class_(), CTPresetColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTPresetColorLumOff(CTPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorLumOff_QNAME_, CTPercentage::class_(), CTPresetColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTPresetColorTint(CTPositiveFixedPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorTint_QNAME_, CTPositiveFixedPercentage::class_(), CTPresetColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTPresetColorGreen(CTPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorGreen_QNAME_, CTPercentage::class_(), CTPresetColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTPresetColorComp(CTComplementTransform* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorComp_QNAME_, CTComplementTransform::class_(), CTPresetColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTPresetColorBlueOff(CTPercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorBlueOff_QNAME_, CTPercentage::class_(), CTPresetColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTPresetColorHueMod(CTPositivePercentage* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorHueMod_QNAME_, CTPositivePercentage::class_(), CTPresetColor::class_(), value);
}

javax::xml::bind::JAXBElement* org::apache::poi::sl::draw::binding::ObjectFactory::createCTPresetColorGray(CTGrayscaleTransform* value)
{
    return new ::javax::xml::bind::JAXBElement(_CTSRgbColorGray_QNAME_, CTGrayscaleTransform::class_(), CTPresetColor::class_(), value);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::sl::draw::binding::ObjectFactory::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.draw.binding.ObjectFactory", 44);
    return c;
}

void org::apache::poi::sl::draw::binding::ObjectFactory::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        _CTSRgbColorAlpha_QNAME_ = new ::javax::xml::namespace_::QName(u"http://schemas.openxmlformats.org/drawingml/2006/main"_j, u"alpha"_j);
        _CTSRgbColorLum_QNAME_ = new ::javax::xml::namespace_::QName(u"http://schemas.openxmlformats.org/drawingml/2006/main"_j, u"lum"_j);
        _CTSRgbColorGamma_QNAME_ = new ::javax::xml::namespace_::QName(u"http://schemas.openxmlformats.org/drawingml/2006/main"_j, u"gamma"_j);
        _CTSRgbColorInvGamma_QNAME_ = new ::javax::xml::namespace_::QName(u"http://schemas.openxmlformats.org/drawingml/2006/main"_j, u"invGamma"_j);
        _CTSRgbColorRedOff_QNAME_ = new ::javax::xml::namespace_::QName(u"http://schemas.openxmlformats.org/drawingml/2006/main"_j, u"redOff"_j);
        _CTSRgbColorAlphaMod_QNAME_ = new ::javax::xml::namespace_::QName(u"http://schemas.openxmlformats.org/drawingml/2006/main"_j, u"alphaMod"_j);
        _CTSRgbColorAlphaOff_QNAME_ = new ::javax::xml::namespace_::QName(u"http://schemas.openxmlformats.org/drawingml/2006/main"_j, u"alphaOff"_j);
        _CTSRgbColorGreenOff_QNAME_ = new ::javax::xml::namespace_::QName(u"http://schemas.openxmlformats.org/drawingml/2006/main"_j, u"greenOff"_j);
        _CTSRgbColorRedMod_QNAME_ = new ::javax::xml::namespace_::QName(u"http://schemas.openxmlformats.org/drawingml/2006/main"_j, u"redMod"_j);
        _CTSRgbColorHue_QNAME_ = new ::javax::xml::namespace_::QName(u"http://schemas.openxmlformats.org/drawingml/2006/main"_j, u"hue"_j);
        _CTSRgbColorSatOff_QNAME_ = new ::javax::xml::namespace_::QName(u"http://schemas.openxmlformats.org/drawingml/2006/main"_j, u"satOff"_j);
        _CTSRgbColorGreenMod_QNAME_ = new ::javax::xml::namespace_::QName(u"http://schemas.openxmlformats.org/drawingml/2006/main"_j, u"greenMod"_j);
        _CTSRgbColorSat_QNAME_ = new ::javax::xml::namespace_::QName(u"http://schemas.openxmlformats.org/drawingml/2006/main"_j, u"sat"_j);
        _CTSRgbColorBlue_QNAME_ = new ::javax::xml::namespace_::QName(u"http://schemas.openxmlformats.org/drawingml/2006/main"_j, u"blue"_j);
        _CTSRgbColorRed_QNAME_ = new ::javax::xml::namespace_::QName(u"http://schemas.openxmlformats.org/drawingml/2006/main"_j, u"red"_j);
        _CTSRgbColorSatMod_QNAME_ = new ::javax::xml::namespace_::QName(u"http://schemas.openxmlformats.org/drawingml/2006/main"_j, u"satMod"_j);
        _CTSRgbColorHueOff_QNAME_ = new ::javax::xml::namespace_::QName(u"http://schemas.openxmlformats.org/drawingml/2006/main"_j, u"hueOff"_j);
        _CTSRgbColorBlueMod_QNAME_ = new ::javax::xml::namespace_::QName(u"http://schemas.openxmlformats.org/drawingml/2006/main"_j, u"blueMod"_j);
        _CTSRgbColorShade_QNAME_ = new ::javax::xml::namespace_::QName(u"http://schemas.openxmlformats.org/drawingml/2006/main"_j, u"shade"_j);
        _CTSRgbColorLumMod_QNAME_ = new ::javax::xml::namespace_::QName(u"http://schemas.openxmlformats.org/drawingml/2006/main"_j, u"lumMod"_j);
        _CTSRgbColorInv_QNAME_ = new ::javax::xml::namespace_::QName(u"http://schemas.openxmlformats.org/drawingml/2006/main"_j, u"inv"_j);
        _CTSRgbColorLumOff_QNAME_ = new ::javax::xml::namespace_::QName(u"http://schemas.openxmlformats.org/drawingml/2006/main"_j, u"lumOff"_j);
        _CTSRgbColorTint_QNAME_ = new ::javax::xml::namespace_::QName(u"http://schemas.openxmlformats.org/drawingml/2006/main"_j, u"tint"_j);
        _CTSRgbColorGreen_QNAME_ = new ::javax::xml::namespace_::QName(u"http://schemas.openxmlformats.org/drawingml/2006/main"_j, u"green"_j);
        _CTSRgbColorComp_QNAME_ = new ::javax::xml::namespace_::QName(u"http://schemas.openxmlformats.org/drawingml/2006/main"_j, u"comp"_j);
        _CTSRgbColorBlueOff_QNAME_ = new ::javax::xml::namespace_::QName(u"http://schemas.openxmlformats.org/drawingml/2006/main"_j, u"blueOff"_j);
        _CTSRgbColorHueMod_QNAME_ = new ::javax::xml::namespace_::QName(u"http://schemas.openxmlformats.org/drawingml/2006/main"_j, u"hueMod"_j);
        _CTSRgbColorGray_QNAME_ = new ::javax::xml::namespace_::QName(u"http://schemas.openxmlformats.org/drawingml/2006/main"_j, u"gray"_j);
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* org::apache::poi::sl::draw::binding::ObjectFactory::getClass0()
{
    return class_();
}

