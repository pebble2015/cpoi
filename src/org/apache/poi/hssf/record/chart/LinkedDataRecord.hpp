// Generated from /POI/java/org/apache/poi/hssf/record/chart/LinkedDataRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/chart/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>
#include <java/lang/Cloneable.hpp>

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

class poi::hssf::record::chart::LinkedDataRecord final
    : public ::poi::hssf::record::StandardRecord
    , public ::java::lang::Cloneable
{

public:
    typedef ::poi::hssf::record::StandardRecord super;
    static constexpr int16_t sid { int16_t(4177) };

private:
    static ::poi::util::BitField* customNumberFormat_;
    int8_t field_1_linkType {  };

public:
    static constexpr int8_t LINK_TYPE_TITLE_OR_TEXT { int8_t(0) };
    static constexpr int8_t LINK_TYPE_VALUES { int8_t(1) };
    static constexpr int8_t LINK_TYPE_CATEGORIES { int8_t(2) };
    static constexpr int8_t LINK_TYPE_SECONDARY_CATEGORIES { int8_t(3) };

private:
    int8_t field_2_referenceType {  };

public:
    static constexpr int8_t REFERENCE_TYPE_DEFAULT_CATEGORIES { int8_t(0) };
    static constexpr int8_t REFERENCE_TYPE_DIRECT { int8_t(1) };
    static constexpr int8_t REFERENCE_TYPE_WORKSHEET { int8_t(2) };
    static constexpr int8_t REFERENCE_TYPE_NOT_USED { int8_t(3) };
    static constexpr int8_t REFERENCE_TYPE_ERROR_REPORTED { int8_t(4) };

private:
    int16_t field_3_options {  };
    int16_t field_4_indexNumberFmtRecord {  };
    ::poi::ss::formula::Formula* field_5_formulaOfLink {  };
protected:
    void ctor();
    void ctor(::poi::hssf::record::RecordInputStream* in);

public:
    ::java::lang::String* toString() override;
    void serialize(::poi::util::LittleEndianOutput* out) override;

public: /* protected */
    int32_t getDataSize() override;

public:
    int16_t getSid() override;
    LinkedDataRecord* clone() override;
    int8_t getLinkType();
    void setLinkType(int8_t field_1_linkType);
    int8_t getReferenceType();
    void setReferenceType(int8_t field_2_referenceType);
    int16_t getOptions();
    void setOptions(int16_t field_3_options);
    int16_t getIndexNumberFmtRecord();
    void setIndexNumberFmtRecord(int16_t field_4_indexNumberFmtRecord);
    ::poi::ss::formula::ptg::PtgArray* getFormulaOfLink();
    void setFormulaOfLink(::poi::ss::formula::ptg::PtgArray* ptgs);
    void setCustomNumberFormat(bool value);
    bool isCustomNumberFormat();

    // Generated
    LinkedDataRecord();
    LinkedDataRecord(::poi::hssf::record::RecordInputStream* in);
protected:
    LinkedDataRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    ::int8_tArray* serialize();

private:
    static ::poi::util::BitField*& customNumberFormat();
    virtual ::java::lang::Class* getClass0();
};
