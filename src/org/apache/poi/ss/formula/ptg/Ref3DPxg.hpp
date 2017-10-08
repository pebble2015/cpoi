// Generated from /POI/java/org/apache/poi/ss/formula/ptg/Ref3DPxg.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/fwd-POI.hpp>
#include <org/apache/poi/ss/util/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/RefPtgBase.hpp>
#include <org/apache/poi/ss/formula/ptg/Pxg3D.hpp>

struct default_init_tag;

class poi::ss::formula::ptg::Ref3DPxg final
    : public RefPtgBase
    , public Pxg3D
{

public:
    typedef RefPtgBase super;

private:
    int32_t externalWorkbookNumber {  };
    ::java::lang::String* firstSheetName {  };
    ::java::lang::String* lastSheetName {  };
protected:
    void ctor(int32_t externalWorkbookNumber, ::poi::ss::formula::SheetIdentifier* sheetName, ::java::lang::String* cellref);
    void ctor(int32_t externalWorkbookNumber, ::poi::ss::formula::SheetIdentifier* sheetName, ::poi::ss::util::CellReference* c);
    void ctor(::poi::ss::formula::SheetIdentifier* sheetName, ::java::lang::String* cellref);
    void ctor(::poi::ss::formula::SheetIdentifier* sheetName, ::poi::ss::util::CellReference* c);

public:
    ::java::lang::String* toString() override;
    int32_t getExternalWorkbookNumber() override;
    ::java::lang::String* getSheetName() override;
    ::java::lang::String* getLastSheetName() override;
    void setSheetName(::java::lang::String* sheetName) override;
    void setLastSheetName(::java::lang::String* sheetName) override;
    ::java::lang::String* format2DRefAsString();
    ::java::lang::String* toFormulaString() override;
    int32_t getSize() override;
    void write(::poi::util::LittleEndianOutput* out) override;

    // Generated
    Ref3DPxg(int32_t externalWorkbookNumber, ::poi::ss::formula::SheetIdentifier* sheetName, ::java::lang::String* cellref);
    Ref3DPxg(int32_t externalWorkbookNumber, ::poi::ss::formula::SheetIdentifier* sheetName, ::poi::ss::util::CellReference* c);
    Ref3DPxg(::poi::ss::formula::SheetIdentifier* sheetName, ::java::lang::String* cellref);
    Ref3DPxg(::poi::ss::formula::SheetIdentifier* sheetName, ::poi::ss::util::CellReference* c);
protected:
    Ref3DPxg(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    void init();
    virtual ::java::lang::Class* getClass0();
};
