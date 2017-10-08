// Generated from /POI/java/org/apache/poi/hssf/record/TextObjectRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/cont/fwd-POI.hpp>
#include <org/apache/poi/hssf/usermodel/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/cont/ContinuableRecord.hpp>

struct default_init_tag;

class poi::hssf::record::TextObjectRecord final
    : public ::poi::hssf::record::cont::ContinuableRecord
{

public:
    typedef ::poi::hssf::record::cont::ContinuableRecord super;
    static constexpr int16_t sid { int16_t(438) };

private:
    static constexpr int32_t FORMAT_RUN_ENCODED_SIZE { int32_t(8) };
    static ::poi::util::BitField* HorizontalTextAlignment_;
    static ::poi::util::BitField* VerticalTextAlignment_;
    static ::poi::util::BitField* textLocked_;

public:
    static constexpr int16_t HORIZONTAL_TEXT_ALIGNMENT_LEFT_ALIGNED { int16_t(1) };
    static constexpr int16_t HORIZONTAL_TEXT_ALIGNMENT_CENTERED { int16_t(2) };
    static constexpr int16_t HORIZONTAL_TEXT_ALIGNMENT_RIGHT_ALIGNED { int16_t(3) };
    static constexpr int16_t HORIZONTAL_TEXT_ALIGNMENT_JUSTIFIED { int16_t(4) };
    static constexpr int16_t VERTICAL_TEXT_ALIGNMENT_TOP { int16_t(1) };
    static constexpr int16_t VERTICAL_TEXT_ALIGNMENT_CENTER { int16_t(2) };
    static constexpr int16_t VERTICAL_TEXT_ALIGNMENT_BOTTOM { int16_t(3) };
    static constexpr int16_t VERTICAL_TEXT_ALIGNMENT_JUSTIFY { int16_t(4) };
    static constexpr int16_t TEXT_ORIENTATION_NONE { int16_t(0) };
    static constexpr int16_t TEXT_ORIENTATION_TOP_TO_BOTTOM { int16_t(1) };
    static constexpr int16_t TEXT_ORIENTATION_ROT_RIGHT { int16_t(2) };
    static constexpr int16_t TEXT_ORIENTATION_ROT_LEFT { int16_t(3) };

private:
    int32_t field_1_options {  };
    int32_t field_2_textOrientation {  };
    int32_t field_3_reserved4 {  };
    int32_t field_4_reserved5 {  };
    int32_t field_5_reserved6 {  };
    int32_t field_8_reserved7 {  };
    ::poi::hssf::usermodel::HSSFRichTextString* _text {  };
    int32_t _unknownPreFormulaInt {  };
    ::poi::ss::formula::ptg::OperandPtg* _linkRefPtg {  };
    ::java::lang::Byte* _unknownPostFormulaByte {  };
protected:
    void ctor();
    void ctor(RecordInputStream* in);

private:
    static ::java::lang::String* readRawString(RecordInputStream* in, int32_t textLength);
    static void processFontRuns(RecordInputStream* in, ::poi::hssf::usermodel::HSSFRichTextString* str, int32_t formattingRunDataLength);

public:
    int16_t getSid() override;

private:
    void serializeTXORecord(::poi::hssf::record::cont::ContinuableRecordOutput* out);
    void serializeTrailingRecords(::poi::hssf::record::cont::ContinuableRecordOutput* out);

public: /* protected */
    void serialize(::poi::hssf::record::cont::ContinuableRecordOutput* out) override;

private:
    int32_t getFormattingDataLength();
    static void writeFormatData(::poi::hssf::record::cont::ContinuableRecordOutput* out, ::poi::hssf::usermodel::HSSFRichTextString* str);

public:
    void setHorizontalTextAlignment(int32_t value);
    int32_t getHorizontalTextAlignment();
    void setVerticalTextAlignment(int32_t value);
    int32_t getVerticalTextAlignment();
    void setTextLocked(bool value);
    bool isTextLocked();
    int32_t getTextOrientation();
    void setTextOrientation(int32_t textOrientation);
    ::poi::hssf::usermodel::HSSFRichTextString* getStr();
    void setStr(::poi::hssf::usermodel::HSSFRichTextString* str);
    ::poi::ss::formula::ptg::Ptg* getLinkRefPtg();
    ::java::lang::String* toString() override;
    ::java::lang::Object* clone() override;

    // Generated
    TextObjectRecord();
    TextObjectRecord(RecordInputStream* in);
protected:
    TextObjectRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    ::int8_tArray* serialize();

private:
    static ::poi::util::BitField*& HorizontalTextAlignment();
    static ::poi::util::BitField*& VerticalTextAlignment();
    static ::poi::util::BitField*& textLocked();
    virtual ::java::lang::Class* getClass0();
};
