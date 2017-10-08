// Generated from /POI/java/org/apache/poi/hssf/eventusermodel/HSSFRequest.java

#pragma once

#include <fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/eventusermodel/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::hssf::eventusermodel::HSSFRequest
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    ::java::util::Map* _records {  };
protected:
    void ctor();

public:
    virtual void addListener(HSSFListener* lsnr, int16_t sid);
    virtual void addListenerForAllRecords(HSSFListener* lsnr);

public: /* protected */
    virtual int16_t processRecord(::poi::hssf::record::Record* rec) /* throws(HSSFUserException) */;

    // Generated

public:
    HSSFRequest();
protected:
    HSSFRequest(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
