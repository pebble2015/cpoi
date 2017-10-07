// Generated from /POI/java/org/apache/poi/hssf/record/UnknownRecord.java
#include <org/apache/poi/hssf/record/UnknownRecord.hpp>

#include <java/lang/Integer.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/util/Locale.hpp>
#include <org/apache/poi/hssf/record/FeatRecord.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream.hpp>
#include <org/apache/poi/util/HexDump.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::hssf::record::UnknownRecord::UnknownRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::UnknownRecord::UnknownRecord(int32_t id, ::int8_tArray* data) 
    : UnknownRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(id,data);
}

org::apache::poi::hssf::record::UnknownRecord::UnknownRecord(RecordInputStream* in) 
    : UnknownRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int32_t org::apache::poi::hssf::record::UnknownRecord::PRINTSIZE_0033;

constexpr int32_t org::apache::poi::hssf::record::UnknownRecord::PLS_004D;

constexpr int32_t org::apache::poi::hssf::record::UnknownRecord::SHEETPR_0081;

constexpr int32_t org::apache::poi::hssf::record::UnknownRecord::SORT_0090;

constexpr int32_t org::apache::poi::hssf::record::UnknownRecord::STANDARDWIDTH_0099;

constexpr int32_t org::apache::poi::hssf::record::UnknownRecord::SCL_00A0;

constexpr int32_t org::apache::poi::hssf::record::UnknownRecord::BITMAP_00E9;

constexpr int32_t org::apache::poi::hssf::record::UnknownRecord::PHONETICPR_00EF;

constexpr int32_t org::apache::poi::hssf::record::UnknownRecord::LABELRANGES_015F;

constexpr int32_t org::apache::poi::hssf::record::UnknownRecord::QUICKTIP_0800;

constexpr int32_t org::apache::poi::hssf::record::UnknownRecord::SHEETEXT_0862;

constexpr int32_t org::apache::poi::hssf::record::UnknownRecord::SHEETPROTECTION_0867;

constexpr int32_t org::apache::poi::hssf::record::UnknownRecord::HEADER_FOOTER_089C;

constexpr int32_t org::apache::poi::hssf::record::UnknownRecord::CODENAME_1BA;

constexpr int32_t org::apache::poi::hssf::record::UnknownRecord::PLV_MAC;

void org::apache::poi::hssf::record::UnknownRecord::ctor(int32_t id, ::int8_tArray* data)
{
    super::ctor();
    _sid = id & int32_t(65535);
    _rawData = data;
}

void org::apache::poi::hssf::record::UnknownRecord::ctor(RecordInputStream* in)
{
    super::ctor();
    _sid = npc(in)->getSid();
    _rawData = npc(in)->readRemainder();
}

void org::apache::poi::hssf::record::UnknownRecord::serialize(::org::apache::poi::util::LittleEndianOutput* out)
{
    npc(out)->write(_rawData);
}

int32_t org::apache::poi::hssf::record::UnknownRecord::getDataSize()
{
    return npc(_rawData)->length;
}

java::lang::String* org::apache::poi::hssf::record::UnknownRecord::toString()
{
    auto biffName = getBiffName(_sid);
    if(biffName == nullptr) {
        biffName = u"UNKNOWNRECORD"_j;
    }
    auto sb = new ::java::lang::StringBuffer();
    npc(npc(npc(sb)->append(u"["_j))->append(biffName))->append(u"] (0x"_j);
    npc(sb)->append(::java::lang::StringBuilder().append(npc(::java::lang::Integer::toHexString(_sid))->toUpperCase(::java::util::Locale::ROOT()))->append(u")\n"_j)->toString());
    if(npc(_rawData)->length > 0) {
        npc(npc(npc(sb)->append(u"  rawData="_j))->append(::org::apache::poi::util::HexDump::toHex(_rawData)))->append(u"\n"_j);
    }
    npc(npc(npc(sb)->append(u"[/"_j))->append(biffName))->append(u"]\n"_j);
    return npc(sb)->toString();
}

int16_t org::apache::poi::hssf::record::UnknownRecord::getSid()
{
    return static_cast< int16_t >(_sid);
}

