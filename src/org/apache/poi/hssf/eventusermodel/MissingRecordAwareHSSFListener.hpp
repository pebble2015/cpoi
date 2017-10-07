// Generated from /POI/java/org/apache/poi/hssf/eventusermodel/MissingRecordAwareHSSFListener.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/hssf/eventusermodel/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/hssf/eventusermodel/HSSFListener.hpp>

struct default_init_tag;

class org::apache::poi::hssf::eventusermodel::MissingRecordAwareHSSFListener final
    : public virtual ::java::lang::Object
    , public HSSFListener
{

public:
    typedef ::java::lang::Object super;

private:
    HSSFListener* childListener {  };
    int32_t lastRowRow {  };
    int32_t lastCellRow {  };
    int32_t lastCellColumn {  };
protected:
    void ctor(HSSFListener* listener);

public:
    void processRecord(::org::apache::poi::hssf::record::Record* record) override;

private:
    void resetCounts();

    // Generated

public:
    MissingRecordAwareHSSFListener(HSSFListener* listener);
protected:
    MissingRecordAwareHSSFListener(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
