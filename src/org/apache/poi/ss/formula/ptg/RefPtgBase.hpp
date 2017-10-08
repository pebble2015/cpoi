// Generated from /POI/java/org/apache/poi/ss/formula/ptg/RefPtgBase.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/fwd-POI.hpp>
#include <org/apache/poi/ss/util/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/OperandPtg.hpp>

struct default_init_tag;

class poi::ss::formula::ptg::RefPtgBase
    : public OperandPtg
{

public:
    typedef OperandPtg super;

private:
    int32_t field_1_row {  };
    int32_t field_2_col {  };
    static ::poi::util::BitField* rowRelative_;
    static ::poi::util::BitField* colRelative_;
    static ::poi::util::BitField* column_;
protected:
    void ctor();
    void ctor(::poi::ss::util::CellReference* c);

public: /* protected */
    void readCoordinates(::poi::util::LittleEndianInput* in);
    void writeCoordinates(::poi::util::LittleEndianOutput* out);

public:
    void setRow(int32_t rowIndex);
    int32_t getRow();
    bool isRowRelative();
    void setRowRelative(bool rel);
    bool isColRelative();
    void setColRelative(bool rel);
    void setColumn(int32_t col);
    int32_t getColumn();

public: /* protected */
    ::java::lang::String* formatReferenceAsString();

public:
    int8_t getDefaultOperandClass() override;

    // Generated

public: /* protected */
    RefPtgBase();
    RefPtgBase(::poi::ss::util::CellReference* c);
protected:
    RefPtgBase(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static ::poi::util::BitField*& rowRelative();
    static ::poi::util::BitField*& colRelative();
    static ::poi::util::BitField*& column();
    virtual ::java::lang::Class* getClass0();
};
