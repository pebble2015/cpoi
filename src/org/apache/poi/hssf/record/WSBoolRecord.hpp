// Generated from /POI/java/org/apache/poi/hssf/record/WSBoolRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>

struct default_init_tag;

class poi::hssf::record::WSBoolRecord final
    : public StandardRecord
{

public:
    typedef StandardRecord super;
    static constexpr int16_t sid { int16_t(129) };

private:
    int8_t field_1_wsbool {  };
    int8_t field_2_wsbool {  };
    static ::poi::util::BitField* autobreaks_;
    static ::poi::util::BitField* dialog_;
    static ::poi::util::BitField* applystyles_;
    static ::poi::util::BitField* rowsumsbelow_;
    static ::poi::util::BitField* rowsumsright_;
    static ::poi::util::BitField* fittopage_;
    static ::poi::util::BitField* displayguts_;
    static ::poi::util::BitField* alternateexpression_;
    static ::poi::util::BitField* alternateformula_;
protected:
    void ctor();
    void ctor(RecordInputStream* in);

public:
    void setWSBool1(int8_t bool1);
    void setAutobreaks(bool ab);
    void setDialog(bool isDialog);
    void setRowSumsBelow(bool below);
    void setRowSumsRight(bool right);
    void setWSBool2(int8_t bool2);
    void setFitToPage(bool fit2page);
    void setDisplayGuts(bool guts);
    void setAlternateExpression(bool altexp);
    void setAlternateFormula(bool formula);
    int8_t getWSBool1();
    bool getAutobreaks();
    bool getDialog();
    bool getRowSumsBelow();
    bool getRowSumsRight();
    int8_t getWSBool2();
    bool getFitToPage();
    bool getDisplayGuts();
    bool getAlternateExpression();
    bool getAlternateFormula();
    ::java::lang::String* toString() override;
    void serialize(::poi::util::LittleEndianOutput* out) override;

public: /* protected */
    int32_t getDataSize() override;

public:
    int16_t getSid() override;
    ::java::lang::Object* clone() override;

    // Generated
    WSBoolRecord();
    WSBoolRecord(RecordInputStream* in);
protected:
    WSBoolRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    ::int8_tArray* serialize();

private:
    static ::poi::util::BitField*& autobreaks();
    static ::poi::util::BitField*& dialog();
    static ::poi::util::BitField*& applystyles();
    static ::poi::util::BitField*& rowsumsbelow();
    static ::poi::util::BitField*& rowsumsright();
    static ::poi::util::BitField*& fittopage();
    static ::poi::util::BitField*& displayguts();
    static ::poi::util::BitField*& alternateexpression();
    static ::poi::util::BitField*& alternateformula();
    virtual ::java::lang::Class* getClass0();
};
