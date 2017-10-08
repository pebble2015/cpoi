// Generated from /POI/java/org/apache/poi/hssf/record/aggregates/WorksheetProtectionBlock.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/model/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/aggregates/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/aggregates/RecordAggregate.hpp>

struct default_init_tag;

class poi::hssf::record::aggregates::WorksheetProtectionBlock final
    : public RecordAggregate
{

public:
    typedef RecordAggregate super;

private:
    ::poi::hssf::record::ProtectRecord* _protectRecord {  };
    ::poi::hssf::record::ObjectProtectRecord* _objectProtectRecord {  };
    ::poi::hssf::record::ScenarioProtectRecord* _scenarioProtectRecord {  };
    ::poi::hssf::record::PasswordRecord* _passwordRecord {  };
protected:
    void ctor();

public:
    static bool isComponentRecord(int32_t sid);

private:
    bool readARecord(::poi::hssf::model::RecordStream* rs);
    void checkNotPresent(::poi::hssf::record::Record* rec);

public:
    void visitContainedRecords(RecordAggregate_RecordVisitor* rv) override;

private:
    static void visitIfPresent(::poi::hssf::record::Record* r, RecordAggregate_RecordVisitor* rv);

public:
    ::poi::hssf::record::PasswordRecord* getPasswordRecord();
    ::poi::hssf::record::ScenarioProtectRecord* getHCenter();
    void addRecords(::poi::hssf::model::RecordStream* rs);

private:
    ::poi::hssf::record::ProtectRecord* getProtect();
    ::poi::hssf::record::PasswordRecord* getPassword();

public:
    void protectSheet(::java::lang::String* password, bool shouldProtectObjects, bool shouldProtectScenarios);
    bool isSheetProtected();
    bool isObjectProtected();
    bool isScenarioProtected();

private:
    static ::poi::hssf::record::ObjectProtectRecord* createObjectProtect();
    static ::poi::hssf::record::ScenarioProtectRecord* createScenarioProtect();
    static ::poi::hssf::record::PasswordRecord* createPassword();

public:
    int32_t getPasswordHash();

    // Generated
    WorksheetProtectionBlock();
protected:
    WorksheetProtectionBlock(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
