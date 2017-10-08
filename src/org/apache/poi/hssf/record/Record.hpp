// Generated from /POI/java/org/apache/poi/hssf/record/Record.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/RecordBase.hpp>

struct default_init_tag;

class poi::hssf::record::Record
    : public RecordBase
{

public:
    typedef RecordBase super;
protected:
    void ctor();

public:
    ::int8_tArray* serialize();
    ::java::lang::String* toString() override;
    virtual int16_t getSid() = 0;
    ::java::lang::Object* clone() /* throws(CloneNotSupportedException) */ override;
    virtual Record* cloneViaReserialise();

    // Generated

public: /* protected */
    Record();
protected:
    Record(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual int32_t serialize(int32_t offset, ::int8_tArray* data) = 0;

private:
    virtual ::java::lang::Class* getClass0();
};
