// Generated from /POI/java/org/apache/poi/hssf/record/HyperlinkRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/ss/util/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>
#include <java/lang/Cloneable.hpp>

struct default_init_tag;

class org::apache::poi::hssf::record::HyperlinkRecord final
    : public StandardRecord
    , public ::java::lang::Cloneable
{

public:
    typedef StandardRecord super;
    static constexpr int16_t sid { int16_t(440) };

private:
    static ::org::apache::poi::util::POILogger* logger_;

public: /* package */
    static constexpr int32_t HLINK_URL { int32_t(1) };
    static constexpr int32_t HLINK_ABS { int32_t(2) };
    static constexpr int32_t HLINK_LABEL { int32_t(20) };
    static constexpr int32_t HLINK_PLACE { int32_t(8) };

private:
    static constexpr int32_t HLINK_TARGET_FRAME { int32_t(128) };
    static constexpr int32_t HLINK_UNC_PATH { int32_t(256) };
    static HyperlinkRecord_GUID* STD_MONIKER_;
    static HyperlinkRecord_GUID* URL_MONIKER_;
    static HyperlinkRecord_GUID* FILE_MONIKER_;
    static ::int8_tArray* URL_TAIL_;
    static ::int8_tArray* FILE_TAIL_;
    static int32_t TAIL_SIZE_;
    ::org::apache::poi::ss::util::CellRangeAddress* _range {  };
    HyperlinkRecord_GUID* _guid {  };
    int32_t _fileOpts {  };
    int32_t _linkOpts {  };
    ::java::lang::String* _label {  };
    ::java::lang::String* _targetFrame {  };
    HyperlinkRecord_GUID* _moniker {  };
    ::java::lang::String* _shortFilename {  };
    ::java::lang::String* _address {  };
    ::java::lang::String* _textMark {  };
    ::int8_tArray* _uninterpretedTail {  };
protected:
    void ctor();

public:
    int32_t getFirstColumn();
    void setFirstColumn(int32_t firstCol);
    int32_t getLastColumn();
    void setLastColumn(int32_t lastCol);
    int32_t getFirstRow();
    void setFirstRow(int32_t firstRow);
    int32_t getLastRow();
    void setLastRow(int32_t lastRow);

public: /* package */
    HyperlinkRecord_GUID* getGuid();
    HyperlinkRecord_GUID* getMoniker();

private:
    static ::java::lang::String* cleanString(::java::lang::String* s);
    static ::java::lang::String* appendNullTerm(::java::lang::String* s);

public:
    ::java::lang::String* getLabel();
    void setLabel(::java::lang::String* label);
    ::java::lang::String* getTargetFrame();
    ::java::lang::String* getAddress();
    void setAddress(::java::lang::String* address);
    ::java::lang::String* getShortFilename();
    void setShortFilename(::java::lang::String* shortFilename);
    ::java::lang::String* getTextMark();
    void setTextMark(::java::lang::String* textMark);

public: /* package */
    int32_t getLinkOptions();

public:
    int32_t getLabelOptions();
    int32_t getFileOptions();
protected:
    void ctor(RecordInputStream* in);

public:
    void serialize(::org::apache::poi::util::LittleEndianOutput* out) override;

public: /* protected */
    int32_t getDataSize() override;

private:
    static ::int8_tArray* readTail(::int8_tArray* expectedTail, ::org::apache::poi::util::LittleEndianInput* in);
    static void writeTail(::int8_tArray* tail, ::org::apache::poi::util::LittleEndianOutput* out);

public:
    int16_t getSid() override;
    ::java::lang::String* toString() override;
    bool isUrlLink();
    bool isFileLink();
    bool isDocumentLink();
    void newUrlLink();
    void newFileLink();
    void newDocumentLink();
    HyperlinkRecord* clone() override;

    // Generated
    HyperlinkRecord();
    HyperlinkRecord(RecordInputStream* in);
protected:
    HyperlinkRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    ::int8_tArray* serialize();

private:
    static ::org::apache::poi::util::POILogger*& logger();

public: /* package */
    static HyperlinkRecord_GUID*& STD_MONIKER();
    static HyperlinkRecord_GUID*& URL_MONIKER();
    static HyperlinkRecord_GUID*& FILE_MONIKER();

private:
    static ::int8_tArray*& URL_TAIL();
    static ::int8_tArray*& FILE_TAIL();
    static int32_t& TAIL_SIZE();
    virtual ::java::lang::Class* getClass0();
    friend class HyperlinkRecord_GUID;
};
