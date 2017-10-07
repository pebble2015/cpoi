// Generated from /POI/java/org/apache/poi/ss/formula/ptg/Deleted3DPxg.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/OperandPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/Pxg.hpp>

struct default_init_tag;

class org::apache::poi::ss::formula::ptg::Deleted3DPxg final
    : public OperandPtg
    , public Pxg
{

public:
    typedef OperandPtg super;

private:
    int32_t externalWorkbookNumber {  };
    ::java::lang::String* sheetName {  };
protected:
    void ctor(int32_t externalWorkbookNumber, ::java::lang::String* sheetName);
    void ctor(::java::lang::String* sheetName);

public:
    ::java::lang::String* toString() override;
    int32_t getExternalWorkbookNumber() override;
    ::java::lang::String* getSheetName() override;
    void setSheetName(::java::lang::String* sheetName) override;
    ::java::lang::String* toFormulaString() override;
    int8_t getDefaultOperandClass() override;
    int32_t getSize() override;
    void write(::org::apache::poi::util::LittleEndianOutput* out) override;

    // Generated
    Deleted3DPxg(int32_t externalWorkbookNumber, ::java::lang::String* sheetName);
    Deleted3DPxg(::java::lang::String* sheetName);
protected:
    Deleted3DPxg(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    void init();
    virtual ::java::lang::Class* getClass0();
};
