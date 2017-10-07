// Generated from /POI/java/org/apache/poi/hssf/record/PaletteRecord.java
#include <org/apache/poi/hssf/record/PaletteRecord.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/List.hpp>
#include <org/apache/poi/hssf/record/PaletteRecord_PColor.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>
#include <Array.hpp>
#include <ObjectArray.hpp>
#include <SubArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace org
{
    namespace apache
    {
        namespace poi
        {
            namespace hssf
            {
                namespace record
                {
typedef ::SubArray< ::org::apache::poi::hssf::record::PaletteRecord_PColor, ::java::lang::ObjectArray > PaletteRecord_PColorArray;
                } // record
            } // hssf
        } // poi
    } // apache
} // org

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

org::apache::poi::hssf::record::PaletteRecord::PaletteRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::PaletteRecord::PaletteRecord() 
    : PaletteRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::hssf::record::PaletteRecord::PaletteRecord(RecordInputStream* in) 
    : PaletteRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t org::apache::poi::hssf::record::PaletteRecord::sid;

constexpr int8_t org::apache::poi::hssf::record::PaletteRecord::STANDARD_PALETTE_SIZE;

constexpr int16_t org::apache::poi::hssf::record::PaletteRecord::FIRST_COLOR_INDEX;

void org::apache::poi::hssf::record::PaletteRecord::ctor()
{
    super::ctor();
    auto defaultPalette = createDefaultPalette();
    _colors = new ::java::util::ArrayList(npc(defaultPalette)->length);
    for(auto element : *npc(defaultPalette)) {
        npc(_colors)->add(static_cast< ::java::lang::Object* >(element));
    }
}

void org::apache::poi::hssf::record::PaletteRecord::ctor(RecordInputStream* in)
{
    super::ctor();
    int32_t field_1_numcolors = npc(in)->readShort();
    _colors = new ::java::util::ArrayList(field_1_numcolors);
    for (auto k = int32_t(0); k < field_1_numcolors; k++) {
        npc(_colors)->add(static_cast< ::java::lang::Object* >(new PaletteRecord_PColor(in)));
    }
}

java::lang::String* org::apache::poi::hssf::record::PaletteRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[PALETTE]\n"_j);
    npc(npc(npc(buffer)->append(u"  numcolors     = "_j))->append(npc(_colors)->size()))->append(u'\u000a');
    for (auto i = int32_t(0); i < npc(_colors)->size(); i++) {
        auto c = java_cast< PaletteRecord_PColor* >(npc(_colors)->get(i));
        npc(npc(npc(buffer)->append(u"* colornum      = "_j))->append(i))->append(u'\u000a');
        npc(buffer)->append(static_cast< ::java::lang::Object* >(c));
        npc(npc(npc(buffer)->append(u"/*colornum      = "_j))->append(i))->append(u'\u000a');
    }
    npc(buffer)->append(u"[/PALETTE]\n"_j);
    return npc(buffer)->toString();
}

void org::apache::poi::hssf::record::PaletteRecord::serialize(::org::apache::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(npc(_colors)->size());
    for (auto i = int32_t(0); i < npc(_colors)->size(); i++) {
        npc(java_cast< PaletteRecord_PColor* >(npc(_colors)->get(i)))->serialize(out);
    }
}

int32_t org::apache::poi::hssf::record::PaletteRecord::getDataSize()
{
    return int32_t(2) + npc(_colors)->size() * PaletteRecord_PColor::ENCODED_SIZE;
}

int16_t org::apache::poi::hssf::record::PaletteRecord::getSid()
{
    return sid;
}

int8_tArray* org::apache::poi::hssf::record::PaletteRecord::getColor(int32_t byteIndex)
{
    auto i = byteIndex - FIRST_COLOR_INDEX;
    if(i < 0 || i >= npc(_colors)->size()) {
        return nullptr;
    }
    return npc(java_cast< PaletteRecord_PColor* >(npc(_colors)->get(i)))->getTriplet();
}

void org::apache::poi::hssf::record::PaletteRecord::setColor(int16_t byteIndex, int8_t red, int8_t green, int8_t blue)
{
    auto i = byteIndex - FIRST_COLOR_INDEX;
    if(i < 0 || i >= STANDARD_PALETTE_SIZE) {
        return;
    }
    while (npc(_colors)->size() <= i) {
        npc(_colors)->add(static_cast< ::java::lang::Object* >(new PaletteRecord_PColor(int32_t(0), int32_t(0), int32_t(0))));
    }
    auto custColor = new PaletteRecord_PColor(red, green, blue);
    npc(_colors)->set(i, custColor);
}

org::apache::poi::hssf::record::PaletteRecord_PColorArray* org::apache::poi::hssf::record::PaletteRecord::createDefaultPalette()
{
    clinit();
    return new PaletteRecord_PColorArray({
        pc(0, 0, 0)
        , pc(255, 255, 255)
        , pc(255, 0, 0)
        , pc(0, 255, 0)
        , pc(0, 0, 255)
        , pc(255, 255, 0)
        , pc(255, 0, 255)
        , pc(0, 255, 255)
        , pc(128, 0, 0)
        , pc(0, 128, 0)
        , pc(0, 0, 128)
        , pc(128, 128, 0)
        , pc(128, 0, 128)
        , pc(0, 128, 128)
        , pc(192, 192, 192)
        , pc(128, 128, 128)
        , pc(153, 153, 255)
        , pc(153, 51, 102)
        , pc(255, 255, 204)
        , pc(204, 255, 255)
        , pc(102, 0, 102)
        , pc(255, 128, 128)
        , pc(0, 102, 204)
        , pc(204, 204, 255)
        , pc(0, 0, 128)
        , pc(255, 0, 255)
        , pc(255, 255, 0)
        , pc(0, 255, 255)
        , pc(128, 0, 128)
        , pc(128, 0, 0)
        , pc(0, 128, 128)
        , pc(0, 0, 255)
        , pc(0, 204, 255)
        , pc(204, 255, 255)
        , pc(204, 255, 204)
        , pc(255, 255, 153)
        , pc(153, 204, 255)
        , pc(255, 153, 204)
        , pc(204, 153, 255)
        , pc(255, 204, 153)
        , pc(51, 102, 255)
        , pc(51, 204, 204)
        , pc(153, 204, 0)
        , pc(255, 204, 0)
        , pc(255, 153, 0)
        , pc(255, 102, 0)
        , pc(102, 102, 153)
        , pc(150, 150, 150)
        , pc(0, 51, 102)
        , pc(51, 153, 102)
        , pc(0, 51, 0)
        , pc(51, 51, 0)
        , pc(153, 51, 0)
        , pc(153, 51, 102)
        , pc(51, 51, 153)
        , pc(51, 51, 51)
    });
}

org::apache::poi::hssf::record::PaletteRecord_PColor* org::apache::poi::hssf::record::PaletteRecord::pc(int32_t r, int32_t g, int32_t b)
{
    clinit();
    return new PaletteRecord_PColor(r, g, b);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::PaletteRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.PaletteRecord", 40);
    return c;
}

int32_t org::apache::poi::hssf::record::PaletteRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* org::apache::poi::hssf::record::PaletteRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* org::apache::poi::hssf::record::PaletteRecord::getClass0()
{
    return class_();
}

