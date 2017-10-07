// Generated from /POI/java/org/apache/poi/hssf/record/RecordFactoryInputStream.java
#include <org/apache/poi/hssf/record/RecordFactoryInputStream_StreamEncryptionInfo.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/IllegalStateException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/Throwable.hpp>
#include <java/security/GeneralSecurityException.hpp>
#include <java/util/List.hpp>
#include <org/apache/poi/EncryptedDocumentException.hpp>
#include <org/apache/poi/hssf/record/BOFRecord.hpp>
#include <org/apache/poi/hssf/record/EOFRecord.hpp>
#include <org/apache/poi/hssf/record/FilePassRecord.hpp>
#include <org/apache/poi/hssf/record/Record.hpp>
#include <org/apache/poi/hssf/record/RecordFactory.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream.hpp>
#include <org/apache/poi/hssf/record/WriteProtectRecord.hpp>
#include <org/apache/poi/hssf/record/crypto/Biff8EncryptionKey.hpp>
#include <org/apache/poi/poifs/crypt/Decryptor.hpp>
#include <org/apache/poi/poifs/crypt/EncryptionInfo.hpp>

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

org::apache::poi::hssf::record::RecordFactoryInputStream_StreamEncryptionInfo::RecordFactoryInputStream_StreamEncryptionInfo(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::RecordFactoryInputStream_StreamEncryptionInfo::RecordFactoryInputStream_StreamEncryptionInfo(RecordInputStream* rs, ::java::util::List* outputRecs) 
    : RecordFactoryInputStream_StreamEncryptionInfo(*static_cast< ::default_init_tag* >(0))
{
    ctor(rs,outputRecs);
}

void org::apache::poi::hssf::record::RecordFactoryInputStream_StreamEncryptionInfo::ctor(RecordInputStream* rs, ::java::util::List* outputRecs)
{
    super::ctor();
    Record* rec;
    npc(rs)->nextRecord();
    auto recSize = int32_t(4) + npc(rs)->remaining();
    rec = RecordFactory::createSingleRecord(rs);
    npc(outputRecs)->add(static_cast< ::java::lang::Object* >(rec));
    FilePassRecord* fpr = nullptr;
    if(dynamic_cast< BOFRecord* >(rec) != nullptr) {
        _hasBOFRecord = true;
        if(npc(rs)->hasNextRecord()) {
            npc(rs)->nextRecord();
            rec = RecordFactory::createSingleRecord(rs);
            recSize += npc(rec)->getRecordSize();
            npc(outputRecs)->add(static_cast< ::java::lang::Object* >(rec));
            if(dynamic_cast< WriteProtectRecord* >(rec) != nullptr && npc(rs)->hasNextRecord()) {
                npc(rs)->nextRecord();
                rec = RecordFactory::createSingleRecord(rs);
                recSize += npc(rec)->getRecordSize();
                npc(outputRecs)->add(static_cast< ::java::lang::Object* >(rec));
            }
            if(dynamic_cast< FilePassRecord* >(rec) != nullptr) {
                fpr = java_cast< FilePassRecord* >(rec);
            }
            if(dynamic_cast< EOFRecord* >(rec) != nullptr) {
                throw new ::java::lang::IllegalStateException(u"Nothing between BOF and EOF"_j);
            }
        }
    } else {
        _hasBOFRecord = false;
    }
    _initialRecordsSize = recSize;
    _filePassRec = fpr;
    _lastRecord = rec;
}

org::apache::poi::hssf::record::RecordInputStream* org::apache::poi::hssf::record::RecordFactoryInputStream_StreamEncryptionInfo::createDecryptingStream(::java::io::InputStream* original)
{
    auto fpr = _filePassRec;
    auto userPassword = ::org::apache::poi::hssf::record::crypto::Biff8EncryptionKey::getCurrentUserPassword();
    if(userPassword == nullptr) {
        userPassword = ::org::apache::poi::poifs::crypt::Decryptor::DEFAULT_PASSWORD();
    }
    auto info = npc(fpr)->getEncryptionInfo();
    try {
        if(!npc(npc(info)->getDecryptor())->verifyPassword(userPassword)) {
            throw new ::org::apache::poi::EncryptedDocumentException(::java::lang::StringBuilder().append((npc(::org::apache::poi::poifs::crypt::Decryptor::DEFAULT_PASSWORD())->equals(static_cast< ::java::lang::Object* >(userPassword)) ? u"Default"_j : u"Supplied"_j))->append(u" password is invalid for salt/verifier/verifierHash"_j)->toString());
        }
    } catch (::java::security::GeneralSecurityException* e) {
        throw new ::org::apache::poi::EncryptedDocumentException(static_cast< ::java::lang::Throwable* >(e));
    }
    return new RecordInputStream(original, info, _initialRecordsSize);
}

bool org::apache::poi::hssf::record::RecordFactoryInputStream_StreamEncryptionInfo::hasEncryption()
{
    return _filePassRec != nullptr;
}

org::apache::poi::hssf::record::Record* org::apache::poi::hssf::record::RecordFactoryInputStream_StreamEncryptionInfo::getLastRecord()
{
    return _lastRecord;
}

bool org::apache::poi::hssf::record::RecordFactoryInputStream_StreamEncryptionInfo::hasBOFRecord()
{
    return _hasBOFRecord;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::RecordFactoryInputStream_StreamEncryptionInfo::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.RecordFactoryInputStream.StreamEncryptionInfo", 72);
    return c;
}

java::lang::Class* org::apache::poi::hssf::record::RecordFactoryInputStream_StreamEncryptionInfo::getClass0()
{
    return class_();
}

