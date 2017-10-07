// Generated from /POI/java/org/apache/poi/sl/usermodel/PictureData.java
#include <org/apache/poi/sl/usermodel/PictureData_PictureType.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/Enum.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <SubArray.hpp>
#include <ObjectArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace io
    {
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
    } // io

    namespace lang
    {
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::Enum, ObjectArray, ComparableArray, ::java::io::SerializableArray > EnumArray;
    } // lang
} // java

namespace org
{
    namespace apache
    {
        namespace poi
        {
            namespace sl
            {
                namespace usermodel
                {
typedef ::SubArray< ::org::apache::poi::sl::usermodel::PictureData_PictureType, ::java::lang::EnumArray > PictureData_PictureTypeArray;
                } // usermodel
            } // sl
        } // poi
    } // apache
} // org

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::sl::usermodel::PictureData_PictureType::PictureData_PictureType(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::sl::usermodel::PictureData_PictureType::PictureData_PictureType(::java::lang::String* name, int ordinal, int32_t nativeId, int32_t ooxmlId, ::java::lang::String* contentType, ::java::lang::String* extension) 
    : PictureData_PictureType(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal, nativeId,ooxmlId,contentType,extension);
}

org::apache::poi::sl::usermodel::PictureData_PictureType* org::apache::poi::sl::usermodel::PictureData_PictureType::EMF = new ::org::apache::poi::sl::usermodel::PictureData_PictureType(u"EMF"_j, 0, int32_t(2), int32_t(2), u"image/x-emf"_j, u".emf"_j);
org::apache::poi::sl::usermodel::PictureData_PictureType* org::apache::poi::sl::usermodel::PictureData_PictureType::WMF = new ::org::apache::poi::sl::usermodel::PictureData_PictureType(u"WMF"_j, 1, int32_t(3), int32_t(3), u"image/x-wmf"_j, u".wmf"_j);
org::apache::poi::sl::usermodel::PictureData_PictureType* org::apache::poi::sl::usermodel::PictureData_PictureType::PICT = new ::org::apache::poi::sl::usermodel::PictureData_PictureType(u"PICT"_j, 2, int32_t(4), int32_t(4), u"image/pict"_j, u".pict"_j);
org::apache::poi::sl::usermodel::PictureData_PictureType* org::apache::poi::sl::usermodel::PictureData_PictureType::JPEG = new ::org::apache::poi::sl::usermodel::PictureData_PictureType(u"JPEG"_j, 3, int32_t(5), int32_t(5), u"image/jpeg"_j, u".jpg"_j);
org::apache::poi::sl::usermodel::PictureData_PictureType* org::apache::poi::sl::usermodel::PictureData_PictureType::PNG = new ::org::apache::poi::sl::usermodel::PictureData_PictureType(u"PNG"_j, 4, int32_t(6), int32_t(6), u"image/png"_j, u".png"_j);
org::apache::poi::sl::usermodel::PictureData_PictureType* org::apache::poi::sl::usermodel::PictureData_PictureType::DIB = new ::org::apache::poi::sl::usermodel::PictureData_PictureType(u"DIB"_j, 5, int32_t(7), int32_t(7), u"image/dib"_j, u".dib"_j);
org::apache::poi::sl::usermodel::PictureData_PictureType* org::apache::poi::sl::usermodel::PictureData_PictureType::GIF = new ::org::apache::poi::sl::usermodel::PictureData_PictureType(u"GIF"_j, 6, -int32_t(1), int32_t(8), u"image/gif"_j, u".gif"_j);
org::apache::poi::sl::usermodel::PictureData_PictureType* org::apache::poi::sl::usermodel::PictureData_PictureType::TIFF = new ::org::apache::poi::sl::usermodel::PictureData_PictureType(u"TIFF"_j, 7, -int32_t(1), int32_t(9), u"image/tiff"_j, u".tif"_j);
org::apache::poi::sl::usermodel::PictureData_PictureType* org::apache::poi::sl::usermodel::PictureData_PictureType::EPS = new ::org::apache::poi::sl::usermodel::PictureData_PictureType(u"EPS"_j, 8, -int32_t(1), int32_t(10), u"image/x-eps"_j, u".eps"_j);
org::apache::poi::sl::usermodel::PictureData_PictureType* org::apache::poi::sl::usermodel::PictureData_PictureType::BMP = new ::org::apache::poi::sl::usermodel::PictureData_PictureType(u"BMP"_j, 9, -int32_t(1), int32_t(11), u"image/x-ms-bmp"_j, u".bmp"_j);
org::apache::poi::sl::usermodel::PictureData_PictureType* org::apache::poi::sl::usermodel::PictureData_PictureType::WPG = new ::org::apache::poi::sl::usermodel::PictureData_PictureType(u"WPG"_j, 10, -int32_t(1), int32_t(12), u"image/x-wpg"_j, u".wpg"_j);
org::apache::poi::sl::usermodel::PictureData_PictureType* org::apache::poi::sl::usermodel::PictureData_PictureType::WDP = new ::org::apache::poi::sl::usermodel::PictureData_PictureType(u"WDP"_j, 11, -int32_t(1), int32_t(13), u"image/vnd.ms-photo"_j, u".wdp"_j);
void org::apache::poi::sl::usermodel::PictureData_PictureType::ctor(::java::lang::String* name, int ordinal, int32_t nativeId, int32_t ooxmlId, ::java::lang::String* contentType, ::java::lang::String* extension)
{
    super::ctor(name, ordinal);
    this->nativeId = nativeId;
    this->ooxmlId = ooxmlId;
    this->contentType = contentType;
    this->extension = extension;
}

