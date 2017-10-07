// Generated from /POI/java/org/apache/poi/ss/formula/ptg/NameXPxg.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/OperandPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/Pxg.hpp>

struct default_init_tag;

class org::apache::poi::ss::formula::ptg::NameXPxg final
    : public OperandPtg
    , public Pxg
{

public:
    typedef OperandPtg super;

private:
    int32_t externalWorkbookNumber {  };
    ::java::lang::String* sheetName {  };
    ::java::lang::String* nameName {  };
protected:
    void ctor(int32_t externalWorkbookNumber, ::java::lang::String* sheetName, ::java::lang::String* nameName);
    void ctor(::java::lang::String* sheetName, ::java::lang::String* nameName);
    void ctor(::java::lang::String* nameName);

public:
    ::java::lang::String* toString() override;
    int32_t getExternalWorkbookNumber() override;
    ::java::lang::String* getSheetName() override;
    ::java::lang::String* getNameName();
    void setSheetName(::java::lang::String* sheetName) override;
    ::java::lang::String* toFormulaString() override;
    int8_t getDefaultOperandClass() override;
    int32_t getSize() override;
    void write(::org::apache::poi::util::LittleEndianOutput* out) override;

    // Generated
    NameXPxg(int32_t externalWorkbookNumber, ::java::lang::String* sheetName, ::java::lang::String* nameName);
    NameXPxg(::java::lang::String* sheetName, ::java::lang::String* nameName);
    NameXPxg(::java::lang::String* nameName);
protected:
    NameXPxg(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    void init();
    virtual ::java::lang::Class* getClass0();
};
