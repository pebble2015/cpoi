// Generated from /POI/java/org/apache/poi/hssf/eventusermodel/FormatTrackingHSSFListener.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/text/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/eventusermodel/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/usermodel/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/hssf/eventusermodel/HSSFListener.hpp>

struct default_init_tag;

class org::apache::poi::hssf::eventusermodel::FormatTrackingHSSFListener
    : public virtual ::java::lang::Object
    , public virtual HSSFListener
{

public:
    typedef ::java::lang::Object super;

private:
    static ::org::apache::poi::util::POILogger* logger_;
    HSSFListener* _childListener {  };
    ::org::apache::poi::hssf::usermodel::HSSFDataFormatter* _formatter {  };
    ::java::text::NumberFormat* _defaultFormat {  };
    ::java::util::Map* _customFormatRecords {  };
    ::java::util::List* _xfRecords {  };
protected:
    void ctor(HSSFListener* childListener);
    void ctor(HSSFListener* childListener, ::java::util::Locale* locale);

public: /* protected */
    virtual int32_t getNumberOfCustomFormats();
    virtual int32_t getNumberOfExtendedFormats();

public:
    void processRecord(::org::apache::poi::hssf::record::Record* record) override;
    virtual void processRecordInternally(::org::apache::poi::hssf::record::Record* record);
    virtual ::java::lang::String* formatNumberDateCell(::org::apache::poi::hssf::record::CellValueRecordInterface* cell);
    virtual ::java::lang::String* getFormatString(int32_t formatIndex);
    virtual ::java::lang::String* getFormatString(::org::apache::poi::hssf::record::CellValueRecordInterface* cell);
    virtual int32_t getFormatIndex(::org::apache::poi::hssf::record::CellValueRecordInterface* cell);

    // Generated
    FormatTrackingHSSFListener(HSSFListener* childListener);
    FormatTrackingHSSFListener(HSSFListener* childListener, ::java::util::Locale* locale);
protected:
    FormatTrackingHSSFListener(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    void init();
    static ::org::apache::poi::util::POILogger*& logger();
    virtual ::java::lang::Class* getClass0();
};
