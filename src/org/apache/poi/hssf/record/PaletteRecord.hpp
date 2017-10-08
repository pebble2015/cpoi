// Generated from /POI/java/org/apache/poi/hssf/record/PaletteRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace poi
{
    namespace hssf
    {
        namespace record
        {
typedef ::SubArray< ::poi::hssf::record::PaletteRecord_PColor, ::java::lang::ObjectArray > PaletteRecord_PColorArray;
        } // record
    } // hssf
} // poi

struct default_init_tag;

class poi::hssf::record::PaletteRecord final
    : public StandardRecord
{

public:
    typedef StandardRecord super;
    static constexpr int16_t sid { int16_t(146) };
    static constexpr int8_t STANDARD_PALETTE_SIZE { int8_t(56) };
    static constexpr int16_t FIRST_COLOR_INDEX { int16_t(8) };

private:
    ::java::util::List* _colors {  };
protected:
    void ctor();
    void ctor(RecordInputStream* in);

public:
    ::java::lang::String* toString() override;
    void serialize(::poi::util::LittleEndianOutput* out) override;

public: /* protected */
    int32_t getDataSize() override;

public:
    int16_t getSid() override;
    ::int8_tArray* getColor(int32_t byteIndex);
    void setColor(int16_t byteIndex, int8_t red, int8_t green, int8_t blue);

private:
    static PaletteRecord_PColorArray* createDefaultPalette();
    static PaletteRecord_PColor* pc(int32_t r, int32_t g, int32_t b);

    // Generated

public:
    PaletteRecord();
    PaletteRecord(RecordInputStream* in);
protected:
    PaletteRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    ::int8_tArray* serialize();

private:
    virtual ::java::lang::Class* getClass0();
    friend class PaletteRecord_PColor;
};
