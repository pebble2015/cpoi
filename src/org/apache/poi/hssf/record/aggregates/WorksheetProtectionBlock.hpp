// Generated from /POI/java/org/apache/poi/hssf/record/aggregates/WorksheetProtectionBlock.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/model/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/aggregates/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/aggregates/RecordAggregate.hpp>

struct default_init_tag;

class org::apache::poi::hssf::record::aggregates::WorksheetProtectionBlock final
    : public RecordAggregate
{

public:
    typedef RecordAggregate super;

private:
    ::org::apache::poi::hssf::record::ProtectRecord* _protectRecord {  };
    ::org::apache::poi::hssf::record::ObjectProtectRecord* _objectProtectRecord {  };
    ::org::apache::poi::hssf::record::ScenarioProtectRecord* _scenarioProtectRecord {  };
    ::org::apache::poi::hssf::record::PasswordRecord* _passwordRecord {  };
protected:
    void ctor();

public:
    static bool isComponentRecord(int32_t sid);

private:
    bool readARecord(::org::apache::poi::hssf::model::RecordStream* rs);
    void checkNotPresent(::org::apache::poi::hssf::record::Record* rec);

public:
    void visitContainedRecords(RecordAggregate_RecordVisitor* rv) override;

private:
    static void visitIfPresent(::org::apache::poi::hssf::record::Record* r, RecordAggregate_RecordVisitor* rv);

public:
    ::org::apache::poi::hssf::record::PasswordRecord* getPasswordRecord();
    ::org::apache::poi::hssf::record::ScenarioProtectRecord* getHCenter();
    void addRecords(::org::apache::poi::hssf::model::RecordStream* rs);

private:
    ::org::apache::poi::hssf::record::ProtectRecord* getProtect();
    ::org::apache::poi::hssf::record::PasswordRecord* getPassword();

public:
    void protectSheet(::java::lang::String* password, bool shouldProtectObjects, bool shouldProtectScenarios);
    bool isSheetProtected();
    bool isObjectProtected();
    bool isScenarioProtected();

private:
    static ::org::apache::poi::hssf::record::ObjectProtectRecord* createObjectProtect();
    static ::org::apache::poi::hssf::record::ScenarioProtectRecord* createScenarioProtect();
    static ::org::apache::poi::hssf::record::PasswordRecord* createPassword();

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
