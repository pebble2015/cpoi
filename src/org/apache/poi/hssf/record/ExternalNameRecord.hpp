// Generated from /POI/java/org/apache/poi/hssf/record/ExternalNameRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace poi
{
    namespace ss
    {
        namespace formula
        {
            namespace ptg
            {
typedef ::SubArray< ::poi::ss::formula::ptg::Ptg, ::java::lang::ObjectArray > PtgArray;
            } // ptg
        } // formula
    } // ss
} // poi

struct default_init_tag;

class poi::hssf::record::ExternalNameRecord final
    : public StandardRecord
{

public:
    typedef StandardRecord super;
    static constexpr int16_t sid { int16_t(35) };

private:
    static constexpr int32_t OPT_BUILTIN_NAME { int32_t(1) };
    static constexpr int32_t OPT_AUTOMATIC_LINK { int32_t(2) };
    static constexpr int32_t OPT_PICTURE_LINK { int32_t(4) };
    static constexpr int32_t OPT_STD_DOCUMENT_NAME { int32_t(8) };
    static constexpr int32_t OPT_OLE_LINK { int32_t(16) };
    static constexpr int32_t OPT_ICONIFIED_PICTURE_LINK { int32_t(32768) };
    int16_t field_1_option_flag {  };
    int16_t field_2_ixals {  };
    int16_t field_3_not_used {  };
    ::java::lang::String* field_4_name {  };
    ::poi::ss::formula::Formula* field_5_name_definition {  };
    ::java::lang::ObjectArray* _ddeValues {  };
    int32_t _nColumns {  };
    int32_t _nRows {  };

public:
    bool isBuiltInName();
    bool isAutomaticLink();
    bool isPicureLink();
    bool isStdDocumentNameIdentifier();
    bool isOLELink();
    bool isIconifiedPictureLink();
    ::java::lang::String* getText();
    void setText(::java::lang::String* str);
    int16_t getIx();
    void setIx(int16_t ix);
    ::poi::ss::formula::ptg::PtgArray* getParsedExpression();
    void setParsedExpression(::poi::ss::formula::ptg::PtgArray* ptgs);

public: /* protected */
    int32_t getDataSize() override;

public:
    void serialize(::poi::util::LittleEndianOutput* out) override;
protected:
    void ctor();
    void ctor(RecordInputStream* in);

public:
    int16_t getSid() override;
    ::java::lang::String* toString() override;

    // Generated
    ExternalNameRecord();
    ExternalNameRecord(RecordInputStream* in);
protected:
    ExternalNameRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    ::int8_tArray* serialize();

private:
    virtual ::java::lang::Class* getClass0();
};
