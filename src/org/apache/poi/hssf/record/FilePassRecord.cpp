// Generated from /POI/java/org/apache/poi/hssf/record/FilePassRecord.java
#include <org/apache/poi/hssf/record/FilePassRecord.hpp>

#include <java/io/ByteArrayOutputStream.hpp>
#include <java/io/IOException.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/CloneNotSupportedException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/Throwable.hpp>
#include <org/apache/poi/EncryptedDocumentException.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream.hpp>
#include <org/apache/poi/poifs/crypt/EncryptionHeader.hpp>
#include <org/apache/poi/poifs/crypt/EncryptionInfo.hpp>
#include <org/apache/poi/poifs/crypt/EncryptionMode.hpp>
#include <org/apache/poi/poifs/crypt/EncryptionVerifier.hpp>
#include <org/apache/poi/poifs/crypt/binaryrc4/BinaryRC4EncryptionHeader.hpp>
#include <org/apache/poi/poifs/crypt/binaryrc4/BinaryRC4EncryptionVerifier.hpp>
#include <org/apache/poi/poifs/crypt/cryptoapi/CryptoAPIEncryptionHeader.hpp>
#include <org/apache/poi/poifs/crypt/cryptoapi/CryptoAPIEncryptionVerifier.hpp>
#include <org/apache/poi/poifs/crypt/xor_/XOREncryptionHeader.hpp>
#include <org/apache/poi/poifs/crypt/xor_/XOREncryptionVerifier.hpp>
#include <org/apache/poi/util/HexDump.hpp>
#include <org/apache/poi/util/LittleEndianByteArrayOutputStream.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>
#include <org/apache/poi/util/LittleEndianOutputStream.hpp>
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

poi::hssf::record::FilePassRecord::FilePassRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::FilePassRecord::FilePassRecord(FilePassRecord* other) 
    : FilePassRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(other);
}

poi::hssf::record::FilePassRecord::FilePassRecord(::poi::poifs::crypt::EncryptionMode* encryptionMode) 
    : FilePassRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(encryptionMode);
}

poi::hssf::record::FilePassRecord::FilePassRecord(RecordInputStream* in) 
    : FilePassRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t poi::hssf::record::FilePassRecord::sid;

constexpr int32_t poi::hssf::record::FilePassRecord::ENCRYPTION_XOR;

constexpr int32_t poi::hssf::record::FilePassRecord::ENCRYPTION_OTHER;

void poi::hssf::record::FilePassRecord::ctor(FilePassRecord* other)
{
    super::ctor();
    encryptionType = npc(other)->encryptionType;
    try {
        encryptionInfo = npc(npc(other)->encryptionInfo)->clone();
    } catch (::java::lang::CloneNotSupportedException* e) {
        throw new ::poi::EncryptedDocumentException(static_cast< ::java::lang::Throwable* >(e));
    }
}

void poi::hssf::record::FilePassRecord::ctor(::poi::poifs::crypt::EncryptionMode* encryptionMode)
{
    super::ctor();
    encryptionType = (encryptionMode == ::poi::poifs::crypt::EncryptionMode::xor_) ? ENCRYPTION_XOR : ENCRYPTION_OTHER;
    encryptionInfo = new ::poi::poifs::crypt::EncryptionInfo(encryptionMode);
}

void poi::hssf::record::FilePassRecord::ctor(RecordInputStream* in)
{
    super::ctor();
    encryptionType = npc(in)->readUShort();
    ::poi::poifs::crypt::EncryptionMode* preferredMode;
    switch (encryptionType) {
    case ENCRYPTION_XOR:
        preferredMode = ::poi::poifs::crypt::EncryptionMode::xor_;
        break;
    case ENCRYPTION_OTHER:
        preferredMode = ::poi::poifs::crypt::EncryptionMode::cryptoAPI;
        break;
    default:
        throw new ::poi::EncryptedDocumentException(u"invalid encryption type"_j);
    }

    try {
        encryptionInfo = new ::poi::poifs::crypt::EncryptionInfo(in, preferredMode);
    } catch (::java::io::IOException* e) {
        throw new ::poi::EncryptedDocumentException(static_cast< ::java::lang::Throwable* >(e));
    }
}

