// Generated from /POI/java/org/apache/poi/hssf/dev/EFBiffViewer.java

#pragma once

#include <org/apache/poi/hssf/dev/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/hssf/eventusermodel/HSSFListener.hpp>

struct default_init_tag;

class org::apache::poi::hssf::dev::EFBiffViewer_run_1
    : public virtual ::java::lang::Object
    , public virtual ::org::apache::poi::hssf::eventusermodel::HSSFListener
{

public:
    typedef ::java::lang::Object super;
    void processRecord(::org::apache::poi::hssf::record::Record* rec) override;

    // Generated
    EFBiffViewer_run_1(EFBiffViewer *EFBiffViewer_this);
    static ::java::lang::Class *class_();
    EFBiffViewer *EFBiffViewer_this;

private:
    virtual ::java::lang::Class* getClass0();
    friend class EFBiffViewer;
};
