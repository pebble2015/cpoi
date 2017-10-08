// Generated from /POI/java/org/apache/poi/ss/usermodel/ExtendedColor.java
#include <org/apache/poi/ss/usermodel/ExtendedColor.hpp>

#include <java/awt/Color.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/System.hpp>
#include <java/util/Locale.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::ss::usermodel::ExtendedColor::ExtendedColor(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::usermodel::ExtendedColor::ExtendedColor()
    : ExtendedColor(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void poi::ss::usermodel::ExtendedColor::setColor(::java::awt::Color* clr)
{
    setRGB(new ::int8_tArray({
        static_cast< int8_t >(npc(clr)->getRed())
        , static_cast< int8_t >(npc(clr)->getGreen())
        , static_cast< int8_t >(npc(clr)->getBlue())
    }));
}

int8_tArray* poi::ss::usermodel::ExtendedColor::getRGBOrARGB()
{
    if(isIndexed() && getIndex() > 0) {
        auto rgb = getIndexedRGB();
        if(rgb != nullptr) {
            return rgb;
        }
    }
    return getStoredRBG();
}

int8_tArray* poi::ss::usermodel::ExtendedColor::getRGBWithTint()
{
    auto rgb = getStoredRBG();
    if(rgb != nullptr) {
        if(npc(rgb)->length == 4) {
            auto tmp = new ::int8_tArray(int32_t(3));
            ::java::lang::System::arraycopy(rgb, 1, tmp, 0, 3);
            rgb = tmp;
        }
        auto tint = getTint();
        for (auto i = int32_t(0); i < npc(rgb)->length; i++) {
            (*rgb)[i] = applyTint((*rgb)[i] & int32_t(255), tint);
        }
    }
    return rgb;
}

java::lang::String* poi::ss::usermodel::ExtendedColor::getARGBHex()
{
    auto rgb = getARGB();
    if(rgb == nullptr) {
        return nullptr;
    }
    auto sb = new ::java::lang::StringBuilder();
    for(auto c : *npc(rgb)) {
        auto i = c & int32_t(255);
        auto cs = ::java::lang::Integer::toHexString(i);
        if(npc(cs)->length() == 1) {
            npc(sb)->append(u'0');
        }
        npc(sb)->append(cs);
    }
    return npc(npc(sb)->toString())->toUpperCase(::java::util::Locale::ROOT());
}

void poi::ss::usermodel::ExtendedColor::setARGBHex(::java::lang::String* argb)
{
    if(npc(argb)->length() == 6 || npc(argb)->length() == 8) {
        auto rgb = new ::int8_tArray(npc(argb)->length() / int32_t(2));
        for (auto i = int32_t(0); i < npc(rgb)->length; i++) {
            auto part = npc(argb)->substring(i * int32_t(2), (i + int32_t(1)) * int32_t(2));
            (*rgb)[i] = static_cast< int8_t >(::java::lang::Integer::parseInt(part, 16));
        }
        setRGB(rgb);
    } else {
        throw new ::java::lang::IllegalArgumentException(u"Must be of the form 112233 or FFEEDDCC"_j);
    }
}

int8_t poi::ss::usermodel::ExtendedColor::applyTint(int32_t lum, double tint)
{
    clinit();
    if(tint > 0) {
        return static_cast< int8_t >((lum * (1.0 - tint) + (int32_t(255) - int32_t(255) * (1.0 - tint))));
    } else if(tint < 0) {
        return static_cast< int8_t >((lum * (int32_t(1) + tint)));
    } else {
        return static_cast< int8_t >(lum);
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::usermodel::ExtendedColor::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.usermodel.ExtendedColor", 41);
    return c;
}

java::lang::Class* poi::ss::usermodel::ExtendedColor::getClass0()
{
    return class_();
}

