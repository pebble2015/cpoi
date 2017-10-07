// Generated from /POI/java/org/apache/poi/hssf/util/HSSFColor.java
#include <org/apache/poi/hssf/util/HSSFColor.hpp>

#include <java/awt/Color.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/util/Collections.hpp>
#include <java/util/EnumMap.hpp>
#include <java/util/HashMap.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/Locale.hpp>
#include <java/util/Map_Entry.hpp>
#include <java/util/Map.hpp>
#include <java/util/Set.hpp>
#include <org/apache/poi/hssf/util/HSSFColor_AQUA.hpp>
#include <org/apache/poi/hssf/util/HSSFColor_BLACK.hpp>
#include <org/apache/poi/hssf/util/HSSFColor_BLUE.hpp>
#include <org/apache/poi/hssf/util/HSSFColor_BLUE_GREY.hpp>
#include <org/apache/poi/hssf/util/HSSFColor_BRIGHT_GREEN.hpp>
#include <org/apache/poi/hssf/util/HSSFColor_BROWN.hpp>
#include <org/apache/poi/hssf/util/HSSFColor_CORAL.hpp>
#include <org/apache/poi/hssf/util/HSSFColor_CORNFLOWER_BLUE.hpp>
#include <org/apache/poi/hssf/util/HSSFColor_DARK_BLUE.hpp>
#include <org/apache/poi/hssf/util/HSSFColor_DARK_GREEN.hpp>
#include <org/apache/poi/hssf/util/HSSFColor_DARK_RED.hpp>
#include <org/apache/poi/hssf/util/HSSFColor_DARK_TEAL.hpp>
#include <org/apache/poi/hssf/util/HSSFColor_DARK_YELLOW.hpp>
#include <org/apache/poi/hssf/util/HSSFColor_GOLD.hpp>
#include <org/apache/poi/hssf/util/HSSFColor_GREEN.hpp>
#include <org/apache/poi/hssf/util/HSSFColor_GREY_25_PERCENT.hpp>
#include <org/apache/poi/hssf/util/HSSFColor_GREY_40_PERCENT.hpp>
#include <org/apache/poi/hssf/util/HSSFColor_GREY_50_PERCENT.hpp>
#include <org/apache/poi/hssf/util/HSSFColor_GREY_80_PERCENT.hpp>
#include <org/apache/poi/hssf/util/HSSFColor_HSSFColorPredefined.hpp>
#include <org/apache/poi/hssf/util/HSSFColor_INDIGO.hpp>
#include <org/apache/poi/hssf/util/HSSFColor_LAVENDER.hpp>
#include <org/apache/poi/hssf/util/HSSFColor_LEMON_CHIFFON.hpp>
#include <org/apache/poi/hssf/util/HSSFColor_LIGHT_BLUE.hpp>
#include <org/apache/poi/hssf/util/HSSFColor_LIGHT_CORNFLOWER_BLUE.hpp>
#include <org/apache/poi/hssf/util/HSSFColor_LIGHT_GREEN.hpp>
#include <org/apache/poi/hssf/util/HSSFColor_LIGHT_ORANGE.hpp>
#include <org/apache/poi/hssf/util/HSSFColor_LIGHT_TURQUOISE.hpp>
#include <org/apache/poi/hssf/util/HSSFColor_LIGHT_YELLOW.hpp>
#include <org/apache/poi/hssf/util/HSSFColor_LIME.hpp>
#include <org/apache/poi/hssf/util/HSSFColor_MAROON.hpp>
#include <org/apache/poi/hssf/util/HSSFColor_OLIVE_GREEN.hpp>
#include <org/apache/poi/hssf/util/HSSFColor_ORANGE.hpp>
#include <org/apache/poi/hssf/util/HSSFColor_ORCHID.hpp>
#include <org/apache/poi/hssf/util/HSSFColor_PALE_BLUE.hpp>
#include <org/apache/poi/hssf/util/HSSFColor_PINK.hpp>
#include <org/apache/poi/hssf/util/HSSFColor_PLUM.hpp>
#include <org/apache/poi/hssf/util/HSSFColor_RED.hpp>
#include <org/apache/poi/hssf/util/HSSFColor_ROSE.hpp>
#include <org/apache/poi/hssf/util/HSSFColor_ROYAL_BLUE.hpp>
#include <org/apache/poi/hssf/util/HSSFColor_SEA_GREEN.hpp>
#include <org/apache/poi/hssf/util/HSSFColor_SKY_BLUE.hpp>
#include <org/apache/poi/hssf/util/HSSFColor_TAN.hpp>
#include <org/apache/poi/hssf/util/HSSFColor_TEAL.hpp>
#include <org/apache/poi/hssf/util/HSSFColor_TURQUOISE.hpp>
#include <org/apache/poi/hssf/util/HSSFColor_VIOLET.hpp>
#include <org/apache/poi/hssf/util/HSSFColor_WHITE.hpp>
#include <org/apache/poi/hssf/util/HSSFColor_YELLOW.hpp>
#include <org/apache/poi/ss/usermodel/Color.hpp>
#include <Array.hpp>

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

