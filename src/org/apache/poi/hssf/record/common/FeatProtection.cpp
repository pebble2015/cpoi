// Generated from /POI/java/org/apache/poi/hssf/record/common/FeatProtection.java
#include <org/apache/poi/hssf/record/common/FeatProtection.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>
#include <org/apache/poi/util/StringUtil.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::hssf::record::common::FeatProtection::FeatProtection(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::common::FeatProtection::FeatProtection() 
    : FeatProtection(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::hssf::record::common::FeatProtection::FeatProtection(::poi::hssf::record::RecordInputStream* in) 
    : FeatProtection(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

int64_t& poi::hssf::record::common::FeatProtection::NO_SELF_RELATIVE_SECURITY_FEATURE()
{
    clinit();
    return NO_SELF_RELATIVE_SECURITY_FEATURE_;
}
int64_t poi::hssf::record::common::FeatProtection::NO_SELF_RELATIVE_SECURITY_FEATURE_;

int64_t& poi::hssf::record::common::FeatProtection::HAS_SELF_RELATIVE_SECURITY_FEATURE()
{
    clinit();
    return HAS_SELF_RELATIVE_SECURITY_FEATURE_;
}
int64_t poi::hssf::record::common::FeatProtection::HAS_SELF_RELATIVE_SECURITY_FEATURE_;

void poi::hssf::record::common::FeatProtection::ctor()
{
    super::ctor();
    securityDescriptor = new ::int8_tArray(int32_t(0));
}

void poi::hssf::record::common::FeatProtection::ctor(::poi::hssf::record::RecordInputStream* in)
{
    super::ctor();
    fSD = npc(in)->readInt();
    passwordVerifier = npc(in)->readInt();
    title = ::poi::util::StringUtil::readUnicodeString(in);
    securityDescriptor = npc(in)->readRemainder();
}

java::lang::String* poi::hssf::record::common::FeatProtection::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u" [FEATURE PROTECTION]\n"_j);
    npc(buffer)->append(::java::lang::StringBuilder().append(u"   Self Relative = "_j)->append(fSD)->toString());
    npc(buffer)->append(::java::lang::StringBuilder().append(u"   Password Verifier = "_j)->append(passwordVerifier)->toString());
    npc(buffer)->append(::java::lang::StringBuilder().append(u"   Title = "_j)->append(title)->toString());
    npc(buffer)->append(::java::lang::StringBuilder().append(u"   Security Descriptor Size = "_j)->append(npc(securityDescriptor)->length)->toString());
    npc(buffer)->append(u" [/FEATURE PROTECTION]\n"_j);
    return npc(buffer)->toString();
}

void poi::hssf::record::common::FeatProtection::serialize(::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeInt(fSD);
    npc(out)->writeInt(passwordVerifier);
    ::poi::util::StringUtil::writeUnicodeString(out, title);
    npc(out)->write(securityDescriptor);
}

int32_t poi::hssf::record::common::FeatProtection::getDataSize()
{
    return int32_t(4) + int32_t(4) + ::poi::util::StringUtil::getEncodedSize(title)+ npc(securityDescriptor)->length;
}

int32_t poi::hssf::record::common::FeatProtection::getPasswordVerifier()
{
    return passwordVerifier;
}

void poi::hssf::record::common::FeatProtection::setPasswordVerifier(int32_t passwordVerifier)
{
    this->passwordVerifier = passwordVerifier;
}

java::lang::String* poi::hssf::record::common::FeatProtection::getTitle()
{
    return title;
}

void poi::hssf::record::common::FeatProtection::setTitle(::java::lang::String* title)
{
    this->title = title;
}

int32_t poi::hssf::record::common::FeatProtection::getFSD()
{
    return fSD;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::common::FeatProtection::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.common.FeatProtection", 48);
    return c;
}

void poi::hssf::record::common::FeatProtection::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        NO_SELF_RELATIVE_SECURITY_FEATURE_ = int32_t(0);
        HAS_SELF_RELATIVE_SECURITY_FEATURE_ = int32_t(1);
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* poi::hssf::record::common::FeatProtection::getClass0()
{
    return class_();
}