org::apache::poi::sl::usermodel::PictureData_PictureType* org::apache::poi::sl::usermodel::PictureData_PictureType::forNativeID(int32_t nativeId)
{
    clinit();
    for(auto ans : *npc(values())) {
        if(npc(ans)->nativeId == nativeId)
            return ans;

    }
    return nullptr;
}

org::apache::poi::sl::usermodel::PictureData_PictureType* org::apache::poi::sl::usermodel::PictureData_PictureType::forOoxmlID(int32_t ooxmlId)
{
    clinit();
    for(auto ans : *npc(values())) {
        if(npc(ans)->ooxmlId == ooxmlId)
            return ans;

    }
    return nullptr;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::sl::usermodel::PictureData_PictureType::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.usermodel.PictureData.PictureType", 51);
    return c;
}

org::apache::poi::sl::usermodel::PictureData_PictureType* org::apache::poi::sl::usermodel::PictureData_PictureType::valueOf(::java::lang::String* a0)
{
    if(BMP->toString()->equals(a0))
        return BMP;
    if(DIB->toString()->equals(a0))
        return DIB;
    if(EMF->toString()->equals(a0))
        return EMF;
    if(EPS->toString()->equals(a0))
        return EPS;
    if(GIF->toString()->equals(a0))
        return GIF;
    if(JPEG->toString()->equals(a0))
        return JPEG;
    if(PICT->toString()->equals(a0))
        return PICT;
    if(PNG->toString()->equals(a0))
        return PNG;
    if(TIFF->toString()->equals(a0))
        return TIFF;
    if(WDP->toString()->equals(a0))
        return WDP;
    if(WMF->toString()->equals(a0))
        return WMF;
    if(WPG->toString()->equals(a0))
        return WPG;
    throw new ::java::lang::IllegalArgumentException(a0);
}

org::apache::poi::sl::usermodel::PictureData_PictureTypeArray* org::apache::poi::sl::usermodel::PictureData_PictureType::values()
{
    return new org::apache::poi::sl::usermodel::PictureData_PictureTypeArray({
        BMP,
        DIB,
        EMF,
        EPS,
        GIF,
        JPEG,
        PICT,
        PNG,
        TIFF,
        WDP,
        WMF,
        WPG,
    });
}

java::lang::Class* org::apache::poi::sl::usermodel::PictureData_PictureType::getClass0()
{
    return class_();
}