org::apache::poi::hssf::util::HSSFColor::HSSFColor(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::util::HSSFColor::HSSFColor() 
    : HSSFColor(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::hssf::util::HSSFColor::HSSFColor(int32_t index, int32_t index2, ::java::awt::Color* color) 
    : HSSFColor(*static_cast< ::default_init_tag* >(0))
{
    ctor(index,index2,color);
}

java::util::Map*& org::apache::poi::hssf::util::HSSFColor::indexHash()
{
    clinit();
    return indexHash_;
}
java::util::Map* org::apache::poi::hssf::util::HSSFColor::indexHash_;

java::util::Map*& org::apache::poi::hssf::util::HSSFColor::enumList()
{
    clinit();
    return enumList_;
}
java::util::Map* org::apache::poi::hssf::util::HSSFColor::enumList_;

void org::apache::poi::hssf::util::HSSFColor::ctor()
{
    ctor(int32_t(64), -int32_t(1), ::java::awt::Color::BLACK());
}

void org::apache::poi::hssf::util::HSSFColor::ctor(int32_t index, int32_t index2, ::java::awt::Color* color)
{
    super::ctor();
    this->index = index;
    this->index2 = index2;
    this->color = color;
}

java::util::Map* org::apache::poi::hssf::util::HSSFColor::getIndexHash()
{
    clinit();
    if(indexHash_ == nullptr) {
        indexHash_ = ::java::util::Collections::unmodifiableMap(createColorsByIndexMap());
    }
    return indexHash_;
}

java::util::Map* org::apache::poi::hssf::util::HSSFColor::getMutableIndexHash()
{
    clinit();
    return createColorsByIndexMap();
}

java::util::Map* org::apache::poi::hssf::util::HSSFColor::createColorsByIndexMap()
{
    clinit();
    auto eList = mapEnumToColorClass();
    ::java::util::Map* result = new ::java::util::HashMap(npc(eList)->size() * int32_t(3) / int32_t(2));
    for (auto _i = npc(npc(eList)->entrySet())->iterator(); _i->hasNext(); ) {
        ::java::util::Map_Entry* colorRef = java_cast< ::java::util::Map_Entry* >(_i->next());
        {
            ::java::lang::Integer* index1 = ::java::lang::Integer::valueOf(static_cast< int32_t >(npc(java_cast< HSSFColor_HSSFColorPredefined* >(npc(colorRef)->getKey()))->getIndex()));
            if(!npc(result)->containsKey(index1)) {
                npc(result)->put(index1, java_cast< HSSFColor* >(npc(colorRef)->getValue()));
            }
            ::java::lang::Integer* index2 = ::java::lang::Integer::valueOf(static_cast< int32_t >(npc(java_cast< HSSFColor_HSSFColorPredefined* >(npc(colorRef)->getKey()))->getIndex2()));
            if((npc(index2))->intValue() != -int32_t(1) && !npc(result)->containsKey(index2)) {
                npc(result)->put(index2, java_cast< HSSFColor* >(npc(colorRef)->getValue()));
            }
        }
    }
    return result;
}

java::util::Map* org::apache::poi::hssf::util::HSSFColor::getTripletHash()
{
    clinit();
    return createColorsByHexStringMap();
}

java::util::Map* org::apache::poi::hssf::util::HSSFColor::createColorsByHexStringMap()
{
    clinit();
    auto eList = mapEnumToColorClass();
    ::java::util::Map* result = new ::java::util::HashMap(npc(eList)->size());
    for (auto _i = npc(npc(eList)->entrySet())->iterator(); _i->hasNext(); ) {
        ::java::util::Map_Entry* colorRef = java_cast< ::java::util::Map_Entry* >(_i->next());
        {
            auto hexString = npc(java_cast< HSSFColor_HSSFColorPredefined* >(npc(colorRef)->getKey()))->getHexString();
            if(!npc(result)->containsKey(hexString)) {
                npc(result)->put(hexString, java_cast< HSSFColor* >(npc(colorRef)->getValue()));
            }
        }
    }
    return result;
}

java::util::Map* org::apache::poi::hssf::util::HSSFColor::mapEnumToColorClass()
{
    clinit();
    if(enumList_ == nullptr) {
        enumList_ = new ::java::util::EnumMap(static_cast< ::java::lang::Class* >(HSSFColor_HSSFColorPredefined::class_()));
        npc(enumList_)->put(HSSFColor_HSSFColorPredefined::BLACK, new HSSFColor_BLACK());
        npc(enumList_)->put(HSSFColor_HSSFColorPredefined::BROWN, new HSSFColor_BROWN());
        npc(enumList_)->put(HSSFColor_HSSFColorPredefined::OLIVE_GREEN, new HSSFColor_OLIVE_GREEN());
        npc(enumList_)->put(HSSFColor_HSSFColorPredefined::DARK_GREEN, new HSSFColor_DARK_GREEN());
        npc(enumList_)->put(HSSFColor_HSSFColorPredefined::DARK_TEAL, new HSSFColor_DARK_TEAL());
        npc(enumList_)->put(HSSFColor_HSSFColorPredefined::DARK_BLUE, new HSSFColor_DARK_BLUE());
        npc(enumList_)->put(HSSFColor_HSSFColorPredefined::INDIGO, new HSSFColor_INDIGO());
        npc(enumList_)->put(HSSFColor_HSSFColorPredefined::GREY_80_PERCENT, new HSSFColor_GREY_80_PERCENT());
        npc(enumList_)->put(HSSFColor_HSSFColorPredefined::ORANGE, new HSSFColor_ORANGE());
        npc(enumList_)->put(HSSFColor_HSSFColorPredefined::DARK_YELLOW, new HSSFColor_DARK_YELLOW());
        npc(enumList_)->put(HSSFColor_HSSFColorPredefined::GREEN, new HSSFColor_GREEN());
        npc(enumList_)->put(HSSFColor_HSSFColorPredefined::TEAL, new HSSFColor_TEAL());
        npc(enumList_)->put(HSSFColor_HSSFColorPredefined::BLUE, new HSSFColor_BLUE());
        npc(enumList_)->put(HSSFColor_HSSFColorPredefined::BLUE_GREY, new HSSFColor_BLUE_GREY());
        npc(enumList_)->put(HSSFColor_HSSFColorPredefined::GREY_50_PERCENT, new HSSFColor_GREY_50_PERCENT());
        npc(enumList_)->put(HSSFColor_HSSFColorPredefined::RED, new HSSFColor_RED());
        npc(enumList_)->put(HSSFColor_HSSFColorPredefined::LIGHT_ORANGE, new HSSFColor_LIGHT_ORANGE());
        npc(enumList_)->put(HSSFColor_HSSFColorPredefined::LIME, new HSSFColor_LIME());
        npc(enumList_)->put(HSSFColor_HSSFColorPredefined::SEA_GREEN, new HSSFColor_SEA_GREEN());
        npc(enumList_)->put(HSSFColor_HSSFColorPredefined::AQUA, new HSSFColor_AQUA());
        npc(enumList_)->put(HSSFColor_HSSFColorPredefined::LIGHT_BLUE, new HSSFColor_LIGHT_BLUE());
        npc(enumList_)->put(HSSFColor_HSSFColorPredefined::VIOLET, new HSSFColor_VIOLET());
        npc(enumList_)->put(HSSFColor_HSSFColorPredefined::GREY_40_PERCENT, new HSSFColor_GREY_40_PERCENT());
        npc(enumList_)->put(HSSFColor_HSSFColorPredefined::PINK, new HSSFColor_PINK());
        npc(enumList_)->put(HSSFColor_HSSFColorPredefined::GOLD, new HSSFColor_GOLD());
        npc(enumList_)->put(HSSFColor_HSSFColorPredefined::YELLOW, new HSSFColor_YELLOW());
        npc(enumList_)->put(HSSFColor_HSSFColorPredefined::BRIGHT_GREEN, new HSSFColor_BRIGHT_GREEN());
        npc(enumList_)->put(HSSFColor_HSSFColorPredefined::TURQUOISE, new HSSFColor_TURQUOISE());
        npc(enumList_)->put(HSSFColor_HSSFColorPredefined::DARK_RED, new HSSFColor_DARK_RED());
        npc(enumList_)->put(HSSFColor_HSSFColorPredefined::SKY_BLUE, new HSSFColor_SKY_BLUE());
        npc(enumList_)->put(HSSFColor_HSSFColorPredefined::PLUM, new HSSFColor_PLUM());
        npc(enumList_)->put(HSSFColor_HSSFColorPredefined::GREY_25_PERCENT, new HSSFColor_GREY_25_PERCENT());
        npc(enumList_)->put(HSSFColor_HSSFColorPredefined::ROSE, new HSSFColor_ROSE());
        npc(enumList_)->put(HSSFColor_HSSFColorPredefined::LIGHT_YELLOW, new HSSFColor_LIGHT_YELLOW());
        npc(enumList_)->put(HSSFColor_HSSFColorPredefined::LIGHT_GREEN, new HSSFColor_LIGHT_GREEN());
        npc(enumList_)->put(HSSFColor_HSSFColorPredefined::LIGHT_TURQUOISE, new HSSFColor_LIGHT_TURQUOISE());
        npc(enumList_)->put(HSSFColor_HSSFColorPredefined::PALE_BLUE, new HSSFColor_PALE_BLUE());
        npc(enumList_)->put(HSSFColor_HSSFColorPredefined::LAVENDER, new HSSFColor_LAVENDER());
        npc(enumList_)->put(HSSFColor_HSSFColorPredefined::WHITE, new HSSFColor_WHITE());
        npc(enumList_)->put(HSSFColor_HSSFColorPredefined::CORNFLOWER_BLUE, new HSSFColor_CORNFLOWER_BLUE());
        npc(enumList_)->put(HSSFColor_HSSFColorPredefined::LEMON_CHIFFON, new HSSFColor_LEMON_CHIFFON());
        npc(enumList_)->put(HSSFColor_HSSFColorPredefined::MAROON, new HSSFColor_MAROON());
        npc(enumList_)->put(HSSFColor_HSSFColorPredefined::ORCHID, new HSSFColor_ORCHID());
        npc(enumList_)->put(HSSFColor_HSSFColorPredefined::CORAL, new HSSFColor_CORAL());
        npc(enumList_)->put(HSSFColor_HSSFColorPredefined::ROYAL_BLUE, new HSSFColor_ROYAL_BLUE());
        npc(enumList_)->put(HSSFColor_HSSFColorPredefined::LIGHT_CORNFLOWER_BLUE, new HSSFColor_LIGHT_CORNFLOWER_BLUE());
        npc(enumList_)->put(HSSFColor_HSSFColorPredefined::TAN, new HSSFColor_TAN());
    }
    return enumList_;
}

int16_t org::apache::poi::hssf::util::HSSFColor::getIndex()
{
    return static_cast< int16_t >(index);
}

int16_t org::apache::poi::hssf::util::HSSFColor::getIndex2()
{
    return static_cast< int16_t >(index2);
}

int16_tArray* org::apache::poi::hssf::util::HSSFColor::getTriplet()
{
    return new ::int16_tArray({
        static_cast< int16_t >(npc(color)->getRed())
        , static_cast< int16_t >(npc(color)->getGreen())
        , static_cast< int16_t >(npc(color)->getBlue())
    });
}

java::lang::String* org::apache::poi::hssf::util::HSSFColor::getHexString()
{
    return npc((::java::lang::StringBuilder().append(::java::lang::Integer::toHexString(npc(color)->getRed() * int32_t(257)))->append(u":"_j)
        ->append(::java::lang::Integer::toHexString(npc(color)->getGreen() * int32_t(257)))
        ->append(u":"_j)
        ->append(::java::lang::Integer::toHexString(npc(color)->getBlue() * int32_t(257)))->toString()))->toUpperCase(::java::util::Locale::ROOT());
}

org::apache::poi::hssf::util::HSSFColor* org::apache::poi::hssf::util::HSSFColor::toHSSFColor(::org::apache::poi::ss::usermodel::Color* color)
{
    clinit();
    if(color != nullptr && !(dynamic_cast< HSSFColor* >(color) != nullptr)) {
        throw new ::java::lang::IllegalArgumentException(u"Only HSSFColor objects are supported"_j);
    }
    return java_cast< HSSFColor* >(color);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::util::HSSFColor::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.util.HSSFColor", 34);
    return c;
}

java::lang::Class* org::apache::poi::hssf::util::HSSFColor::getClass0()
{
    return class_();
}

