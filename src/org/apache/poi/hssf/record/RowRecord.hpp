// Generated from /POI/java/org/apache/poi/hssf/record/RowRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>

struct default_init_tag;

class poi::hssf::record::RowRecord final
    : public StandardRecord
{

public:
    typedef StandardRecord super;
    static constexpr int16_t sid { int16_t(520) };
    static constexpr int32_t ENCODED_SIZE { int32_t(20) };

private:
    static constexpr int32_t OPTION_BITS_ALWAYS_SET { int32_t(256) };
    int32_t field_1_row_number {  };
    int32_t field_2_first_col {  };
    int32_t field_3_last_col {  };
    int16_t field_4_height {  };
    int16_t field_5_optimize {  };
    int16_t field_6_reserved {  };
    int32_t field_7_option_flags {  };
    static ::poi::util::BitField* outlineLevel_;
    static ::poi::util::BitField* colapsed_;
    static ::poi::util::BitField* zeroHeight_;
    static ::poi::util::BitField* badFontHeight_;
    static ::poi::util::BitField* formatted_;
    int32_t field_8_option_flags {  };
    static ::poi::util::BitField* xfIndex_;
    static ::poi::util::BitField* topBorder_;
    static ::poi::util::BitField* bottomBorder_;
    static ::poi::util::BitField* phoeneticGuide_;
protected:
    void ctor(int32_t rowNumber);
    void ctor(RecordInputStream* in);

public:
    void setEmpty();
    bool isEmpty();
    void setRowNumber(int32_t row);
    void setFirstCol(int32_t col);
    void setLastCol(int32_t col);
    void setHeight(int16_t height);
    void setOptimize(int16_t optimize);
    void setOutlineLevel(int16_t ol);
    void setColapsed(bool c);
    void setZeroHeight(bool z);
    void setBadFontHeight(bool f);
    void setFormatted(bool f);
    void setXFIndex(int16_t index);
    void setTopBorder(bool f);
    void setBottomBorder(bool f);
    void setPhoeneticGuide(bool f);
    int32_t getRowNumber();
    int32_t getFirstCol();
    int32_t getLastCol();
    int16_t getHeight();
    int16_t getOptimize();
    int16_t getOptionFlags();
    int16_t getOutlineLevel();
    bool getColapsed();
    bool getZeroHeight();
    bool getBadFontHeight();
    bool getFormatted();
    int16_t getOptionFlags2();
    int16_t getXFIndex();
    bool getTopBorder();
    bool getBottomBorder();
    bool getPhoeneticGuide();
    ::java::lang::String* toString() override;
    void serialize(::poi::util::LittleEndianOutput* out) override;

public: /* protected */
    int32_t getDataSize() override;

public:
    int16_t getSid() override;
    ::java::lang::Object* clone() override;

    // Generated
    RowRecord(int32_t rowNumber);
    RowRecord(RecordInputStream* in);
protected:
    RowRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    ::int8_tArray* serialize();

private:
    static ::poi::util::BitField*& outlineLevel();
    static ::poi::util::BitField*& colapsed();
    static ::poi::util::BitField*& zeroHeight();
    static ::poi::util::BitField*& badFontHeight();
    static ::poi::util::BitField*& formatted();
    static ::poi::util::BitField*& xfIndex();
    static ::poi::util::BitField*& topBorder();
    static ::poi::util::BitField*& bottomBorder();
    static ::poi::util::BitField*& phoeneticGuide();
    virtual ::java::lang::Class* getClass0();
};
