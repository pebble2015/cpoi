// Generated from /POI/java/org/apache/poi/hssf/model/InternalSheet.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/hssf/model/fwd-POI.hpp>
#include <org/apache/poi/util/RecordFormatException.hpp>

struct default_init_tag;

class org::apache::poi::hssf::model::InternalSheet_UnsupportedBOFType
    : public ::org::apache::poi::util::RecordFormatException
{

public:
    typedef ::org::apache::poi::util::RecordFormatException super;

private:
    int32_t type {  };
protected:
    void ctor(int32_t type);

public:
    virtual int32_t getType();

    // Generated

public: /* protected */
    InternalSheet_UnsupportedBOFType(int32_t type);
protected:
    InternalSheet_UnsupportedBOFType(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class InternalSheet;
    friend class InternalSheet_spillAggregate_1;
    friend class InternalSheet_RecordCloner;
};
