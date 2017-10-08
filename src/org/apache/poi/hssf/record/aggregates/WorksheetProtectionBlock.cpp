// Generated from /POI/java/org/apache/poi/hssf/record/aggregates/WorksheetProtectionBlock.java
#include <org/apache/poi/hssf/record/aggregates/WorksheetProtectionBlock.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/hssf/model/RecordStream.hpp>
#include <org/apache/poi/hssf/record/ObjectProtectRecord.hpp>
#include <org/apache/poi/hssf/record/PasswordRecord.hpp>
#include <org/apache/poi/hssf/record/ProtectRecord.hpp>
#include <org/apache/poi/hssf/record/Record.hpp>
#include <org/apache/poi/hssf/record/ScenarioProtectRecord.hpp>
#include <org/apache/poi/hssf/record/aggregates/RecordAggregate_RecordVisitor.hpp>
#include <org/apache/poi/poifs/crypt/CryptoFunctions.hpp>
#include <org/apache/poi/util/RecordFormatException.hpp>

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

poi::hssf::record::aggregates::WorksheetProtectionBlock::WorksheetProtectionBlock(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::aggregates::WorksheetProtectionBlock::WorksheetProtectionBlock() 
    : WorksheetProtectionBlock(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void poi::hssf::record::aggregates::WorksheetProtectionBlock::ctor()
{
    super::ctor();
}

bool poi::hssf::record::aggregates::WorksheetProtectionBlock::isComponentRecord(int32_t sid)
{
    clinit();
    switch (sid) {
    case ::poi::hssf::record::ProtectRecord::sid:
    case ::poi::hssf::record::ObjectProtectRecord::sid:
    case ::poi::hssf::record::ScenarioProtectRecord::sid:
    case ::poi::hssf::record::PasswordRecord::sid:
        return true;
    }

    return false;
}

bool poi::hssf::record::aggregates::WorksheetProtectionBlock::readARecord(::poi::hssf::model::RecordStream* rs)
{
    switch (npc(rs)->peekNextSid()) {
    case ::poi::hssf::record::ProtectRecord::sid:
        checkNotPresent(_protectRecord);
        _protectRecord = java_cast< ::poi::hssf::record::ProtectRecord* >(npc(rs)->getNext());
        break;
    case ::poi::hssf::record::ObjectProtectRecord::sid:
        checkNotPresent(_objectProtectRecord);
        _objectProtectRecord = java_cast< ::poi::hssf::record::ObjectProtectRecord* >(npc(rs)->getNext());
        break;
    case ::poi::hssf::record::ScenarioProtectRecord::sid:
        checkNotPresent(_scenarioProtectRecord);
        _scenarioProtectRecord = java_cast< ::poi::hssf::record::ScenarioProtectRecord* >(npc(rs)->getNext());
        break;
    case ::poi::hssf::record::PasswordRecord::sid:
        checkNotPresent(_passwordRecord);
        _passwordRecord = java_cast< ::poi::hssf::record::PasswordRecord* >(npc(rs)->getNext());
        break;
    default:
        return false;
    }

    return true;
}

void poi::hssf::record::aggregates::WorksheetProtectionBlock::checkNotPresent(::poi::hssf::record::Record* rec)
{
    if(rec != nullptr) {
        throw new ::poi::util::RecordFormatException(::java::lang::StringBuilder().append(u"Duplicate PageSettingsBlock record (sid=0x"_j)->append(::java::lang::Integer::toHexString(npc(rec)->getSid()))
            ->append(u")"_j)->toString());
    }
}

void poi::hssf::record::aggregates::WorksheetProtectionBlock::visitContainedRecords(RecordAggregate_RecordVisitor* rv)
{
    visitIfPresent(_protectRecord, rv);
    visitIfPresent(_objectProtectRecord, rv);
    visitIfPresent(_scenarioProtectRecord, rv);
    visitIfPresent(_passwordRecord, rv);
}

void poi::hssf::record::aggregates::WorksheetProtectionBlock::visitIfPresent(::poi::hssf::record::Record* r, RecordAggregate_RecordVisitor* rv)
{
    clinit();
    if(r != nullptr) {
        npc(rv)->visitRecord(r);
    }
}

poi::hssf::record::PasswordRecord* poi::hssf::record::aggregates::WorksheetProtectionBlock::getPasswordRecord()
{
    return _passwordRecord;
}

poi::hssf::record::ScenarioProtectRecord* poi::hssf::record::aggregates::WorksheetProtectionBlock::getHCenter()
{
    return _scenarioProtectRecord;
}

void poi::hssf::record::aggregates::WorksheetProtectionBlock::addRecords(::poi::hssf::model::RecordStream* rs)
{
    while (true) {
        if(!readARecord(rs)) {
            break;
        }
    }
}

poi::hssf::record::ProtectRecord* poi::hssf::record::aggregates::WorksheetProtectionBlock::getProtect()
{
    if(_protectRecord == nullptr) {
        _protectRecord = new ::poi::hssf::record::ProtectRecord(false);
    }
    return _protectRecord;
}

poi::hssf::record::PasswordRecord* poi::hssf::record::aggregates::WorksheetProtectionBlock::getPassword()
{
    if(_passwordRecord == nullptr) {
        _passwordRecord = createPassword();
    }
    return _passwordRecord;
}

void poi::hssf::record::aggregates::WorksheetProtectionBlock::protectSheet(::java::lang::String* password, bool shouldProtectObjects, bool shouldProtectScenarios)
{
    if(password == nullptr) {
        _passwordRecord = nullptr;
        _protectRecord = nullptr;
        _objectProtectRecord = nullptr;
        _scenarioProtectRecord = nullptr;
        return;
    }
    auto prec = getProtect();
    auto pass = getPassword();
    npc(prec)->setProtect(true);
    npc(pass)->setPassword(static_cast< int16_t >(::poi::poifs::crypt::CryptoFunctions::createXorVerifier1(password)));
    if(_objectProtectRecord == nullptr && shouldProtectObjects) {
        auto rec = createObjectProtect();
        npc(rec)->setProtect(true);
        _objectProtectRecord = rec;
    }
    if(_scenarioProtectRecord == nullptr && shouldProtectScenarios) {
        auto srec = createScenarioProtect();
        npc(srec)->setProtect(true);
        _scenarioProtectRecord = srec;
    }
}

bool poi::hssf::record::aggregates::WorksheetProtectionBlock::isSheetProtected()
{
    return _protectRecord != nullptr && npc(_protectRecord)->getProtect();
}

bool poi::hssf::record::aggregates::WorksheetProtectionBlock::isObjectProtected()
{
    return _objectProtectRecord != nullptr && npc(_objectProtectRecord)->getProtect();
}

bool poi::hssf::record::aggregates::WorksheetProtectionBlock::isScenarioProtected()
{
    return _scenarioProtectRecord != nullptr && npc(_scenarioProtectRecord)->getProtect();
}

poi::hssf::record::ObjectProtectRecord* poi::hssf::record::aggregates::WorksheetProtectionBlock::createObjectProtect()
{
    clinit();
    auto retval = new ::poi::hssf::record::ObjectProtectRecord();
    npc(retval)->setProtect(false);
    return retval;
}

poi::hssf::record::ScenarioProtectRecord* poi::hssf::record::aggregates::WorksheetProtectionBlock::createScenarioProtect()
{
    clinit();
    auto retval = new ::poi::hssf::record::ScenarioProtectRecord();
    npc(retval)->setProtect(false);
    return retval;
}

poi::hssf::record::PasswordRecord* poi::hssf::record::aggregates::WorksheetProtectionBlock::createPassword()
{
    clinit();
    return new ::poi::hssf::record::PasswordRecord(int32_t(0));
}

int32_t poi::hssf::record::aggregates::WorksheetProtectionBlock::getPasswordHash()
{
    if(_passwordRecord == nullptr) {
        return 0;
    }
    return npc(_passwordRecord)->getPassword();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::aggregates::WorksheetProtectionBlock::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.aggregates.WorksheetProtectionBlock", 62);
    return c;
}

java::lang::Class* poi::hssf::record::aggregates::WorksheetProtectionBlock::getClass0()
{
    return class_();
}

