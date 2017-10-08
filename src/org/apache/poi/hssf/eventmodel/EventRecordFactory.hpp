// Generated from /POI/java/org/apache/poi/hssf/eventmodel/EventRecordFactory.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <org/apache/poi/hssf/eventmodel/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::hssf::eventmodel::EventRecordFactory final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    ERFListener* _listener {  };
    ::int16_tArray* _sids {  };
protected:
    void ctor(ERFListener* listener, ::int16_tArray* sids);

private:
    bool isSidIncluded(int16_t sid);
    bool processRecord(::poi::hssf::record::Record* record);

public:
    void processRecords(::java::io::InputStream* in) /* throws(RecordFormatException) */;

    // Generated
    EventRecordFactory(ERFListener* listener, ::int16_tArray* sids);
protected:
    EventRecordFactory(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
