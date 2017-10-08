// Generated from /POI/java/org/apache/poi/ss/formula/ptg/AreaI.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/ss/formula/ptg/AreaI.hpp>

struct default_init_tag;

class poi::ss::formula::ptg::AreaI_OffsetArea
    : public virtual ::java::lang::Object
    , public virtual AreaI
{

public:
    typedef ::java::lang::Object super;

private:
    int32_t _firstColumn {  };
    int32_t _firstRow {  };
    int32_t _lastColumn {  };
    int32_t _lastRow {  };
protected:
    void ctor(int32_t baseRow, int32_t baseColumn, int32_t relFirstRowIx, int32_t relLastRowIx, int32_t relFirstColIx, int32_t relLastColIx);

public:
    int32_t getFirstColumn() override;
    int32_t getFirstRow() override;
    int32_t getLastColumn() override;
    int32_t getLastRow() override;

    // Generated
    AreaI_OffsetArea(int32_t baseRow, int32_t baseColumn, int32_t relFirstRowIx, int32_t relLastRowIx, int32_t relFirstColIx, int32_t relLastColIx);
protected:
    AreaI_OffsetArea(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class AreaI;
};
