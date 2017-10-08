// Generated from /POI/java/org/apache/poi/hssf/eventusermodel/AbortableHSSFListener.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/hssf/eventusermodel/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/hssf/eventusermodel/HSSFListener.hpp>

struct default_init_tag;

class poi::hssf::eventusermodel::AbortableHSSFListener
    : public virtual ::java::lang::Object
    , public virtual HSSFListener
{

public:
    typedef ::java::lang::Object super;
    void processRecord(::poi::hssf::record::Record* record) override;
    virtual int16_t abortableProcessRecord(::poi::hssf::record::Record* record) /* throws(HSSFUserException) */ = 0;

    // Generated
    AbortableHSSFListener();
protected:
    AbortableHSSFListener(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
