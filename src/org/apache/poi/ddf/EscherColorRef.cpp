// Generated from /POI/java/org/apache/poi/ddf/EscherColorRef.java
#include <org/apache/poi/ddf/EscherColorRef.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/Enum.hpp>
#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/ddf/EscherColorRef_SysIndexProcedure.hpp>
#include <org/apache/poi/ddf/EscherColorRef_SysIndexSource.hpp>
#include <org/apache/poi/util/BitField.hpp>
#include <org/apache/poi/util/LittleEndian.hpp>
#include <Array.hpp>
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

namespace poi
{
    namespace ddf
    {
typedef ::SubArray< ::poi::ddf::EscherColorRef_SysIndexProcedure, ::java::lang::EnumArray > EscherColorRef_SysIndexProcedureArray;
typedef ::SubArray< ::poi::ddf::EscherColorRef_SysIndexSource, ::java::lang::EnumArray > EscherColorRef_SysIndexSourceArray;
    } // ddf
} // poi

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::ddf::EscherColorRef::EscherColorRef(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ddf::EscherColorRef::EscherColorRef(int32_t colorRef) 
    : EscherColorRef(*static_cast< ::default_init_tag* >(0))
{
    ctor(colorRef);
}

poi::ddf::EscherColorRef::EscherColorRef(::int8_tArray* source, int32_t start, int32_t len) 
    : EscherColorRef(*static_cast< ::default_init_tag* >(0))
{
    ctor(source,start,len);
}

void poi::ddf::EscherColorRef::init()
{
    opid = -int32_t(1);
    colorRef = int32_t(0);
}

poi::util::BitField*& poi::ddf::EscherColorRef::FLAG_SYS_INDEX()
{
    clinit();
    return FLAG_SYS_INDEX_;
}
poi::util::BitField* poi::ddf::EscherColorRef::FLAG_SYS_INDEX_;

poi::util::BitField*& poi::ddf::EscherColorRef::FLAG_SCHEME_INDEX()
{
    clinit();
    return FLAG_SCHEME_INDEX_;
}
poi::util::BitField* poi::ddf::EscherColorRef::FLAG_SCHEME_INDEX_;

poi::util::BitField*& poi::ddf::EscherColorRef::FLAG_SYSTEM_RGB()
{
    clinit();
    return FLAG_SYSTEM_RGB_;
}
poi::util::BitField* poi::ddf::EscherColorRef::FLAG_SYSTEM_RGB_;

poi::util::BitField*& poi::ddf::EscherColorRef::FLAG_PALETTE_RGB()
{
    clinit();
    return FLAG_PALETTE_RGB_;
}
poi::util::BitField* poi::ddf::EscherColorRef::FLAG_PALETTE_RGB_;

poi::util::BitField*& poi::ddf::EscherColorRef::FLAG_PALETTE_INDEX()
{
    clinit();
    return FLAG_PALETTE_INDEX_;
}
poi::util::BitField* poi::ddf::EscherColorRef::FLAG_PALETTE_INDEX_;

poi::util::BitField*& poi::ddf::EscherColorRef::FLAG_BLUE()
{
    clinit();
    return FLAG_BLUE_;
}
poi::util::BitField* poi::ddf::EscherColorRef::FLAG_BLUE_;

poi::util::BitField*& poi::ddf::EscherColorRef::FLAG_GREEN()
{
    clinit();
    return FLAG_GREEN_;
}
poi::util::BitField* poi::ddf::EscherColorRef::FLAG_GREEN_;

poi::util::BitField*& poi::ddf::EscherColorRef::FLAG_RED()
{
    clinit();
    return FLAG_RED_;
}
poi::util::BitField* poi::ddf::EscherColorRef::FLAG_RED_;

void poi::ddf::EscherColorRef::ctor(int32_t colorRef)
{
    super::ctor();
    init();
    this->colorRef = colorRef;
}

void poi::ddf::EscherColorRef::ctor(::int8_tArray* source, int32_t start, int32_t len)
{
    super::ctor();
    init();
    /* assert((len == 4 || len == 6)) */ ;
    auto offset = start;
    if(len == 6) {
        opid = ::poi::util::LittleEndian::getUShort(source, offset);
        offset += 2;
    }
    colorRef = ::poi::util::LittleEndian::getInt(source, offset);
}

bool poi::ddf::EscherColorRef::hasSysIndexFlag()
{
    return npc(FLAG_SYS_INDEX_)->isSet(colorRef);
}

void poi::ddf::EscherColorRef::setSysIndexFlag(bool flag)
{
    colorRef = npc(FLAG_SYS_INDEX_)->setBoolean(colorRef, flag);
}

bool poi::ddf::EscherColorRef::hasSchemeIndexFlag()
{
    return npc(FLAG_SCHEME_INDEX_)->isSet(colorRef);
}

void poi::ddf::EscherColorRef::setSchemeIndexFlag(bool flag)
{
    colorRef = npc(FLAG_SCHEME_INDEX_)->setBoolean(colorRef, flag);
}

bool poi::ddf::EscherColorRef::hasSystemRGBFlag()
{
    return npc(FLAG_SYSTEM_RGB_)->isSet(colorRef);
}

void poi::ddf::EscherColorRef::setSystemRGBFlag(bool flag)
{
    colorRef = npc(FLAG_SYSTEM_RGB_)->setBoolean(colorRef, flag);
}

bool poi::ddf::EscherColorRef::hasPaletteRGBFlag()
{
    return npc(FLAG_PALETTE_RGB_)->isSet(colorRef);
}

void poi::ddf::EscherColorRef::setPaletteRGBFlag(bool flag)
{
    colorRef = npc(FLAG_PALETTE_RGB_)->setBoolean(colorRef, flag);
}

bool poi::ddf::EscherColorRef::hasPaletteIndexFlag()
{
    return npc(FLAG_PALETTE_INDEX_)->isSet(colorRef);
}

void poi::ddf::EscherColorRef::setPaletteIndexFlag(bool flag)
{
    colorRef = npc(FLAG_PALETTE_INDEX_)->setBoolean(colorRef, flag);
}

int32_tArray* poi::ddf::EscherColorRef::getRGB()
{
    auto rgb = (new ::int32_tArray({
        npc(FLAG_RED_)->getValue(colorRef)
        , npc(FLAG_GREEN_)->getValue(colorRef)
        , npc(FLAG_BLUE_)->getValue(colorRef)
    }));
    return rgb;
}

poi::ddf::EscherColorRef_SysIndexSource* poi::ddf::EscherColorRef::getSysIndexSource()
{
    if(!hasSysIndexFlag()) {
        return nullptr;
    }
    auto val = npc(FLAG_RED_)->getValue(colorRef);
    for(auto sis : *npc(EscherColorRef_SysIndexSource::values())) {
        if(npc(sis)->value == val) {
            return sis;
        }
    }
    return nullptr;
}

poi::ddf::EscherColorRef_SysIndexProcedure* poi::ddf::EscherColorRef::getSysIndexProcedure()
{
    if(!hasSysIndexFlag()) {
        return nullptr;
    }
    auto val = npc(FLAG_GREEN_)->getValue(colorRef);
    for(auto sip : *npc(EscherColorRef_SysIndexProcedure::values())) {
        if(sip == EscherColorRef_SysIndexProcedure::INVERT_AFTER || sip == EscherColorRef_SysIndexProcedure::INVERT_HIGHBIT_AFTER) {
            continue;
        }
        if(npc(npc(sip)->mask)->isSet(val)) {
            return sip;
        }
    }
    return nullptr;
}

int32_t poi::ddf::EscherColorRef::getSysIndexInvert()
{
    if(!hasSysIndexFlag()) {
        return 0;
    }
    auto val = npc(FLAG_GREEN_)->getValue(colorRef);
    if((npc(npc(EscherColorRef_SysIndexProcedure::INVERT_AFTER)->mask)->isSet(val))) {
        return 1;
    }
    if((npc(npc(EscherColorRef_SysIndexProcedure::INVERT_HIGHBIT_AFTER)->mask)->isSet(val))) {
        return 2;
    }
    return 0;
}

int32_t poi::ddf::EscherColorRef::getSchemeIndex()
{
    if(!hasSchemeIndexFlag()) {
        return -int32_t(1);
    }
    return npc(FLAG_RED_)->getValue(colorRef);
}

int32_t poi::ddf::EscherColorRef::getPaletteIndex()
{
    return (hasPaletteIndexFlag()) ? getIndex() : -int32_t(1);
}

int32_t poi::ddf::EscherColorRef::getSysIndex()
{
    return (hasSysIndexFlag()) ? getIndex() : -int32_t(1);
}

int32_t poi::ddf::EscherColorRef::getIndex()
{
    return (npc(FLAG_GREEN_)->getValue(colorRef) << int32_t(8)) | npc(FLAG_RED_)->getValue(colorRef);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ddf::EscherColorRef::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ddf.EscherColorRef", 33);
    return c;
}

void poi::ddf::EscherColorRef::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        FLAG_SYS_INDEX_ = new ::poi::util::BitField(int32_t(268435456));
        FLAG_SCHEME_INDEX_ = new ::poi::util::BitField(int32_t(134217728));
        FLAG_SYSTEM_RGB_ = new ::poi::util::BitField(int32_t(67108864));
        FLAG_PALETTE_RGB_ = new ::poi::util::BitField(int32_t(33554432));
        FLAG_PALETTE_INDEX_ = new ::poi::util::BitField(int32_t(16777216));
        FLAG_BLUE_ = new ::poi::util::BitField(int32_t(16711680));
        FLAG_GREEN_ = new ::poi::util::BitField(int32_t(65280));
        FLAG_RED_ = new ::poi::util::BitField(int32_t(255));
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* poi::ddf::EscherColorRef::getClass0()
{
    return class_();
}