void poi::hssf::record::FilePassRecord::serialize(::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(encryptionType);
    auto data = new ::int8_tArray(int32_t(1024));
    auto bos = new ::poi::util::LittleEndianByteArrayOutputStream(data, int32_t(0));
    {
        auto v = npc(encryptionInfo)->getEncryptionMode();
        if((v == ::poi::poifs::crypt::EncryptionMode::xor_)) {
            npc((java_cast< ::poi::poifs::crypt::xor_::XOREncryptionHeader* >(npc(encryptionInfo)->getHeader())))->write(bos);
            npc((java_cast< ::poi::poifs::crypt::xor_::XOREncryptionVerifier* >(npc(encryptionInfo)->getVerifier())))->write(bos);
            goto end_switch0;;
        }
        if((v == ::poi::poifs::crypt::EncryptionMode::binaryRC4)) {
            npc(out)->writeShort(npc(encryptionInfo)->getVersionMajor());
            npc(out)->writeShort(npc(encryptionInfo)->getVersionMinor());
            npc((java_cast< ::poi::poifs::crypt::binaryrc4::BinaryRC4EncryptionHeader* >(npc(encryptionInfo)->getHeader())))->write(bos);
            npc((java_cast< ::poi::poifs::crypt::binaryrc4::BinaryRC4EncryptionVerifier* >(npc(encryptionInfo)->getVerifier())))->write(bos);
            goto end_switch0;;
        }
        if((v == ::poi::poifs::crypt::EncryptionMode::cryptoAPI)) {
            npc(out)->writeShort(npc(encryptionInfo)->getVersionMajor());
            npc(out)->writeShort(npc(encryptionInfo)->getVersionMinor());
            npc(out)->writeInt(npc(encryptionInfo)->getEncryptionFlags());
            npc((java_cast< ::poi::poifs::crypt::cryptoapi::CryptoAPIEncryptionHeader* >(npc(encryptionInfo)->getHeader())))->write(bos);
            npc((java_cast< ::poi::poifs::crypt::cryptoapi::CryptoAPIEncryptionVerifier* >(npc(encryptionInfo)->getVerifier())))->write(bos);
            goto end_switch0;;
        }
        if((((v != ::poi::poifs::crypt::EncryptionMode::xor_) && (v != ::poi::poifs::crypt::EncryptionMode::binaryRC4) && (v != ::poi::poifs::crypt::EncryptionMode::cryptoAPI)))) {
            throw new ::poi::EncryptedDocumentException(u"not supported"_j);
        }
end_switch0:;
    }

    npc(out)->write(data, 0, npc(bos)->getWriteIndex());
}

int32_t poi::hssf::record::FilePassRecord::getDataSize()
{
    auto bos = new ::java::io::ByteArrayOutputStream();
    auto leos = new ::poi::util::LittleEndianOutputStream(bos);
    serialize(static_cast< ::poi::util::LittleEndianOutput* >(leos));
    return npc(bos)->size();
}

poi::poifs::crypt::EncryptionInfo* poi::hssf::record::FilePassRecord::getEncryptionInfo()
{
    return encryptionInfo;
}

int16_t poi::hssf::record::FilePassRecord::getSid()
{
    return sid;
}

poi::hssf::record::FilePassRecord* poi::hssf::record::FilePassRecord::clone()
{
    return new FilePassRecord(this);
}

java::lang::String* poi::hssf::record::FilePassRecord::toString()
{
    auto buffer = new ::java::lang::StringBuilder();
    npc(buffer)->append(u"[FILEPASS]\n"_j);
    npc(npc(npc(buffer)->append(u"    .type = "_j))->append(::poi::util::HexDump::shortToHex(encryptionType)))->append(u'\u000a');
    auto prefix = ::java::lang::StringBuilder().append(u"     ."_j)->append(static_cast< ::java::lang::Object* >(npc(encryptionInfo)->getEncryptionMode()))->toString();
    npc(npc(npc(buffer)->append(::java::lang::StringBuilder().append(prefix)->append(u".info = "_j)->toString()))->append(::poi::util::HexDump::shortToHex(npc(encryptionInfo)->getVersionMajor())))->append(u'\u000a');
    npc(npc(npc(buffer)->append(::java::lang::StringBuilder().append(prefix)->append(u".ver  = "_j)->toString()))->append(::poi::util::HexDump::shortToHex(npc(encryptionInfo)->getVersionMinor())))->append(u'\u000a');
    npc(npc(npc(buffer)->append(::java::lang::StringBuilder().append(prefix)->append(u".salt = "_j)->toString()))->append(::poi::util::HexDump::toHex(npc(npc(encryptionInfo)->getVerifier())->getSalt())))->append(u'\u000a');
    npc(npc(npc(buffer)->append(::java::lang::StringBuilder().append(prefix)->append(u".verifier = "_j)->toString()))->append(::poi::util::HexDump::toHex(npc(npc(encryptionInfo)->getVerifier())->getEncryptedVerifier())))->append(u'\u000a');
    npc(npc(npc(buffer)->append(::java::lang::StringBuilder().append(prefix)->append(u".verifierHash = "_j)->toString()))->append(::poi::util::HexDump::toHex(npc(npc(encryptionInfo)->getVerifier())->getEncryptedVerifierHash())))->append(u'\u000a');
    npc(buffer)->append(u"[/FILEPASS]\n"_j);
    return npc(buffer)->toString();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::FilePassRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.FilePassRecord", 41);
    return c;
}

int32_t poi::hssf::record::FilePassRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* poi::hssf::record::FilePassRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* poi::hssf::record::FilePassRecord::getClass0()
{
    return class_();
}

