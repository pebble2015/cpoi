// Generated from /POI/java/org/apache/poi/hpsf/Decimal.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/hpsf/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::hpsf::Decimal
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    int16_t field_1_wReserved {  };
    int8_t field_2_scale {  };
    int8_t field_3_sign {  };
    int32_t field_4_hi32 {  };
    int64_t field_5_lo64 {  };
protected:
    void ctor();

public: /* package */
    virtual void read(::poi::util::LittleEndianByteArrayInputStream* lei);

    // Generated
    Decimal();
protected:
    Decimal(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
