// Generated from /POI/java/org/apache/poi/hssf/util/CellReference.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/util/fwd-POI.hpp>
#include <org/apache/poi/ss/util/CellReference.hpp>

struct default_init_tag;

class poi::hssf::util::CellReference final
    : public ::poi::ss::util::CellReference
{

public:
    typedef ::poi::ss::util::CellReference super;
protected:
    void ctor(::java::lang::String* cellRef);
    void ctor(int32_t pRow, int32_t pCol);
    void ctor(int32_t pRow, int32_t pCol, bool pAbsRow, bool pAbsCol);
    void ctor(::java::lang::String* pSheetName, int32_t pRow, int32_t pCol, bool pAbsRow, bool pAbsCol);

    // Generated

public:
    CellReference(::java::lang::String* cellRef);
    CellReference(int32_t pRow, int32_t pCol);
    CellReference(int32_t pRow, int32_t pCol, bool pAbsRow, bool pAbsCol);
    CellReference(::java::lang::String* pSheetName, int32_t pRow, int32_t pCol, bool pAbsRow, bool pAbsCol);
protected:
    CellReference(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
