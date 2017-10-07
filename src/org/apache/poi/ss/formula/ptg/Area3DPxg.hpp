// Generated from /POI/java/org/apache/poi/ss/formula/ptg/Area3DPxg.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/fwd-POI.hpp>
#include <org/apache/poi/ss/util/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/AreaPtgBase.hpp>
#include <org/apache/poi/ss/formula/ptg/Pxg3D.hpp>

struct default_init_tag;

class org::apache::poi::ss::formula::ptg::Area3DPxg final
    : public AreaPtgBase
    , public Pxg3D
{

public:
    typedef AreaPtgBase super;

private:
    int32_t externalWorkbookNumber {  };
    ::java::lang::String* firstSheetName {  };
    ::java::lang::String* lastSheetName {  };
protected:
    void ctor(int32_t externalWorkbookNumber, ::org::apache::poi::ss::formula::SheetIdentifier* sheetName, ::java::lang::String* arearef);
    void ctor(int32_t externalWorkbookNumber, ::org::apache::poi::ss::formula::SheetIdentifier* sheetName, ::org::apache::poi::ss::util::AreaReference* arearef);
    void ctor(::org::apache::poi::ss::formula::SheetIdentifier* sheetName, ::java::lang::String* arearef);
    void ctor(::org::apache::poi::ss::formula::SheetIdentifier* sheetName, ::org::apache::poi::ss::util::AreaReference* arearef);

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
    void write(::org::apache::poi::util::LittleEndianOutput* out) override;

    // Generated
    Area3DPxg(int32_t externalWorkbookNumber, ::org::apache::poi::ss::formula::SheetIdentifier* sheetName, ::java::lang::String* arearef);
    Area3DPxg(int32_t externalWorkbookNumber, ::org::apache::poi::ss::formula::SheetIdentifier* sheetName, ::org::apache::poi::ss::util::AreaReference* arearef);
    Area3DPxg(::org::apache::poi::ss::formula::SheetIdentifier* sheetName, ::java::lang::String* arearef);
    Area3DPxg(::org::apache::poi::ss::formula::SheetIdentifier* sheetName, ::org::apache::poi::ss::util::AreaReference* arearef);
protected:
    Area3DPxg(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    void init();
    virtual ::java::lang::Class* getClass0();
};