java::lang::String* org::apache::poi::hssf::record::UnknownRecord::getBiffName(int32_t sid)
{
    clinit();
    switch (sid) {
    case PRINTSIZE_0033:
        return u"PRINTSIZE"_j;
    case PLS_004D:
        return u"PLS"_j;
    case int32_t(80):
        return u"DCON"_j;
    case int32_t(127):
        return u"IMDATA"_j;
    case SHEETPR_0081:
        return u"SHEETPR"_j;
    case SORT_0090:
        return u"SORT"_j;
    case int32_t(148):
        return u"LHRECORD"_j;
    case STANDARDWIDTH_0099:
        return u"STANDARDWIDTH"_j;
    case SCL_00A0:
        return u"SCL"_j;
    case int32_t(174):
        return u"SCENMAN"_j;
    case int32_t(178):
        return u"SXVI"_j;
    case int32_t(180):
        return u"SXIVD"_j;
    case int32_t(181):
        return u"SXLI"_j;
    case int32_t(211):
        return u"OBPROJ"_j;
    case int32_t(220):
        return u"PARAMQRY"_j;
    case int32_t(222):
        return u"OLESIZE"_j;
    case BITMAP_00E9:
        return u"BITMAP"_j;
    case PHONETICPR_00EF:
        return u"PHONETICPR"_j;
    case int32_t(241):
        return u"SXEX"_j;
    case LABELRANGES_015F:
        return u"LABELRANGES"_j;
    case int32_t(442):
        return u"CODENAME"_j;
    case int32_t(425):
        return u"USERBVIEW"_j;
    case int32_t(429):
        return u"QSI"_j;
    case int32_t(448):
        return u"EXCEL9FILE"_j;
    case int32_t(2050):
        return u"QSISXTAG"_j;
    case int32_t(2051):
        return u"DBQUERYEXT"_j;
    case int32_t(2053):
        return u"TXTQUERY"_j;
    case int32_t(2064):
        return u"SXVIEWEX9"_j;
    case int32_t(2066):
        return u"CONTINUEFRT"_j;
    case QUICKTIP_0800:
        return u"QUICKTIP"_j;
    case SHEETEXT_0862:
        return u"SHEETEXT"_j;
    case int32_t(2147):
        return u"BOOKEXT"_j;
    case int32_t(2148):
        return u"SXADDL"_j;
    case SHEETPROTECTION_0867:
        return u"SHEETPROTECTION"_j;
    case int32_t(2155):
        return u"DATALABEXTCONTENTS"_j;
    case int32_t(2156):
        return u"CELLWATCH"_j;
    case FeatRecord::v11_sid:
        return u"SHARED FEATURE v11"_j;
    case int32_t(2164):
        return u"DROPDOWNOBJIDS"_j;
    case int32_t(2166):
        return u"DCONN"_j;
    case FeatRecord::v12_sid:
        return u"SHARED FEATURE v12"_j;
    case int32_t(2171):
        return u"CFEX"_j;
    case int32_t(2172):
        return u"XFCRC"_j;
    case int32_t(2173):
        return u"XFEXT"_j;
    case int32_t(2175):
        return u"CONTINUEFRT12"_j;
    case int32_t(2187):
        return u"PLV"_j;
    case int32_t(2188):
        return u"COMPAT12"_j;
    case int32_t(2189):
        return u"DXF"_j;
    case int32_t(2194):
        return u"STYLEEXT"_j;
    case int32_t(2198):
        return u"THEME"_j;
    case int32_t(2199):
        return u"GUIDTYPELIB"_j;
    case int32_t(2202):
        return u"MTRSETTINGS"_j;
    case int32_t(2203):
        return u"COMPRESSPICTURES"_j;
    case HEADER_FOOTER_089C:
        return u"HEADERFOOTER"_j;
    case int32_t(2205):
        return u"CRTLAYOUT12"_j;
    case int32_t(2206):
        return u"CRTMLFRT"_j;
    case int32_t(2207):
        return u"CRTMLFRTCONTINUE"_j;
    case int32_t(2209):
        return u"SHAPEPROPSSTREAM"_j;
    case int32_t(2211):
        return u"FORCEFULLCALCULATION"_j;
    case int32_t(2212):
        return u"SHAPEPROPSSTREAM"_j;
    case int32_t(2213):
        return u"TEXTPROPSSTREAM"_j;
    case int32_t(2214):
        return u"RICHTEXTSTREAM"_j;
    case int32_t(2215):
        return u"CRTLAYOUT12A"_j;
    case int32_t(2248):
        return u"PLV{Mac Excel}"_j;
    case int32_t(4097):
        return u"UNITS"_j;
    case int32_t(4102):
        return u"CHARTDATAFORMAT"_j;
    case int32_t(4103):
        return u"CHARTLINEFORMAT"_j;
    }

    if(isObservedButUnknown(sid)) {
        return ::java::lang::StringBuilder().append(u"UNKNOWN-"_j)->append(npc(::java::lang::Integer::toHexString(sid))->toUpperCase(::java::util::Locale::ROOT()))->toString();
    }
    return nullptr;
}

bool org::apache::poi::hssf::record::UnknownRecord::isObservedButUnknown(int32_t sid)
{
    clinit();
    switch (sid) {
    case int32_t(51):
    case int32_t(52):
    case int32_t(445):
    case int32_t(450):
    case int32_t(4105):
    case int32_t(4106):
    case int32_t(4107):
    case int32_t(4108):
    case int32_t(4116):
    case int32_t(4119):
    case int32_t(4120):
    case int32_t(4121):
    case int32_t(4122):
    case int32_t(4123):
    case int32_t(4125):
    case int32_t(4126):
    case int32_t(4127):
    case int32_t(4128):
    case int32_t(4129):
    case int32_t(4130):
    case int32_t(4132):
    case int32_t(4133):
    case int32_t(4134):
    case int32_t(4135):
    case int32_t(4146):
    case int32_t(4147):
    case int32_t(4148):
    case int32_t(4149):
    case int32_t(4154):
    case int32_t(4161):
    case int32_t(4163):
    case int32_t(4164):
    case int32_t(4165):
    case int32_t(4166):
    case int32_t(4170):
    case int32_t(4171):
    case int32_t(4174):
    case int32_t(4175):
    case int32_t(4177):
    case int32_t(4188):
    case int32_t(4189):
    case int32_t(4191):
    case int32_t(4192):
    case int32_t(4194):
    case int32_t(4195):
    case int32_t(4196):
    case int32_t(4197):
    case int32_t(4198):
        return true;
    }

    return false;
}

java::lang::Object* org::apache::poi::hssf::record::UnknownRecord::clone()
{
    return this;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::UnknownRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.UnknownRecord", 40);
    return c;
}

int32_t org::apache::poi::hssf::record::UnknownRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* org::apache::poi::hssf::record::UnknownRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* org::apache::poi::hssf::record::UnknownRecord::getClass0()
{
    return class_();
}

