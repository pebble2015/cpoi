// Generated from /POI/java/org/apache/poi/ss/formula/ptg/AreaPtgBase.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/fwd-POI.hpp>
#include <org/apache/poi/ss/util/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/OperandPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/AreaI.hpp>

struct default_init_tag;

class org::apache::poi::ss::formula::ptg::AreaPtgBase
    : public OperandPtg
    , public virtual AreaI
{

public:
    typedef OperandPtg super;

public: /* protected */
    ::java::lang::RuntimeException* notImplemented();

private:
    int32_t field_1_first_row {  };
    int32_t field_2_last_row {  };
    int32_t field_3_first_column {  };
    int32_t field_4_last_column {  };
    static ::org::apache::poi::util::BitField* rowRelative_;
    static ::org::apache::poi::util::BitField* colRelative_;
    static ::org::apache::poi::util::BitField* columnMask_;
protected:
    void ctor();
    void ctor(::org::apache::poi::ss::util::AreaReference* ar);
    void ctor(int32_t firstRow, int32_t lastRow, int32_t firstColumn, int32_t lastColumn, bool firstRowRelative, bool lastRowRelative, bool firstColRelative, bool lastColRelative);

public:
    virtual void sortTopLeftToBottomRight();

public: /* protected */
    void readCoordinates(::org::apache::poi::util::LittleEndianInput* in);
    void writeCoordinates(::org::apache::poi::util::LittleEndianOutput* out);

public:
    int32_t getFirstRow() override;
    void setFirstRow(int32_t rowIx);
    int32_t getLastRow() override;
    void setLastRow(int32_t rowIx);
    int32_t getFirstColumn() override;
    int16_t getFirstColumnRaw();
    bool isFirstRowRelative();
    void setFirstRowRelative(bool rel);
    bool isFirstColRelative();
    void setFirstColRelative(bool rel);
    void setFirstColumn(int32_t colIx);
    void setFirstColumnRaw(int32_t column);
    int32_t getLastColumn() override;
    int16_t getLastColumnRaw();
    bool isLastRowRelative();
    void setLastRowRelative(bool rel);
    bool isLastColRelative();
    void setLastColRelative(bool rel);
    void setLastColumn(int32_t colIx);
    void setLastColumnRaw(int16_t column);

public: /* protected */
    ::java::lang::String* formatReferenceAsString();

public:
    ::java::lang::String* toFormulaString() override;
    int8_t getDefaultOperandClass() override;

    // Generated

public: /* protected */
    AreaPtgBase();
    AreaPtgBase(::org::apache::poi::ss::util::AreaReference* ar);
    AreaPtgBase(int32_t firstRow, int32_t lastRow, int32_t firstColumn, int32_t lastColumn, bool firstRowRelative, bool lastRowRelative, bool firstColRelative, bool lastColRelative);
protected:
    AreaPtgBase(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static ::org::apache::poi::util::BitField*& rowRelative();
    static ::org::apache::poi::util::BitField*& colRelative();
    static ::org::apache::poi::util::BitField*& columnMask();
    virtual ::java::lang::Class* getClass0();
};
