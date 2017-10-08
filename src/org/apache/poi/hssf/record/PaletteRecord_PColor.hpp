// Generated from /POI/java/org/apache/poi/hssf/record/PaletteRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::hssf::record::PaletteRecord_PColor final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
    static constexpr int16_t ENCODED_SIZE { int16_t(4) };

private:
    int32_t _red {  };
    int32_t _green {  };
    int32_t _blue {  };
protected:
    void ctor(int32_t red, int32_t green, int32_t blue);

public:
    ::int8_tArray* getTriplet();
protected:
    void ctor(RecordInputStream* in);

public:
    void serialize(::poi::util::LittleEndianOutput* out);
    ::java::lang::String* toString() override;

    // Generated
    PaletteRecord_PColor(int32_t red, int32_t green, int32_t blue);
    PaletteRecord_PColor(RecordInputStream* in);
protected:
    PaletteRecord_PColor(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class PaletteRecord;
};
