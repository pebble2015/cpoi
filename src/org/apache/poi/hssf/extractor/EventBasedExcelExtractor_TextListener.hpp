// Generated from /POI/java/org/apache/poi/hssf/extractor/EventBasedExcelExtractor.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/eventusermodel/fwd-POI.hpp>
#include <org/apache/poi/hssf/extractor/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/hssf/eventusermodel/HSSFListener.hpp>

struct default_init_tag;

class poi::hssf::extractor::EventBasedExcelExtractor_TextListener
    : public virtual ::java::lang::Object
    , public virtual ::poi::hssf::eventusermodel::HSSFListener
{

public:
    typedef ::java::lang::Object super;

public: /* package */
    ::poi::hssf::eventusermodel::FormatTrackingHSSFListener* _ft {  };

private:
    ::poi::hssf::record::SSTRecord* sstRecord {  };
    ::java::util::List* sheetNames {  };

public: /* package */
    ::java::lang::StringBuffer* _text {  };

private:
    int32_t sheetNum {  };
    int32_t rowNum {  };
    bool outputNextStringValue {  };
    int32_t nextRow {  };
protected:
    void ctor();

public:
    void processRecord(::poi::hssf::record::Record* record) override;

    // Generated
    EventBasedExcelExtractor_TextListener(EventBasedExcelExtractor *EventBasedExcelExtractor_this);
protected:
    EventBasedExcelExtractor_TextListener(EventBasedExcelExtractor *EventBasedExcelExtractor_this, const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    void init();
    EventBasedExcelExtractor *EventBasedExcelExtractor_this;
    virtual ::java::lang::Class* getClass0();
    friend class EventBasedExcelExtractor;
};
