// Generated from /POI/java/org/apache/poi/hpsf/ClassID.java
#include <org/apache/poi/hpsf/ClassID.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/System.hpp>
#include <java/util/Arrays.hpp>
#include <org/apache/poi/util/HexDump.hpp>
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

org::apache::poi::hpsf::ClassID::ClassID(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hpsf::ClassID::ClassID(::int8_tArray* src, int32_t offset) 
    : ClassID(*static_cast< ::default_init_tag* >(0))
{
    ctor(src,offset);
}

org::apache::poi::hpsf::ClassID::ClassID() 
    : ClassID(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::hpsf::ClassID::ClassID(::java::lang::String* externalForm) 
    : ClassID(*static_cast< ::default_init_tag* >(0))
{
    ctor(externalForm);
}

void org::apache::poi::hpsf::ClassID::init()
{
    bytes = new ::int8_tArray(LENGTH);
}

org::apache::poi::hpsf::ClassID*& org::apache::poi::hpsf::ClassID::OLE10_PACKAGE()
{
    clinit();
    return OLE10_PACKAGE_;
}
org::apache::poi::hpsf::ClassID* org::apache::poi::hpsf::ClassID::OLE10_PACKAGE_;

org::apache::poi::hpsf::ClassID*& org::apache::poi::hpsf::ClassID::PPT_SHOW()
{
    clinit();
    return PPT_SHOW_;
}
org::apache::poi::hpsf::ClassID* org::apache::poi::hpsf::ClassID::PPT_SHOW_;

org::apache::poi::hpsf::ClassID*& org::apache::poi::hpsf::ClassID::XLS_WORKBOOK()
{
    clinit();
    return XLS_WORKBOOK_;
}
org::apache::poi::hpsf::ClassID* org::apache::poi::hpsf::ClassID::XLS_WORKBOOK_;

org::apache::poi::hpsf::ClassID*& org::apache::poi::hpsf::ClassID::TXT_ONLY()
{
    clinit();
    return TXT_ONLY_;
}
org::apache::poi::hpsf::ClassID* org::apache::poi::hpsf::ClassID::TXT_ONLY_;

org::apache::poi::hpsf::ClassID*& org::apache::poi::hpsf::ClassID::EXCEL_V3()
{
    clinit();
    return EXCEL_V3_;
}
org::apache::poi::hpsf::ClassID* org::apache::poi::hpsf::ClassID::EXCEL_V3_;

org::apache::poi::hpsf::ClassID*& org::apache::poi::hpsf::ClassID::EXCEL_V3_CHART()
{
    clinit();
    return EXCEL_V3_CHART_;
}
org::apache::poi::hpsf::ClassID* org::apache::poi::hpsf::ClassID::EXCEL_V3_CHART_;

org::apache::poi::hpsf::ClassID*& org::apache::poi::hpsf::ClassID::EXCEL_V3_MACRO()
{
    clinit();
    return EXCEL_V3_MACRO_;
}
org::apache::poi::hpsf::ClassID* org::apache::poi::hpsf::ClassID::EXCEL_V3_MACRO_;

org::apache::poi::hpsf::ClassID*& org::apache::poi::hpsf::ClassID::EXCEL95()
{
    clinit();
    return EXCEL95_;
}
org::apache::poi::hpsf::ClassID* org::apache::poi::hpsf::ClassID::EXCEL95_;

org::apache::poi::hpsf::ClassID*& org::apache::poi::hpsf::ClassID::EXCEL95_CHART()
{
    clinit();
    return EXCEL95_CHART_;
}
org::apache::poi::hpsf::ClassID* org::apache::poi::hpsf::ClassID::EXCEL95_CHART_;

org::apache::poi::hpsf::ClassID*& org::apache::poi::hpsf::ClassID::EXCEL97()
{
    clinit();
    return EXCEL97_;
}
org::apache::poi::hpsf::ClassID* org::apache::poi::hpsf::ClassID::EXCEL97_;

org::apache::poi::hpsf::ClassID*& org::apache::poi::hpsf::ClassID::EXCEL97_CHART()
{
    clinit();
    return EXCEL97_CHART_;
}
org::apache::poi::hpsf::ClassID* org::apache::poi::hpsf::ClassID::EXCEL97_CHART_;

org::apache::poi::hpsf::ClassID*& org::apache::poi::hpsf::ClassID::EXCEL2003()
{
    clinit();
    return EXCEL2003_;
}
org::apache::poi::hpsf::ClassID* org::apache::poi::hpsf::ClassID::EXCEL2003_;

org::apache::poi::hpsf::ClassID*& org::apache::poi::hpsf::ClassID::EXCEL2007()
{
    clinit();
    return EXCEL2007_;
}
org::apache::poi::hpsf::ClassID* org::apache::poi::hpsf::ClassID::EXCEL2007_;

org::apache::poi::hpsf::ClassID*& org::apache::poi::hpsf::ClassID::EXCEL2007_MACRO()
{
    clinit();
    return EXCEL2007_MACRO_;
}
org::apache::poi::hpsf::ClassID* org::apache::poi::hpsf::ClassID::EXCEL2007_MACRO_;

org::apache::poi::hpsf::ClassID*& org::apache::poi::hpsf::ClassID::EXCEL2007_XLSB()
{
    clinit();
    return EXCEL2007_XLSB_;
}
org::apache::poi::hpsf::ClassID* org::apache::poi::hpsf::ClassID::EXCEL2007_XLSB_;

org::apache::poi::hpsf::ClassID*& org::apache::poi::hpsf::ClassID::EXCEL2010()
{
    clinit();
    return EXCEL2010_;
}
org::apache::poi::hpsf::ClassID* org::apache::poi::hpsf::ClassID::EXCEL2010_;

org::apache::poi::hpsf::ClassID*& org::apache::poi::hpsf::ClassID::EXCEL2010_CHART()
{
    clinit();
    return EXCEL2010_CHART_;
}
org::apache::poi::hpsf::ClassID* org::apache::poi::hpsf::ClassID::EXCEL2010_CHART_;

org::apache::poi::hpsf::ClassID*& org::apache::poi::hpsf::ClassID::EXCEL2010_ODS()
{
    clinit();
    return EXCEL2010_ODS_;
}
org::apache::poi::hpsf::ClassID* org::apache::poi::hpsf::ClassID::EXCEL2010_ODS_;

org::apache::poi::hpsf::ClassID*& org::apache::poi::hpsf::ClassID::WORD97()
{
    clinit();
    return WORD97_;
}
org::apache::poi::hpsf::ClassID* org::apache::poi::hpsf::ClassID::WORD97_;

org::apache::poi::hpsf::ClassID*& org::apache::poi::hpsf::ClassID::WORD95()
{
    clinit();
    return WORD95_;
}
org::apache::poi::hpsf::ClassID* org::apache::poi::hpsf::ClassID::WORD95_;

org::apache::poi::hpsf::ClassID*& org::apache::poi::hpsf::ClassID::WORD2007()
{
    clinit();
    return WORD2007_;
}
org::apache::poi::hpsf::ClassID* org::apache::poi::hpsf::ClassID::WORD2007_;

org::apache::poi::hpsf::ClassID*& org::apache::poi::hpsf::ClassID::WORD2007_MACRO()
{
    clinit();
    return WORD2007_MACRO_;
}
org::apache::poi::hpsf::ClassID* org::apache::poi::hpsf::ClassID::WORD2007_MACRO_;

org::apache::poi::hpsf::ClassID*& org::apache::poi::hpsf::ClassID::POWERPOINT97()
{
    clinit();
    return POWERPOINT97_;
}
org::apache::poi::hpsf::ClassID* org::apache::poi::hpsf::ClassID::POWERPOINT97_;

org::apache::poi::hpsf::ClassID*& org::apache::poi::hpsf::ClassID::POWERPOINT95()
{
    clinit();
    return POWERPOINT95_;
}
org::apache::poi::hpsf::ClassID* org::apache::poi::hpsf::ClassID::POWERPOINT95_;

org::apache::poi::hpsf::ClassID*& org::apache::poi::hpsf::ClassID::POWERPOINT2007()
{
    clinit();
    return POWERPOINT2007_;
}
org::apache::poi::hpsf::ClassID* org::apache::poi::hpsf::ClassID::POWERPOINT2007_;

org::apache::poi::hpsf::ClassID*& org::apache::poi::hpsf::ClassID::POWERPOINT2007_MACRO()
{
    clinit();
    return POWERPOINT2007_MACRO_;
}
org::apache::poi::hpsf::ClassID* org::apache::poi::hpsf::ClassID::POWERPOINT2007_MACRO_;

org::apache::poi::hpsf::ClassID*& org::apache::poi::hpsf::ClassID::EQUATION30()
{
    clinit();
    return EQUATION30_;
}
org::apache::poi::hpsf::ClassID* org::apache::poi::hpsf::ClassID::EQUATION30_;

constexpr int32_t org::apache::poi::hpsf::ClassID::LENGTH;

void org::apache::poi::hpsf::ClassID::ctor(::int8_tArray* src, int32_t offset)
{
    super::ctor();
    init();
    read(src, offset);
}

void org::apache::poi::hpsf::ClassID::ctor()
{
    super::ctor();
    init();
    ::java::util::Arrays::fill(bytes, static_cast< int8_t >(int32_t(0)));
}

void org::apache::poi::hpsf::ClassID::ctor(::java::lang::String* externalForm)
{
    super::ctor();
    init();
    auto clsStr = npc(externalForm)->replaceAll(u"[{}-]"_j, u""_j);
    for (auto i = int32_t(0); i < npc(clsStr)->length(); i += 2) {
        (*bytes)[i / int32_t(2)] = static_cast< int8_t >(::java::lang::Integer::parseInt(npc(clsStr)->substring(i, i + int32_t(2)), 16));
    }
}

int32_t org::apache::poi::hpsf::ClassID::length()
{
    return LENGTH;
}

int8_tArray* org::apache::poi::hpsf::ClassID::getBytes()
{
    return bytes;
}

void org::apache::poi::hpsf::ClassID::setBytes(::int8_tArray* bytes)
{
    ::java::lang::System::arraycopy(bytes, 0, this->bytes, 0, LENGTH);
}

int8_tArray* org::apache::poi::hpsf::ClassID::read(::int8_tArray* src, int32_t offset)
{
    (*bytes)[int32_t(0)] = (*src)[int32_t(3) + offset];
    (*bytes)[int32_t(1)] = (*src)[int32_t(2) + offset];
    (*bytes)[int32_t(2)] = (*src)[int32_t(1) + offset];
    (*bytes)[int32_t(3)] = (*src)[int32_t(0) + offset];
    (*bytes)[int32_t(4)] = (*src)[int32_t(5) + offset];
    (*bytes)[int32_t(5)] = (*src)[int32_t(4) + offset];
    (*bytes)[int32_t(6)] = (*src)[int32_t(7) + offset];
    (*bytes)[int32_t(7)] = (*src)[int32_t(6) + offset];
    ::java::lang::System::arraycopy(src, int32_t(8) + offset, bytes, 8, 8);
    return bytes;
}

void org::apache::poi::hpsf::ClassID::write(::int8_tArray* dst, int32_t offset) /* throws(ArrayStoreException) */
{
    if(npc(dst)->length < LENGTH) {
        throw new ::java::lang::ArrayStoreException(::java::lang::StringBuilder().append(::java::lang::StringBuilder().append(u"Destination byte[] must have room for at least 16 bytes, "_j)->append(u"but has a length of only "_j)->toString())->append(npc(dst)->length)
            ->append(u"."_j)->toString());
    }
    (*dst)[int32_t(0) + offset] = (*bytes)[int32_t(3)];
    (*dst)[int32_t(1) + offset] = (*bytes)[int32_t(2)];
    (*dst)[int32_t(2) + offset] = (*bytes)[int32_t(1)];
    (*dst)[int32_t(3) + offset] = (*bytes)[int32_t(0)];
    (*dst)[int32_t(4) + offset] = (*bytes)[int32_t(5)];
    (*dst)[int32_t(5) + offset] = (*bytes)[int32_t(4)];
    (*dst)[int32_t(6) + offset] = (*bytes)[int32_t(7)];
    (*dst)[int32_t(7) + offset] = (*bytes)[int32_t(6)];
    ::java::lang::System::arraycopy(bytes, 8, dst, int32_t(8) + offset, 8);
}

bool org::apache::poi::hpsf::ClassID::equals(::java::lang::Object* o)
{
    return (dynamic_cast< ClassID* >(o) != nullptr) && ::java::util::Arrays::equals(bytes, npc((java_cast< ClassID* >(o)))->bytes);
}

bool org::apache::poi::hpsf::ClassID::equalsInverted(ClassID* o)
{
    return (*npc(o)->bytes)[int32_t(0)] == (*bytes)[int32_t(3)] && (*npc(o)->bytes)[int32_t(1)] == (*bytes)[int32_t(2)] && (*npc(o)->bytes)[int32_t(2)] == (*bytes)[int32_t(1)] && (*npc(o)->bytes)[int32_t(3)] == (*bytes)[int32_t(0)] && (*npc(o)->bytes)[int32_t(4)] == (*bytes)[int32_t(5)] && (*npc(o)->bytes)[int32_t(5)] == (*bytes)[int32_t(4)] && (*npc(o)->bytes)[int32_t(6)] == (*bytes)[int32_t(7)] && (*npc(o)->bytes)[int32_t(7)] == (*bytes)[int32_t(6)] && (*npc(o)->bytes)[int32_t(8)] == (*bytes)[int32_t(8)] && (*npc(o)->bytes)[int32_t(9)] == (*bytes)[int32_t(9)] && (*npc(o)->bytes)[int32_t(10)] == (*bytes)[int32_t(10)] && (*npc(o)->bytes)[int32_t(11)] == (*bytes)[int32_t(11)] && (*npc(o)->bytes)[int32_t(12)] == (*bytes)[int32_t(12)] && (*npc(o)->bytes)[int32_t(13)] == (*bytes)[int32_t(13)] && (*npc(o)->bytes)[int32_t(14)] == (*bytes)[int32_t(14)] && (*npc(o)->bytes)[int32_t(15)] == (*bytes)[int32_t(15)];
}

int32_t org::apache::poi::hpsf::ClassID::hashCode()
{
    return npc(toString())->hashCode();
}

java::lang::String* org::apache::poi::hpsf::ClassID::toString()
{
    auto sbClassId = new ::java::lang::StringBuilder(int32_t(38));
    npc(sbClassId)->append(u'{');
    for (auto i = int32_t(0); i < LENGTH; i++) {
        npc(sbClassId)->append(::org::apache::poi::util::HexDump::toHex((*bytes)[i]));
        if(i == 3 || i == 5 || i == 7 || i == 9) {
            npc(sbClassId)->append(u'-');
        }
    }
    npc(sbClassId)->append(u'}');
    return npc(sbClassId)->toString();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hpsf::ClassID::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hpsf.ClassID", 27);
    return c;
}

void org::apache::poi::hpsf::ClassID::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        OLE10_PACKAGE_ = new ClassID(u"{0003000C-0000-0000-C000-000000000046}"_j);
        PPT_SHOW_ = new ClassID(u"{64818D10-4F9B-11CF-86EA-00AA00B929E8}"_j);
        XLS_WORKBOOK_ = new ClassID(u"{00020841-0000-0000-C000-000000000046}"_j);
        TXT_ONLY_ = new ClassID(u"{5e941d80-bf96-11cd-b579-08002b30bfeb}"_j);
        EXCEL_V3_ = new ClassID(u"{00030000-0000-0000-C000-000000000046}"_j);
        EXCEL_V3_CHART_ = new ClassID(u"{00030001-0000-0000-C000-000000000046}"_j);
        EXCEL_V3_MACRO_ = new ClassID(u"{00030002-0000-0000-C000-000000000046}"_j);
        EXCEL95_ = new ClassID(u"{00020810-0000-0000-C000-000000000046}"_j);
        EXCEL95_CHART_ = new ClassID(u"{00020811-0000-0000-C000-000000000046}"_j);
        EXCEL97_ = new ClassID(u"{00020820-0000-0000-C000-000000000046}"_j);
        EXCEL97_CHART_ = new ClassID(u"{00020821-0000-0000-C000-000000000046}"_j);
        EXCEL2003_ = new ClassID(u"{00020812-0000-0000-C000-000000000046}"_j);
        EXCEL2007_ = new ClassID(u"{00020830-0000-0000-C000-000000000046}"_j);
        EXCEL2007_MACRO_ = new ClassID(u"{00020832-0000-0000-C000-000000000046}"_j);
        EXCEL2007_XLSB_ = new ClassID(u"{00020833-0000-0000-C000-000000000046}"_j);
        EXCEL2010_ = new ClassID(u"{00024500-0000-0000-C000-000000000046}"_j);
        EXCEL2010_CHART_ = new ClassID(u"{00024505-0014-0000-C000-000000000046}"_j);
        EXCEL2010_ODS_ = new ClassID(u"{EABCECDB-CC1C-4A6F-B4E3-7F888A5ADFC8}"_j);
        WORD97_ = new ClassID(u"{00020906-0000-0000-C000-000000000046}"_j);
        WORD95_ = new ClassID(u"{00020900-0000-0000-C000-000000000046}"_j);
        WORD2007_ = new ClassID(u"{F4754C9B-64F5-4B40-8AF4-679732AC0607}"_j);
        WORD2007_MACRO_ = new ClassID(u"{18A06B6B-2F3F-4E2B-A611-52BE631B2D22}"_j);
        POWERPOINT97_ = new ClassID(u"{64818D10-4F9B-11CF-86EA-00AA00B929E8}"_j);
        POWERPOINT95_ = new ClassID(u"{EA7BAE70-FB3B-11CD-A903-00AA00510EA3}"_j);
        POWERPOINT2007_ = new ClassID(u"{CF4F55F4-8F87-4D47-80BB-5808164BB3F8}"_j);
        POWERPOINT2007_MACRO_ = new ClassID(u"{DC020317-E6E2-4A62-B9FA-B3EFE16626F4}"_j);
        EQUATION30_ = new ClassID(u"{0002CE02-0000-0000-C000-000000000046}"_j);
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* org::apache::poi::hpsf::ClassID::getClass0()
{
    return class_();
}

