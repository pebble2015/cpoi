// Generated from /POI/java/org/apache/poi/hssf/record/PaletteRecord.java
#include <org/apache/poi/hssf/record/PaletteRecord_PColor.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::hssf::record::PaletteRecord_PColor::PaletteRecord_PColor(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::PaletteRecord_PColor::PaletteRecord_PColor(int32_t red, int32_t green, int32_t blue) 
    : PaletteRecord_PColor(*static_cast< ::default_init_tag* >(0))
{
    ctor(red,green,blue);
}

poi::hssf::record::PaletteRecord_PColor::PaletteRecord_PColor(RecordInputStream* in) 
    : PaletteRecord_PColor(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t poi::hssf::record::PaletteRecord_PColor::ENCODED_SIZE;

void poi::hssf::record::PaletteRecord_PColor::ctor(int32_t red, int32_t green, int32_t blue)
{
    super::ctor();
    _red = red;
    _green = green;
    _blue = blue;
}

int8_tArray* poi::hssf::record::PaletteRecord_PColor::getTriplet()
{
    return new ::int8_tArray({
        static_cast< int8_t >(_red)
        , static_cast< int8_t >(_green)
        , static_cast< int8_t >(_blue)
    });
}

void poi::hssf::record::PaletteRecord_PColor::ctor(RecordInputStream* in)
{
    super::ctor();
    _red = npc(in)->readByte();
    _green = npc(in)->readByte();
    _blue = npc(in)->readByte();
    npc(in)->readByte();
}

void poi::hssf::record::PaletteRecord_PColor::serialize(::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeByte(_red);
    npc(out)->writeByte(_green);
    npc(out)->writeByte(_blue);
    npc(out)->writeByte(0);
}

java::lang::String* poi::hssf::record::PaletteRecord_PColor::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(npc(npc(buffer)->append(u"  red   = "_j))->append(_red & int32_t(255)))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"  green = "_j))->append(_green & int32_t(255)))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"  blue  = "_j))->append(_blue & int32_t(255)))->append(u'\u000a');
    return npc(buffer)->toString();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::PaletteRecord_PColor::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.PaletteRecord.PColor", 47);
    return c;
}

java::lang::Class* poi::hssf::record::PaletteRecord_PColor::getClass0()
{
    return class_();
}

