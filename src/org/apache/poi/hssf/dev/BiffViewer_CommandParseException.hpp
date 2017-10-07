// Generated from /POI/java/org/apache/poi/hssf/dev/BiffViewer.java

#pragma once

#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/dev/fwd-POI.hpp>
#include <java/lang/Exception.hpp>

struct default_init_tag;

class org::apache::poi::hssf::dev::BiffViewer_CommandParseException final
    : public ::java::lang::Exception
{

public:
    typedef ::java::lang::Exception super;
protected:
    void ctor(::java::lang::String* msg);

    // Generated

public:
    BiffViewer_CommandParseException(::java::lang::String* msg);
protected:
    BiffViewer_CommandParseException(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class BiffViewer;
    friend class BiffViewer_CommandArgs;
    friend class BiffViewer_BiffRecordListener;
    friend class BiffViewer_IBiffRecordListener;
    friend class BiffViewer_BiffDumpingStream;
};
